#include <stdio.h>

int main() {
    char choice;

    printf("Choose an option (A or B):\n");
    printf("A. Option 1\n");
    printf("B. Option 2\n");

    scanf(" %c", &choice); // Note the space before %c to consume any whitespace characters

    switch (choice) {
        case 'A':
        case 'a':
            printf("You selected Option 1.\n");
            break;
        case 'B':
        case 'b':
            printf("You selected Option 2.\n");
            break;
        default:
            printf("Invalid choice. Please choose either A or B.\n");
            break;
    }

    return 0;
}
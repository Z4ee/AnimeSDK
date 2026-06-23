#pragma once
#include "unitysdk/unitysdk.h"

inline static constexpr unsigned int Enum_3_46FE3E575CBDB25A_TypeDefinitionIndex = 54019;

enum class Enum_3_46FE3E575CBDB25A : ::System::UInt16
{
	SearchLeft = 0x4,
	Letter = 0x1,
	None = 0x0,
	LetterAndNumeric = 0x3,
	BreakAtSpace = 0x40,
	SearchRight = 0x8,
	SearchUntilNotSpace = 0x80,
	WordBreak = 0x100,
	SearchBoth = 0xC,
	Numeric = 0x2,
};

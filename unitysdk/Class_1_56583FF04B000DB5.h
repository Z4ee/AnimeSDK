#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/HollowChessboard/HollowCell.h"
#include "unitysdk/System/Object.h"

#define CLASS_1_56583FF04B000DB5_METHOD_1_944725D8BEE125D5_OFFSET UNITYSDK_OFFSET(0x15905D40)
#define CLASS_1_56583FF04B000DB5_METHOD_1_AF081070273CE162_OFFSET UNITYSDK_OFFSET(0x15905D20)
#define CLASS_1_56583FF04B000DB5__CTOR_OFFSET UNITYSDK_OFFSET(0x15905D10)

inline static constexpr unsigned int Class_1_56583FF04B000DB5_TypeDefinitionIndex = 41303;

class Class_1_56583FF04B000DB5 : public ::System::Object
{
public:
	::MoleMole::HollowChessboard::HollowCell Field_1_0; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_56583FF04B000DB5__CTOR_OFFSET))(this);
	}

	::MoleMole::HollowChessboard::HollowCell Method_1_AF081070273CE162()
	{
		return ((::MoleMole::HollowChessboard::HollowCell(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_56583FF04B000DB5_METHOD_1_AF081070273CE162_OFFSET))(this);
	}

	::System::Void Method_1_944725D8BEE125D5(::MoleMole::HollowChessboard::HollowCell a1)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::HollowChessboard::HollowCell))((::PBYTE)hIl2Cpp + CLASS_1_56583FF04B000DB5_METHOD_1_944725D8BEE125D5_OFFSET))(this, a1);
	}
};

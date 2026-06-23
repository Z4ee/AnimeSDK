#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/HollowChessboard/HollowCell.h"
#include "unitysdk/System/Object.h"

#define CLASS_1_065F1C4D9F2600E5_METHOD_1_248F2887B0C2212A_OFFSET UNITYSDK_OFFSET(0xF7EDEF0)
#define CLASS_1_065F1C4D9F2600E5_METHOD_1_944725D8BEE125D5_OFFSET UNITYSDK_OFFSET(0xF7EDEC0)
#define CLASS_1_065F1C4D9F2600E5_METHOD_1_AF081070273CE162_OFFSET UNITYSDK_OFFSET(0xF7EDED0)
#define CLASS_1_065F1C4D9F2600E5__CTOR_OFFSET UNITYSDK_OFFSET(0xF7EDEB0)

inline static constexpr unsigned int Class_1_065F1C4D9F2600E5_TypeDefinitionIndex = 78540;

class Class_1_065F1C4D9F2600E5 : public ::System::Object
{
public:
	::MoleMole::HollowChessboard::HollowCell Field_1_0; // 0x10

	::System::Void _ctor(::MoleMole::HollowChessboard::HollowCell a1)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::HollowChessboard::HollowCell))((::PBYTE)hIl2Cpp + CLASS_1_065F1C4D9F2600E5__CTOR_OFFSET))(this, a1);
	}

	::System::Void Method_1_944725D8BEE125D5(::MoleMole::HollowChessboard::HollowCell a1)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::HollowChessboard::HollowCell))((::PBYTE)hIl2Cpp + CLASS_1_065F1C4D9F2600E5_METHOD_1_944725D8BEE125D5_OFFSET))(this, a1);
	}

	::MoleMole::HollowChessboard::HollowCell Method_1_AF081070273CE162()
	{
		return ((::MoleMole::HollowChessboard::HollowCell(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_065F1C4D9F2600E5_METHOD_1_AF081070273CE162_OFFSET))(this);
	}

	::System::Void Method_1_248F2887B0C2212A(::MoleMole::HollowChessboard::HollowCell a1)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::HollowChessboard::HollowCell))((::PBYTE)hIl2Cpp + CLASS_1_065F1C4D9F2600E5_METHOD_1_248F2887B0C2212A_OFFSET))(this, a1);
	}
};

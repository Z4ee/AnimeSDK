#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_43BD383C98B4C0C5_67.h"
#include "unitysdk/MoleMole/HollowChessboard/HollowCell.h"
#include "unitysdk/Struct_2_6360A90B871D0DD8.h"

#define CLASS_2_C27AE6AE8D10EFDB__CTOR_OFFSET UNITYSDK_OFFSET(0xF7ED110)

inline static constexpr unsigned int Class_2_C27AE6AE8D10EFDB_TypeDefinitionIndex = 84964;

class Class_2_C27AE6AE8D10EFDB : public ::Class_1_43BD383C98B4C0C5_67
{
public:
	::Struct_2_6360A90B871D0DD8 Field_2_3; // 0x10
	::System::Boolean Field_2_2; // 0x20
	::System::Boolean Field_2_1; // 0x21
	::MoleMole::HollowChessboard::HollowCell Field_2_0; // 0x24

	::System::Void _ctor(::MoleMole::HollowChessboard::HollowCell a1)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::HollowChessboard::HollowCell))((::PBYTE)hIl2Cpp + CLASS_2_C27AE6AE8D10EFDB__CTOR_OFFSET))(this, a1);
	}
};

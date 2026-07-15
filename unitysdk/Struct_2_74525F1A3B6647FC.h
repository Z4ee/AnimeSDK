#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/MVector2.h"
#include "unitysdk/System/ValueType.h"

class Class_0_16E4307DCC419505_30;

#define STRUCT_2_74525F1A3B6647FC_METHOD_2_FF7B2911BBACA4A9_OFFSET UNITYSDK_OFFSET(0x38D1E60)

inline static constexpr unsigned int Struct_2_74525F1A3B6647FC_TypeDefinitionIndex = 35010;

struct alignas(8) Struct_2_74525F1A3B6647FC
{
	::RPG::MVector2 Field_2_0; // 0x10
	::RPG::MVector2 Field_2_1; // 0x18
	::RPG::MVector2 Field_2_2; // 0x20
	::System::Single Field_2_3; // 0x28
	::System::Boolean Field_2_4; // 0x2C
	::Class_0_16E4307DCC419505_30* Field_2_5; // 0x30

	::System::Single Method_2_FF7B2911BBACA4A9()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_74525F1A3B6647FC_METHOD_2_FF7B2911BBACA4A9_OFFSET))(this);
	}
};

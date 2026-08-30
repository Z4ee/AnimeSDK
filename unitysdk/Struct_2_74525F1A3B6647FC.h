#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/MVector2.h"
#include "unitysdk/System/ValueType.h"

class Class_0_16E4307DCC419505_30;

#define STRUCT_2_74525F1A3B6647FC_METHOD_2_FF7B2911BBACA4A9_OFFSET UNITYSDK_OFFSET(0x3A4C860)

inline static constexpr unsigned int Struct_2_74525F1A3B6647FC_TypeDefinitionIndex = 35871;

struct alignas(8) Struct_2_74525F1A3B6647FC
{
	::RPG::MVector2 NKDECDGECFL; // 0x10
	::RPG::MVector2 KCBPBMOJOKJ; // 0x18
	::RPG::MVector2 GNOKDJHJJAB; // 0x20
	::System::Single GMMMJOHCGBM; // 0x28
	::System::Boolean PHFKFBLIBKG; // 0x2C
	::Class_0_16E4307DCC419505_30* BPKOEGBKBJM; // 0x30

	::System::Single Method_2_FF7B2911BBACA4A9()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_74525F1A3B6647FC_METHOD_2_FF7B2911BBACA4A9_OFFSET))(this);
	}
};

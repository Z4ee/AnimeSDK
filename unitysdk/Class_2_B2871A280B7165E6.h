#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_43BD383C98B4C0C5_22.h"
#include "unitysdk/Share/GridDir.h"
#include "unitysdk/Struct_2_6360A90B871D0DD8.h"

#define CLASS_2_B2871A280B7165E6__CTOR_OFFSET UNITYSDK_OFFSET(0x175BA8C0)

inline static constexpr unsigned int Class_2_B2871A280B7165E6_TypeDefinitionIndex = 57940;

class Class_2_B2871A280B7165E6 : public ::Class_1_43BD383C98B4C0C5_22
{
public:
	::Share::GridDir Field_2_0; // 0x10
	::System::Boolean Field_2_2; // 0x14
	::System::Boolean Field_2_1; // 0x15
	::Struct_2_6360A90B871D0DD8 Field_2_3; // 0x18

	::System::Void _ctor(::Share::GridDir a1)
	{
		return ((::System::Void(*)(::PVOID, ::Share::GridDir))((::PBYTE)hIl2Cpp + CLASS_2_B2871A280B7165E6__CTOR_OFFSET))(this, a1);
	}
};

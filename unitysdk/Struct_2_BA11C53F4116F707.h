#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

#define STRUCT_2_BA11C53F4116F707_METHOD_2_E923266A4538CFD9_OFFSET UNITYSDK_OFFSET(0x20F2820)

inline static constexpr unsigned int Struct_2_BA11C53F4116F707_TypeDefinitionIndex = 8577;

struct alignas(4) Struct_2_BA11C53F4116F707
{
	::System::Single Field_2_0; // 0x10
	::System::Single Field_2_1; // 0x14
	::System::Single Field_2_2; // 0x18
	::System::Single Field_2_3; // 0x1C
	::System::Int32 Field_2_4; // 0x20

	::System::Single Method_2_E923266A4538CFD9(::System::Int32 a1)
	{
		return ((::System::Single(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + STRUCT_2_BA11C53F4116F707_METHOD_2_E923266A4538CFD9_OFFSET))(this, a1);
	}
};

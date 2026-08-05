#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

#define STRUCT_2_31CE9F74ED7EF316__CTOR_OFFSET UNITYSDK_OFFSET(0x4E4210)

inline static constexpr unsigned int Struct_2_31CE9F74ED7EF316_TypeDefinitionIndex = 41114;

struct alignas(4) Struct_2_31CE9F74ED7EF316
{
	::System::Single Field_2_1; // 0x10
	::System::Single Field_2_0; // 0x14

	::System::Void _ctor(::System::Single a1, ::System::Single a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + STRUCT_2_31CE9F74ED7EF316__CTOR_OFFSET))(this, a1, a2);
	}
};

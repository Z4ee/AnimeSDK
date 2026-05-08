#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

#define STRUCT_2_31CE9F74ED7EF316_1__CTOR_OFFSET UNITYSDK_OFFSET(0x43F560)

inline static constexpr unsigned int Struct_2_31CE9F74ED7EF316_1_TypeDefinitionIndex = 68123;

struct alignas(4) Struct_2_31CE9F74ED7EF316_1
{
	::System::Single Field_2_0; // 0x10
	::System::Single Field_2_1; // 0x14

	::System::Void _ctor(::System::Single a1, ::System::Single a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + STRUCT_2_31CE9F74ED7EF316_1__CTOR_OFFSET))(this, a1, a2);
	}
};

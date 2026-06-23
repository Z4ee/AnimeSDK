#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_91F5B5FCD8262EE8_Enum_3_A626A12B886B3470.h"
#include "unitysdk/System/ValueType.h"

#define STRUCT_2_76C3229DE35D7C55_METHOD_2_9CDF01028060AD77_OFFSET UNITYSDK_OFFSET(0x856920)
#define STRUCT_2_76C3229DE35D7C55__CTOR_OFFSET UNITYSDK_OFFSET(0x856900)

inline static constexpr unsigned int Struct_2_76C3229DE35D7C55_TypeDefinitionIndex = 80672;

struct alignas(4) Struct_2_76C3229DE35D7C55
{
	::System::Single Field_2_0; // 0x10
	::System::Single Field_2_1; // 0x14
	::System::Int32 Field_2_2; // 0x18
	::System::Boolean Field_2_3; // 0x1C
	::Class_1_91F5B5FCD8262EE8_Enum_3_A626A12B886B3470 Field_2_4; // 0x20

	::System::Void _ctor(::Class_1_91F5B5FCD8262EE8_Enum_3_A626A12B886B3470 a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_91F5B5FCD8262EE8_Enum_3_A626A12B886B3470))((::PBYTE)hIl2Cpp + STRUCT_2_76C3229DE35D7C55__CTOR_OFFSET))(this, a1);
	}

	::System::Void Method_2_9CDF01028060AD77(::System::Single a1, ::System::Single a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + STRUCT_2_76C3229DE35D7C55_METHOD_2_9CDF01028060AD77_OFFSET))(this, a1, a2);
	}
};

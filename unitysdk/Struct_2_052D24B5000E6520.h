#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_00B3BC5000A9A689.h"
#include "unitysdk/System/ValueType.h"

class Class_1_43BD383C98B4C0C5_13;

#define STRUCT_2_052D24B5000E6520__CTOR_OFFSET UNITYSDK_OFFSET(0x32D5A0)

inline static constexpr unsigned int Struct_2_052D24B5000E6520_TypeDefinitionIndex = 28884;

struct alignas(8) Struct_2_052D24B5000E6520
{
	::Class_1_43BD383C98B4C0C5_13* Field_2_0; // 0x10
	::Enum_3_00B3BC5000A9A689 Field_2_1; // 0x18

	::System::Void _ctor(::Class_1_43BD383C98B4C0C5_13* a1, ::Enum_3_00B3BC5000A9A689 a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_43BD383C98B4C0C5_13*, ::Enum_3_00B3BC5000A9A689))((::PBYTE)hIl2Cpp + STRUCT_2_052D24B5000E6520__CTOR_OFFSET))(this, a1, a2);
	}
};

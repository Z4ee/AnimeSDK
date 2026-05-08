#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_41BDD9D588006A51.h"
#include "unitysdk/System/ValueType.h"

#define STRUCT_2_013B83C8B1FC7527__CTOR_OFFSET UNITYSDK_OFFSET(0x70CB60)

inline static constexpr unsigned int Struct_2_013B83C8B1FC7527_TypeDefinitionIndex = 44234;

struct alignas(4) Struct_2_013B83C8B1FC7527
{
	::System::Int32 Field_2_0; // 0x10
	::Enum_3_41BDD9D588006A51 Field_2_1; // 0x14
	::System::Single Field_2_2; // 0x18

	::System::Void _ctor(::System::Int32 a1, ::Enum_3_41BDD9D588006A51 a2, ::System::Single a3)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::Enum_3_41BDD9D588006A51, ::System::Single))((::PBYTE)hIl2Cpp + STRUCT_2_013B83C8B1FC7527__CTOR_OFFSET))(this, a1, a2, a3);
	}
};

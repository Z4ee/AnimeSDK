#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

#define STRUCT_2_74D4AA39FC3B3039__CTOR_OFFSET UNITYSDK_OFFSET(0x7A58E0)

inline static constexpr unsigned int Struct_2_74D4AA39FC3B3039_TypeDefinitionIndex = 69885;

struct alignas(4) Struct_2_74D4AA39FC3B3039
{
	::System::UInt32 Field_2_2; // 0x10
	::System::UInt32 Field_2_1; // 0x14
	::System::Single Field_2_0; // 0x18

	::System::Void _ctor(::System::Single a1, ::System::UInt32 a2, ::System::UInt32 a3)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + STRUCT_2_74D4AA39FC3B3039__CTOR_OFFSET))(this, a1, a2, a3);
	}
};

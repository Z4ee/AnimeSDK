#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Struct_2_409E294815B4CE48.h"
#include "unitysdk/Struct_2_870A2C4023B05F0B.h"
#include "unitysdk/System/ValueType.h"

#define STRUCT_2_070A00258D76D4E3__CTOR_OFFSET UNITYSDK_OFFSET(0x88AF30)

inline static constexpr unsigned int Struct_2_070A00258D76D4E3_TypeDefinitionIndex = 46793;

struct alignas(4) Struct_2_070A00258D76D4E3
{
	::Struct_2_870A2C4023B05F0B Field_2_1; // 0x10
	::Struct_2_409E294815B4CE48 Field_2_0; // 0x28

	::System::Void _ctor(::Struct_2_870A2C4023B05F0B& a1, ::Struct_2_409E294815B4CE48& a2)
	{
		return ((::System::Void(*)(::PVOID, ::Struct_2_870A2C4023B05F0B&, ::Struct_2_409E294815B4CE48&))((::PBYTE)hIl2Cpp + STRUCT_2_070A00258D76D4E3__CTOR_OFFSET))(this, a1, a2);
	}
};

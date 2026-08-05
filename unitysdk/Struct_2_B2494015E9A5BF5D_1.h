#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_01F750E9A608BACD.h"
#include "unitysdk/System/ValueType.h"

#define STRUCT_2_B2494015E9A5BF5D_1__CTOR_OFFSET UNITYSDK_OFFSET(0x312BA0)

inline static constexpr unsigned int Struct_2_B2494015E9A5BF5D_1_TypeDefinitionIndex = 47343;

struct alignas(4) Struct_2_B2494015E9A5BF5D_1
{
	::Enum_3_01F750E9A608BACD Field_2_1; // 0x10
	::System::Int32 Field_2_0; // 0x14

	::System::Void _ctor(::Enum_3_01F750E9A608BACD a1, ::System::Int32 a2)
	{
		return ((::System::Void(*)(::PVOID, ::Enum_3_01F750E9A608BACD, ::System::Int32))((::PBYTE)hIl2Cpp + STRUCT_2_B2494015E9A5BF5D_1__CTOR_OFFSET))(this, a1, a2);
	}
};

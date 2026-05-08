#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

#define STRUCT_2_60DF562F175E001D_EQUALS_OFFSET UNITYSDK_OFFSET(0x746240)

inline static constexpr unsigned int Struct_2_60DF562F175E001D_TypeDefinitionIndex = 51770;

struct alignas(4) Struct_2_60DF562F175E001D
{
	::System::Int32 Field_2_0; // 0x10
	::System::Boolean Field_2_1; // 0x14

	::System::Boolean Equals(::Struct_2_60DF562F175E001D a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Struct_2_60DF562F175E001D))((::PBYTE)hIl2Cpp + STRUCT_2_60DF562F175E001D_EQUALS_OFFSET))(this, a1);
	}
};

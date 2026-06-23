#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_B009262C81039D6C.h"
#include "unitysdk/System/ValueType.h"

#define STRUCT_2_C2A8EAAA55542082__CTOR_OFFSET UNITYSDK_OFFSET(0x417DA0)

inline static constexpr unsigned int Struct_2_C2A8EAAA55542082_TypeDefinitionIndex = 46840;

struct alignas(1) Struct_2_C2A8EAAA55542082
{
	::System::Boolean Field_2_0; // 0x10
	::Enum_3_B009262C81039D6C Field_2_1; // 0x11

	::System::Void _ctor(::System::Boolean a1, ::Enum_3_B009262C81039D6C a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean, ::Enum_3_B009262C81039D6C))((::PBYTE)hIl2Cpp + STRUCT_2_C2A8EAAA55542082__CTOR_OFFSET))(this, a1, a2);
	}
};

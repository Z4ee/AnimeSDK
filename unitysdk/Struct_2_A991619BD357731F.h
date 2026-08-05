#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_96F6662CA3713095_10.h"
#include "unitysdk/System/ValueType.h"

namespace System { class Action; }

#define STRUCT_2_A991619BD357731F_METHOD_2_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x7F34F0)

inline static constexpr unsigned int Struct_2_A991619BD357731F_TypeDefinitionIndex = 60999;

struct alignas(8) Struct_2_A991619BD357731F
{
	::Enum_3_96F6662CA3713095_10 Field_2_1; // 0x10
	::System::Action* Field_2_0; // 0x18

	::System::Void Method_2_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_A991619BD357731F_METHOD_2_CA373AA1C7054598_OFFSET))(this);
	}
};

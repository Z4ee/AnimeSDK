#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_21DB873068860760.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/Vector3.h"

#define STRUCT_2_D5C89760A7E7ACB8_METHOD_2_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x7041D0)

inline static constexpr unsigned int Struct_2_D5C89760A7E7ACB8_TypeDefinitionIndex = 61265;

struct alignas(4) Struct_2_D5C89760A7E7ACB8
{
	::Enum_3_21DB873068860760 Field_2_0; // 0x10
	::System::Single Field_2_1; // 0x14
	::UnityEngine::Vector3 Field_2_2; // 0x18
	::UnityEngine::Vector3 Field_2_3; // 0x24

	::System::Void Method_2_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_D5C89760A7E7ACB8_METHOD_2_CA373AA1C7054598_OFFSET))(this);
	}
};

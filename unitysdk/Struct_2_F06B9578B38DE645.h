#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/Vector3.h"

#define STRUCT_2_F06B9578B38DE645_METHOD_2_4E8DF6F8A37B229A_OFFSET UNITYSDK_OFFSET(0x704010)
#define STRUCT_2_F06B9578B38DE645_METHOD_2_D37FAD0A6AA04B25_OFFSET UNITYSDK_OFFSET(0x3A5300)

inline static constexpr unsigned int Struct_2_F06B9578B38DE645_TypeDefinitionIndex = 46256;

struct alignas(4) Struct_2_F06B9578B38DE645
{
	::System::Single Field_2_0; // 0x10
	::UnityEngine::Vector3 Field_2_1; // 0x14

	::System::Void Method_2_4E8DF6F8A37B229A(::UnityEngine::Vector3 a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + STRUCT_2_F06B9578B38DE645_METHOD_2_4E8DF6F8A37B229A_OFFSET))(this, a1);
	}

	::UnityEngine::Vector3 Method_2_D37FAD0A6AA04B25()
	{
		return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_F06B9578B38DE645_METHOD_2_D37FAD0A6AA04B25_OFFSET))(this);
	}
};

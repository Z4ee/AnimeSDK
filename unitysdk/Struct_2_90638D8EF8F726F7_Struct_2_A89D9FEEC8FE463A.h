#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/Vector3.h"

#define STRUCT_2_90638D8EF8F726F7_STRUCT_2_A89D9FEEC8FE463A_METHOD_2_D37FAD0A6AA04B25_OFFSET UNITYSDK_OFFSET(0x84DEB0)
#define STRUCT_2_90638D8EF8F726F7_STRUCT_2_A89D9FEEC8FE463A__CTOR_1_OFFSET UNITYSDK_OFFSET(0x84DDE0)
#define STRUCT_2_90638D8EF8F726F7_STRUCT_2_A89D9FEEC8FE463A__CTOR_OFFSET UNITYSDK_OFFSET(0x460B80)

inline static constexpr unsigned int Struct_2_90638D8EF8F726F7_Struct_2_A89D9FEEC8FE463A_TypeDefinitionIndex = 49615;

struct alignas(4) Struct_2_90638D8EF8F726F7_Struct_2_A89D9FEEC8FE463A
{
	::UnityEngine::Vector3 Field_2_0; // 0x10
	::System::Single Field_2_1; // 0x1C

	::System::Void _ctor(::UnityEngine::Vector3 a1, ::System::Single a2)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3, ::System::Single))((::PBYTE)hIl2Cpp + STRUCT_2_90638D8EF8F726F7_STRUCT_2_A89D9FEEC8FE463A__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void _ctor_1(::UnityEngine::Vector3 a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + STRUCT_2_90638D8EF8F726F7_STRUCT_2_A89D9FEEC8FE463A__CTOR_1_OFFSET))(this, a1);
	}

	::UnityEngine::Vector3 Method_2_D37FAD0A6AA04B25()
	{
		return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_90638D8EF8F726F7_STRUCT_2_A89D9FEEC8FE463A_METHOD_2_D37FAD0A6AA04B25_OFFSET))(this);
	}
};

#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/Vector3.h"

#define STRUCT_2_5DE58B5D0F3F645D_1__CTOR_OFFSET UNITYSDK_OFFSET(0x79820)

inline static constexpr unsigned int Struct_2_5DE58B5D0F3F645D_1_TypeDefinitionIndex = 58241;

struct alignas(4) Struct_2_5DE58B5D0F3F645D_1
{
	::UnityEngine::Vector3 Field_2_0; // 0x10

	::System::Void _ctor(::UnityEngine::Vector3 a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + STRUCT_2_5DE58B5D0F3F645D_1__CTOR_OFFSET))(this, a1);
	}
};

#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/Vector3.h"

#define STRUCT_2_5DE58B5D0F3F645D__CTOR_OFFSET UNITYSDK_OFFSET(0x21254D0)

inline static constexpr unsigned int Struct_2_5DE58B5D0F3F645D_TypeDefinitionIndex = 57944;

struct alignas(4) Struct_2_5DE58B5D0F3F645D
{
	::UnityEngine::Vector3 IKINMNCCKJI; // 0x10

	::System::Void _ctor(::UnityEngine::Vector3 a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + STRUCT_2_5DE58B5D0F3F645D__CTOR_OFFSET))(this, a1);
	}
};

#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/Vector2.h"

#define STRUCT_2_D35A83CFEBC4DDA6__CTOR_OFFSET UNITYSDK_OFFSET(0x7DBF0)

inline static constexpr unsigned int Struct_2_D35A83CFEBC4DDA6_TypeDefinitionIndex = 65003;

struct alignas(4) Struct_2_D35A83CFEBC4DDA6
{
	::System::Single Field_2_0; // 0x10
	::UnityEngine::Vector2 Field_2_1; // 0x14

	::System::Void _ctor(::System::Single a1, ::UnityEngine::Vector2 a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + STRUCT_2_D35A83CFEBC4DDA6__CTOR_OFFSET))(this, a1, a2);
	}
};

#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/Vector2.h"

#define STRUCT_2_D35A83CFEBC4DDA6__CTOR_OFFSET UNITYSDK_OFFSET(0x3DD440)

inline static constexpr unsigned int Struct_2_D35A83CFEBC4DDA6_TypeDefinitionIndex = 84302;

struct alignas(4) Struct_2_D35A83CFEBC4DDA6
{
	::UnityEngine::Vector2 Field_2_0; // 0x10
	::System::Single Field_2_1; // 0x18

	::System::Void _ctor(::UnityEngine::Vector2 a1, ::System::Single a2)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector2, ::System::Single))((::PBYTE)hIl2Cpp + STRUCT_2_D35A83CFEBC4DDA6__CTOR_OFFSET))(this, a1, a2);
	}
};

#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace MoleMole
{
	inline static constexpr unsigned int MonoUIGameObjectNumber_SpecOffsetConfig_TypeDefinitionIndex = 81317;

	struct alignas(4) MonoUIGameObjectNumber_SpecOffsetConfig
	{
		::UnityEngine::Vector3 L; // 0x10
		::UnityEngine::Vector3 R; // 0x1C
	};
}

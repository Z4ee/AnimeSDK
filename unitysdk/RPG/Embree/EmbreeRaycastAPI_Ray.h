#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace RPG::Embree
{
	inline static constexpr unsigned int EmbreeRaycastAPI_Ray_TypeDefinitionIndex = 45238;

	struct alignas(4) EmbreeRaycastAPI_Ray
	{
		::UnityEngine::Vector3 origin; // 0x10
		::UnityEngine::Vector3 direction; // 0x1C
		::System::Single maxDistance; // 0x28
	};
}

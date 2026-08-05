#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace NPCCrowd::Accessories
{
	inline static constexpr unsigned int FTransformConfig_TypeDefinitionIndex = 68812;

	struct alignas(4) FTransformConfig
	{
		::UnityEngine::Vector3 position; // 0x10
		::UnityEngine::Quaternion rotation; // 0x1C
		::UnityEngine::Vector3 scale; // 0x2C
		::System::Single dampingSmooths; // 0x38
	};
}

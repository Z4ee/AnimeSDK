#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace RPG::Client
{
	inline static constexpr unsigned int LookAtExtraConfig_TypeDefinitionIndex = 65271;

	struct alignas(4) LookAtExtraConfig
	{
		::UnityEngine::Vector3 FollowOffsetDetect; // 0x10
		::UnityEngine::Vector3 FollowOffset; // 0x1C
		::UnityEngine::Vector3 TrackedObjectOffset; // 0x28
	};
}

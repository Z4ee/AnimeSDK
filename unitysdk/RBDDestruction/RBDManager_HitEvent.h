#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace RBDDestruction
{
	inline static constexpr unsigned int RBDManager_HitEvent_TypeDefinitionIndex = 27076;

	struct alignas(4) RBDManager_HitEvent
	{
		::System::Int32 collectionID; // 0x10
		::UnityEngine::Vector3 position; // 0x14
		::UnityEngine::Vector3 direction; // 0x20
	};
}

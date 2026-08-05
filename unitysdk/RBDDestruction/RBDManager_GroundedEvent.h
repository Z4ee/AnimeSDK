#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace RBDDestruction
{
	inline static constexpr unsigned int RBDManager_GroundedEvent_TypeDefinitionIndex = 27073;

	struct alignas(4) RBDManager_GroundedEvent
	{
		::System::Int32 collectionID; // 0x10
		::UnityEngine::Vector3 position; // 0x14
		::System::Single mass; // 0x20
	};
}

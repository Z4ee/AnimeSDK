#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace RBDDestruction
{
	inline static constexpr unsigned int RBDManager_DestroyEvent_TypeDefinitionIndex = 27134;

	struct alignas(4) RBDManager_DestroyEvent
	{
		::System::Int32 collectionID; // 0x10
		::UnityEngine::Vector3 position; // 0x14
	};
}

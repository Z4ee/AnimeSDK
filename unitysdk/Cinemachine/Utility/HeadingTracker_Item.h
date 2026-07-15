#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace Cinemachine::Utility
{
	inline static constexpr unsigned int HeadingTracker_Item_TypeDefinitionIndex = 37739;

	struct alignas(4) HeadingTracker_Item
	{
		::UnityEngine::Vector3 velocity; // 0x10
		::System::Single weight; // 0x1C
		::System::Single time; // 0x20
	};
}

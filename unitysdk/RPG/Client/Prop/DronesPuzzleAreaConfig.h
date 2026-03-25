#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace UnityEngine { class Transform; }

namespace RPG::Client::Prop
{
	inline static constexpr unsigned int DronesPuzzleAreaConfig_TypeDefinitionIndex = 64018;

	struct alignas(8) DronesPuzzleAreaConfig
	{
		::UnityEngine::Transform* anchor; // 0x10
		::UnityEngine::Vector3 center; // 0x18
		::System::Single radius; // 0x24
		::System::Single height; // 0x28
	};
}

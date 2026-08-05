#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace NPCCrowd::Ability
{
	inline static constexpr unsigned int FNPCAbilityGhostLocationFragment_TypeDefinitionIndex = 65151;

	struct alignas(4) FNPCAbilityGhostLocationFragment
	{
		::System::UInt16 LastSeenActionID; // 0x10
		::UnityEngine::Vector3 Location; // 0x14
		::UnityEngine::Vector3 Velocity; // 0x20
	};
}

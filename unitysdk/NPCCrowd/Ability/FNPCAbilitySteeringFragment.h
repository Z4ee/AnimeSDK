#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/Vector3.h"

#define NPCCROWD_ABILITY_FNPCABILITYSTEERINGFRAGMENT_RESET_OFFSET UNITYSDK_OFFSET(0x6B3020)

namespace NPCCrowd::Ability
{
	inline static constexpr unsigned int FNPCAbilitySteeringFragment_TypeDefinitionIndex = 79218;

	struct alignas(4) FNPCAbilitySteeringFragment
	{
		::UnityEngine::Vector3 DesiredVelocity; // 0x10

		::System::Void Reset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_FNPCABILITYSTEERINGFRAGMENT_RESET_OFFSET))(this);
		}
	};
}

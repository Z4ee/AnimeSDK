#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define NPCCROWD_ABILITY_NPCABILITYMOVINGSTEERINGCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0xCD2D420)

namespace NPCCrowd::Ability
{
	inline static constexpr unsigned int NPCAbilityMovingSteeringConfig_TypeDefinitionIndex = 42419;

	class NPCAbilityMovingSteeringConfig : public ::System::Object
	{
	public:
		::System::Single ReactionTime; // 0x10
		::System::Single LookAheadTime; // 0x14

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_NPCABILITYMOVINGSTEERINGCONFIG__CTOR_OFFSET))(this);
		}
	};
}

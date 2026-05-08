#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define NPCCROWD_ABILITY_NPCABILITYMOVESTEERINGPARAMETERS__CTOR_OFFSET UNITYSDK_OFFSET(0xD23C8D0)

namespace NPCCrowd::Ability
{
	inline static constexpr unsigned int NPCAbilityMoveSteeringParameters_TypeDefinitionIndex = 78640;

	class NPCAbilityMoveSteeringParameters : public ::System::Object
	{
	public:
		::System::Single ReactionTime; // 0x10
		::System::Single LookAheadTime; // 0x14

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_NPCABILITYMOVESTEERINGPARAMETERS__CTOR_OFFSET))(this);
		}
	};
}

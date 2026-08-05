#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/NPCCrowd/Ability/NPCAbilityBehavioursDefine.h"
#include "unitysdk/System/Object.h"

namespace NPCCrowd::Ability { class NPCAbilityDitherParameters; }
namespace NPCCrowd::Ability { class NPCAbilityMoveSteeringParameters; }
namespace NPCCrowd::Ability { class NPCAbilityMovementParameters; }
namespace NPCCrowd::Ability { class NPCAbilitySmoothOrientationParameters; }
namespace NPCCrowd::Ability { class NPCAbilityStandingSteeringParameters; }
namespace NPCCrowd::Ability { class NPCAgentParameters; }

#define NPCCROWD_ABILITY_NPCABILITYPARAMETERS_REFRESH_OFFSET UNITYSDK_OFFSET(0xE558FF0)
#define NPCCROWD_ABILITY_NPCABILITYPARAMETERS__CTOR_OFFSET UNITYSDK_OFFSET(0xE559040)

namespace NPCCrowd::Ability
{
	inline static constexpr unsigned int NPCAbilityParameters_TypeDefinitionIndex = 49118;

	class NPCAbilityParameters : public ::System::Object
	{
	public:
		::NPCCrowd::Ability::NPCAgentParameters* agent; // 0x10
		::NPCCrowd::Ability::NPCAbilityMovementParameters* movement; // 0x18
		::NPCCrowd::Ability::NPCAbilityMoveSteeringParameters* moveSteering; // 0x20
		::NPCCrowd::Ability::NPCAbilityStandingSteeringParameters* standingSteering; // 0x28
		::NPCCrowd::Ability::NPCAbilitySmoothOrientationParameters* orientationParams; // 0x30
		::NPCCrowd::Ability::NPCAbilityBehavioursDefine behavioursParams; // 0x38
		::NPCCrowd::Ability::NPCAbilityDitherParameters* ditherParams; // 0x68

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_NPCABILITYPARAMETERS__CTOR_OFFSET))(this);
		}

		::System::Void Refresh()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_NPCABILITYPARAMETERS_REFRESH_OFFSET))(this);
		}
	};
}

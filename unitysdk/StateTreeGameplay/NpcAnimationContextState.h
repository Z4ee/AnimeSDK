#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/StateTreeGameplay/ContextTrigger.h"
#include "unitysdk/System/ValueType.h"

namespace NPCCrowd::Ability { class NPCAbility; }

#define STATETREEGAMEPLAY_NPCANIMATIONCONTEXTSTATE_FLUSHSTARTPLAY_OFFSET UNITYSDK_OFFSET(0x96B010)
#define STATETREEGAMEPLAY_NPCANIMATIONCONTEXTSTATE_TRIGGERPLAYANIMATION_OFFSET UNITYSDK_OFFSET(0x96AFB0)

namespace StateTreeGameplay
{
	inline static constexpr unsigned int NpcAnimationContextState_TypeDefinitionIndex = 47161;

	struct alignas(4) NpcAnimationContextState
	{
		::System::Boolean IsPlaying; // 0x10
		::StateTreeGameplay::ContextTrigger StartTrigger; // 0x11
		::System::Int32 AnimationID; // 0x14

		::System::Boolean TriggerPlayAnimation(::System::Int32 animationID)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + STATETREEGAMEPLAY_NPCANIMATIONCONTEXTSTATE_TRIGGERPLAYANIMATION_OFFSET))(this, animationID);
		}

		::System::Void FlushStartPlay(::NPCCrowd::Ability::NPCAbility* ability, ::System::UInt32 entityID)
		{
			return ((::System::Void(*)(::PVOID, ::NPCCrowd::Ability::NPCAbility*, ::System::UInt32))((::PBYTE)hIl2Cpp + STATETREEGAMEPLAY_NPCANIMATIONCONTEXTSTATE_FLUSHSTARTPLAY_OFFSET))(this, ability, entityID);
		}
	};
}

#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/StateTreeGameplay/ContextTrigger.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace NPCCrowd::Ability { class NPCAbility; }

#define STATETREEGAMEPLAY_NPCMOVEMENTCONTEXTSTATE_FLUSHSTARTMOVE_OFFSET UNITYSDK_OFFSET(0x7CE0E0)
#define STATETREEGAMEPLAY_NPCMOVEMENTCONTEXTSTATE_TRIGGERSTARTMOVE_OFFSET UNITYSDK_OFFSET(0x7CE050)

namespace StateTreeGameplay
{
	inline static constexpr unsigned int NpcMovementContextState_TypeDefinitionIndex = 44019;

	struct alignas(4) NpcMovementContextState
	{
		::System::Boolean IsMoving; // 0x10
		::StateTreeGameplay::ContextTrigger StartTrigger; // 0x11
		::UnityEngine::Vector3 TargetPosition; // 0x14

		::System::Boolean TriggerStartMove(::UnityEngine::Vector3 targetPosition)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + STATETREEGAMEPLAY_NPCMOVEMENTCONTEXTSTATE_TRIGGERSTARTMOVE_OFFSET))(this, targetPosition);
		}

		::System::Void FlushStartMove(::NPCCrowd::Ability::NPCAbility* ability)
		{
			return ((::System::Void(*)(::PVOID, ::NPCCrowd::Ability::NPCAbility*))((::PBYTE)hIl2Cpp + STATETREEGAMEPLAY_NPCMOVEMENTCONTEXTSTATE_FLUSHSTARTMOVE_OFFSET))(this, ability);
		}
	};
}

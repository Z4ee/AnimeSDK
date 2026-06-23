#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/StateTreeGameplay/ContextTrigger.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/Vector3.h"

#define STATETREEGAMEPLAY_MOVEMENTSTATE_MOVETO_OFFSET UNITYSDK_OFFSET(0x9AE730)

namespace StateTreeGameplay
{
	inline static constexpr unsigned int MovementState_TypeDefinitionIndex = 80273;

	struct alignas(4) MovementState
	{
		::System::Boolean IsMoving; // 0x10
		::StateTreeGameplay::ContextTrigger StartTrigger; // 0x11
		::UnityEngine::Vector3 Position; // 0x14

		::System::Boolean MoveTo(::UnityEngine::Vector3 position)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + STATETREEGAMEPLAY_MOVEMENTSTATE_MOVETO_OFFSET))(this, position);
		}
	};
}

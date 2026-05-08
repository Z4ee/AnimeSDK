#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Playables/PlayableBehaviour.h"

#define MOLEMOLE_TIMELINE_PLAYSPEEDBEHAVIOUR__CTOR_OFFSET UNITYSDK_OFFSET(0x10E563A0)

namespace MoleMole::Timeline
{
	inline static constexpr unsigned int PlaySpeedBehaviour_TypeDefinitionIndex = 67143;

	class PlaySpeedBehaviour : public ::UnityEngine::Playables::PlayableBehaviour
	{
	public:
		::System::Single Speed; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_PLAYSPEEDBEHAVIOUR__CTOR_OFFSET))(this);
		}
	};
}

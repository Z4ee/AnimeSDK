#pragma once
#include "unitysdk/unitysdk.h"

namespace Foundation::ViewObject
{
	inline static constexpr unsigned int EViewObjectComponentCustomEvent_TypeDefinitionIndex = 49021;

	enum class EViewObjectComponentCustomEvent : ::System::Int32
	{
		None = 0,
		OnUpdateSuite = 2,
		OnVoTriggerEnter = 5,
		OnControllablePossessed = 3,
		OnGroupMemberActiveStateChanged = 1,
		OnControllableUnpossessed = 4,
		OnGameplayTagChange = 8,
		OnVoTriggerStopListening = 7,
		OnVoTriggerExit = 6,
	};
}

#pragma once
#include "unitysdk/unitysdk.h"

namespace Foundation::ViewObject
{
	inline static constexpr unsigned int EViewObjectComponentCustomEvent_TypeDefinitionIndex = 48704;

	enum class EViewObjectComponentCustomEvent : ::System::Int32
	{
		OnUpdateSuite = 2,
		OnVoTriggerStopListening = 7,
		None = 0,
		OnControllableUnpossessed = 4,
		OnControllablePossessed = 3,
		OnVoTriggerExit = 6,
		OnVoTriggerEnter = 5,
		OnGroupMemberActiveStateChanged = 1,
	};
}

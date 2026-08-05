#pragma once
#include "unitysdk/unitysdk.h"

namespace Share
{
	inline static constexpr unsigned int ETriggerBoxInteraction_TypeDefinitionIndex = 14105;

	enum class ETriggerBoxInteraction : ::System::Int16
	{
		EnumCount = 5,
		OnAddInteract = 3,
		OnExit = 2,
		OnEnter = 0,
		OnUpdate = 1,
		OnRemoveInteract = 4,
	};
}

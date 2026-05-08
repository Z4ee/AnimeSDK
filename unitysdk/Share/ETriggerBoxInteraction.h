#pragma once
#include "unitysdk/unitysdk.h"

namespace Share
{
	inline static constexpr unsigned int ETriggerBoxInteraction_TypeDefinitionIndex = 15250;

	enum class ETriggerBoxInteraction : ::System::Int16
	{
		OnUpdate = 1,
		OnRemoveInteract = 4,
		OnExit = 2,
		OnAddInteract = 3,
		OnEnter = 0,
		EnumCount = 5,
	};
}

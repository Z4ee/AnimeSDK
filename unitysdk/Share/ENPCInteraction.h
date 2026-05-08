#pragma once
#include "unitysdk/unitysdk.h"

namespace Share
{
	inline static constexpr unsigned int ENPCInteraction_TypeDefinitionIndex = 18320;

	enum class ENPCInteraction : ::System::Int16
	{
		OnAddInteract = 3,
		OnInteract = 2,
		EnumCount = 5,
		OnEnd = 1,
		OnRemoveInteract = 4,
		OnStart = 0,
	};
}

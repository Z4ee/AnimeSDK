#pragma once
#include "unitysdk/unitysdk.h"

namespace Share
{
	inline static constexpr unsigned int ENPCInteraction_TypeDefinitionIndex = 16696;

	enum class ENPCInteraction : ::System::Int16
	{
		OnStart = 0,
		OnEnd = 1,
		OnInteract = 2,
		EnumCount = 5,
		OnAddInteract = 3,
		OnRemoveInteract = 4,
	};
}

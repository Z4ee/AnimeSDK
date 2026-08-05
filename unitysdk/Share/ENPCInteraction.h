#pragma once
#include "unitysdk/unitysdk.h"

namespace Share
{
	inline static constexpr unsigned int ENPCInteraction_TypeDefinitionIndex = 9972;

	enum class ENPCInteraction : ::System::Int16
	{
		OnStart = 0,
		OnAddInteract = 3,
		OnInteract = 2,
		OnEnd = 1,
		EnumCount = 5,
		OnRemoveInteract = 4,
	};
}

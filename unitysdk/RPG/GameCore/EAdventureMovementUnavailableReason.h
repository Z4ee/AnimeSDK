#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	inline static constexpr unsigned int EAdventureMovementUnavailableReason_TypeDefinitionIndex = 52624;

	enum class EAdventureMovementUnavailableReason : ::System::Int32
	{
		Default = 0,
		UnloadScene = 1,
	};
}

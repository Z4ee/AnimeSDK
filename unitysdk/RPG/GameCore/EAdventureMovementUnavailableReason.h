#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	inline static constexpr unsigned int EAdventureMovementUnavailableReason_TypeDefinitionIndex = 53324;

	enum class EAdventureMovementUnavailableReason : ::System::Int32
	{
		Default = 0,
		UnloadScene = 1,
	};
}

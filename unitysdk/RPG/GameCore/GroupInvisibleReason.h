#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	inline static constexpr unsigned int GroupInvisibleReason_TypeDefinitionIndex = 52611;

	enum class GroupInvisibleReason : ::System::Int32
	{
		GameplayLock = 1,
		EraRegionState = 2,
		FiveDimGame = 3,
	};
}

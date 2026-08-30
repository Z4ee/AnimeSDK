#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	inline static constexpr unsigned int TeamTowersLevelGameMode_TypeDefinitionIndex = 18724;

	enum class TeamTowersLevelGameMode : ::System::Byte
	{
		Default = 0x0,
		Race = 0x1,
		Infinite = 0x2,
	};
}

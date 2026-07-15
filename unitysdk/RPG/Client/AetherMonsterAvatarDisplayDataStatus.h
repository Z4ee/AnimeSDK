#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::Client
{
	inline static constexpr unsigned int AetherMonsterAvatarDisplayDataStatus_TypeDefinitionIndex = 59468;

	enum class AetherMonsterAvatarDisplayDataStatus : ::System::Int32
	{
		Forbidden = 0,
		Locked = 1,
		Unlocked = 2,
	};
}

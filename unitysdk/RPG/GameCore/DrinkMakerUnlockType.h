#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	inline static constexpr unsigned int DrinkMakerUnlockType_TypeDefinitionIndex = 12659;

	enum class DrinkMakerUnlockType : ::System::Int32
	{
		None = 0,
		Level = 1,
		SubMission = 2,
	};
}

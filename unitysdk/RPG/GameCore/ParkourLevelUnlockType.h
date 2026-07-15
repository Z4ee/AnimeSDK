#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	inline static constexpr unsigned int ParkourLevelUnlockType_TypeDefinitionIndex = 11623;

	enum class ParkourLevelUnlockType : ::System::Int32
	{
		None = 0,
		FinishSubMission = 1,
		FinishLevel = 2,
	};
}

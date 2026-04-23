#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	inline static constexpr unsigned int CakeRaceUnlockConditionType_TypeDefinitionIndex = 10506;

	enum class CakeRaceUnlockConditionType : ::System::Int32
	{
		None = 0,
		FinishSubMission = 1,
		FinishField = 2,
	};
}

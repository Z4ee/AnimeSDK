#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	inline static constexpr unsigned int DrinkMakerFormulaUnlockType_TypeDefinitionIndex = 12689;

	enum class DrinkMakerFormulaUnlockType : ::System::Int32
	{
		PlayerLevel = 1,
		FinishSubMission = 2,
	};
}

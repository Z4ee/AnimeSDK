#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	inline static constexpr unsigned int LevelVOType_TypeDefinitionIndex = 17559;

	enum class LevelVOType : ::System::Int32
	{
		Unknow = 0,
		EnterBattle = 1,
		EncounterHighRisk = 25,
		EncounterLowRisk = 26,
	};
}

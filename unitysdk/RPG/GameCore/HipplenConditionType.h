#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	inline static constexpr unsigned int HipplenConditionType_TypeDefinitionIndex = 11214;

	enum class HipplenConditionType : ::System::Int32
	{
		None = 0,
		WorkList = 1,
		AgendaFirstWork = 2,
		CycleList = 3,
		CycleTrialGrade = 4,
		StatGrade = 5,
		WorkType = 6,
		MiniGameList = 7,
		StatValue = 8,
	};
}

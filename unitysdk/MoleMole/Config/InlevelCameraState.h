#pragma once
#include "unitysdk/unitysdk.h"

namespace MoleMole::Config
{
	inline static constexpr unsigned int InlevelCameraState_TypeDefinitionIndex = 50635;

	enum class InlevelCameraState : ::System::Int32
	{
		Fighting = 1,
		MainCityNormal = 6,
		MainCityIndoor = 7,
		FightingLevel2 = 3,
		Normal = 0,
		Observe = 5,
		Custom = 2,
		FightingLevel3 = 4,
	};
}

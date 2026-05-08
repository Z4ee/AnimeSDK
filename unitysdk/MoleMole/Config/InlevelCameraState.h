#pragma once
#include "unitysdk/unitysdk.h"

namespace MoleMole::Config
{
	inline static constexpr unsigned int InlevelCameraState_TypeDefinitionIndex = 68640;

	enum class InlevelCameraState : ::System::Int32
	{
		MainCityNormal = 6,
		FightingLevel3 = 4,
		Custom = 2,
		MainCityIndoor = 7,
		Fighting = 1,
		Normal = 0,
		FightingLevel2 = 3,
		Observe = 5,
	};
}

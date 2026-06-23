#pragma once
#include "unitysdk/unitysdk.h"

namespace MoleMole::Config
{
	inline static constexpr unsigned int InlevelCameraState_TypeDefinitionIndex = 79680;

	enum class InlevelCameraState : ::System::Int32
	{
		Normal = 0,
		Fighting = 1,
		FightingLevel2 = 3,
		Observe = 5,
		MainCityIndoor = 7,
		Custom = 2,
		MainCityNormal = 6,
		FightingLevel3 = 4,
	};
}

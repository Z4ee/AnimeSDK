#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	inline static constexpr unsigned int TurnCountCalcMethod_TypeDefinitionIndex = 17560;

	enum class TurnCountCalcMethod : ::System::Int32
	{
		Total = 0,
		LightTeam = 1,
		DarkTeam = 2,
	};
}

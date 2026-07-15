#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	inline static constexpr unsigned int DiceCombatWeatherRuleTag_TypeDefinitionIndex = 10878;

	enum class DiceCombatWeatherRuleTag : ::System::Int32
	{
		Attack = 0,
		Defence = 1,
		Assist = 2,
		Comeback = 3,
	};
}

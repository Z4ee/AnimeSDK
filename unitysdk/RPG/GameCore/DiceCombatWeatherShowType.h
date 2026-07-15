#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	inline static constexpr unsigned int DiceCombatWeatherShowType_TypeDefinitionIndex = 10877;

	enum class DiceCombatWeatherShowType : ::System::Int32
	{
		Sunny = 0,
		Rainy = 1,
		Thundery = 2,
		Snowy = 3,
		Overload = 4,
	};
}

#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	inline static constexpr unsigned int SummonerEnergyBarType_TypeDefinitionIndex = 23782;

	enum class SummonerEnergyBarType : ::System::Int32
	{
		Keep = 0,
		Dot = 1,
		Progress = 2,
		Number = 3,
	};
}

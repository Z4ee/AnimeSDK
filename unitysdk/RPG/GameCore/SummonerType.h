#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	inline static constexpr unsigned int SummonerType_TypeDefinitionIndex = 14831;

	enum class SummonerType : ::System::Int32
	{
		Player = 0,
		Level = 1,
		Monster = 2,
	};
}

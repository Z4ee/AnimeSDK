#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	inline static constexpr unsigned int BattleScoringDisplayType_TypeDefinitionIndex = 13894;

	enum class BattleScoringDisplayType : ::System::Int32
	{
		None = 0,
		Normal = 1,
		Countdown = 2,
	};
}

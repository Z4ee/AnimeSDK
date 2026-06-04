#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	inline static constexpr unsigned int Rtcb_BreakActionOption_TypeDefinitionIndex = 50398;

	enum class Rtcb_BreakActionOption : ::System::Int32
	{
		Immediately = 1,
		PlayHitAnim = 2,
		Default = 2,
	};
}

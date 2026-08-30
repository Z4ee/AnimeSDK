#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	inline static constexpr unsigned int StandByStance_TypeDefinitionIndex = 24195;

	enum class StandByStance : ::System::Int32
	{
		Relax = 0,
		Alert = 1,
		Detect = 2,
	};
}

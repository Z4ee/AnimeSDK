#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::Client::LittleGameShare::CakeRaceCore
{
	inline static constexpr unsigned int FightSoftStopReason_TypeDefinitionIndex = 35774;

	enum class FightSoftStopReason : ::System::Int32
	{
		SECTION_END = 0,
		SPARKLE_OCCUR = 1,
		NONE = 10000,
	};
}

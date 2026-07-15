#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::Client::LittleGameShare::CakeRaceCore
{
	inline static constexpr unsigned int FightStatus_TypeDefinitionIndex = 35766;

	enum class FightStatus : ::System::Int32
	{
		None = 0,
		EffectShow = 1,
		Fight = 2,
		FightEndShowAdjustPos = 3,
	};
}

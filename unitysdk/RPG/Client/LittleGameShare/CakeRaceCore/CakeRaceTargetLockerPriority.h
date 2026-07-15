#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::Client::LittleGameShare::CakeRaceCore
{
	inline static constexpr unsigned int CakeRaceTargetLockerPriority_TypeDefinitionIndex = 35672;

	enum class CakeRaceTargetLockerPriority : ::System::Int32
	{
		Food = 200,
		Cat = 300,
	};
}

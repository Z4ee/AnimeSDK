#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::Client::LittleGameShare::CakeRaceCore
{
	inline static constexpr unsigned int CakeRaceTrapState_TypeDefinitionIndex = 35685;

	enum class CakeRaceTrapState : ::System::Int32
	{
		Active = 0,
		Inactive = 1,
		Destroyed = 2,
	};
}

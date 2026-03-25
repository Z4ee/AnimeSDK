#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::Client::LittleGameShare::CakeRaceCore
{
	inline static constexpr unsigned int CakeRacePlayerState_TypeDefinitionIndex = 28883;

	enum class CakeRacePlayerState : ::System::Int32
	{
		Unconnect = 0,
		Connected = 1,
		Leave = 2,
		KickOut = 3,
	};
}

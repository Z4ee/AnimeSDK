#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::Client::LittleGameShare::CakeRaceCore
{
	inline static constexpr unsigned int CakeRaceBubbleState_TypeDefinitionIndex = 35686;

	enum class CakeRaceBubbleState : ::System::Int32
	{
		Active = 0,
		FadeOut = 1,
		Destroyed = 2,
	};
}

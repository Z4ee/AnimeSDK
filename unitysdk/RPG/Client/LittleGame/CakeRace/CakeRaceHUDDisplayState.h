#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::Client::LittleGame::CakeRace
{
	inline static constexpr unsigned int CakeRaceHUDDisplayState_TypeDefinitionIndex = 77639;

	enum class CakeRaceHUDDisplayState : ::System::Int32
	{
		Hide = 1,
		Fight = 2,
		PartialShow = 3,
		ToastOnly = 4,
		EffectShow = 5,
	};
}

#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::Client::LittleGame
{
	inline static constexpr unsigned int MovieLevelState_TypeDefinitionIndex = 40208;

	enum class MovieLevelState : ::System::Int32
	{
		Ready = 0,
		CountDown = 1,
		Playing = 2,
		Pause = 3,
		End = 4,
	};
}

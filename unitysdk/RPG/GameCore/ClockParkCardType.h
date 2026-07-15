#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	inline static constexpr unsigned int ClockParkCardType_TypeDefinitionIndex = 10768;

	enum class ClockParkCardType : ::System::Int32
	{
		AttributeChange = 1,
		GainBuff = 2,
		Chain = 3,
		Period = 4,
		Ground = 5,
		TakeReward = 6,
		ToChapter = 7,
		Gameplay = 8,
		Decision = 9,
	};
}

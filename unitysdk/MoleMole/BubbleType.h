#pragma once
#include "unitysdk/unitysdk.h"

namespace MoleMole
{
	inline static constexpr unsigned int BubbleType_TypeDefinitionIndex = 82791;

	enum class BubbleType : ::System::Int32
	{
		SwitchTeamLevel = -9,
		ScoreUI2 = -8,
		Fairy = 0,
		NPCDomain = -1,
		Gold = -2,
		Task = -4,
		Gold2 = -5,
		CountDown = -3,
		LevelQuest = 1,
		ScoreUI = -7,
		CountUp = -6,
	};
}

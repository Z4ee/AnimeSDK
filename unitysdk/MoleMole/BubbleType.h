#pragma once
#include "unitysdk/unitysdk.h"

namespace MoleMole
{
	inline static constexpr unsigned int BubbleType_TypeDefinitionIndex = 90640;

	enum class BubbleType : ::System::Int32
	{
		CountUp = -6,
		Task = -4,
		Gold2 = -5,
		LevelQuest = 1,
		Gold = -2,
		NPCDomain = -1,
		SwitchTeamLevel = -9,
		Fairy = 0,
		CountDown = -3,
		ScoreUI2 = -8,
		ScoreUI = -7,
	};
}

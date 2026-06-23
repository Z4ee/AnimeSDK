#pragma once
#include "unitysdk/unitysdk.h"

namespace MoleMole
{
	inline static constexpr unsigned int BubbleType_TypeDefinitionIndex = 55815;

	enum class BubbleType : ::System::Int32
	{
		Gold = -2,
		Fairy = 0,
		CountUp = -6,
		SwitchTeamLevel = -9,
		CountDown = -3,
		Gold2 = -5,
		ScoreUI2 = -8,
		NPCDomain = -1,
		Task = -4,
		LevelQuest = 1,
		ScoreUI = -7,
	};
}

#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	inline static constexpr unsigned int ActivitySubModeType_TypeDefinitionIndex = 52296;

	enum class ActivitySubModeType : ::System::Int32
	{
		Unknown = 0,
		EvolveBuild = 1,
		SwordTraining = 2,
		FightFest = 3,
		Fate = 4,
		Elation = 5,
		LocalLegend = 6,
		Expedition = 7,
		GridFight = 8,
		RogueMagic = 9,
		RogueTourn = 10,
		Challenge = 11,
	};
}

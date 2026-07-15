#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	inline static constexpr unsigned int ActivitySubModeType_TypeDefinitionIndex = 53496;

	enum class ActivitySubModeType : ::System::Int32
	{
		Unknown = 0,
		EvolveBuild = 1,
		SwordTraining = 2,
		FightFest = 3,
		Fate = 4,
		FateRin = 5,
		Elation = 6,
		LocalLegend = 7,
		Expedition = 8,
		GridFight = 9,
		RogueMagic = 10,
		RogueTourn = 11,
		Challenge = 12,
	};
}

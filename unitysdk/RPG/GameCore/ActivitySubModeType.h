#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	inline static constexpr unsigned int ActivitySubModeType_TypeDefinitionIndex = 51623;

	enum class ActivitySubModeType : ::System::Int32
	{
		Unknown = 0,
		EvolveBuild = 1,
		SwordTraining = 2,
		FightFest = 3,
		Fate = 4,
		Elation = 5,
		LocalLegend = 6,
		GridFight = 7,
		RogueMagic = 8,
		RogueTourn = 9,
		Challenge = 10,
	};
}

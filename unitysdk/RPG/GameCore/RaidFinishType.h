#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	inline static constexpr unsigned int RaidFinishType_TypeDefinitionIndex = 14000;

	enum class RaidFinishType : ::System::Int32
	{
		None = 0,
		AllMonsterDie = 1,
		RaidMissionFinish = 2,
		BattleEnd = 3,
	};
}

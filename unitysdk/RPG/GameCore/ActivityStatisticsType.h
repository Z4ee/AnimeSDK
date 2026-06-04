#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	inline static constexpr unsigned int ActivityStatisticsType_TypeDefinitionIndex = 23370;

	enum class ActivityStatisticsType : ::System::Int32
	{
		Common_BattleTargetScore = 0,
		LocalLegend_MonsterChangeCnt = 1,
		ExpeditionBattle_BuffEffectiveness = 2,
	};
}

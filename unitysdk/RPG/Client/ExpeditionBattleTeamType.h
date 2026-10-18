#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::Client
{
	inline static constexpr unsigned int ExpeditionBattleTeamType_TypeDefinitionIndex = 63853;

	enum class ExpeditionBattleTeamType : ::System::Int32
	{
		HistoryBest = 0,
		Current = 1,
		Display = 2,
	};
}

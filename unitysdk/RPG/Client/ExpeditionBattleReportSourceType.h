#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::Client
{
	inline static constexpr unsigned int ExpeditionBattleReportSourceType_TypeDefinitionIndex = 63898;

	enum class ExpeditionBattleReportSourceType : ::System::Int32
	{
		Settle = 0,
		HistoryBest = 1,
	};
}

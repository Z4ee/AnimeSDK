#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::Client
{
	inline static constexpr unsigned int BattleResultProcess_RestartOption_TypeDefinitionIndex = 58266;

	enum class BattleResultProcess_RestartOption : ::System::Int32
	{
		Disable = 0,
		EnableWithSameTeam = 1,
		EnableWithEditTeam = 2,
	};
}

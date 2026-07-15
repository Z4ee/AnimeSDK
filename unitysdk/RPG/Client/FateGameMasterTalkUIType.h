#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::Client
{
	inline static constexpr unsigned int FateGameMasterTalkUIType_TypeDefinitionIndex = 61183;

	enum class FateGameMasterTalkUIType : ::System::Int32
	{
		None = 0,
		PreBattleOverview = 1,
		PreBattleVS = 2,
		PostBattleVS = 3,
		PostBattleOverview = 4,
	};
}

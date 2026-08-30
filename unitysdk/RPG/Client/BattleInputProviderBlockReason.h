#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::Client
{
	inline static constexpr unsigned int BattleInputProviderBlockReason_TypeDefinitionIndex = 61404;

	enum class BattleInputProviderBlockReason : ::System::Int32
	{
		Default = 1,
		TimeLineDetailInfoPanel = 2,
		DebugLockPCMode = 4,
		BattleBPTopPanel = 8,
	};
}

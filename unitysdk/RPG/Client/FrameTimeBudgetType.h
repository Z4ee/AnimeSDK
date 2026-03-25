#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::Client
{
	inline static constexpr unsigned int FrameTimeBudgetType_TypeDefinitionIndex = 58249;

	enum class FrameTimeBudgetType : ::System::Int32
	{
		Shared = 0,
		AssetMgr = 1,
		GameObjectPool = 2,
		StreamingUpdate = 3,
		StreamingLoad = 4,
		StreamingFading = 5,
		AdvAsyncProcessor = 6,
		GroupUnload = 7,
		BattlePreloadPoolRearrange = 8,
		Count = 9,
	};
}

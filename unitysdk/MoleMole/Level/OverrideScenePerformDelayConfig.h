#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Level/OverrideScenePerformDelayConfig_Item.h"
#include "unitysdk/System/ValueType.h"

namespace MoleMole::Level
{
	inline static constexpr unsigned int OverrideScenePerformDelayConfig_TypeDefinitionIndex = 79557;

	struct alignas(4) OverrideScenePerformDelayConfig
	{
		::MoleMole::Level::OverrideScenePerformDelayConfig_Item normalOverride; // 0x10
		::MoleMole::Level::OverrideScenePerformDelayConfig_Item simpleOverride; // 0x20
		::MoleMole::Level::OverrideScenePerformDelayConfig_Item chessBoardOverride; // 0x30
	};
}

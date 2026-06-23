#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace System { class String; }

namespace MoleMole
{
	inline static constexpr unsigned int UIHollowLayerResultPageV2PopWindowController_RankDataItem_TypeDefinitionIndex = 86158;

	struct alignas(8) UIHollowLayerResultPageV2PopWindowController_RankDataItem
	{
		::System::UInt32 BattleRankId; // 0x10
		::System::Boolean IsComplete; // 0x14
		::System::Int32 Priority; // 0x18
		::System::String* MissionText; // 0x20
	};
}

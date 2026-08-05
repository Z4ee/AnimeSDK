#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace MoleMole::Config
{
	inline static constexpr unsigned int ConfigViewObjectMisc_ZKReward_TypeDefinitionIndex = 91057;

	struct alignas(4) ConfigViewObjectMisc_ZKReward
	{
		::System::Int32 MaxFrontStageCount; // 0x10
		::System::Single RefreshPositionThreshold; // 0x14
		::System::Boolean HideDropTextureSheet; // 0x18
	};
}

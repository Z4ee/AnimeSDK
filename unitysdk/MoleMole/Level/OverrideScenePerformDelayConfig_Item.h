#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace MoleMole::Level
{
	inline static constexpr unsigned int OverrideScenePerformDelayConfig_Item_TypeDefinitionIndex = 48765;

	struct alignas(4) OverrideScenePerformDelayConfig_Item
	{
		::System::Boolean OverrideEnable; // 0x10
		::System::Single Override_InputMuteDelayTime; // 0x14
		::System::Single Override_ShowUIDelayTime; // 0x18
		::System::Single Override_FlowCanvasDelayTime; // 0x1C
	};
}

#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UILevelResultV2_PageController_ResultState.h"
#include "unitysdk/System/ValueType.h"

namespace System { class String; }

namespace MoleMole
{
	inline static constexpr unsigned int UILevelResultDelayEvent_DelayItem_TypeDefinitionIndex = 64592;

	struct alignas(8) UILevelResultDelayEvent_DelayItem
	{
		::System::Single delay; // 0x10
		::System::String* delayEvent; // 0x18
		::MoleMole::UILevelResultV2_PageController_ResultState applyState; // 0x20
	};
}

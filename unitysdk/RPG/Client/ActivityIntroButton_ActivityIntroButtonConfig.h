#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace RPG::Client
{
	inline static constexpr unsigned int ActivityIntroButton_ActivityIntroButtonConfig_TypeDefinitionIndex = 72424;

	struct alignas(4) ActivityIntroButton_ActivityIntroButtonConfig
	{
		::System::UInt32 TimeLimitActivityPanelID; // 0x10
		::System::UInt32 ResidentActivityPanelID; // 0x14
	};
}

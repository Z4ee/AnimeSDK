#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace NPCCrowd
{
	inline static constexpr unsigned int AbilitySwitchSetting_TypeDefinitionIndex = 43348;

	struct alignas(1) AbilitySwitchSetting
	{
		::System::Boolean DisableNavmeshProcessor; // 0x10
		::System::Boolean DisableAIActionProcessor; // 0x11
		::System::Boolean DisableStateTreeProcessor; // 0x12
		::System::Boolean DisableFootStepProcessor; // 0x13
	};
}

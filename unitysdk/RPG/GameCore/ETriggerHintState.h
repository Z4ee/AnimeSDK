#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	inline static constexpr unsigned int ETriggerHintState_TypeDefinitionIndex = 54820;

	enum class ETriggerHintState : ::System::Byte
	{
		None = 0x0,
		HintEnabled = 0x1,
		TriggerEnabled = 0x2,
		HintTriggered = 0x4,
		EnabledAndTriggered = 0x7,
	};
}

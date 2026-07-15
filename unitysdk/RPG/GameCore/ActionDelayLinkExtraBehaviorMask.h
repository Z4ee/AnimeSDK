#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	inline static constexpr unsigned int ActionDelayLinkExtraBehaviorMask_TypeDefinitionIndex = 23866;

	enum class ActionDelayLinkExtraBehaviorMask : ::System::UInt16
	{
		None = 0x0,
		Bit_AutoForceSync = 0x1,
	};
}

#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::Client
{
	inline static constexpr unsigned int LiveStreamStageState_TypeDefinitionIndex = 59647;

	enum class LiveStreamStageState : ::System::Byte
	{
		None = 0x0,
		Locked = 0x1,
		AboutToUnlock = 0x2,
		Unlocked = 0x3,
		Review = 0x4,
	};
}

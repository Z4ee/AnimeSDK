#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::Client
{
	inline static constexpr unsigned int MonoEffectManager_HideFieldEffectReason_TypeDefinitionIndex = 66715;

	enum class MonoEffectManager_HideFieldEffectReason : ::System::Byte
	{
		Default = 0x0,
		UltraSkill = 0x1,
		DarkTimelineSkill = 0x2,
		Camera = 0x3,
		Task = 0x4,
		Performance = 0x5,
		HideLevelStage = 0x6,
		Count = 0x7,
	};
}

#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::Client
{
	inline static constexpr unsigned int PlayerSettingType_TypeDefinitionIndex = 63743;

	enum class PlayerSettingType : ::System::Int32
	{
		None = 0,
		AutoBattleUltimateMode = 1,
		KeepAutoBattleSpeed = 2,
		ShowBattleActionValue = 3,
		EyeProtectionMode = 4,
		EnableAutouseMpitem = 5,
		BottomHintKeyboard = 6,
		BottomHintController = 7,
		PamDefaultSkinInStory = 8,
		ShowOutfitInPerformance = 9,
	};
}

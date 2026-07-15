#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	inline static constexpr unsigned int TutorialNotifyType_TypeDefinitionIndex = 23959;

	enum class TutorialNotifyType : ::System::Int32
	{
		None = 0,
		TutorialCleanUI = 1,
		MoveScrollView = 2,
		NodeRename = 3,
		LockController = 4,
		LockAvatar = 5,
		SelectAvatarByEidolon = 6,
		SelectAvatarByLevel = 7,
		SelectAvatarByPromotion = 8,
		ShowRoleTrialDesc = 9,
		BlockClick = 10,
		ToNextZoom = 11,
		ToPreZoom = 12,
		PauseBattleToastWhenGamePause = 13,
		ShowNode = 14,
		HideNode = 15,
	};
}

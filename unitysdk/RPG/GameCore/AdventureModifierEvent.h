#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	inline static constexpr unsigned int AdventureModifierEvent_TypeDefinitionIndex = 16077;

	enum class AdventureModifierEvent : ::System::Int32
	{
		OnAdd = 0,
		OnCreate = 1,
		OnDestroy = 2,
		OnStack = 3,
		OnAttack = 4,
		OnBeforeBattle = 5,
		OnAfterBattle = 6,
		OnInterval = 7,
		OnStage = 8,
		OnUnstage = 9,
		OnForeGround = 10,
		OnBackGround = 11,
		OnStageByStory = 12,
		OnNpcMonsterCreate = 13,
		OnTeamLeaderChange = 14,
		OnBeforeAttack = 15,
		OnBeAttack = 16,
		OnModifierAdd = 17,
		OnModifierRemove = 18,
		OnOwnerBeKilled = 19,
		OnAfterLocalPlayerUseSkill = 20,
		OnCounter = 21,
		OnHitHolyShield = 22,
		OnTransferToFakeAvatar = 23,
		OnTransferFromFakeAvatar = 24,
		OnAfterBuffFullUpdate = 25,
		Count = 26,
	};
}

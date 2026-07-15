#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::Client
{
	inline static constexpr unsigned int MonoEffectHideReason_TypeDefinitionIndex = 66774;

	enum class MonoEffectHideReason : ::System::Int32
	{
		Unknow = 0,
		Frozen = 1,
		TaskSetEntityVisible = 3,
		PhotoGraphMode = 4,
		ByChangeTargetModifierEffectTask = 5,
		AdventureBehaviorFeatureMutex = 6,
		BattleModifierAttach = 7,
		GlobalVisibilityControl = 8,
		BattleSkillUse = 9,
		LittleGameActionOrTask = 10,
		HideTask = 11,
		Municipal = 12,
		HideInTimeline = 13,
		EffectSyncSourceNotLoaded = 14,
		MonoEffectField = 27,
		MonoEffectCulled = 28,
		MonoEffectAutoHidePlugin = 29,
		MonoEffectDelayActive = 30,
		MonoEffectLogic = 31,
	};
}

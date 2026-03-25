#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::Client
{
	inline static constexpr unsigned int ActionBarItemAction_TypeDefinitionIndex = 58327;

	enum class ActionBarItemAction : ::System::Int32
	{
		None = 0,
		InitAdd = 1,
		Add = 2,
		Remove = 3,
		InsertUltraSkillToAction = 4,
		InsertUltraSkillToWait = 5,
		DelayByInsertUltraSkill = 6,
		UltraSKillEndRemove = 7,
		UltraSkillCancelRemove = 8,
		UltraSkillEndForward = 9,
		UltraSkillEndForwardToAction = 10,
		ClearUltraSkillQueueRemove = 11,
		MoveToAction = 12,
		BackToAppend = 13,
		ActionEndRemove = 14,
		SkillEffectMove = 15,
		PreviewAdd = 16,
		PreviewRemove = 17,
		TargetPreviewAdd = 18,
		TargetPreviewRemove = 19,
		PreviewAddWithIndexChange = 20,
		AddByPreview = 21,
		RemoveByPreview = 22,
		InsertAbilityToAction = 23,
		InsertAbilityToWait = 24,
		InsertAbilityForwardToAction = 25,
	};
}

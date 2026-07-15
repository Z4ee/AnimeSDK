#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	inline static constexpr unsigned int JsonEnumCategory_TypeDefinitionIndex = 10163;

	enum class JsonEnumCategory : ::System::Int32
	{
		BattlePropEvent = 0,
		DamageBehaviorTemplate = 1,
		GridFightCustomType = 2,
		DamageTag = 3,
		ModifierCustomEventType = 4,
		AbilityTagType = 5,
		SPChangeTag = 6,
		CameraChangeTag = 7,
		SkillTag = 8,
		InsertAbilityCustomFlag = 9,
		RtSkillTag = 10,
		RtDamageTag = 11,
		RtBehaviorFlag = 12,
		RtSkillInsertPriority = 13,
		RtCustomEvent = 14,
		RtCharacterTag = 15,
		RtTriggerTag = 16,
		GameSubState = 17,
		CollisionLayer = 18,
		ModifierBehaviorFlag = 19,
		DialogueIconType = 20,
	};
}

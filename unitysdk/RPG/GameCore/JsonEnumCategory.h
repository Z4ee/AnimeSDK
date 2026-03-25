#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	inline static constexpr unsigned int JsonEnumCategory_TypeDefinitionIndex = 10125;

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
		ModifierBehaviorFlag = 10,
		DialogueIconType = 11,
	};
}

#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::Client
{
	inline static constexpr unsigned int MonsterAvatarSkillSlotStatus_TypeDefinitionIndex = 59474;

	enum class MonsterAvatarSkillSlotStatus : ::System::Int32
	{
		UnKnow = 0,
		Equipped = 1,
		NotEquipped = 2,
		Locked = 3,
	};
}

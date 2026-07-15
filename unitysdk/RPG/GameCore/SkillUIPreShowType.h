#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	inline static constexpr unsigned int SkillUIPreShowType_TypeDefinitionIndex = 23903;

	enum class SkillUIPreShowType : ::System::Int32
	{
		LoseHP = 0,
		HealHP = 1,
		AddSP = 2,
		PersistLoseHP = 3,
		DamageHP = 4,
	};
}

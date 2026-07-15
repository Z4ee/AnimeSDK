#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	inline static constexpr unsigned int MarbleTitleValue_TypeDefinitionIndex = 11468;

	enum class MarbleTitleValue : ::System::Int32
	{
		None = 0,
		TotalDamage = 1,
		KillCount = 2,
		SpineDamage = 3,
		TakeDamage = 4,
		Heal = 5,
		IndirectDamage = 6,
		CollideTimes = 7,
		SingleActionDamage = 8,
	};
}

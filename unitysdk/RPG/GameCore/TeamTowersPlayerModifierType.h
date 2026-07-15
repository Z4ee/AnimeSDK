#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	inline static constexpr unsigned int TeamTowersPlayerModifierType_TypeDefinitionIndex = 18212;

	enum class TeamTowersPlayerModifierType : ::System::Byte
	{
		None = 0x0,
		Invincible = 0x1,
		Fever = 0x2,
	};
}

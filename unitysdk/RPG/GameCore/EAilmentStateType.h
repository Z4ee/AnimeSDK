#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	inline static constexpr unsigned int EAilmentStateType_TypeDefinitionIndex = 10158;

	enum class EAilmentStateType : ::System::Int32
	{
		None = 0,
		Attack = 1,
		Hit = 2,
		Stun = 3,
		Dead = 4,
		StunHit = 5,
		Confine = 6,
	};
}

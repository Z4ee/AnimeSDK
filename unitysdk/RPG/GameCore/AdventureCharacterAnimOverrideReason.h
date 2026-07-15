#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	inline static constexpr unsigned int AdventureCharacterAnimOverrideReason_TypeDefinitionIndex = 54479;

	enum class AdventureCharacterAnimOverrideReason : ::System::Int32
	{
		None = 0,
		Stun = 1,
		Confine = 2,
	};
}

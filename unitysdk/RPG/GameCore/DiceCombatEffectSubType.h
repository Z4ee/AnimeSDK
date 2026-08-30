#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	inline static constexpr unsigned int DiceCombatEffectSubType_TypeDefinitionIndex = 15862;

	enum class DiceCombatEffectSubType : ::System::Int32
	{
		AttackEffect = 0,
		CustomID = 1,
	};
}

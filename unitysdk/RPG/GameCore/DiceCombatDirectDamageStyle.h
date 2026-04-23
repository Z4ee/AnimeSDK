#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	inline static constexpr unsigned int DiceCombatDirectDamageStyle_TypeDefinitionIndex = 15215;

	enum class DiceCombatDirectDamageStyle : ::System::Int32
	{
		Default = 0,
		Poison = 1,
	};
}

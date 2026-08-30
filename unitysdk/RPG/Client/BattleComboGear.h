#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::Client
{
	inline static constexpr unsigned int BattleComboGear_TypeDefinitionIndex = 71514;

	enum class BattleComboGear : ::System::Int32
	{
		None = 0,
		C = 1,
		B = 2,
		A = 3,
		S = 4,
		SS = 5,
	};
}

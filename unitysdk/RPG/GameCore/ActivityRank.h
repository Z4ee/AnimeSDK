#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	inline static constexpr unsigned int ActivityRank_TypeDefinitionIndex = 10809;

	enum class ActivityRank : ::System::Int32
	{
		Invalid = 0,
		S = 1,
		A = 2,
		B = 3,
		C = 4,
		SS = 5,
		None = 6,
	};
}

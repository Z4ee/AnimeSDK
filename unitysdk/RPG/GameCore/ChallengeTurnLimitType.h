#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	inline static constexpr unsigned int ChallengeTurnLimitType_TypeDefinitionIndex = 23828;

	enum class ChallengeTurnLimitType : ::System::Int32
	{
		None = 0,
		Lose = 1,
		Win = 2,
		Custom = 3,
	};
}

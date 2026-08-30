#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::Client::B51Racing
{
	inline static constexpr unsigned int B51RacingDIYDisplayMode_TypeDefinitionIndex = 80670;

	enum class B51RacingDIYDisplayMode : ::System::Int32
	{
		CycleDIY = 0,
		ChallengeDIY = 1,
	};
}

#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::Client::B51Racing
{
	inline static constexpr unsigned int B51RacingInitCarSelectOpenMode_TypeDefinitionIndex = 80675;

	enum class B51RacingInitCarSelectOpenMode : ::System::Int32
	{
		Initial = 0,
		Reselect = 1,
	};
}

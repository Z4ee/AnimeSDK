#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::Client::ParkourGame
{
	inline static constexpr unsigned int EParkourBuffFlag_TypeDefinitionIndex = 68279;

	enum class EParkourBuffFlag : ::System::Int32
	{
		None = 0,
		SuperStar = 1,
		HitFly = 2,
	};
}

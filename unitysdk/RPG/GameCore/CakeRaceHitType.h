#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	inline static constexpr unsigned int CakeRaceHitType_TypeDefinitionIndex = 18186;

	enum class CakeRaceHitType : ::System::Int32
	{
		None = 0,
		Dashed = 1,
		GroundedOnCat = 2,
	};
}

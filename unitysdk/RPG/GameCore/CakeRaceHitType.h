#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	inline static constexpr unsigned int CakeRaceHitType_TypeDefinitionIndex = 17668;

	enum class CakeRaceHitType : ::System::Int32
	{
		None = 0,
		Dashed = 1,
		GroundedOnCat = 2,
	};
}

#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	inline static constexpr unsigned int PetBodySize_TypeDefinitionIndex = 10435;

	enum class PetBodySize : ::System::Int32
	{
		Common = 0,
		SmallQuadruped = 1,
		SmallBiped = 2,
		Floating = 3,
		None = 99,
	};
}

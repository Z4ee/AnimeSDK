#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	inline static constexpr unsigned int GridFightTraitSrcType_TypeDefinitionIndex = 13190;

	enum class GridFightTraitSrcType : ::System::Int32
	{
		Role = 0,
		Equip = 1,
		GainFrontTrait = 2,
		Projection = 3,
	};
}

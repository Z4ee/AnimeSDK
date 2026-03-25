#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	inline static constexpr unsigned int GridFightTraitEffectChargeType_TypeDefinitionIndex = 21461;

	enum class GridFightTraitEffectChargeType : ::System::Int32
	{
		Number = 0,
		NumberVersusNumber = 1,
		Progress = 2,
	};
}

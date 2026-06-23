#pragma once
#include "unitysdk/unitysdk.h"

namespace MoleMole::Config
{
	inline static constexpr unsigned int ConfigZipLine_TransitionMode_TypeDefinitionIndex = 51226;

	enum class ConfigZipLine_TransitionMode : ::System::Int32
	{
		FixedTargetPoint = 0,
		FloatTargetPoint = 1,
		MixedMode = 3,
		PredicateTargetPoint = 2,
	};
}

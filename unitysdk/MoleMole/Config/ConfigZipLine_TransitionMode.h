#pragma once
#include "unitysdk/unitysdk.h"

namespace MoleMole::Config
{
	inline static constexpr unsigned int ConfigZipLine_TransitionMode_TypeDefinitionIndex = 53017;

	enum class ConfigZipLine_TransitionMode : ::System::Int32
	{
		FloatTargetPoint = 1,
		PredicateTargetPoint = 2,
		FixedTargetPoint = 0,
		MixedMode = 3,
	};
}

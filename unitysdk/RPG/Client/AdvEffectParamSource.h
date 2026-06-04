#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::Client
{
	inline static constexpr unsigned int AdvEffectParamSource_TypeDefinitionIndex = 65367;

	enum class AdvEffectParamSource : ::System::Int32
	{
		Unknown = 0,
		AdvEffectBgCurve = 1,
		AdvEffectForceField = 2,
	};
}

#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::Client
{
	inline static constexpr unsigned int MonopolyEffectTriggerWayType_TypeDefinitionIndex = 63277;

	enum class MonopolyEffectTriggerWayType : ::System::Int32
	{
		LevelGraph = 0,
		Immediately = 1,
		InstantAssetTax = 2,
	};
}

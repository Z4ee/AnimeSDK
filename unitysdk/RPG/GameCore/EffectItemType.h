#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	inline static constexpr unsigned int EffectItemType_TypeDefinitionIndex = 11081;

	enum class EffectItemType : ::System::Int32
	{
		None = 0,
		BaseCoinNum = 1,
		BaseTriggerNum = 2,
		BaseProbability = 3,
		BaseLoopInterval = 4,
	};
}

#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::Client
{
	inline static constexpr unsigned int MonoEffectPluginSpreadMultiplier_ScaleState_TypeDefinitionIndex = 66975;

	enum class MonoEffectPluginSpreadMultiplier_ScaleState : ::System::Int32
	{
		Default = 0,
		BlendIn = 1,
		Finish = 2,
		BlendOut = 3,
	};
}

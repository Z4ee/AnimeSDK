#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::Client
{
	inline static constexpr unsigned int EffectPluginManagerMode_TypeDefinitionIndex = 67257;

	enum class EffectPluginManagerMode : ::System::Int32
	{
		InGame = 0,
		Editor = 1,
	};
}

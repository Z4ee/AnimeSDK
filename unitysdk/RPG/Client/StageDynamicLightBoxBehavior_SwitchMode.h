#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::Client
{
	inline static constexpr unsigned int StageDynamicLightBoxBehavior_SwitchMode_TypeDefinitionIndex = 67755;

	enum class StageDynamicLightBoxBehavior_SwitchMode : ::System::Int32
	{
		Off = 0,
		Last = -1,
		Next = 1,
	};
}

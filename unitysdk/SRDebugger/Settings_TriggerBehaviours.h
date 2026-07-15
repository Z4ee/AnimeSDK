#pragma once
#include "unitysdk/unitysdk.h"

namespace SRDebugger
{
	inline static constexpr unsigned int Settings_TriggerBehaviours_TypeDefinitionIndex = 36423;

	enum class Settings_TriggerBehaviours : ::System::Int32
	{
		TripleTap = 0,
		TapAndHold = 1,
		DoubleTap = 2,
	};
}

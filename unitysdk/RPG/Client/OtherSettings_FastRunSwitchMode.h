#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::Client
{
	inline static constexpr unsigned int OtherSettings_FastRunSwitchMode_TypeDefinitionIndex = 48013;

	enum class OtherSettings_FastRunSwitchMode : ::System::Int32
	{
		ButtonSwitch = 0,
		ButtonStay = 1,
	};
}

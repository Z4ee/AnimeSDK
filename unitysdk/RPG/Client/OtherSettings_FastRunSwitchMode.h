#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::Client
{
	inline static constexpr unsigned int OtherSettings_FastRunSwitchMode_TypeDefinitionIndex = 55485;

	enum class OtherSettings_FastRunSwitchMode : ::System::Int32
	{
		ButtonSwitch = 0,
		ButtonStay = 1,
	};
}

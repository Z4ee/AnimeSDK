#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::Client
{
	inline static constexpr unsigned int BindingSettingsType_TypeDefinitionIndex = 58563;

	enum class BindingSettingsType : ::System::Int32
	{
		Disable = 0,
		KeyboardOnly = 1,
		GamepadOnly = 2,
		AllEnable = 3,
	};
}

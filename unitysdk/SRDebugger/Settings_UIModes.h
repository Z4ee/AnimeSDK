#pragma once
#include "unitysdk/unitysdk.h"

namespace SRDebugger
{
	inline static constexpr unsigned int Settings_UIModes_TypeDefinitionIndex = 36425;

	enum class Settings_UIModes : ::System::Int32
	{
		NewInputSystem = 0,
		LegacyInputSystem = 1,
	};
}

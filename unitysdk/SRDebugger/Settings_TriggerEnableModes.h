#pragma once
#include "unitysdk/unitysdk.h"

namespace SRDebugger
{
	inline static constexpr unsigned int Settings_TriggerEnableModes_TypeDefinitionIndex = 36424;

	enum class Settings_TriggerEnableModes : ::System::Int32
	{
		Enabled = 0,
		MobileOnly = 1,
		Off = 2,
		DevelopmentBuildsOnly = 3,
	};
}

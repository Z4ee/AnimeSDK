#pragma once
#include "unitysdk/unitysdk.h"

inline static constexpr unsigned int AkAndroidSettings_PlatformAdvancedSettings_AudioAPI_TypeDefinitionIndex = 31484;

enum class AkAndroidSettings_PlatformAdvancedSettings_AudioAPI : ::System::Int32
{
	None = 0,
	AAudio = 1,
	OpenSL_ES = 2,
	Default = -1,
};

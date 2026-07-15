#pragma once
#include "unitysdk/unitysdk.h"

inline static constexpr unsigned int AkiOSSettings_PlatformAdvancedSettings_CategoryOptions_TypeDefinitionIndex = 42102;

enum class AkiOSSettings_PlatformAdvancedSettings_CategoryOptions : ::System::Int32
{
	MixWithOthers = 1,
	DuckOthers = 2,
	AllowBluetooth = 4,
	DefaultToSpeaker = 8,
};

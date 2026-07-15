#pragma once
#include "unitysdk/unitysdk.h"

inline static constexpr unsigned int AkWindowsSettings_PlatformAdvancedSettings_AudioAPI_TypeDefinitionIndex = 42098;

enum class AkWindowsSettings_PlatformAdvancedSettings_AudioAPI : ::System::Int32
{
	None = 0,
	Wasapi = 1,
	XAudio2 = 2,
	DirectSound = 4,
	Default = -1,
};

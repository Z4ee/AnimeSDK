#pragma once
#include "unitysdk/unitysdk.h"

inline static constexpr unsigned int AkiOSSettings_PlatformAdvancedSettings_Mode_TypeDefinitionIndex = 42103;

enum class AkiOSSettings_PlatformAdvancedSettings_Mode : ::System::Int32
{
	Default = 0,
	VoiceChat = 1,
	GameChat = 2,
	VideoRecording = 3,
	Measurement = 4,
	MoviePlayback = 5,
	VideoChat = 6,
};

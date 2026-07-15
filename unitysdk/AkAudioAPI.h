#pragma once
#include "unitysdk/unitysdk.h"

inline static constexpr unsigned int AkAudioAPI_TypeDefinitionIndex = 41992;

enum class AkAudioAPI : ::System::Int32
{
	AkAPI_Wasapi = 1,
	AkAPI_XAudio2 = 2,
	AkAPI_DirectSound = 4,
	AkAPI_Default = 7,
};

#pragma once
#include "unitysdk/unitysdk.h"

inline static constexpr unsigned int Audio_PINVOKE_ScePadAudioOutPath_TypeDefinitionIndex = 67776;

enum class Audio_PINVOKE_ScePadAudioOutPath : ::System::Int32
{
	SCE_PAD_AUDIO_OUT_PATH_MONO_HEADSET = 1,
	SCE_PAD_AUDIO_OUT_PATH_SPEAKER = 3,
	SCE_PAD_AUDIO_OUT_PATH_MONO_HEADSET_SPEAKER = 2,
	SCE_PAD_AUDIO_OUT_PATH_STEREO_HEADSET = 0,
	SCE_PAD_AUDIO_OUT_PATH_OFF = 4,
};

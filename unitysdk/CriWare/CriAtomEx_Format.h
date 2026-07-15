#pragma once
#include "unitysdk/unitysdk.h"

namespace CriWare
{
	inline static constexpr unsigned int CriAtomEx_Format_TypeDefinitionIndex = 37802;

	enum class CriAtomEx_Format : ::System::UInt32
	{
		ADX = 0x1,
		HCA = 0x3,
		HCA_MX = 0x4,
		WAVE = 0x5,
		RAW_PCM = 0x6,
		AUDIO_BUFFER = 0x9,
		HW1 = 0x10001,
		HW2 = 0x10002,
		HW3 = 0x10003,
		MP3 = 0x10003,
	};
}

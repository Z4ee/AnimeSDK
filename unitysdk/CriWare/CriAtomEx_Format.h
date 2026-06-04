#pragma once
#include "unitysdk/unitysdk.h"

namespace CriWare
{
	inline static constexpr unsigned int CriAtomEx_Format_TypeDefinitionIndex = 37007;

	enum class CriAtomEx_Format : ::System::UInt32
	{
		ADX = 0x1,
		HCA = 0x3,
		HCA_MX = 0x4,
		WAVE = 0x5,
		RAW_PCM = 0x6,
		AUDIO_BUFFER = 0x9,
	};
}

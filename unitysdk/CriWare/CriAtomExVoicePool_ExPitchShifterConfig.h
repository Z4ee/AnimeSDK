#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/CriWare/CriAtomExVoicePool_PitchShifterConfig.h"
#include "unitysdk/System/ValueType.h"

namespace CriWare
{
	inline static constexpr unsigned int CriAtomExVoicePool_ExPitchShifterConfig_TypeDefinitionIndex = 37920;

	struct alignas(4) CriAtomExVoicePool_ExPitchShifterConfig
	{
		::System::Int32 numDsp; // 0x10
		::System::Int32 maxChannels; // 0x14
		::System::Int32 maxSamplingRate; // 0x18
		::CriWare::CriAtomExVoicePool_PitchShifterConfig config; // 0x1C
	};
}

#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/CriWare/CriAtomExVoicePool_TimeStretchConfig.h"
#include "unitysdk/System/ValueType.h"

namespace CriWare
{
	inline static constexpr unsigned int CriAtomExVoicePool_ExTimeStretchConfig_TypeDefinitionIndex = 37922;

	struct alignas(4) CriAtomExVoicePool_ExTimeStretchConfig
	{
		::System::Int32 numDsp; // 0x10
		::System::Int32 maxChannels; // 0x14
		::System::Int32 maxSamplingRate; // 0x18
		::CriWare::CriAtomExVoicePool_TimeStretchConfig config; // 0x1C
	};
}

#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace CriWare
{
	inline static constexpr unsigned int CriAtomExVoicePool_PlayerConfig_TypeDefinitionIndex = 37918;

	struct alignas(8) CriAtomExVoicePool_PlayerConfig
	{
		::System::Int32 maxChannels; // 0x10
		::System::Int32 maxSamplingRate; // 0x14
		::System::Boolean streamingFlag; // 0x18
		::System::Int32 soundRendererType; // 0x1C
		::System::Int32 decodeLatency; // 0x20
		::System::IntPtr context; // 0x28
	};
}

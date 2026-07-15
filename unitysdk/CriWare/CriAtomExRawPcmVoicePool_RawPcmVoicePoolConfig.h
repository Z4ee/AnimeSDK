#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/CriWare/CriAtomExRawPcmVoicePool_RawPcmPlayerConfig.h"
#include "unitysdk/System/ValueType.h"

namespace CriWare
{
	inline static constexpr unsigned int CriAtomExRawPcmVoicePool_RawPcmVoicePoolConfig_TypeDefinitionIndex = 37930;

	struct alignas(8) CriAtomExRawPcmVoicePool_RawPcmVoicePoolConfig
	{
		::System::UInt32 identifier; // 0x10
		::System::Int32 numVoices; // 0x14
		::CriWare::CriAtomExRawPcmVoicePool_RawPcmPlayerConfig playerConfig; // 0x18
	};
}

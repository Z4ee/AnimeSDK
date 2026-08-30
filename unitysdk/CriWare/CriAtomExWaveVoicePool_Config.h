#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/CriWare/CriAtomExVoicePool_PlayerConfig.h"
#include "unitysdk/System/ValueType.h"

#define CRIWARE_CRIATOMEXWAVEVOICEPOOL_CONFIG_DEFAULT_OFFSET UNITYSDK_OFFSET(0x1D376B50)

namespace CriWare
{
	inline static constexpr unsigned int CriAtomExWaveVoicePool_Config_TypeDefinitionIndex = 38785;

	struct alignas(8) CriAtomExWaveVoicePool_Config
	{
		::System::UInt32 identifier; // 0x10
		::System::Int32 numVoices; // 0x14
		::CriWare::CriAtomExVoicePool_PlayerConfig playerConfig; // 0x18
		::System::Boolean isStreamingOnly; // 0x38
		::System::Int32 minChannels; // 0x3C

		static ::CriWare::CriAtomExWaveVoicePool_Config Default()
		{
			return ((::CriWare::CriAtomExWaveVoicePool_Config(*)())((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMEXWAVEVOICEPOOL_CONFIG_DEFAULT_OFFSET))();
		}
	};
}

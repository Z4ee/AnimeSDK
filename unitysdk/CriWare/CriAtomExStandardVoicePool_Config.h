#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/CriWare/CriAtomExVoicePool_PlayerConfig.h"
#include "unitysdk/System/ValueType.h"

#define CRIWARE_CRIATOMEXSTANDARDVOICEPOOL_CONFIG_DEFAULT_OFFSET UNITYSDK_OFFSET(0x164D91C0)

namespace CriWare
{
	inline static constexpr unsigned int CriAtomExStandardVoicePool_Config_TypeDefinitionIndex = 38783;

	struct alignas(8) CriAtomExStandardVoicePool_Config
	{
		::System::UInt32 identifier; // 0x10
		::System::Int32 numVoices; // 0x14
		::CriWare::CriAtomExVoicePool_PlayerConfig playerConfig; // 0x18
		::System::Boolean isStreamingOnly; // 0x38
		::System::Int32 minChannels; // 0x3C

		static ::CriWare::CriAtomExStandardVoicePool_Config Default()
		{
			return ((::CriWare::CriAtomExStandardVoicePool_Config(*)())((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMEXSTANDARDVOICEPOOL_CONFIG_DEFAULT_OFFSET))();
		}
	};
}

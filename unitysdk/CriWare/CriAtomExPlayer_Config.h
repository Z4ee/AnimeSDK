#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/CriWare/CriAtomEx_VoiceAllocationMethod.h"
#include "unitysdk/System/ValueType.h"

#define CRIWARE_CRIATOMEXPLAYER_CONFIG_GET_DEFAULT_OFFSET UNITYSDK_OFFSET(0x1FB8D170)

namespace CriWare
{
	inline static constexpr unsigned int CriAtomExPlayer_Config_TypeDefinitionIndex = 34950;

	struct alignas(4) CriAtomExPlayer_Config
	{
		::CriWare::CriAtomEx_VoiceAllocationMethod voiceAllocationMethod; // 0x10
		::System::Int32 maxPathStrings; // 0x14
		::System::Int32 maxPath; // 0x18
		::System::Int32 maxAisacs; // 0x1C
		::System::Boolean updatesTime; // 0x20
		::System::Boolean enableAudioSyncedTimer; // 0x21

		static ::CriWare::CriAtomExPlayer_Config get_Default()
		{
			return ((::CriWare::CriAtomExPlayer_Config(*)())((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMEXPLAYER_CONFIG_GET_DEFAULT_OFFSET))();
		}
	};
}

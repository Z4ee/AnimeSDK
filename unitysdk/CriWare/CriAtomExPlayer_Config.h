#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/CriWare/CriAtomEx_VoiceAllocationMethod.h"
#include "unitysdk/System/ValueType.h"

namespace CriWare
{
	inline static constexpr unsigned int CriAtomExPlayer_Config_TypeDefinitionIndex = 34303;

	struct alignas(4) CriAtomExPlayer_Config
	{
		::CriWare::CriAtomEx_VoiceAllocationMethod voiceAllocationMethod; // 0x10
		::System::Int32 maxPathStrings; // 0x14
		::System::Int32 maxPath; // 0x18
		::System::Int32 maxAisacs; // 0x1C
		::System::Boolean updatesTime; // 0x20
		::System::Boolean enableAudioSyncedTimer; // 0x21
	};
}

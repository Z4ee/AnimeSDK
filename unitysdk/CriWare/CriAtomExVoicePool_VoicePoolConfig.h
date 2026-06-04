#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/CriWare/CriAtomExVoicePool_PlayerConfig.h"
#include "unitysdk/System/ValueType.h"

namespace CriWare
{
	inline static constexpr unsigned int CriAtomExVoicePool_VoicePoolConfig_TypeDefinitionIndex = 37120;

	struct alignas(8) CriAtomExVoicePool_VoicePoolConfig
	{
		::System::UInt32 identifier; // 0x10
		::System::Int32 numVoices; // 0x14
		::CriWare::CriAtomExVoicePool_PlayerConfig playerConfig; // 0x18
	};
}

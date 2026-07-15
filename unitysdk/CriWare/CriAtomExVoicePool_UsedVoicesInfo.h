#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace CriWare
{
	inline static constexpr unsigned int CriAtomExVoicePool_UsedVoicesInfo_TypeDefinitionIndex = 37917;

	struct alignas(4) CriAtomExVoicePool_UsedVoicesInfo
	{
		::System::Int32 numUsedVoices; // 0x10
		::System::Int32 numPoolVoices; // 0x14
	};
}

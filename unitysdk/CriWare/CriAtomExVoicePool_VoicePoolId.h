#pragma once
#include "unitysdk/unitysdk.h"

namespace CriWare
{
	inline static constexpr unsigned int CriAtomExVoicePool_VoicePoolId_TypeDefinitionIndex = 37915;

	enum class CriAtomExVoicePool_VoicePoolId : ::System::Int32
	{
		StandardMemory = 0,
		StandardStreaming = 1,
		HcaMxMemory = 4,
		HcaMxStreaming = 5,
	};
}

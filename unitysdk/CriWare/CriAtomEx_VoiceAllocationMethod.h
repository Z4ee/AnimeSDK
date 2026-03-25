#pragma once
#include "unitysdk/unitysdk.h"

namespace CriWare
{
	inline static constexpr unsigned int CriAtomEx_VoiceAllocationMethod_TypeDefinitionIndex = 30980;

	enum class CriAtomEx_VoiceAllocationMethod : ::System::Int32
	{
		Once = 0,
		Retry = 1,
	};
}

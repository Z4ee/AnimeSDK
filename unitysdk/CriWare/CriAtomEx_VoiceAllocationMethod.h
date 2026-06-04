#pragma once
#include "unitysdk/unitysdk.h"

namespace CriWare
{
	inline static constexpr unsigned int CriAtomEx_VoiceAllocationMethod_TypeDefinitionIndex = 37000;

	enum class CriAtomEx_VoiceAllocationMethod : ::System::Int32
	{
		Once = 0,
		Retry = 1,
	};
}

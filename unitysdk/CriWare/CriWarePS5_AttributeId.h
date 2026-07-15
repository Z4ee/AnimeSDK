#pragma once
#include "unitysdk/unitysdk.h"

namespace CriWare
{
	inline static constexpr unsigned int CriWarePS5_AttributeId_TypeDefinitionIndex = 37770;

	enum class CriWarePS5_AttributeId : ::System::Int32
	{
		Pcm = 0,
		Gain = 1,
		Priority = 2,
		Position = 3,
		Spread = 4,
		Passthrough = 5,
		ResetState = 6,
		ApplicationSpecific = 7,
		Ambisonics = 8,
		Restricted = 9,
		MixToMainGain = 10,
		DebugName = 11,
		MAX = 16,
	};
}

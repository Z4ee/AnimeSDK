#pragma once
#include "unitysdk/unitysdk.h"

namespace CriWare
{
	inline static constexpr unsigned int CriAtomEx_BiquadFilterType_TypeDefinitionIndex = 37796;

	enum class CriAtomEx_BiquadFilterType : ::System::Int32
	{
		Off = 0,
		LowPass = 1,
		HighPass = 2,
		Notch = 3,
		LowShelf = 4,
		HighShelf = 5,
		Peaking = 6,
	};
}

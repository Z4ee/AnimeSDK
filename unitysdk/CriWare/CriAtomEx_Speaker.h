#pragma once
#include "unitysdk/unitysdk.h"

namespace CriWare
{
	inline static constexpr unsigned int CriAtomEx_Speaker_TypeDefinitionIndex = 37801;

	enum class CriAtomEx_Speaker : ::System::Int32
	{
		FrontLeft = 0,
		FrontRight = 1,
		FrontCenter = 2,
		LowFrequency = 3,
		SurroundLeft = 4,
		SurroundRight = 5,
		SurroundBackLeft = 6,
		SurroundBackRight = 7,
	};
}

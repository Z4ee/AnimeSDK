#pragma once
#include "unitysdk/unitysdk.h"

namespace CriWare
{
	inline static constexpr unsigned int CriAtomExPlayer_Status_TypeDefinitionIndex = 37901;

	enum class CriAtomExPlayer_Status : ::System::Int32
	{
		Stop = 0,
		Prep = 1,
		Playing = 2,
		PlayEnd = 3,
		Error = 4,
	};
}

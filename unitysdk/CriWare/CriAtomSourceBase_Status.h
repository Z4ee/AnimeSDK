#pragma once
#include "unitysdk/unitysdk.h"

namespace CriWare
{
	inline static constexpr unsigned int CriAtomSourceBase_Status_TypeDefinitionIndex = 37788;

	enum class CriAtomSourceBase_Status : ::System::Int32
	{
		Stop = 0,
		Prep = 1,
		Playing = 2,
		PlayEnd = 3,
		Error = 4,
	};
}

#pragma once
#include "unitysdk/unitysdk.h"

namespace CriWare
{
	inline static constexpr unsigned int CriAtomEx_CurveType_TypeDefinitionIndex = 37803;

	enum class CriAtomEx_CurveType : ::System::Int32
	{
		Linear = 0,
		Square = 1,
		SquareReverse = 2,
		SCurve = 3,
		FlatAtHalf = 4,
	};
}

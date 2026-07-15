#pragma once
#include "unitysdk/unitysdk.h"

namespace CriWare
{
	inline static constexpr unsigned int CriAtomExCategory_ReactDuckerCurveType_TypeDefinitionIndex = 37829;

	enum class CriAtomExCategory_ReactDuckerCurveType : ::System::Int32
	{
		Linear = 0,
		Square = 1,
		SquareReverse = 2,
		SCurve = 3,
		FlatAtHalf = 4,
	};
}

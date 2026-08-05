#pragma once
#include "unitysdk/unitysdk.h"

namespace MoleMole::Utils
{
	inline static constexpr unsigned int ValueOrCurveType_TypeDefinitionIndex = 83328;

	enum class ValueOrCurveType : ::System::Int32
	{
		Value = 0,
		Curve = 1,
	};
}

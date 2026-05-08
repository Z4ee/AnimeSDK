#pragma once
#include "unitysdk/unitysdk.h"

namespace Foundation::Equation::OrdinaryDifferential
{
	inline static constexpr unsigned int SecondOrderHomogeneous_CharacteristicEquation_TypeDefinitionIndex = 9030;

	enum class SecondOrderHomogeneous_CharacteristicEquation : ::System::Int32
	{
		TwoRealRoots = 0,
		TwoVirtualRoots = 2,
		SingleRealRoot = 1,
	};
}

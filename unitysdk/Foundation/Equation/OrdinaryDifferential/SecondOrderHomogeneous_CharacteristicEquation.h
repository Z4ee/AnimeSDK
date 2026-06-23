#pragma once
#include "unitysdk/unitysdk.h"

namespace Foundation::Equation::OrdinaryDifferential
{
	inline static constexpr unsigned int SecondOrderHomogeneous_CharacteristicEquation_TypeDefinitionIndex = 8538;

	enum class SecondOrderHomogeneous_CharacteristicEquation : ::System::Int32
	{
		TwoVirtualRoots = 2,
		TwoRealRoots = 0,
		SingleRealRoot = 1,
	};
}

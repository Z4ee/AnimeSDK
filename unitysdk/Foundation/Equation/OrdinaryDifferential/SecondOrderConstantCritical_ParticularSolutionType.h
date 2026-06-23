#pragma once
#include "unitysdk/unitysdk.h"

namespace Foundation::Equation::OrdinaryDifferential
{
	inline static constexpr unsigned int SecondOrderConstantCritical_ParticularSolutionType_TypeDefinitionIndex = 8477;

	enum class SecondOrderConstantCritical_ParticularSolutionType : ::System::Int32
	{
		SecondOrderPolynomial = 1,
		Constant = 0,
	};
}

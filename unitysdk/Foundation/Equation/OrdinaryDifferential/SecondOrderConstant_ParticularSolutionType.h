#pragma once
#include "unitysdk/unitysdk.h"

namespace Foundation::Equation::OrdinaryDifferential
{
	inline static constexpr unsigned int SecondOrderConstant_ParticularSolutionType_TypeDefinitionIndex = 8565;

	enum class SecondOrderConstant_ParticularSolutionType : ::System::Int32
	{
		SecondOrderPolynomial = 2,
		Constant = 0,
		FirstOrderPolynomial = 1,
	};
}

#pragma once
#include "unitysdk/unitysdk.h"

namespace FluffyUnderware::Curvy::Utils
{
	inline static constexpr unsigned int SplinePolyLine_VertexCalculation_TypeDefinitionIndex = 37258;

	enum class SplinePolyLine_VertexCalculation : ::System::Int32
	{
		ByApproximation = 0,
		ByAngle = 1,
	};
}

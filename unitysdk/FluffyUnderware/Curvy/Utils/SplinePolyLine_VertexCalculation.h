#pragma once
#include "unitysdk/unitysdk.h"

namespace FluffyUnderware::Curvy::Utils
{
	inline static constexpr unsigned int SplinePolyLine_VertexCalculation_TypeDefinitionIndex = 39690;

	enum class SplinePolyLine_VertexCalculation : ::System::Int32
	{
		ByAngle = 1,
		ByApproximation = 0,
	};
}

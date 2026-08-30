#pragma once
#include "unitysdk/unitysdk.h"

namespace HoudiniEngineUnity
{
	inline static constexpr unsigned int HAPI_InputCurveParameterization_TypeDefinitionIndex = 39169;

	enum class HAPI_InputCurveParameterization : ::System::Int32
	{
		HAPI_CURVEPARAMETERIZATION_INVALID = -1,
		HAPI_CURVEPARAMETERIZATION_UNIFORM = 0,
		HAPI_CURVEPARAMETERIZATION_CHORD = 1,
		HAPI_CURVEPARAMETERIZATION_CENTRIPETAL = 2,
		HAPI_CURVEPARAMETERIZATION_MAX = 3,
	};
}

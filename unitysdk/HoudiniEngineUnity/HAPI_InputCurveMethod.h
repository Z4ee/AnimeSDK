#pragma once
#include "unitysdk/unitysdk.h"

namespace HoudiniEngineUnity
{
	inline static constexpr unsigned int HAPI_InputCurveMethod_TypeDefinitionIndex = 38309;

	enum class HAPI_InputCurveMethod : ::System::Int32
	{
		HAPI_CURVEMETHOD_INVALID = -1,
		HAPI_CURVEMETHOD_CVS = 0,
		HAPI_CURVEMETHOD_BREAKPOINTS = 1,
		HAPI_CURVEMETHOD_MAX = 2,
	};
}

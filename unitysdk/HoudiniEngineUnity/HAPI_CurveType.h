#pragma once
#include "unitysdk/unitysdk.h"

namespace HoudiniEngineUnity
{
	inline static constexpr unsigned int HAPI_CurveType_TypeDefinitionIndex = 38308;

	enum class HAPI_CurveType : ::System::Int32
	{
		HAPI_CURVETYPE_INVALID = -1,
		HAPI_CURVETYPE_LINEAR = 0,
		HAPI_CURVETYPE_NURBS = 1,
		HAPI_CURVETYPE_BEZIER = 2,
		HAPI_CURVETYPE_MAX = 3,
	};
}

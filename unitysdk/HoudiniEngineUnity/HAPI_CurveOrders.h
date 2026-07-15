#pragma once
#include "unitysdk/unitysdk.h"

namespace HoudiniEngineUnity
{
	inline static constexpr unsigned int HAPI_CurveOrders_TypeDefinitionIndex = 38318;

	enum class HAPI_CurveOrders : ::System::Int32
	{
		HAPI_CURVE_ORDER_VARYING = 0,
		HAPI_CURVE_ORDER_INVALID = 1,
		HAPI_CURVE_ORDER_LINEAR = 2,
		HAPI_CURVE_ORDER_QUADRATIC = 3,
		HAPI_CURVE_ORDER_CUBIC = 4,
	};
}

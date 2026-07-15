#pragma once
#include "unitysdk/unitysdk.h"

namespace HoudiniEngineUnity
{
	inline static constexpr unsigned int HAPI_TransformComponent_TypeDefinitionIndex = 38319;

	enum class HAPI_TransformComponent : ::System::Int32
	{
		HAPI_TRANSFORM_TX = 0,
		HAPI_TRANSFORM_TY = 1,
		HAPI_TRANSFORM_TZ = 2,
		HAPI_TRANSFORM_RX = 3,
		HAPI_TRANSFORM_RY = 4,
		HAPI_TRANSFORM_RZ = 5,
		HAPI_TRANSFORM_QX = 6,
		HAPI_TRANSFORM_QY = 7,
		HAPI_TRANSFORM_QZ = 8,
		HAPI_TRANSFORM_QW = 9,
		HAPI_TRANSFORM_SX = 10,
		HAPI_TRANSFORM_SY = 11,
		HAPI_TRANSFORM_SZ = 12,
	};
}

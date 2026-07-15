#pragma once
#include "unitysdk/unitysdk.h"

namespace HoudiniEngineUnity
{
	inline static constexpr unsigned int HAPI_RampType_TypeDefinitionIndex = 38299;

	enum class HAPI_RampType : ::System::Int32
	{
		HAPI_RAMPTYPE_INVALID = -1,
		HAPI_RAMPTYPE_FLOAT = 0,
		HAPI_RAMPTYPE_COLOR = 1,
		HAPI_RAMPTYPE_MAX = 2,
	};
}

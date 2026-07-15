#pragma once
#include "unitysdk/unitysdk.h"

namespace HoudiniEngineUnity
{
	inline static constexpr unsigned int HAPI_GeoType_TypeDefinitionIndex = 38315;

	enum class HAPI_GeoType : ::System::Int32
	{
		HAPI_GEOTYPE_INVALID = -1,
		HAPI_GEOTYPE_DEFAULT = 0,
		HAPI_GEOTYPE_INTERMEDIATE = 1,
		HAPI_GEOTYPE_INPUT = 2,
		HAPI_GEOTYPE_CURVE = 3,
		HAPI_GEOTYPE_MAX = 4,
	};
}

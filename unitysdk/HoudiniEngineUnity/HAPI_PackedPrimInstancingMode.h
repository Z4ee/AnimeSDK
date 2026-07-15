#pragma once
#include "unitysdk/unitysdk.h"

namespace HoudiniEngineUnity
{
	inline static constexpr unsigned int HAPI_PackedPrimInstancingMode_TypeDefinitionIndex = 38297;

	enum class HAPI_PackedPrimInstancingMode : ::System::Int32
	{
		HAPI_PACKEDPRIM_INSTANCING_MODE_INVALID = -1,
		HAPI_PACKEDPRIM_INSTANCING_MODE_DISABLED = 0,
		HAPI_PACKEDPRIM_INSTANCING_MODE_HIERARCHY = 1,
		HAPI_PACKEDPRIM_INSTANCING_MODE_FLAT = 2,
		HAPI_PACKEDPRIM_INSTANCING_MODE_MAX = 3,
	};
}

#pragma once
#include "unitysdk/unitysdk.h"

namespace HoudiniEngineUnity
{
	inline static constexpr unsigned int HAPI_PartType_TypeDefinitionIndex = 38316;

	enum class HAPI_PartType : ::System::Int32
	{
		HAPI_PARTTYPE_INVALID = -1,
		HAPI_PARTTYPE_MESH = 0,
		HAPI_PARTTYPE_CURVE = 1,
		HAPI_PARTTYPE_VOLUME = 2,
		HAPI_PARTTYPE_INSTANCER = 3,
		HAPI_PARTTYPE_BOX = 4,
		HAPI_PARTTYPE_SPHERE = 5,
		HAPI_PARTTYPE_MAX = 6,
	};
}

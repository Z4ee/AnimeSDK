#pragma once
#include "unitysdk/unitysdk.h"

namespace HoudiniEngineUnity
{
	inline static constexpr unsigned int HAPI_VolumeType_TypeDefinitionIndex = 38311;

	enum class HAPI_VolumeType : ::System::Int32
	{
		HAPI_VOLUMETYPE_INVALID = -1,
		HAPI_VOLUMETYPE_HOUDINI = 0,
		HAPI_VOLUMETYPE_VDB = 1,
		HAPI_VOLUMETYPE_MAX = 2,
	};
}

#pragma once
#include "unitysdk/unitysdk.h"

namespace HoudiniEngineUnity
{
	inline static constexpr unsigned int HAPI_VolumeVisualType_TypeDefinitionIndex = 38312;

	enum class HAPI_VolumeVisualType : ::System::Int32
	{
		HAPI_VOLUMEVISTYPE_INVALID = -1,
		HAPI_VOLUMEVISTYPE_SMOKE = 0,
		HAPI_VOLUMEVISTYPE_RAINBOW = 1,
		HAPI_VOLUMEVISTYPE_ISO = 2,
		HAPI_VOLUMEVISTYPE_INVISIBLE = 3,
		HAPI_VOLUMEVISTYPE_HEIGHTFIELD = 4,
		HAPI_VOLUMEVISTYPE_MAX = 5,
	};
}

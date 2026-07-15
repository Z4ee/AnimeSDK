#pragma once
#include "unitysdk/unitysdk.h"

namespace HoudiniEngineUnity
{
	inline static constexpr unsigned int HAPI_ImagePacking_TypeDefinitionIndex = 38323;

	enum class HAPI_ImagePacking : ::System::Int32
	{
		HAPI_IMAGE_PACKING_UNKNOWN = -1,
		HAPI_IMAGE_PACKING_SINGLE = 0,
		HAPI_IMAGE_PACKING_DUAL = 1,
		HAPI_IMAGE_PACKING_RGB = 2,
		HAPI_IMAGE_PACKING_BGR = 3,
		HAPI_IMAGE_PACKING_RGBA = 4,
		HAPI_IMAGE_PACKING_ABGR = 5,
		HAPI_IMAGE_PACKING_MAX = 6,
		HAPI_IMAGE_PACKING_DEFAULT3 = 2,
		HAPI_IMAGE_PACKING_DEFAULT4 = 4,
	};
}

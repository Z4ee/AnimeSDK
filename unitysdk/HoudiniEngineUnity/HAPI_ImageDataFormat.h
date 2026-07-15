#pragma once
#include "unitysdk/unitysdk.h"

namespace HoudiniEngineUnity
{
	inline static constexpr unsigned int HAPI_ImageDataFormat_TypeDefinitionIndex = 38322;

	enum class HAPI_ImageDataFormat : ::System::Int32
	{
		HAPI_IMAGE_DATA_UNKNOWN = -1,
		HAPI_IMAGE_DATA_INT8 = 0,
		HAPI_IMAGE_DATA_INT16 = 1,
		HAPI_IMAGE_DATA_INT32 = 2,
		HAPI_IMAGE_DATA_FLOAT16 = 3,
		HAPI_IMAGE_DATA_FLOAT32 = 4,
		HAPI_IMAGE_DATA_MAX = 5,
		HAPI_IMAGE_DATA_DEFAULT = 0,
	};
}

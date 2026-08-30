#pragma once
#include "unitysdk/unitysdk.h"

namespace HoudiniEngineUnity
{
	inline static constexpr unsigned int HAPI_HeightFieldSampling_TypeDefinitionIndex = 39186;

	enum class HAPI_HeightFieldSampling : ::System::Int32
	{
		HAPI_HEIGHTFIELD_SAMPLING_CENTER = 0,
		HAPI_HEIGHTFIELD_SAMPLING_CORNER = 1,
	};
}

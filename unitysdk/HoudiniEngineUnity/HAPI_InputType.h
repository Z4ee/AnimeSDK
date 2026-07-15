#pragma once
#include "unitysdk/unitysdk.h"

namespace HoudiniEngineUnity
{
	inline static constexpr unsigned int HAPI_InputType_TypeDefinitionIndex = 38317;

	enum class HAPI_InputType : ::System::Int32
	{
		HAPI_INPUT_INVALID = -1,
		HAPI_INPUT_TRANSFORM = 0,
		HAPI_INPUT_GEOMETRY = 1,
		HAPI_INPUT_MAX = 2,
	};
}

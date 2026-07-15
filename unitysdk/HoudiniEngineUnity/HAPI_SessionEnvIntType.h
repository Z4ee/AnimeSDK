#pragma once
#include "unitysdk/unitysdk.h"

namespace HoudiniEngineUnity
{
	inline static constexpr unsigned int HAPI_SessionEnvIntType_TypeDefinitionIndex = 38325;

	enum class HAPI_SessionEnvIntType : ::System::Int32
	{
		HAPI_SESSIONENVINT_INVALID = -1,
		HAPI_SESSIONENVINT_LICENSE = 100,
		HAPI_SESSIONENVINT_MAX = 101,
	};
}

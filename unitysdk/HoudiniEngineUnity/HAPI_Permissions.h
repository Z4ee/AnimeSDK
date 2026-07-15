#pragma once
#include "unitysdk/unitysdk.h"

namespace HoudiniEngineUnity
{
	inline static constexpr unsigned int HAPI_Permissions_TypeDefinitionIndex = 38298;

	enum class HAPI_Permissions : ::System::Int32
	{
		HAPI_PERMISSIONS_NON_APPLICABLE = 0,
		HAPI_PERMISSIONS_READ_WRITE = 1,
		HAPI_PERMISSIONS_READ_ONLY = 2,
		HAPI_PERMISSIONS_WRITE_ONLY = 3,
		HAPI_PERMISSIONS_MAX = 4,
	};
}

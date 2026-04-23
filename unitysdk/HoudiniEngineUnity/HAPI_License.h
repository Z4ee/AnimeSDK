#pragma once
#include "unitysdk/unitysdk.h"

namespace HoudiniEngineUnity
{
	inline static constexpr unsigned int HAPI_License_TypeDefinitionIndex = 43546;

	enum class HAPI_License : ::System::Int32
	{
		HAPI_LICENSE_NONE = 0,
		HAPI_LICENSE_HOUDINI_ENGINE = 1,
		HAPI_LICENSE_HOUDINI = 2,
		HAPI_LICENSE_HOUDINI_FX = 3,
		HAPI_LICENSE_HOUDINI_ENGINE_INDIE = 4,
		HAPI_LICENSE_HOUDINI_INDIE = 5,
		HAPI_LICENSE_MAX = 6,
	};
}

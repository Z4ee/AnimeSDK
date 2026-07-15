#pragma once
#include "unitysdk/unitysdk.h"

namespace HoudiniEngineUnity
{
	inline static constexpr unsigned int HAPI_StatusVerbosity_TypeDefinitionIndex = 38291;

	enum class HAPI_StatusVerbosity : ::System::Int32
	{
		HAPI_STATUSVERBOSITY_0 = 0,
		HAPI_STATUSVERBOSITY_1 = 1,
		HAPI_STATUSVERBOSITY_2 = 2,
		HAPI_STATUSVERBOSITY_ALL = 2,
		HAPI_STATUSVERBOSITY_ERRORS = 0,
		HAPI_STATUSVERBOSITY_WARNINGS = 1,
		HAPI_STATUSVERBOSITY_MESSAGES = 2,
	};
}

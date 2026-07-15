#pragma once
#include "unitysdk/unitysdk.h"

namespace HoudiniEngineUnity
{
	inline static constexpr unsigned int HAPI_State_TypeDefinitionIndex = 38296;

	enum class HAPI_State : ::System::Int32
	{
		HAPI_STATE_READY = 0,
		HAPI_STATE_READY_WITH_FATAL_ERRORS = 1,
		HAPI_STATE_READY_WITH_COOK_ERRORS = 2,
		HAPI_STATE_STARTING_COOK = 3,
		HAPI_STATE_COOKING = 4,
		HAPI_STATE_STARTING_LOAD = 5,
		HAPI_STATE_LOADING = 6,
		HAPI_STATE_MAX = 7,
		HAPI_STATE_MAX_READY_STATE = 2,
	};
}

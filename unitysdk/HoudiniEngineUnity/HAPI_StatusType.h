#pragma once
#include "unitysdk/unitysdk.h"

namespace HoudiniEngineUnity
{
	inline static constexpr unsigned int HAPI_StatusType_TypeDefinitionIndex = 38290;

	enum class HAPI_StatusType : ::System::Int32
	{
		HAPI_STATUS_CALL_RESULT = 0,
		HAPI_STATUS_COOK_RESULT = 1,
		HAPI_STATUS_COOK_STATE = 2,
		HAPI_STATUS_MAX = 3,
	};
}

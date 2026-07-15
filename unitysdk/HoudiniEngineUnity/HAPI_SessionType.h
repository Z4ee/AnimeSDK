#pragma once
#include "unitysdk/unitysdk.h"

namespace HoudiniEngineUnity
{
	inline static constexpr unsigned int HAPI_SessionType_TypeDefinitionIndex = 38295;

	enum class HAPI_SessionType : ::System::Int32
	{
		HAPI_SESSION_INPROCESS = 0,
		HAPI_SESSION_THRIFT = 1,
		HAPI_SESSION_CUSTOM1 = 2,
		HAPI_SESSION_CUSTOM2 = 3,
		HAPI_SESSION_CUSTOM3 = 4,
		HAPI_SESSION_MAX = 5,
	};
}

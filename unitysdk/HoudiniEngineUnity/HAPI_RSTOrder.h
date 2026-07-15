#pragma once
#include "unitysdk/unitysdk.h"

namespace HoudiniEngineUnity
{
	inline static constexpr unsigned int HAPI_RSTOrder_TypeDefinitionIndex = 38320;

	enum class HAPI_RSTOrder : ::System::Int32
	{
		HAPI_TRS = 0,
		HAPI_TSR = 1,
		HAPI_RTS = 2,
		HAPI_RST = 3,
		HAPI_STR = 4,
		HAPI_SRT = 5,
		HAPI_RSTORDER_DEFAULT = 5,
	};
}

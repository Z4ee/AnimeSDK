#pragma once
#include "unitysdk/unitysdk.h"

namespace HoudiniEngineUnity
{
	inline static constexpr unsigned int HAPI_GroupType_TypeDefinitionIndex = 38306;

	enum class HAPI_GroupType : ::System::Int32
	{
		HAPI_GROUPTYPE_INVALID = -1,
		HAPI_GROUPTYPE_POINT = 0,
		HAPI_GROUPTYPE_PRIM = 1,
		HAPI_GROUPTYPE_EDGE = 2,
		HAPI_GROUPTYPE_MAX = 3,
	};
}

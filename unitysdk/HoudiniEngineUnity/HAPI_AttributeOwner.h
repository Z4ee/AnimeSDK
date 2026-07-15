#pragma once
#include "unitysdk/unitysdk.h"

namespace HoudiniEngineUnity
{
	inline static constexpr unsigned int HAPI_AttributeOwner_TypeDefinitionIndex = 38307;

	enum class HAPI_AttributeOwner : ::System::Int32
	{
		HAPI_ATTROWNER_INVALID = -1,
		HAPI_ATTROWNER_VERTEX = 0,
		HAPI_ATTROWNER_POINT = 1,
		HAPI_ATTROWNER_PRIM = 2,
		HAPI_ATTROWNER_DETAIL = 3,
		HAPI_ATTROWNER_MAX = 4,
	};
}

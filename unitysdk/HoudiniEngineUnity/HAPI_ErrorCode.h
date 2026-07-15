#pragma once
#include "unitysdk/unitysdk.h"

namespace HoudiniEngineUnity
{
	inline static constexpr unsigned int HAPI_ErrorCode_TypeDefinitionIndex = 38294;

	enum class HAPI_ErrorCode : ::System::Int32
	{
		HAPI_ERRORCODE_ASSET_DEF_NOT_FOUND = 1,
		HAPI_ERRORCODE_PYTHON_NODE_ERROR = 2,
	};
}

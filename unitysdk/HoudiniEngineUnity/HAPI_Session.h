#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/HoudiniEngineUnity/HAPI_SessionType.h"
#include "unitysdk/System/ValueType.h"

namespace HoudiniEngineUnity
{
	inline static constexpr unsigned int HAPI_Session_TypeDefinitionIndex = 38336;

	struct alignas(8) HAPI_Session
	{
		::HoudiniEngineUnity::HAPI_SessionType type; // 0x10
		::System::Int64 id; // 0x18
	};
}

#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace HoudiniEngineUnity
{
	inline static constexpr unsigned int HAPI_SessionSyncInfo_TypeDefinitionIndex = 38366;

	struct alignas(1) HAPI_SessionSyncInfo
	{
		::System::Boolean cookUsingHoudiniTime; // 0x10
		::System::Boolean syncViewport; // 0x11
	};
}

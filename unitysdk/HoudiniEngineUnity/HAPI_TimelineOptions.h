#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace HoudiniEngineUnity
{
	inline static constexpr unsigned int HAPI_TimelineOptions_TypeDefinitionIndex = 37711;

	struct alignas(4) HAPI_TimelineOptions
	{
		::System::Single fps; // 0x10
		::System::Single startTime; // 0x14
		::System::Single endTime; // 0x18
	};
}

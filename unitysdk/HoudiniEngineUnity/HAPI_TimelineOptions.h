#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace HoudiniEngineUnity
{
	inline static constexpr unsigned int HAPI_TimelineOptions_TypeDefinitionIndex = 38339;

	struct alignas(8) HAPI_TimelineOptions
	{
		::System::Double fps; // 0x10
		::System::Double startTime; // 0x18
		::System::Double endTime; // 0x20
	};
}

#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace System { class String; }

#define PROFILINGRECORDER_SYSTEMTIMERECORDER_SYSTEMAVERAGEENTRY_TOJSON_OFFSET UNITYSDK_OFFSET(0x90D9E0)

namespace ProfilingRecorder
{
	inline static constexpr unsigned int SystemTimeRecorder_SystemAverageEntry_TypeDefinitionIndex = 37323;

	struct alignas(8) SystemTimeRecorder_SystemAverageEntry
	{
		::System::String* SystemName; // 0x10
		::System::Double TotalElapsedMs; // 0x18
		::System::Int32 CallCount; // 0x20
		::System::Double AverageMs; // 0x28

		::System::String* ToJson()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + PROFILINGRECORDER_SYSTEMTIMERECORDER_SYSTEMAVERAGEENTRY_TOJSON_OFFSET))(this);
		}
	};
}

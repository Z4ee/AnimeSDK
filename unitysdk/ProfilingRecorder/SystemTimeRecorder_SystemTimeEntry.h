#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace System { class String; }

#define PROFILINGRECORDER_SYSTEMTIMERECORDER_SYSTEMTIMEENTRY_GET_AVERAGEMS_OFFSET UNITYSDK_OFFSET(0x90DBD0)
#define PROFILINGRECORDER_SYSTEMTIMERECORDER_SYSTEMTIMEENTRY_TOJSON_OFFSET UNITYSDK_OFFSET(0x90DC80)

namespace ProfilingRecorder
{
	inline static constexpr unsigned int SystemTimeRecorder_SystemTimeEntry_TypeDefinitionIndex = 37325;

	struct alignas(8) SystemTimeRecorder_SystemTimeEntry
	{
		::System::String* SystemName; // 0x10
		::System::Int64 StartTicks; // 0x18
		::System::Int64 EndTicks; // 0x20
		::System::Double ElapsedMs; // 0x28
		::System::Int32 CallCount; // 0x30

		::System::Double get_AverageMs()
		{
			return ((::System::Double(*)(::PVOID))((::PBYTE)hIl2Cpp + PROFILINGRECORDER_SYSTEMTIMERECORDER_SYSTEMTIMEENTRY_GET_AVERAGEMS_OFFSET))(this);
		}

		::System::String* ToJson()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + PROFILINGRECORDER_SYSTEMTIMERECORDER_SYSTEMTIMEENTRY_TOJSON_OFFSET))(this);
		}
	};
}

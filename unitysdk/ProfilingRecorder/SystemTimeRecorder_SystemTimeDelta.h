#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/ProfilingRecorder/SystemTimeRecorder_SystemAverageEntry.h"
#include "unitysdk/System/TimeSpan.h"
#include "unitysdk/System/ValueType.h"

namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define PROFILINGRECORDER_SYSTEMTIMERECORDER_SYSTEMTIMEDELTA_TOJSON_OFFSET UNITYSDK_OFFSET(0x90DAA0)
#define PROFILINGRECORDER_SYSTEMTIMERECORDER_SYSTEMTIMEDELTA_TOSTRING_OFFSET UNITYSDK_OFFSET(0x90DA10)
#define PROFILINGRECORDER_SYSTEMTIMERECORDER_SYSTEMTIMEDELTA___BASE_TOSTRING_OFFSET UNITYSDK_OFFSET(0x90DAB0)

namespace ProfilingRecorder
{
	inline static constexpr unsigned int SystemTimeRecorder_SystemTimeDelta_TypeDefinitionIndex = 37324;

	struct alignas(8) SystemTimeRecorder_SystemTimeDelta
	{
		::System::Collections::Generic::Dictionary_2<::System::String*, ::ProfilingRecorder::SystemTimeRecorder_SystemAverageEntry>* SystemAverages; // 0x10
		::System::Double TotalElapsedMs; // 0x18
		::System::Double TotalAverageMs; // 0x20
		::System::Int32 TotalCallCount; // 0x28
		::System::TimeSpan Duration; // 0x30

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + PROFILINGRECORDER_SYSTEMTIMERECORDER_SYSTEMTIMEDELTA_TOSTRING_OFFSET))(this);
		}

		::System::String* ToJson()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + PROFILINGRECORDER_SYSTEMTIMERECORDER_SYSTEMTIMEDELTA_TOJSON_OFFSET))(this);
		}

		::System::String* __base_ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + PROFILINGRECORDER_SYSTEMTIMERECORDER_SYSTEMTIMEDELTA___BASE_TOSTRING_OFFSET))(this);
		}
	};
}

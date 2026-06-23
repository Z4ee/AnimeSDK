#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/ProfilingRecorder/SystemTimeRecorder_SystemTimeDelta.h"
#include "unitysdk/ProfilingRecorder/SystemTimeRecorder_SystemTimeEntry.h"
#include "unitysdk/System/DateTime.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Diagnostics { class Stopwatch; }

#define PROFILINGRECORDER_SYSTEMTIMERECORDER_END_OFFSET UNITYSDK_OFFSET(0x1B30C3A0)
#define PROFILINGRECORDER_SYSTEMTIMERECORDER_PROFILINGRECORDER_IPROFILERRECORDER_END_OFFSET UNITYSDK_OFFSET(0x1B30C910)
#define PROFILINGRECORDER_SYSTEMTIMERECORDER__CTOR_OFFSET UNITYSDK_OFFSET(0x1B30C960)

namespace ProfilingRecorder
{
	inline static constexpr unsigned int SystemTimeRecorder_TypeDefinitionIndex = 37322;

	class SystemTimeRecorder : public ::System::Object
	{
	public:
		::System::Collections::Generic::Dictionary_2<::System::String*, ::ProfilingRecorder::SystemTimeRecorder_SystemTimeEntry>* _systemTimes; // 0x10
		::System::Diagnostics::Stopwatch* _stopwatch; // 0x18
		::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Int64>* _pendingStarts; // 0x20
		::System::Boolean _isRecording; // 0x28
		::System::DateTime _recordStartTime; // 0x30

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PROFILINGRECORDER_SYSTEMTIMERECORDER__CTOR_OFFSET))(this);
		}

		::ProfilingRecorder::SystemTimeRecorder_SystemTimeDelta End()
		{
			return ((::ProfilingRecorder::SystemTimeRecorder_SystemTimeDelta(*)(::PVOID))((::PBYTE)hIl2Cpp + PROFILINGRECORDER_SYSTEMTIMERECORDER_END_OFFSET))(this);
		}

		::System::Void ProfilingRecorder_IProfilerRecorder_End()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PROFILINGRECORDER_SYSTEMTIMERECORDER_PROFILINGRECORDER_IPROFILERRECORDER_END_OFFSET))(this);
		}
	};
}

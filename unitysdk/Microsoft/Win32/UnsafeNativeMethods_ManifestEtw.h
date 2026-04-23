#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Microsoft/Win32/UnsafeNativeMethods_ManifestEtw_ActivityControl.h"
#include "unitysdk/Microsoft/Win32/UnsafeNativeMethods_ManifestEtw_EVENT_INFO_CLASS.h"
#include "unitysdk/Microsoft/Win32/UnsafeNativeMethods_ManifestEtw_TRACE_QUERY_INFO_CLASS.h"
#include "unitysdk/System/Diagnostics/Tracing/EventDescriptor.h"
#include "unitysdk/System/Diagnostics/Tracing/EventProvider_EventData.h"
#include "unitysdk/System/Guid.h"
#include "unitysdk/System/Object.h"

namespace Microsoft::Win32 { class UnsafeNativeMethods_ManifestEtw_EtwEnableCallback; }

#define MICROSOFT_WIN32_UNSAFENATIVEMETHODS_MANIFESTETW_ENUMERATETRACEGUIDSEX_OFFSET UNITYSDK_OFFSET(0x1778E6A0)
#define MICROSOFT_WIN32_UNSAFENATIVEMETHODS_MANIFESTETW_EVENTACTIVITYIDCONTROL_OFFSET UNITYSDK_OFFSET(0x1778E570)
#define MICROSOFT_WIN32_UNSAFENATIVEMETHODS_MANIFESTETW_EVENTREGISTER_OFFSET UNITYSDK_OFFSET(0x1778E230)
#define MICROSOFT_WIN32_UNSAFENATIVEMETHODS_MANIFESTETW_EVENTSETINFORMATION_OFFSET UNITYSDK_OFFSET(0x1778E600)
#define MICROSOFT_WIN32_UNSAFENATIVEMETHODS_MANIFESTETW_EVENTUNREGISTER_OFFSET UNITYSDK_OFFSET(0x1778E2D0)
#define MICROSOFT_WIN32_UNSAFENATIVEMETHODS_MANIFESTETW_EVENTWRITETRANSFERWRAPPER_OFFSET UNITYSDK_OFFSET(0x1778E350)
#define MICROSOFT_WIN32_UNSAFENATIVEMETHODS_MANIFESTETW_EVENTWRITETRANSFER_OFFSET UNITYSDK_OFFSET(0x1778E4B0)

namespace Microsoft::Win32
{
	inline static constexpr unsigned int UnsafeNativeMethods_ManifestEtw_TypeDefinitionIndex = 92;

	class UnsafeNativeMethods_ManifestEtw : public ::System::Object
	{
	public:
		static ::System::UInt32 EventRegister(::System::Guid& providerId, ::Microsoft::Win32::UnsafeNativeMethods_ManifestEtw_EtwEnableCallback* enableCallback, ::System::Void* callbackContext, ::System::Int64& registrationHandle)
		{
			return ((::System::UInt32(*)(::System::Guid&, ::Microsoft::Win32::UnsafeNativeMethods_ManifestEtw_EtwEnableCallback*, ::System::Void*, ::System::Int64&))((::PBYTE)hIl2Cpp + MICROSOFT_WIN32_UNSAFENATIVEMETHODS_MANIFESTETW_EVENTREGISTER_OFFSET))(providerId, enableCallback, callbackContext, registrationHandle);
		}

		static ::System::UInt32 EventUnregister(::System::Int64 registrationHandle)
		{
			return ((::System::UInt32(*)(::System::Int64))((::PBYTE)hIl2Cpp + MICROSOFT_WIN32_UNSAFENATIVEMETHODS_MANIFESTETW_EVENTUNREGISTER_OFFSET))(registrationHandle);
		}

		static ::System::Int32 EventWriteTransferWrapper(::System::Int64 registrationHandle, ::System::Diagnostics::Tracing::EventDescriptor& eventDescriptor, ::System::Guid* activityId, ::System::Guid* relatedActivityId, ::System::Int32 userDataCount, ::System::Diagnostics::Tracing::EventProvider_EventData* userData)
		{
			return ((::System::Int32(*)(::System::Int64, ::System::Diagnostics::Tracing::EventDescriptor&, ::System::Guid*, ::System::Guid*, ::System::Int32, ::System::Diagnostics::Tracing::EventProvider_EventData*))((::PBYTE)hIl2Cpp + MICROSOFT_WIN32_UNSAFENATIVEMETHODS_MANIFESTETW_EVENTWRITETRANSFERWRAPPER_OFFSET))(registrationHandle, eventDescriptor, activityId, relatedActivityId, userDataCount, userData);
		}

		static ::System::Int32 EventWriteTransfer(::System::Int64 registrationHandle, ::System::Diagnostics::Tracing::EventDescriptor& eventDescriptor, ::System::Guid* activityId, ::System::Guid* relatedActivityId, ::System::Int32 userDataCount, ::System::Diagnostics::Tracing::EventProvider_EventData* userData)
		{
			return ((::System::Int32(*)(::System::Int64, ::System::Diagnostics::Tracing::EventDescriptor&, ::System::Guid*, ::System::Guid*, ::System::Int32, ::System::Diagnostics::Tracing::EventProvider_EventData*))((::PBYTE)hIl2Cpp + MICROSOFT_WIN32_UNSAFENATIVEMETHODS_MANIFESTETW_EVENTWRITETRANSFER_OFFSET))(registrationHandle, eventDescriptor, activityId, relatedActivityId, userDataCount, userData);
		}

		static ::System::Int32 EventActivityIdControl(::Microsoft::Win32::UnsafeNativeMethods_ManifestEtw_ActivityControl ControlCode, ::System::Guid& ActivityId)
		{
			return ((::System::Int32(*)(::Microsoft::Win32::UnsafeNativeMethods_ManifestEtw_ActivityControl, ::System::Guid&))((::PBYTE)hIl2Cpp + MICROSOFT_WIN32_UNSAFENATIVEMETHODS_MANIFESTETW_EVENTACTIVITYIDCONTROL_OFFSET))(ControlCode, ActivityId);
		}

		static ::System::Int32 EventSetInformation(::System::Int64 registrationHandle, ::Microsoft::Win32::UnsafeNativeMethods_ManifestEtw_EVENT_INFO_CLASS informationClass, ::System::Void* eventInformation, ::System::Int32 informationLength)
		{
			return ((::System::Int32(*)(::System::Int64, ::Microsoft::Win32::UnsafeNativeMethods_ManifestEtw_EVENT_INFO_CLASS, ::System::Void*, ::System::Int32))((::PBYTE)hIl2Cpp + MICROSOFT_WIN32_UNSAFENATIVEMETHODS_MANIFESTETW_EVENTSETINFORMATION_OFFSET))(registrationHandle, informationClass, eventInformation, informationLength);
		}

		static ::System::Int32 EnumerateTraceGuidsEx(::Microsoft::Win32::UnsafeNativeMethods_ManifestEtw_TRACE_QUERY_INFO_CLASS TraceQueryInfoClass, ::System::Void* InBuffer, ::System::Int32 InBufferSize, ::System::Void* OutBuffer, ::System::Int32 OutBufferSize, ::System::Int32& ReturnLength)
		{
			return ((::System::Int32(*)(::Microsoft::Win32::UnsafeNativeMethods_ManifestEtw_TRACE_QUERY_INFO_CLASS, ::System::Void*, ::System::Int32, ::System::Void*, ::System::Int32, ::System::Int32&))((::PBYTE)hIl2Cpp + MICROSOFT_WIN32_UNSAFENATIVEMETHODS_MANIFESTETW_ENUMERATETRACEGUIDSEX_OFFSET))(TraceQueryInfoClass, InBuffer, InBufferSize, OutBuffer, OutBufferSize, ReturnLength);
		}
	};
}

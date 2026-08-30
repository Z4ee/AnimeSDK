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

#define MICROSOFT_WIN32_UNSAFENATIVEMETHODS_MANIFESTETW_ENUMERATETRACEGUIDSEX_OFFSET UNITYSDK_OFFSET(0x1BB498B0)
#define MICROSOFT_WIN32_UNSAFENATIVEMETHODS_MANIFESTETW_EVENTACTIVITYIDCONTROL_OFFSET UNITYSDK_OFFSET(0x1BB49780)
#define MICROSOFT_WIN32_UNSAFENATIVEMETHODS_MANIFESTETW_EVENTREGISTER_OFFSET UNITYSDK_OFFSET(0x1BB49440)
#define MICROSOFT_WIN32_UNSAFENATIVEMETHODS_MANIFESTETW_EVENTSETINFORMATION_OFFSET UNITYSDK_OFFSET(0x1BB49810)
#define MICROSOFT_WIN32_UNSAFENATIVEMETHODS_MANIFESTETW_EVENTUNREGISTER_OFFSET UNITYSDK_OFFSET(0x1BB494E0)
#define MICROSOFT_WIN32_UNSAFENATIVEMETHODS_MANIFESTETW_EVENTWRITETRANSFERWRAPPER_OFFSET UNITYSDK_OFFSET(0x1BB49560)
#define MICROSOFT_WIN32_UNSAFENATIVEMETHODS_MANIFESTETW_EVENTWRITETRANSFER_OFFSET UNITYSDK_OFFSET(0x1BB496C0)

namespace Microsoft::Win32
{
	inline static constexpr unsigned int UnsafeNativeMethods_ManifestEtw_TypeDefinitionIndex = 92;

	class UnsafeNativeMethods_ManifestEtw : public ::System::Object
	{
	public:
		static ::System::UInt32 EventRegister(::System::Guid& a1, ::Microsoft::Win32::UnsafeNativeMethods_ManifestEtw_EtwEnableCallback* a2, ::System::Void* a3, ::System::Int64& a4)
		{
			return ((::System::UInt32(*)(::System::Guid&, ::Microsoft::Win32::UnsafeNativeMethods_ManifestEtw_EtwEnableCallback*, ::System::Void*, ::System::Int64&))((::PBYTE)hIl2Cpp + MICROSOFT_WIN32_UNSAFENATIVEMETHODS_MANIFESTETW_EVENTREGISTER_OFFSET))(a1, a2, a3, a4);
		}

		static ::System::UInt32 EventUnregister(::System::Int64 a1)
		{
			return ((::System::UInt32(*)(::System::Int64))((::PBYTE)hIl2Cpp + MICROSOFT_WIN32_UNSAFENATIVEMETHODS_MANIFESTETW_EVENTUNREGISTER_OFFSET))(a1);
		}

		static ::System::Int32 EventWriteTransferWrapper(::System::Int64 a1, ::System::Diagnostics::Tracing::EventDescriptor& a2, ::System::Guid* a3, ::System::Guid* a4, ::System::Int32 a5, ::System::Diagnostics::Tracing::EventProvider_EventData* a6)
		{
			return ((::System::Int32(*)(::System::Int64, ::System::Diagnostics::Tracing::EventDescriptor&, ::System::Guid*, ::System::Guid*, ::System::Int32, ::System::Diagnostics::Tracing::EventProvider_EventData*))((::PBYTE)hIl2Cpp + MICROSOFT_WIN32_UNSAFENATIVEMETHODS_MANIFESTETW_EVENTWRITETRANSFERWRAPPER_OFFSET))(a1, a2, a3, a4, a5, a6);
		}

		static ::System::Int32 EventWriteTransfer(::System::Int64 a1, ::System::Diagnostics::Tracing::EventDescriptor& a2, ::System::Guid* a3, ::System::Guid* a4, ::System::Int32 a5, ::System::Diagnostics::Tracing::EventProvider_EventData* a6)
		{
			return ((::System::Int32(*)(::System::Int64, ::System::Diagnostics::Tracing::EventDescriptor&, ::System::Guid*, ::System::Guid*, ::System::Int32, ::System::Diagnostics::Tracing::EventProvider_EventData*))((::PBYTE)hIl2Cpp + MICROSOFT_WIN32_UNSAFENATIVEMETHODS_MANIFESTETW_EVENTWRITETRANSFER_OFFSET))(a1, a2, a3, a4, a5, a6);
		}

		static ::System::Int32 EventActivityIdControl(::Microsoft::Win32::UnsafeNativeMethods_ManifestEtw_ActivityControl a1, ::System::Guid& a2)
		{
			return ((::System::Int32(*)(::Microsoft::Win32::UnsafeNativeMethods_ManifestEtw_ActivityControl, ::System::Guid&))((::PBYTE)hIl2Cpp + MICROSOFT_WIN32_UNSAFENATIVEMETHODS_MANIFESTETW_EVENTACTIVITYIDCONTROL_OFFSET))(a1, a2);
		}

		static ::System::Int32 EventSetInformation(::System::Int64 a1, ::Microsoft::Win32::UnsafeNativeMethods_ManifestEtw_EVENT_INFO_CLASS a2, ::System::Void* a3, ::System::Int32 a4)
		{
			return ((::System::Int32(*)(::System::Int64, ::Microsoft::Win32::UnsafeNativeMethods_ManifestEtw_EVENT_INFO_CLASS, ::System::Void*, ::System::Int32))((::PBYTE)hIl2Cpp + MICROSOFT_WIN32_UNSAFENATIVEMETHODS_MANIFESTETW_EVENTSETINFORMATION_OFFSET))(a1, a2, a3, a4);
		}

		static ::System::Int32 EnumerateTraceGuidsEx(::Microsoft::Win32::UnsafeNativeMethods_ManifestEtw_TRACE_QUERY_INFO_CLASS a1, ::System::Void* a2, ::System::Int32 a3, ::System::Void* a4, ::System::Int32 a5, ::System::Int32& a6)
		{
			return ((::System::Int32(*)(::Microsoft::Win32::UnsafeNativeMethods_ManifestEtw_TRACE_QUERY_INFO_CLASS, ::System::Void*, ::System::Int32, ::System::Void*, ::System::Int32, ::System::Int32&))((::PBYTE)hIl2Cpp + MICROSOFT_WIN32_UNSAFENATIVEMETHODS_MANIFESTETW_ENUMERATETRACEGUIDSEX_OFFSET))(a1, a2, a3, a4, a5, a6);
		}
	};
}

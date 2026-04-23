#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Microsoft/Win32/UnsafeNativeMethods_ManifestEtw_EVENT_FILTER_DESCRIPTOR.h"
#include "unitysdk/System/Guid.h"
#include "unitysdk/System/MulticastDelegate.h"

namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }

#define MICROSOFT_WIN32_UNSAFENATIVEMETHODS_MANIFESTETW_ETWENABLECALLBACK_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x1778EC20)
#define MICROSOFT_WIN32_UNSAFENATIVEMETHODS_MANIFESTETW_ETWENABLECALLBACK_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x1778ED00)
#define MICROSOFT_WIN32_UNSAFENATIVEMETHODS_MANIFESTETW_ETWENABLECALLBACK_INVOKE_OFFSET UNITYSDK_OFFSET(0x1778E780)
#define MICROSOFT_WIN32_UNSAFENATIVEMETHODS_MANIFESTETW_ETWENABLECALLBACK__CTOR_OFFSET UNITYSDK_OFFSET(0x1778E760)

namespace Microsoft::Win32
{
	inline static constexpr unsigned int UnsafeNativeMethods_ManifestEtw_EtwEnableCallback_TypeDefinitionIndex = 93;

	class UnsafeNativeMethods_ManifestEtw_EtwEnableCallback : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* object, ::System::IntPtr method)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + MICROSOFT_WIN32_UNSAFENATIVEMETHODS_MANIFESTETW_ETWENABLECALLBACK__CTOR_OFFSET))(this, object, method);
		}

		::System::Void Invoke(::System::Guid& sourceId, ::System::Int32 isEnabled, ::System::Byte level, ::System::Int64 matchAnyKeywords, ::System::Int64 matchAllKeywords, ::Microsoft::Win32::UnsafeNativeMethods_ManifestEtw_EVENT_FILTER_DESCRIPTOR* filterData, ::System::Void* callbackContext)
		{
			return ((::System::Void(*)(::PVOID, ::System::Guid&, ::System::Int32, ::System::Byte, ::System::Int64, ::System::Int64, ::Microsoft::Win32::UnsafeNativeMethods_ManifestEtw_EVENT_FILTER_DESCRIPTOR*, ::System::Void*))((::PBYTE)hIl2Cpp + MICROSOFT_WIN32_UNSAFENATIVEMETHODS_MANIFESTETW_ETWENABLECALLBACK_INVOKE_OFFSET))(this, sourceId, isEnabled, level, matchAnyKeywords, matchAllKeywords, filterData, callbackContext);
		}

		::System::IAsyncResult* BeginInvoke(::System::Guid& sourceId, ::System::Int32 isEnabled, ::System::Byte level, ::System::Int64 matchAnyKeywords, ::System::Int64 matchAllKeywords, ::Microsoft::Win32::UnsafeNativeMethods_ManifestEtw_EVENT_FILTER_DESCRIPTOR* filterData, ::System::Void* callbackContext, ::System::AsyncCallback* callback, ::System::Object* object)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::System::Guid&, ::System::Int32, ::System::Byte, ::System::Int64, ::System::Int64, ::Microsoft::Win32::UnsafeNativeMethods_ManifestEtw_EVENT_FILTER_DESCRIPTOR*, ::System::Void*, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + MICROSOFT_WIN32_UNSAFENATIVEMETHODS_MANIFESTETW_ETWENABLECALLBACK_BEGININVOKE_OFFSET))(this, sourceId, isEnabled, level, matchAnyKeywords, matchAllKeywords, filterData, callbackContext, callback, object);
		}

		::System::Void EndInvoke(::System::Guid& sourceId, ::System::IAsyncResult* result)
		{
			return ((::System::Void(*)(::PVOID, ::System::Guid&, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + MICROSOFT_WIN32_UNSAFENATIVEMETHODS_MANIFESTETW_ETWENABLECALLBACK_ENDINVOKE_OFFSET))(this, sourceId, result);
		}
	};
}

#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Microsoft/Win32/UnsafeNativeMethods_ManifestEtw_EVENT_FILTER_DESCRIPTOR.h"
#include "unitysdk/System/Guid.h"
#include "unitysdk/System/MulticastDelegate.h"

namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }

#define MICROSOFT_WIN32_UNSAFENATIVEMETHODS_MANIFESTETW_ETWENABLECALLBACK_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x16DDE490)
#define MICROSOFT_WIN32_UNSAFENATIVEMETHODS_MANIFESTETW_ETWENABLECALLBACK_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x16DDE570)
#define MICROSOFT_WIN32_UNSAFENATIVEMETHODS_MANIFESTETW_ETWENABLECALLBACK_INVOKE_OFFSET UNITYSDK_OFFSET(0x16DDE450)
#define MICROSOFT_WIN32_UNSAFENATIVEMETHODS_MANIFESTETW_ETWENABLECALLBACK__CTOR_OFFSET UNITYSDK_OFFSET(0x16DDE3D0)

namespace Microsoft::Win32
{
	inline static constexpr unsigned int UnsafeNativeMethods_ManifestEtw_EtwEnableCallback_TypeDefinitionIndex = 93;

	class UnsafeNativeMethods_ManifestEtw_EtwEnableCallback : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* a1, ::System::IntPtr a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + MICROSOFT_WIN32_UNSAFENATIVEMETHODS_MANIFESTETW_ETWENABLECALLBACK__CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void Invoke(::System::Guid& a1, ::System::Int32 a2, ::System::Byte a3, ::System::Int64 a4, ::System::Int64 a5, ::Microsoft::Win32::UnsafeNativeMethods_ManifestEtw_EVENT_FILTER_DESCRIPTOR* a6, ::System::Void* a7)
		{
			return ((::System::Void(*)(::PVOID, ::System::Guid&, ::System::Int32, ::System::Byte, ::System::Int64, ::System::Int64, ::Microsoft::Win32::UnsafeNativeMethods_ManifestEtw_EVENT_FILTER_DESCRIPTOR*, ::System::Void*))((::PBYTE)hIl2Cpp + MICROSOFT_WIN32_UNSAFENATIVEMETHODS_MANIFESTETW_ETWENABLECALLBACK_INVOKE_OFFSET))(this, a1, a2, a3, a4, a5, a6, a7);
		}

		::System::IAsyncResult* BeginInvoke(::System::Guid& a1, ::System::Int32 a2, ::System::Byte a3, ::System::Int64 a4, ::System::Int64 a5, ::Microsoft::Win32::UnsafeNativeMethods_ManifestEtw_EVENT_FILTER_DESCRIPTOR* a6, ::System::Void* a7, ::System::AsyncCallback* a8, ::System::Object* a9)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::System::Guid&, ::System::Int32, ::System::Byte, ::System::Int64, ::System::Int64, ::Microsoft::Win32::UnsafeNativeMethods_ManifestEtw_EVENT_FILTER_DESCRIPTOR*, ::System::Void*, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + MICROSOFT_WIN32_UNSAFENATIVEMETHODS_MANIFESTETW_ETWENABLECALLBACK_BEGININVOKE_OFFSET))(this, a1, a2, a3, a4, a5, a6, a7, a8, a9);
		}

		::System::Void EndInvoke(::System::Guid& a1, ::System::IAsyncResult* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Guid&, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + MICROSOFT_WIN32_UNSAFENATIVEMETHODS_MANIFESTETW_ETWENABLECALLBACK_ENDINVOKE_OFFSET))(this, a1, a2);
		}
	};
}

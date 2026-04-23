#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"

namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }

#define MIHOYO_SDK_HOYOSDKNETWORKNATIVE_HOYONETWORKWRITECALLBACK_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x8D1D1A0)
#define MIHOYO_SDK_HOYOSDKNETWORKNATIVE_HOYONETWORKWRITECALLBACK_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x8D1D250)
#define MIHOYO_SDK_HOYOSDKNETWORKNATIVE_HOYONETWORKWRITECALLBACK_INVOKE_OFFSET UNITYSDK_OFFSET(0x8D1C310)
#define MIHOYO_SDK_HOYOSDKNETWORKNATIVE_HOYONETWORKWRITECALLBACK__CTOR_OFFSET UNITYSDK_OFFSET(0x8D1B5C0)

namespace MiHoYo::SDK
{
	inline static constexpr unsigned int HoYoSDKNetworkNative_HoYoNetworkWriteCallback_TypeDefinitionIndex = 42722;

	class HoYoSDKNetworkNative_HoYoNetworkWriteCallback : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* object, ::System::IntPtr method)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + MIHOYO_SDK_HOYOSDKNETWORKNATIVE_HOYONETWORKWRITECALLBACK__CTOR_OFFSET))(this, object, method);
		}

		::System::UInt64 Invoke(::System::IntPtr buffer, ::System::UInt64 size, ::System::UInt64 nitems, ::System::IntPtr outstream)
		{
			return ((::System::UInt64(*)(::PVOID, ::System::IntPtr, ::System::UInt64, ::System::UInt64, ::System::IntPtr))((::PBYTE)hIl2Cpp + MIHOYO_SDK_HOYOSDKNETWORKNATIVE_HOYONETWORKWRITECALLBACK_INVOKE_OFFSET))(this, buffer, size, nitems, outstream);
		}

		::System::IAsyncResult* BeginInvoke(::System::IntPtr buffer, ::System::UInt64 size, ::System::UInt64 nitems, ::System::IntPtr outstream, ::System::AsyncCallback* callback, ::System::Object* object)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::System::IntPtr, ::System::UInt64, ::System::UInt64, ::System::IntPtr, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_HOYOSDKNETWORKNATIVE_HOYONETWORKWRITECALLBACK_BEGININVOKE_OFFSET))(this, buffer, size, nitems, outstream, callback, object);
		}

		::System::UInt64 EndInvoke(::System::IAsyncResult* result)
		{
			return ((::System::UInt64(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_HOYOSDKNETWORKNATIVE_HOYONETWORKWRITECALLBACK_ENDINVOKE_OFFSET))(this, result);
		}
	};
}

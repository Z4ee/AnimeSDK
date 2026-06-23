#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"

namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }

#define MIHOYO_SDK_HOYOSDKNETWORKNATIVE_HOYONETWORKPROGRESSCALLBACK_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x1CBA15A0)
#define MIHOYO_SDK_HOYOSDKNETWORKNATIVE_HOYONETWORKPROGRESSCALLBACK_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x1CBA1690)
#define MIHOYO_SDK_HOYOSDKNETWORKNATIVE_HOYONETWORKPROGRESSCALLBACK_INVOKE_OFFSET UNITYSDK_OFFSET(0x1CBA1160)
#define MIHOYO_SDK_HOYOSDKNETWORKNATIVE_HOYONETWORKPROGRESSCALLBACK__CTOR_OFFSET UNITYSDK_OFFSET(0x1CBA0270)

namespace MiHoYo::SDK
{
	inline static constexpr unsigned int HoYoSDKNetworkNative_HoYoNetworkProgressCallback_TypeDefinitionIndex = 36506;

	class HoYoSDKNetworkNative_HoYoNetworkProgressCallback : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* object, ::System::IntPtr method)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + MIHOYO_SDK_HOYOSDKNETWORKNATIVE_HOYONETWORKPROGRESSCALLBACK__CTOR_OFFSET))(this, object, method);
		}

		::System::UInt64 Invoke(::System::IntPtr clientp, ::System::UInt64 dltotal, ::System::UInt64 dlnow, ::System::UInt64 ultotal, ::System::UInt64 ulnow)
		{
			return ((::System::UInt64(*)(::PVOID, ::System::IntPtr, ::System::UInt64, ::System::UInt64, ::System::UInt64, ::System::UInt64))((::PBYTE)hIl2Cpp + MIHOYO_SDK_HOYOSDKNETWORKNATIVE_HOYONETWORKPROGRESSCALLBACK_INVOKE_OFFSET))(this, clientp, dltotal, dlnow, ultotal, ulnow);
		}

		::System::IAsyncResult* BeginInvoke(::System::IntPtr clientp, ::System::UInt64 dltotal, ::System::UInt64 dlnow, ::System::UInt64 ultotal, ::System::UInt64 ulnow, ::System::AsyncCallback* callback, ::System::Object* object)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::System::IntPtr, ::System::UInt64, ::System::UInt64, ::System::UInt64, ::System::UInt64, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_HOYOSDKNETWORKNATIVE_HOYONETWORKPROGRESSCALLBACK_BEGININVOKE_OFFSET))(this, clientp, dltotal, dlnow, ultotal, ulnow, callback, object);
		}

		::System::UInt64 EndInvoke(::System::IAsyncResult* result)
		{
			return ((::System::UInt64(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_HOYOSDKNETWORKNATIVE_HOYONETWORKPROGRESSCALLBACK_ENDINVOKE_OFFSET))(this, result);
		}
	};
}

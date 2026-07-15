#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"

namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }

#define MIHOYO_SDK_HOYOSDKNETWORKNATIVE_HOYONETWORKWRITECALLBACK_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x1ACF7380)
#define MIHOYO_SDK_HOYOSDKNETWORKNATIVE_HOYONETWORKWRITECALLBACK_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x1ACF7430)
#define MIHOYO_SDK_HOYOSDKNETWORKNATIVE_HOYONETWORKWRITECALLBACK_INVOKE_OFFSET UNITYSDK_OFFSET(0x1ACF6F40)
#define MIHOYO_SDK_HOYOSDKNETWORKNATIVE_HOYONETWORKWRITECALLBACK__CTOR_OFFSET UNITYSDK_OFFSET(0x1ACF7310)

namespace MiHoYo::SDK
{
	inline static constexpr unsigned int HoYoSDKNetworkNative_HoYoNetworkWriteCallback_TypeDefinitionIndex = 44386;

	class HoYoSDKNetworkNative_HoYoNetworkWriteCallback : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* a1, ::System::IntPtr a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + MIHOYO_SDK_HOYOSDKNETWORKNATIVE_HOYONETWORKWRITECALLBACK__CTOR_OFFSET))(this, a1, a2);
		}

		::System::UInt64 Invoke(::System::IntPtr a1, ::System::UInt64 a2, ::System::UInt64 a3, ::System::IntPtr a4)
		{
			return ((::System::UInt64(*)(::PVOID, ::System::IntPtr, ::System::UInt64, ::System::UInt64, ::System::IntPtr))((::PBYTE)hIl2Cpp + MIHOYO_SDK_HOYOSDKNETWORKNATIVE_HOYONETWORKWRITECALLBACK_INVOKE_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::IAsyncResult* BeginInvoke(::System::IntPtr a1, ::System::UInt64 a2, ::System::UInt64 a3, ::System::IntPtr a4, ::System::AsyncCallback* a5, ::System::Object* a6)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::System::IntPtr, ::System::UInt64, ::System::UInt64, ::System::IntPtr, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_HOYOSDKNETWORKNATIVE_HOYONETWORKWRITECALLBACK_BEGININVOKE_OFFSET))(this, a1, a2, a3, a4, a5, a6);
		}

		::System::UInt64 EndInvoke(::System::IAsyncResult* a1)
		{
			return ((::System::UInt64(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_HOYOSDKNETWORKNATIVE_HOYONETWORKWRITECALLBACK_ENDINVOKE_OFFSET))(this, a1);
		}
	};
}

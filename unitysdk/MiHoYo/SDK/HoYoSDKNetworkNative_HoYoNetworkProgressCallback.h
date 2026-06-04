#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"

namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }

#define MIHOYO_SDK_HOYOSDKNETWORKNATIVE_HOYONETWORKPROGRESSCALLBACK_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0xA175150)
#define MIHOYO_SDK_HOYOSDKNETWORKNATIVE_HOYONETWORKPROGRESSCALLBACK_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0xA175220)
#define MIHOYO_SDK_HOYOSDKNETWORKNATIVE_HOYONETWORKPROGRESSCALLBACK_INVOKE_OFFSET UNITYSDK_OFFSET(0xA175120)
#define MIHOYO_SDK_HOYOSDKNETWORKNATIVE_HOYONETWORKPROGRESSCALLBACK__CTOR_OFFSET UNITYSDK_OFFSET(0xA1750B0)

namespace MiHoYo::SDK
{
	inline static constexpr unsigned int HoYoSDKNetworkNative_HoYoNetworkProgressCallback_TypeDefinitionIndex = 43527;

	class HoYoSDKNetworkNative_HoYoNetworkProgressCallback : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* a1, ::System::IntPtr a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + MIHOYO_SDK_HOYOSDKNETWORKNATIVE_HOYONETWORKPROGRESSCALLBACK__CTOR_OFFSET))(this, a1, a2);
		}

		::System::UInt64 Invoke(::System::IntPtr a1, ::System::UInt64 a2, ::System::UInt64 a3, ::System::UInt64 a4, ::System::UInt64 a5)
		{
			return ((::System::UInt64(*)(::PVOID, ::System::IntPtr, ::System::UInt64, ::System::UInt64, ::System::UInt64, ::System::UInt64))((::PBYTE)hIl2Cpp + MIHOYO_SDK_HOYOSDKNETWORKNATIVE_HOYONETWORKPROGRESSCALLBACK_INVOKE_OFFSET))(this, a1, a2, a3, a4, a5);
		}

		::System::IAsyncResult* BeginInvoke(::System::IntPtr a1, ::System::UInt64 a2, ::System::UInt64 a3, ::System::UInt64 a4, ::System::UInt64 a5, ::System::AsyncCallback* a6, ::System::Object* a7)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::System::IntPtr, ::System::UInt64, ::System::UInt64, ::System::UInt64, ::System::UInt64, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_HOYOSDKNETWORKNATIVE_HOYONETWORKPROGRESSCALLBACK_BEGININVOKE_OFFSET))(this, a1, a2, a3, a4, a5, a6, a7);
		}

		::System::UInt64 EndInvoke(::System::IAsyncResult* a1)
		{
			return ((::System::UInt64(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_HOYOSDKNETWORKNATIVE_HOYONETWORKPROGRESSCALLBACK_ENDINVOKE_OFFSET))(this, a1);
		}
	};
}

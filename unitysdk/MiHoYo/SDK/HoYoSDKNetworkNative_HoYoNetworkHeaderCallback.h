#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"

namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }

#define MIHOYO_SDK_HOYOSDKNETWORKNATIVE_HOYONETWORKHEADERCALLBACK_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0xA174FD0)
#define MIHOYO_SDK_HOYOSDKNETWORKNATIVE_HOYONETWORKHEADERCALLBACK_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0xA175080)
#define MIHOYO_SDK_HOYOSDKNETWORKNATIVE_HOYONETWORKHEADERCALLBACK_INVOKE_OFFSET UNITYSDK_OFFSET(0xA174EB0)
#define MIHOYO_SDK_HOYOSDKNETWORKNATIVE_HOYONETWORKHEADERCALLBACK__CTOR_OFFSET UNITYSDK_OFFSET(0xA174F60)

namespace MiHoYo::SDK
{
	inline static constexpr unsigned int HoYoSDKNetworkNative_HoYoNetworkHeaderCallback_TypeDefinitionIndex = 43526;

	class HoYoSDKNetworkNative_HoYoNetworkHeaderCallback : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* a1, ::System::IntPtr a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + MIHOYO_SDK_HOYOSDKNETWORKNATIVE_HOYONETWORKHEADERCALLBACK__CTOR_OFFSET))(this, a1, a2);
		}

		::System::UInt64 Invoke(::System::IntPtr a1, ::System::UInt64 a2, ::System::UInt64 a3, ::System::IntPtr a4)
		{
			return ((::System::UInt64(*)(::PVOID, ::System::IntPtr, ::System::UInt64, ::System::UInt64, ::System::IntPtr))((::PBYTE)hIl2Cpp + MIHOYO_SDK_HOYOSDKNETWORKNATIVE_HOYONETWORKHEADERCALLBACK_INVOKE_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::IAsyncResult* BeginInvoke(::System::IntPtr a1, ::System::UInt64 a2, ::System::UInt64 a3, ::System::IntPtr a4, ::System::AsyncCallback* a5, ::System::Object* a6)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::System::IntPtr, ::System::UInt64, ::System::UInt64, ::System::IntPtr, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_HOYOSDKNETWORKNATIVE_HOYONETWORKHEADERCALLBACK_BEGININVOKE_OFFSET))(this, a1, a2, a3, a4, a5, a6);
		}

		::System::UInt64 EndInvoke(::System::IAsyncResult* a1)
		{
			return ((::System::UInt64(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_HOYOSDKNETWORKNATIVE_HOYONETWORKHEADERCALLBACK_ENDINVOKE_OFFSET))(this, a1);
		}
	};
}

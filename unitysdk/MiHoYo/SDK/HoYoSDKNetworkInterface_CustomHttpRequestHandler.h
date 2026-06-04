#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"

namespace MiHoYo::SDK { class HoYoSDKNetworkInterface_HttpRequestParams; }
namespace MiHoYo::SDK { class HoYoSDKNetworkNative_HttpResponse; }
namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }

#define MIHOYO_SDK_HOYOSDKNETWORKINTERFACE_CUSTOMHTTPREQUESTHANDLER_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0xA172EB0)
#define MIHOYO_SDK_HOYOSDKNETWORKINTERFACE_CUSTOMHTTPREQUESTHANDLER_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0xA172EE0)
#define MIHOYO_SDK_HOYOSDKNETWORKINTERFACE_CUSTOMHTTPREQUESTHANDLER_INVOKE_OFFSET UNITYSDK_OFFSET(0xA172B50)
#define MIHOYO_SDK_HOYOSDKNETWORKINTERFACE_CUSTOMHTTPREQUESTHANDLER__CTOR_OFFSET UNITYSDK_OFFSET(0xA172DC0)

namespace MiHoYo::SDK
{
	inline static constexpr unsigned int HoYoSDKNetworkInterface_CustomHttpRequestHandler_TypeDefinitionIndex = 43517;

	class HoYoSDKNetworkInterface_CustomHttpRequestHandler : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* a1, ::System::IntPtr a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + MIHOYO_SDK_HOYOSDKNETWORKINTERFACE_CUSTOMHTTPREQUESTHANDLER__CTOR_OFFSET))(this, a1, a2);
		}

		::MiHoYo::SDK::HoYoSDKNetworkNative_HttpResponse* Invoke(::MiHoYo::SDK::HoYoSDKNetworkInterface_HttpRequestParams* a1)
		{
			return ((::MiHoYo::SDK::HoYoSDKNetworkNative_HttpResponse*(*)(::PVOID, ::MiHoYo::SDK::HoYoSDKNetworkInterface_HttpRequestParams*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_HOYOSDKNETWORKINTERFACE_CUSTOMHTTPREQUESTHANDLER_INVOKE_OFFSET))(this, a1);
		}

		::System::IAsyncResult* BeginInvoke(::MiHoYo::SDK::HoYoSDKNetworkInterface_HttpRequestParams* a1, ::System::AsyncCallback* a2, ::System::Object* a3)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::MiHoYo::SDK::HoYoSDKNetworkInterface_HttpRequestParams*, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_HOYOSDKNETWORKINTERFACE_CUSTOMHTTPREQUESTHANDLER_BEGININVOKE_OFFSET))(this, a1, a2, a3);
		}

		::MiHoYo::SDK::HoYoSDKNetworkNative_HttpResponse* EndInvoke(::System::IAsyncResult* a1)
		{
			return ((::MiHoYo::SDK::HoYoSDKNetworkNative_HttpResponse*(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_HOYOSDKNETWORKINTERFACE_CUSTOMHTTPREQUESTHANDLER_ENDINVOKE_OFFSET))(this, a1);
		}
	};
}

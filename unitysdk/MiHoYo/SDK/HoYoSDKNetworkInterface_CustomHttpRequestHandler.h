#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"

namespace MiHoYo::SDK { class HoYoSDKNetworkInterface_HttpRequestParams; }
namespace MiHoYo::SDK { class HoYoSDKNetworkNative_HttpResponse; }
namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }

#define MIHOYO_SDK_HOYOSDKNETWORKINTERFACE_CUSTOMHTTPREQUESTHANDLER_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x1D265DB0)
#define MIHOYO_SDK_HOYOSDKNETWORKINTERFACE_CUSTOMHTTPREQUESTHANDLER_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x1D265DE0)
#define MIHOYO_SDK_HOYOSDKNETWORKINTERFACE_CUSTOMHTTPREQUESTHANDLER_INVOKE_OFFSET UNITYSDK_OFFSET(0x1D265870)
#define MIHOYO_SDK_HOYOSDKNETWORKINTERFACE_CUSTOMHTTPREQUESTHANDLER__CTOR_OFFSET UNITYSDK_OFFSET(0x1D265850)

namespace MiHoYo::SDK
{
	inline static constexpr unsigned int HoYoSDKNetworkInterface_CustomHttpRequestHandler_TypeDefinitionIndex = 36495;

	class HoYoSDKNetworkInterface_CustomHttpRequestHandler : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* object, ::System::IntPtr method)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + MIHOYO_SDK_HOYOSDKNETWORKINTERFACE_CUSTOMHTTPREQUESTHANDLER__CTOR_OFFSET))(this, object, method);
		}

		::MiHoYo::SDK::HoYoSDKNetworkNative_HttpResponse* Invoke(::MiHoYo::SDK::HoYoSDKNetworkInterface_HttpRequestParams* httpRequestParams)
		{
			return ((::MiHoYo::SDK::HoYoSDKNetworkNative_HttpResponse*(*)(::PVOID, ::MiHoYo::SDK::HoYoSDKNetworkInterface_HttpRequestParams*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_HOYOSDKNETWORKINTERFACE_CUSTOMHTTPREQUESTHANDLER_INVOKE_OFFSET))(this, httpRequestParams);
		}

		::System::IAsyncResult* BeginInvoke(::MiHoYo::SDK::HoYoSDKNetworkInterface_HttpRequestParams* httpRequestParams, ::System::AsyncCallback* callback, ::System::Object* object)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::MiHoYo::SDK::HoYoSDKNetworkInterface_HttpRequestParams*, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_HOYOSDKNETWORKINTERFACE_CUSTOMHTTPREQUESTHANDLER_BEGININVOKE_OFFSET))(this, httpRequestParams, callback, object);
		}

		::MiHoYo::SDK::HoYoSDKNetworkNative_HttpResponse* EndInvoke(::System::IAsyncResult* result)
		{
			return ((::MiHoYo::SDK::HoYoSDKNetworkNative_HttpResponse*(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_HOYOSDKNETWORKINTERFACE_CUSTOMHTTPREQUESTHANDLER_ENDINVOKE_OFFSET))(this, result);
		}
	};
}

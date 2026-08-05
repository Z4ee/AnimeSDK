#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"

namespace MiHoYo::SDK { class MiHoYoSDKWebView; }
namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }

#define MIHOYO_SDK_MIHOYOSDKWEBVIEW_ONWEBVIEWNATIVEREADY_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x1CC57860)
#define MIHOYO_SDK_MIHOYOSDKWEBVIEW_ONWEBVIEWNATIVEREADY_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x1CC57890)
#define MIHOYO_SDK_MIHOYOSDKWEBVIEW_ONWEBVIEWNATIVEREADY_INVOKE_OFFSET UNITYSDK_OFFSET(0x1CC57340)
#define MIHOYO_SDK_MIHOYOSDKWEBVIEW_ONWEBVIEWNATIVEREADY__CTOR_OFFSET UNITYSDK_OFFSET(0x1CC57320)

namespace MiHoYo::SDK
{
	inline static constexpr unsigned int MiHoYoSDKWebView_OnWebViewNativeReady_TypeDefinitionIndex = 37630;

	class MiHoYoSDKWebView_OnWebViewNativeReady : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* object, ::System::IntPtr method)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + MIHOYO_SDK_MIHOYOSDKWEBVIEW_ONWEBVIEWNATIVEREADY__CTOR_OFFSET))(this, object, method);
		}

		::System::Void Invoke(::MiHoYo::SDK::MiHoYoSDKWebView* webView)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::MiHoYoSDKWebView*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_MIHOYOSDKWEBVIEW_ONWEBVIEWNATIVEREADY_INVOKE_OFFSET))(this, webView);
		}

		::System::IAsyncResult* BeginInvoke(::MiHoYo::SDK::MiHoYoSDKWebView* webView, ::System::AsyncCallback* callback, ::System::Object* object)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::MiHoYo::SDK::MiHoYoSDKWebView*, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_MIHOYOSDKWEBVIEW_ONWEBVIEWNATIVEREADY_BEGININVOKE_OFFSET))(this, webView, callback, object);
		}

		::System::Void EndInvoke(::System::IAsyncResult* result)
		{
			return ((::System::Void(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_MIHOYOSDKWEBVIEW_ONWEBVIEWNATIVEREADY_ENDINVOKE_OFFSET))(this, result);
		}
	};
}

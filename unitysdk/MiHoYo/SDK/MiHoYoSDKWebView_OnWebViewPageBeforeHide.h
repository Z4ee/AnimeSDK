#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"

namespace MiHoYo::SDK { class MiHoYoSDKWebView; }
namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }

#define MIHOYO_SDK_MIHOYOSDKWEBVIEW_ONWEBVIEWPAGEBEFOREHIDE_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x8D6AD60)
#define MIHOYO_SDK_MIHOYOSDKWEBVIEW_ONWEBVIEWPAGEBEFOREHIDE_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x8D6AD90)
#define MIHOYO_SDK_MIHOYOSDKWEBVIEW_ONWEBVIEWPAGEBEFOREHIDE_INVOKE_OFFSET UNITYSDK_OFFSET(0x8D6A810)
#define MIHOYO_SDK_MIHOYOSDKWEBVIEW_ONWEBVIEWPAGEBEFOREHIDE__CTOR_OFFSET UNITYSDK_OFFSET(0x8D6A7F0)

namespace MiHoYo::SDK
{
	inline static constexpr unsigned int MiHoYoSDKWebView_OnWebViewPageBeforeHide_TypeDefinitionIndex = 43156;

	class MiHoYoSDKWebView_OnWebViewPageBeforeHide : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* object, ::System::IntPtr method)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + MIHOYO_SDK_MIHOYOSDKWEBVIEW_ONWEBVIEWPAGEBEFOREHIDE__CTOR_OFFSET))(this, object, method);
		}

		::System::Void Invoke(::MiHoYo::SDK::MiHoYoSDKWebView* webView)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::MiHoYoSDKWebView*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_MIHOYOSDKWEBVIEW_ONWEBVIEWPAGEBEFOREHIDE_INVOKE_OFFSET))(this, webView);
		}

		::System::IAsyncResult* BeginInvoke(::MiHoYo::SDK::MiHoYoSDKWebView* webView, ::System::AsyncCallback* callback, ::System::Object* object)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::MiHoYo::SDK::MiHoYoSDKWebView*, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_MIHOYOSDKWEBVIEW_ONWEBVIEWPAGEBEFOREHIDE_BEGININVOKE_OFFSET))(this, webView, callback, object);
		}

		::System::Void EndInvoke(::System::IAsyncResult* result)
		{
			return ((::System::Void(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_MIHOYOSDKWEBVIEW_ONWEBVIEWPAGEBEFOREHIDE_ENDINVOKE_OFFSET))(this, result);
		}
	};
}

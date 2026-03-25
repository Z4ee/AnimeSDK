#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"

namespace MiHoYo::SDK { class MiHoYoSDKWebView; }
namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }
namespace System { class String; }

#define MIHOYO_SDK_MIHOYOSDKWEBVIEW_ONBEFORENAVIGATIONMESSAGEDELEGATE_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x8538CE0)
#define MIHOYO_SDK_MIHOYOSDKWEBVIEW_ONBEFORENAVIGATIONMESSAGEDELEGATE_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x8538D20)
#define MIHOYO_SDK_MIHOYOSDKWEBVIEW_ONBEFORENAVIGATIONMESSAGEDELEGATE_INVOKE_OFFSET UNITYSDK_OFFSET(0x8534890)
#define MIHOYO_SDK_MIHOYOSDKWEBVIEW_ONBEFORENAVIGATIONMESSAGEDELEGATE__CTOR_OFFSET UNITYSDK_OFFSET(0x8538CC0)

namespace MiHoYo::SDK
{
	inline static constexpr unsigned int MiHoYoSDKWebView_OnBeforeNavigationMessageDelegate_TypeDefinitionIndex = 37282;

	class MiHoYoSDKWebView_OnBeforeNavigationMessageDelegate : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* object, ::System::IntPtr method)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + MIHOYO_SDK_MIHOYOSDKWEBVIEW_ONBEFORENAVIGATIONMESSAGEDELEGATE__CTOR_OFFSET))(this, object, method);
		}

		::System::Void Invoke(::MiHoYo::SDK::MiHoYoSDKWebView* webView, ::System::String* url)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::MiHoYoSDKWebView*, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_MIHOYOSDKWEBVIEW_ONBEFORENAVIGATIONMESSAGEDELEGATE_INVOKE_OFFSET))(this, webView, url);
		}

		::System::IAsyncResult* BeginInvoke(::MiHoYo::SDK::MiHoYoSDKWebView* webView, ::System::String* url, ::System::AsyncCallback* callback, ::System::Object* object)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::MiHoYo::SDK::MiHoYoSDKWebView*, ::System::String*, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_MIHOYOSDKWEBVIEW_ONBEFORENAVIGATIONMESSAGEDELEGATE_BEGININVOKE_OFFSET))(this, webView, url, callback, object);
		}

		::System::Void EndInvoke(::System::IAsyncResult* result)
		{
			return ((::System::Void(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_MIHOYOSDKWEBVIEW_ONBEFORENAVIGATIONMESSAGEDELEGATE_ENDINVOKE_OFFSET))(this, result);
		}
	};
}

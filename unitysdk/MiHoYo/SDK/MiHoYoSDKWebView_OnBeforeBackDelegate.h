#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"

namespace MiHoYo::SDK { class MiHoYoSDKWebView; }
namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }

#define MIHOYO_SDK_MIHOYOSDKWEBVIEW_ONBEFOREBACKDELEGATE_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x8D69700)
#define MIHOYO_SDK_MIHOYOSDKWEBVIEW_ONBEFOREBACKDELEGATE_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x8D69730)
#define MIHOYO_SDK_MIHOYOSDKWEBVIEW_ONBEFOREBACKDELEGATE_INVOKE_OFFSET UNITYSDK_OFFSET(0x8D68450)
#define MIHOYO_SDK_MIHOYOSDKWEBVIEW_ONBEFOREBACKDELEGATE__CTOR_OFFSET UNITYSDK_OFFSET(0x8D696E0)

namespace MiHoYo::SDK
{
	inline static constexpr unsigned int MiHoYoSDKWebView_OnBeforeBackDelegate_TypeDefinitionIndex = 43161;

	class MiHoYoSDKWebView_OnBeforeBackDelegate : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* object, ::System::IntPtr method)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + MIHOYO_SDK_MIHOYOSDKWEBVIEW_ONBEFOREBACKDELEGATE__CTOR_OFFSET))(this, object, method);
		}

		::System::Void Invoke(::MiHoYo::SDK::MiHoYoSDKWebView* webView)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::MiHoYoSDKWebView*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_MIHOYOSDKWEBVIEW_ONBEFOREBACKDELEGATE_INVOKE_OFFSET))(this, webView);
		}

		::System::IAsyncResult* BeginInvoke(::MiHoYo::SDK::MiHoYoSDKWebView* webView, ::System::AsyncCallback* callback, ::System::Object* object)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::MiHoYo::SDK::MiHoYoSDKWebView*, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_MIHOYOSDKWEBVIEW_ONBEFOREBACKDELEGATE_BEGININVOKE_OFFSET))(this, webView, callback, object);
		}

		::System::Void EndInvoke(::System::IAsyncResult* result)
		{
			return ((::System::Void(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_MIHOYOSDKWEBVIEW_ONBEFOREBACKDELEGATE_ENDINVOKE_OFFSET))(this, result);
		}
	};
}

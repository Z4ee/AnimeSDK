#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"

namespace MiHoYo::SDK { class MiHoYoSDKWebView; }
namespace MiHoYo::SDK { class Web; }
namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }

#define MIHOYO_SDK_MIHOYOSDKWEBVIEW_ONPOPUPBROWSERCREATEDELEGATE_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x1DF887C0)
#define MIHOYO_SDK_MIHOYOSDKWEBVIEW_ONPOPUPBROWSERCREATEDELEGATE_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x1DF88800)
#define MIHOYO_SDK_MIHOYOSDKWEBVIEW_ONPOPUPBROWSERCREATEDELEGATE_INVOKE_OFFSET UNITYSDK_OFFSET(0x1DF88230)
#define MIHOYO_SDK_MIHOYOSDKWEBVIEW_ONPOPUPBROWSERCREATEDELEGATE__CTOR_OFFSET UNITYSDK_OFFSET(0x1DF88210)

namespace MiHoYo::SDK
{
	inline static constexpr unsigned int MiHoYoSDKWebView_OnPopupBrowserCreateDelegate_TypeDefinitionIndex = 37633;

	class MiHoYoSDKWebView_OnPopupBrowserCreateDelegate : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* object, ::System::IntPtr method)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + MIHOYO_SDK_MIHOYOSDKWEBVIEW_ONPOPUPBROWSERCREATEDELEGATE__CTOR_OFFSET))(this, object, method);
		}

		::System::Void Invoke(::MiHoYo::SDK::MiHoYoSDKWebView* webView, ::MiHoYo::SDK::Web* newWeb)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::MiHoYoSDKWebView*, ::MiHoYo::SDK::Web*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_MIHOYOSDKWEBVIEW_ONPOPUPBROWSERCREATEDELEGATE_INVOKE_OFFSET))(this, webView, newWeb);
		}

		::System::IAsyncResult* BeginInvoke(::MiHoYo::SDK::MiHoYoSDKWebView* webView, ::MiHoYo::SDK::Web* newWeb, ::System::AsyncCallback* callback, ::System::Object* object)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::MiHoYo::SDK::MiHoYoSDKWebView*, ::MiHoYo::SDK::Web*, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_MIHOYOSDKWEBVIEW_ONPOPUPBROWSERCREATEDELEGATE_BEGININVOKE_OFFSET))(this, webView, newWeb, callback, object);
		}

		::System::Void EndInvoke(::System::IAsyncResult* result)
		{
			return ((::System::Void(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_MIHOYOSDKWEBVIEW_ONPOPUPBROWSERCREATEDELEGATE_ENDINVOKE_OFFSET))(this, result);
		}
	};
}

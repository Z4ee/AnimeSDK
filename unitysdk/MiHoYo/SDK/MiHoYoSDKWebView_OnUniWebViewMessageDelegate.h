#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MiHoYo/SDK/MiHoYoSDKUniWebViewMessage.h"
#include "unitysdk/System/MulticastDelegate.h"

namespace MiHoYo::SDK { class MiHoYoSDKWebView; }
namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }

#define MIHOYO_SDK_MIHOYOSDKWEBVIEW_ONUNIWEBVIEWMESSAGEDELEGATE_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x1A87ECF0)
#define MIHOYO_SDK_MIHOYOSDKWEBVIEW_ONUNIWEBVIEWMESSAGEDELEGATE_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x1A87ED70)
#define MIHOYO_SDK_MIHOYOSDKWEBVIEW_ONUNIWEBVIEWMESSAGEDELEGATE_INVOKE_OFFSET UNITYSDK_OFFSET(0x1A87E520)
#define MIHOYO_SDK_MIHOYOSDKWEBVIEW_ONUNIWEBVIEWMESSAGEDELEGATE__CTOR_OFFSET UNITYSDK_OFFSET(0x1A87E510)

namespace MiHoYo::SDK
{
	inline static constexpr unsigned int MiHoYoSDKWebView_OnUniWebViewMessageDelegate_TypeDefinitionIndex = 35365;

	class MiHoYoSDKWebView_OnUniWebViewMessageDelegate : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* object, ::System::IntPtr method)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + MIHOYO_SDK_MIHOYOSDKWEBVIEW_ONUNIWEBVIEWMESSAGEDELEGATE__CTOR_OFFSET))(this, object, method);
		}

		::System::Void Invoke(::MiHoYo::SDK::MiHoYoSDKWebView* webView, ::MiHoYo::SDK::MiHoYoSDKUniWebViewMessage message)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::MiHoYoSDKWebView*, ::MiHoYo::SDK::MiHoYoSDKUniWebViewMessage))((::PBYTE)hIl2Cpp + MIHOYO_SDK_MIHOYOSDKWEBVIEW_ONUNIWEBVIEWMESSAGEDELEGATE_INVOKE_OFFSET))(this, webView, message);
		}

		::System::IAsyncResult* BeginInvoke(::MiHoYo::SDK::MiHoYoSDKWebView* webView, ::MiHoYo::SDK::MiHoYoSDKUniWebViewMessage message, ::System::AsyncCallback* callback, ::System::Object* object)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::MiHoYo::SDK::MiHoYoSDKWebView*, ::MiHoYo::SDK::MiHoYoSDKUniWebViewMessage, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_MIHOYOSDKWEBVIEW_ONUNIWEBVIEWMESSAGEDELEGATE_BEGININVOKE_OFFSET))(this, webView, message, callback, object);
		}

		::System::Void EndInvoke(::System::IAsyncResult* result)
		{
			return ((::System::Void(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_MIHOYOSDKWEBVIEW_ONUNIWEBVIEWMESSAGEDELEGATE_ENDINVOKE_OFFSET))(this, result);
		}
	};
}

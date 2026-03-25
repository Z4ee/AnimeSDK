#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"

namespace MiHoYo::SDK { class MiHoYoSDKWebView; }
namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }

#define MIHOYO_SDK_MIHOYOSDKWEBVIEW_ONWEBVIEWINPUTENABLESTATUS_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x8538E70)
#define MIHOYO_SDK_MIHOYOSDKWEBVIEW_ONWEBVIEWINPUTENABLESTATUS_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x8538ED0)
#define MIHOYO_SDK_MIHOYOSDKWEBVIEW_ONWEBVIEWINPUTENABLESTATUS_INVOKE_OFFSET UNITYSDK_OFFSET(0x8536D60)
#define MIHOYO_SDK_MIHOYOSDKWEBVIEW_ONWEBVIEWINPUTENABLESTATUS__CTOR_OFFSET UNITYSDK_OFFSET(0x8538E50)

namespace MiHoYo::SDK
{
	inline static constexpr unsigned int MiHoYoSDKWebView_OnWebViewInputEnableStatus_TypeDefinitionIndex = 37281;

	class MiHoYoSDKWebView_OnWebViewInputEnableStatus : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* object, ::System::IntPtr method)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + MIHOYO_SDK_MIHOYOSDKWEBVIEW_ONWEBVIEWINPUTENABLESTATUS__CTOR_OFFSET))(this, object, method);
		}

		::System::Void Invoke(::MiHoYo::SDK::MiHoYoSDKWebView* webView, ::System::Boolean enabled)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::MiHoYoSDKWebView*, ::System::Boolean))((::PBYTE)hIl2Cpp + MIHOYO_SDK_MIHOYOSDKWEBVIEW_ONWEBVIEWINPUTENABLESTATUS_INVOKE_OFFSET))(this, webView, enabled);
		}

		::System::IAsyncResult* BeginInvoke(::MiHoYo::SDK::MiHoYoSDKWebView* webView, ::System::Boolean enabled, ::System::AsyncCallback* callback, ::System::Object* object)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::MiHoYo::SDK::MiHoYoSDKWebView*, ::System::Boolean, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_MIHOYOSDKWEBVIEW_ONWEBVIEWINPUTENABLESTATUS_BEGININVOKE_OFFSET))(this, webView, enabled, callback, object);
		}

		::System::Void EndInvoke(::System::IAsyncResult* result)
		{
			return ((::System::Void(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_MIHOYOSDKWEBVIEW_ONWEBVIEWINPUTENABLESTATUS_ENDINVOKE_OFFSET))(this, result);
		}
	};
}

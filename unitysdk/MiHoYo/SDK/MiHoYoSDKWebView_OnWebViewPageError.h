#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"

namespace MiHoYo::SDK { class MiHoYoSDKWebView; }
namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }
namespace System { class String; }

#define MIHOYO_SDK_MIHOYOSDKWEBVIEW_ONWEBVIEWPAGEERROR_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x19A3BA20)
#define MIHOYO_SDK_MIHOYOSDKWEBVIEW_ONWEBVIEWPAGEERROR_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x19A3BAC0)
#define MIHOYO_SDK_MIHOYOSDKWEBVIEW_ONWEBVIEWPAGEERROR_INVOKE_OFFSET UNITYSDK_OFFSET(0x19A3B370)
#define MIHOYO_SDK_MIHOYOSDKWEBVIEW_ONWEBVIEWPAGEERROR__CTOR_OFFSET UNITYSDK_OFFSET(0x19A3B360)

namespace MiHoYo::SDK
{
	inline static constexpr unsigned int MiHoYoSDKWebView_OnWebViewPageError_TypeDefinitionIndex = 35367;

	class MiHoYoSDKWebView_OnWebViewPageError : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* object, ::System::IntPtr method)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + MIHOYO_SDK_MIHOYOSDKWEBVIEW_ONWEBVIEWPAGEERROR__CTOR_OFFSET))(this, object, method);
		}

		::System::Void Invoke(::MiHoYo::SDK::MiHoYoSDKWebView* webView, ::System::String* url, ::System::Int32 errorCode, ::System::String* errorMessage)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::MiHoYoSDKWebView*, ::System::String*, ::System::Int32, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_MIHOYOSDKWEBVIEW_ONWEBVIEWPAGEERROR_INVOKE_OFFSET))(this, webView, url, errorCode, errorMessage);
		}

		::System::IAsyncResult* BeginInvoke(::MiHoYo::SDK::MiHoYoSDKWebView* webView, ::System::String* url, ::System::Int32 errorCode, ::System::String* errorMessage, ::System::AsyncCallback* callback, ::System::Object* object)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::MiHoYo::SDK::MiHoYoSDKWebView*, ::System::String*, ::System::Int32, ::System::String*, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_MIHOYOSDKWEBVIEW_ONWEBVIEWPAGEERROR_BEGININVOKE_OFFSET))(this, webView, url, errorCode, errorMessage, callback, object);
		}

		::System::Void EndInvoke(::System::IAsyncResult* result)
		{
			return ((::System::Void(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_MIHOYOSDKWEBVIEW_ONWEBVIEWPAGEERROR_ENDINVOKE_OFFSET))(this, result);
		}
	};
}

#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"

namespace MiHoYo::SDK { class Web; }
namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }
namespace System { class String; }

#define MIHOYO_SDK_WEB_ONWEBVIEWPAGEERROR_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x1BDFDD20)
#define MIHOYO_SDK_WEB_ONWEBVIEWPAGEERROR_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x1BDFDDC0)
#define MIHOYO_SDK_WEB_ONWEBVIEWPAGEERROR_INVOKE_OFFSET UNITYSDK_OFFSET(0x1BDFD6E0)
#define MIHOYO_SDK_WEB_ONWEBVIEWPAGEERROR__CTOR_OFFSET UNITYSDK_OFFSET(0x1BDFD6C0)

namespace MiHoYo::SDK
{
	inline static constexpr unsigned int Web_OnWebViewPageError_TypeDefinitionIndex = 20327;

	class Web_OnWebViewPageError : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* object, ::System::IntPtr method)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WEB_ONWEBVIEWPAGEERROR__CTOR_OFFSET))(this, object, method);
		}

		::System::Void Invoke(::MiHoYo::SDK::Web* webView, ::System::String* url, ::System::Int32 errorCode, ::System::String* errorMessage)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::Web*, ::System::String*, ::System::Int32, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WEB_ONWEBVIEWPAGEERROR_INVOKE_OFFSET))(this, webView, url, errorCode, errorMessage);
		}

		::System::IAsyncResult* BeginInvoke(::MiHoYo::SDK::Web* webView, ::System::String* url, ::System::Int32 errorCode, ::System::String* errorMessage, ::System::AsyncCallback* callback, ::System::Object* object)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::MiHoYo::SDK::Web*, ::System::String*, ::System::Int32, ::System::String*, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WEB_ONWEBVIEWPAGEERROR_BEGININVOKE_OFFSET))(this, webView, url, errorCode, errorMessage, callback, object);
		}

		::System::Void EndInvoke(::System::IAsyncResult* result)
		{
			return ((::System::Void(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WEB_ONWEBVIEWPAGEERROR_ENDINVOKE_OFFSET))(this, result);
		}
	};
}

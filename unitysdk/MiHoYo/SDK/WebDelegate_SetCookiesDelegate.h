#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"

namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }
namespace System { class String; }

#define MIHOYO_SDK_WEBDELEGATE_SETCOOKIESDELEGATE_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x16041EA0)
#define MIHOYO_SDK_WEBDELEGATE_SETCOOKIESDELEGATE_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x16041EF0)
#define MIHOYO_SDK_WEBDELEGATE_SETCOOKIESDELEGATE_INVOKE_OFFSET UNITYSDK_OFFSET(0x1603F120)
#define MIHOYO_SDK_WEBDELEGATE_SETCOOKIESDELEGATE__CTOR_OFFSET UNITYSDK_OFFSET(0x16041E80)

namespace MiHoYo::SDK
{
	inline static constexpr unsigned int WebDelegate_SetCookiesDelegate_TypeDefinitionIndex = 6851;

	class WebDelegate_SetCookiesDelegate : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* object, ::System::IntPtr method)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WEBDELEGATE_SETCOOKIESDELEGATE__CTOR_OFFSET))(this, object, method);
		}

		::System::Void Invoke(::System::Object* webView, ::System::String* key, ::System::String* content, ::System::String* domain)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::String*, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WEBDELEGATE_SETCOOKIESDELEGATE_INVOKE_OFFSET))(this, webView, key, content, domain);
		}

		::System::IAsyncResult* BeginInvoke(::System::Object* webView, ::System::String* key, ::System::String* content, ::System::String* domain, ::System::AsyncCallback* callback, ::System::Object* object)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::System::Object*, ::System::String*, ::System::String*, ::System::String*, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WEBDELEGATE_SETCOOKIESDELEGATE_BEGININVOKE_OFFSET))(this, webView, key, content, domain, callback, object);
		}

		::System::Void EndInvoke(::System::IAsyncResult* result)
		{
			return ((::System::Void(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WEBDELEGATE_SETCOOKIESDELEGATE_ENDINVOKE_OFFSET))(this, result);
		}
	};
}

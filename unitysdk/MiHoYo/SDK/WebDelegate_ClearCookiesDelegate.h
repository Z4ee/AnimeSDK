#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"

namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }

#define MIHOYO_SDK_WEBDELEGATE_CLEARCOOKIESDELEGATE_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x176A4D40)
#define MIHOYO_SDK_WEBDELEGATE_CLEARCOOKIESDELEGATE_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x176A4D70)
#define MIHOYO_SDK_WEBDELEGATE_CLEARCOOKIESDELEGATE_INVOKE_OFFSET UNITYSDK_OFFSET(0x1769B2B0)
#define MIHOYO_SDK_WEBDELEGATE_CLEARCOOKIESDELEGATE__CTOR_OFFSET UNITYSDK_OFFSET(0x176A4D20)

namespace MiHoYo::SDK
{
	inline static constexpr unsigned int WebDelegate_ClearCookiesDelegate_TypeDefinitionIndex = 6886;

	class WebDelegate_ClearCookiesDelegate : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* object, ::System::IntPtr method)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WEBDELEGATE_CLEARCOOKIESDELEGATE__CTOR_OFFSET))(this, object, method);
		}

		::System::Void Invoke(::System::Object* webView)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WEBDELEGATE_CLEARCOOKIESDELEGATE_INVOKE_OFFSET))(this, webView);
		}

		::System::IAsyncResult* BeginInvoke(::System::Object* webView, ::System::AsyncCallback* callback, ::System::Object* object)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::System::Object*, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WEBDELEGATE_CLEARCOOKIESDELEGATE_BEGININVOKE_OFFSET))(this, webView, callback, object);
		}

		::System::Void EndInvoke(::System::IAsyncResult* result)
		{
			return ((::System::Void(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WEBDELEGATE_CLEARCOOKIESDELEGATE_ENDINVOKE_OFFSET))(this, result);
		}
	};
}

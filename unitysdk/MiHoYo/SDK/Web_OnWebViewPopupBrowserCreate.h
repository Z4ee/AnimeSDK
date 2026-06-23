#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"

namespace MiHoYo::SDK { class Web; }
namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }

#define MIHOYO_SDK_WEB_ONWEBVIEWPOPUPBROWSERCREATE_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x1BA9A350)
#define MIHOYO_SDK_WEB_ONWEBVIEWPOPUPBROWSERCREATE_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x1BA9A390)
#define MIHOYO_SDK_WEB_ONWEBVIEWPOPUPBROWSERCREATE_INVOKE_OFFSET UNITYSDK_OFFSET(0x1BA99180)
#define MIHOYO_SDK_WEB_ONWEBVIEWPOPUPBROWSERCREATE__CTOR_OFFSET UNITYSDK_OFFSET(0x1BA9A330)

namespace MiHoYo::SDK
{
	inline static constexpr unsigned int Web_OnWebViewPopupBrowserCreate_TypeDefinitionIndex = 19985;

	class Web_OnWebViewPopupBrowserCreate : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* object, ::System::IntPtr method)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WEB_ONWEBVIEWPOPUPBROWSERCREATE__CTOR_OFFSET))(this, object, method);
		}

		::System::Void Invoke(::MiHoYo::SDK::Web* webView, ::MiHoYo::SDK::Web* newWeb)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::Web*, ::MiHoYo::SDK::Web*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WEB_ONWEBVIEWPOPUPBROWSERCREATE_INVOKE_OFFSET))(this, webView, newWeb);
		}

		::System::IAsyncResult* BeginInvoke(::MiHoYo::SDK::Web* webView, ::MiHoYo::SDK::Web* newWeb, ::System::AsyncCallback* callback, ::System::Object* object)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::MiHoYo::SDK::Web*, ::MiHoYo::SDK::Web*, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WEB_ONWEBVIEWPOPUPBROWSERCREATE_BEGININVOKE_OFFSET))(this, webView, newWeb, callback, object);
		}

		::System::Void EndInvoke(::System::IAsyncResult* result)
		{
			return ((::System::Void(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WEB_ONWEBVIEWPOPUPBROWSERCREATE_ENDINVOKE_OFFSET))(this, result);
		}
	};
}

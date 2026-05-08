#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"

namespace MiHoYo::SDK { class Web; }
namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }

#define MIHOYO_SDK_WEB_ONWEBVIEWPAGEBEFOREHIDE_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x19C8DA40)
#define MIHOYO_SDK_WEB_ONWEBVIEWPAGEBEFOREHIDE_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x19C8DA70)
#define MIHOYO_SDK_WEB_ONWEBVIEWPAGEBEFOREHIDE_INVOKE_OFFSET UNITYSDK_OFFSET(0x19C8D540)
#define MIHOYO_SDK_WEB_ONWEBVIEWPAGEBEFOREHIDE__CTOR_OFFSET UNITYSDK_OFFSET(0x19C8D530)

namespace MiHoYo::SDK
{
	inline static constexpr unsigned int Web_OnWebViewPageBeforeHide_TypeDefinitionIndex = 19083;

	class Web_OnWebViewPageBeforeHide : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* object, ::System::IntPtr method)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WEB_ONWEBVIEWPAGEBEFOREHIDE__CTOR_OFFSET))(this, object, method);
		}

		::System::Void Invoke(::MiHoYo::SDK::Web* webView)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::Web*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WEB_ONWEBVIEWPAGEBEFOREHIDE_INVOKE_OFFSET))(this, webView);
		}

		::System::IAsyncResult* BeginInvoke(::MiHoYo::SDK::Web* webView, ::System::AsyncCallback* callback, ::System::Object* object)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::MiHoYo::SDK::Web*, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WEB_ONWEBVIEWPAGEBEFOREHIDE_BEGININVOKE_OFFSET))(this, webView, callback, object);
		}

		::System::Void EndInvoke(::System::IAsyncResult* result)
		{
			return ((::System::Void(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WEB_ONWEBVIEWPAGEBEFOREHIDE_ENDINVOKE_OFFSET))(this, result);
		}
	};
}

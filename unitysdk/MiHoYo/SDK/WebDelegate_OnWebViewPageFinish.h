#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"

namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }

#define MIHOYO_SDK_WEBDELEGATE_ONWEBVIEWPAGEFINISH_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x176A5AF0)
#define MIHOYO_SDK_WEBDELEGATE_ONWEBVIEWPAGEFINISH_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x176A5B20)
#define MIHOYO_SDK_WEBDELEGATE_ONWEBVIEWPAGEFINISH_INVOKE_OFFSET UNITYSDK_OFFSET(0x176925D0)
#define MIHOYO_SDK_WEBDELEGATE_ONWEBVIEWPAGEFINISH__CTOR_OFFSET UNITYSDK_OFFSET(0x176A5AD0)

namespace MiHoYo::SDK
{
	inline static constexpr unsigned int WebDelegate_OnWebViewPageFinish_TypeDefinitionIndex = 6862;

	class WebDelegate_OnWebViewPageFinish : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* object, ::System::IntPtr method)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WEBDELEGATE_ONWEBVIEWPAGEFINISH__CTOR_OFFSET))(this, object, method);
		}

		::System::Void Invoke(::System::Object* webView)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WEBDELEGATE_ONWEBVIEWPAGEFINISH_INVOKE_OFFSET))(this, webView);
		}

		::System::IAsyncResult* BeginInvoke(::System::Object* webView, ::System::AsyncCallback* callback, ::System::Object* object)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::System::Object*, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WEBDELEGATE_ONWEBVIEWPAGEFINISH_BEGININVOKE_OFFSET))(this, webView, callback, object);
		}

		::System::Void EndInvoke(::System::IAsyncResult* result)
		{
			return ((::System::Void(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WEBDELEGATE_ONWEBVIEWPAGEFINISH_ENDINVOKE_OFFSET))(this, result);
		}
	};
}

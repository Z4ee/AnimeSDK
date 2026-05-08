#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"

namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }

#define MIHOYO_SDK_WEBDELEGATE_ONWEBVIEWNATIVEREADY_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x19B60AB0)
#define MIHOYO_SDK_WEBDELEGATE_ONWEBVIEWNATIVEREADY_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x19B60AE0)
#define MIHOYO_SDK_WEBDELEGATE_ONWEBVIEWNATIVEREADY_INVOKE_OFFSET UNITYSDK_OFFSET(0x19B605B0)
#define MIHOYO_SDK_WEBDELEGATE_ONWEBVIEWNATIVEREADY__CTOR_OFFSET UNITYSDK_OFFSET(0x19B605A0)

namespace MiHoYo::SDK
{
	inline static constexpr unsigned int WebDelegate_OnWebViewNativeReady_TypeDefinitionIndex = 18682;

	class WebDelegate_OnWebViewNativeReady : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* object, ::System::IntPtr method)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WEBDELEGATE_ONWEBVIEWNATIVEREADY__CTOR_OFFSET))(this, object, method);
		}

		::System::Void Invoke(::System::Object* webView)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WEBDELEGATE_ONWEBVIEWNATIVEREADY_INVOKE_OFFSET))(this, webView);
		}

		::System::IAsyncResult* BeginInvoke(::System::Object* webView, ::System::AsyncCallback* callback, ::System::Object* object)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::System::Object*, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WEBDELEGATE_ONWEBVIEWNATIVEREADY_BEGININVOKE_OFFSET))(this, webView, callback, object);
		}

		::System::Void EndInvoke(::System::IAsyncResult* result)
		{
			return ((::System::Void(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WEBDELEGATE_ONWEBVIEWNATIVEREADY_ENDINVOKE_OFFSET))(this, result);
		}
	};
}

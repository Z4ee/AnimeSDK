#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"

namespace MiHoYo::SDK { class Web; }
namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }

#define MIHOYO_SDK_WEB_ONWEBVIEWINPUTENABLESTATUS_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x1BBD20C0)
#define MIHOYO_SDK_WEB_ONWEBVIEWINPUTENABLESTATUS_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x1BBD2140)
#define MIHOYO_SDK_WEB_ONWEBVIEWINPUTENABLESTATUS_INVOKE_OFFSET UNITYSDK_OFFSET(0x1BBD1AD0)
#define MIHOYO_SDK_WEB_ONWEBVIEWINPUTENABLESTATUS__CTOR_OFFSET UNITYSDK_OFFSET(0x1BBD1AB0)

namespace MiHoYo::SDK
{
	inline static constexpr unsigned int Web_OnWebViewInputEnableStatus_TypeDefinitionIndex = 19983;

	class Web_OnWebViewInputEnableStatus : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* object, ::System::IntPtr method)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WEB_ONWEBVIEWINPUTENABLESTATUS__CTOR_OFFSET))(this, object, method);
		}

		::System::Void Invoke(::MiHoYo::SDK::Web* webView, ::System::Boolean enabled)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::Web*, ::System::Boolean))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WEB_ONWEBVIEWINPUTENABLESTATUS_INVOKE_OFFSET))(this, webView, enabled);
		}

		::System::IAsyncResult* BeginInvoke(::MiHoYo::SDK::Web* webView, ::System::Boolean enabled, ::System::AsyncCallback* callback, ::System::Object* object)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::MiHoYo::SDK::Web*, ::System::Boolean, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WEB_ONWEBVIEWINPUTENABLESTATUS_BEGININVOKE_OFFSET))(this, webView, enabled, callback, object);
		}

		::System::Void EndInvoke(::System::IAsyncResult* result)
		{
			return ((::System::Void(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WEB_ONWEBVIEWINPUTENABLESTATUS_ENDINVOKE_OFFSET))(this, result);
		}
	};
}

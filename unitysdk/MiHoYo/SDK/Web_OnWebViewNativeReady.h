#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"

namespace MiHoYo::SDK { class Web; }
namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }

#define MIHOYO_SDK_WEB_ONWEBVIEWNATIVEREADY_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x1A35AAB0)
#define MIHOYO_SDK_WEB_ONWEBVIEWNATIVEREADY_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x1A35AAE0)
#define MIHOYO_SDK_WEB_ONWEBVIEWNATIVEREADY_INVOKE_OFFSET UNITYSDK_OFFSET(0x1A35A5B0)
#define MIHOYO_SDK_WEB_ONWEBVIEWNATIVEREADY__CTOR_OFFSET UNITYSDK_OFFSET(0x1A35A5A0)

namespace MiHoYo::SDK
{
	inline static constexpr unsigned int Web_OnWebViewNativeReady_TypeDefinitionIndex = 19084;

	class Web_OnWebViewNativeReady : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* object, ::System::IntPtr method)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WEB_ONWEBVIEWNATIVEREADY__CTOR_OFFSET))(this, object, method);
		}

		::System::Void Invoke(::MiHoYo::SDK::Web* webView)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::Web*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WEB_ONWEBVIEWNATIVEREADY_INVOKE_OFFSET))(this, webView);
		}

		::System::IAsyncResult* BeginInvoke(::MiHoYo::SDK::Web* webView, ::System::AsyncCallback* callback, ::System::Object* object)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::MiHoYo::SDK::Web*, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WEB_ONWEBVIEWNATIVEREADY_BEGININVOKE_OFFSET))(this, webView, callback, object);
		}

		::System::Void EndInvoke(::System::IAsyncResult* result)
		{
			return ((::System::Void(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WEB_ONWEBVIEWNATIVEREADY_ENDINVOKE_OFFSET))(this, result);
		}
	};
}

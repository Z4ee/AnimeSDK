#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MiHoYo/SDK/UniWebViewMessage.h"
#include "unitysdk/System/MulticastDelegate.h"

namespace MiHoYo::SDK { class Web; }
namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }

#define MIHOYO_SDK_WEB_ONUNIWEBVIEWMESSAGEDELEGATE_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x197F5440)
#define MIHOYO_SDK_WEB_ONUNIWEBVIEWMESSAGEDELEGATE_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x197F54C0)
#define MIHOYO_SDK_WEB_ONUNIWEBVIEWMESSAGEDELEGATE_INVOKE_OFFSET UNITYSDK_OFFSET(0x197F4B70)
#define MIHOYO_SDK_WEB_ONUNIWEBVIEWMESSAGEDELEGATE__CTOR_OFFSET UNITYSDK_OFFSET(0x197F4B60)

namespace MiHoYo::SDK
{
	inline static constexpr unsigned int Web_OnUniWebViewMessageDelegate_TypeDefinitionIndex = 19079;

	class Web_OnUniWebViewMessageDelegate : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* object, ::System::IntPtr method)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WEB_ONUNIWEBVIEWMESSAGEDELEGATE__CTOR_OFFSET))(this, object, method);
		}

		::System::Void Invoke(::MiHoYo::SDK::Web* webView, ::MiHoYo::SDK::UniWebViewMessage message)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::Web*, ::MiHoYo::SDK::UniWebViewMessage))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WEB_ONUNIWEBVIEWMESSAGEDELEGATE_INVOKE_OFFSET))(this, webView, message);
		}

		::System::IAsyncResult* BeginInvoke(::MiHoYo::SDK::Web* webView, ::MiHoYo::SDK::UniWebViewMessage message, ::System::AsyncCallback* callback, ::System::Object* object)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::MiHoYo::SDK::Web*, ::MiHoYo::SDK::UniWebViewMessage, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WEB_ONUNIWEBVIEWMESSAGEDELEGATE_BEGININVOKE_OFFSET))(this, webView, message, callback, object);
		}

		::System::Void EndInvoke(::System::IAsyncResult* result)
		{
			return ((::System::Void(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WEB_ONUNIWEBVIEWMESSAGEDELEGATE_ENDINVOKE_OFFSET))(this, result);
		}
	};
}

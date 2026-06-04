#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MiHoYo/SDK/UniWebViewMessage.h"
#include "unitysdk/System/MulticastDelegate.h"

namespace MiHoYo::SDK { class Web; }
namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }

#define MIHOYO_SDK_WEB_ONUNIWEBVIEWMESSAGEDELEGATE_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x18462D30)
#define MIHOYO_SDK_WEB_ONUNIWEBVIEWMESSAGEDELEGATE_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x18462DB0)
#define MIHOYO_SDK_WEB_ONUNIWEBVIEWMESSAGEDELEGATE_INVOKE_OFFSET UNITYSDK_OFFSET(0x184623C0)
#define MIHOYO_SDK_WEB_ONUNIWEBVIEWMESSAGEDELEGATE__CTOR_OFFSET UNITYSDK_OFFSET(0x18462C40)

namespace MiHoYo::SDK
{
	inline static constexpr unsigned int Web_OnUniWebViewMessageDelegate_TypeDefinitionIndex = 8155;

	class Web_OnUniWebViewMessageDelegate : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* a1, ::System::IntPtr a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WEB_ONUNIWEBVIEWMESSAGEDELEGATE__CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void Invoke(::MiHoYo::SDK::Web* a1, ::MiHoYo::SDK::UniWebViewMessage a2)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::Web*, ::MiHoYo::SDK::UniWebViewMessage))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WEB_ONUNIWEBVIEWMESSAGEDELEGATE_INVOKE_OFFSET))(this, a1, a2);
		}

		::System::IAsyncResult* BeginInvoke(::MiHoYo::SDK::Web* a1, ::MiHoYo::SDK::UniWebViewMessage a2, ::System::AsyncCallback* a3, ::System::Object* a4)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::MiHoYo::SDK::Web*, ::MiHoYo::SDK::UniWebViewMessage, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WEB_ONUNIWEBVIEWMESSAGEDELEGATE_BEGININVOKE_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void EndInvoke(::System::IAsyncResult* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WEB_ONUNIWEBVIEWMESSAGEDELEGATE_ENDINVOKE_OFFSET))(this, a1);
		}
	};
}

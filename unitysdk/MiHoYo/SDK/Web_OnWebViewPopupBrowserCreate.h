#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"

namespace MiHoYo::SDK { class Web; }
namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }

#define MIHOYO_SDK_WEB_ONWEBVIEWPOPUPBROWSERCREATE_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x1CD7E210)
#define MIHOYO_SDK_WEB_ONWEBVIEWPOPUPBROWSERCREATE_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x1CD7E250)
#define MIHOYO_SDK_WEB_ONWEBVIEWPOPUPBROWSERCREATE_INVOKE_OFFSET UNITYSDK_OFFSET(0x1CD7CFB0)
#define MIHOYO_SDK_WEB_ONWEBVIEWPOPUPBROWSERCREATE__CTOR_OFFSET UNITYSDK_OFFSET(0x1CD7E120)

namespace MiHoYo::SDK
{
	inline static constexpr unsigned int Web_OnWebViewPopupBrowserCreate_TypeDefinitionIndex = 8180;

	class Web_OnWebViewPopupBrowserCreate : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* a1, ::System::IntPtr a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WEB_ONWEBVIEWPOPUPBROWSERCREATE__CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void Invoke(::MiHoYo::SDK::Web* a1, ::MiHoYo::SDK::Web* a2)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::Web*, ::MiHoYo::SDK::Web*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WEB_ONWEBVIEWPOPUPBROWSERCREATE_INVOKE_OFFSET))(this, a1, a2);
		}

		::System::IAsyncResult* BeginInvoke(::MiHoYo::SDK::Web* a1, ::MiHoYo::SDK::Web* a2, ::System::AsyncCallback* a3, ::System::Object* a4)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::MiHoYo::SDK::Web*, ::MiHoYo::SDK::Web*, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WEB_ONWEBVIEWPOPUPBROWSERCREATE_BEGININVOKE_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void EndInvoke(::System::IAsyncResult* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WEB_ONWEBVIEWPOPUPBROWSERCREATE_ENDINVOKE_OFFSET))(this, a1);
		}
	};
}

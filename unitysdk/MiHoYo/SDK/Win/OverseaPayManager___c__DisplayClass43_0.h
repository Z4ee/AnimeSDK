#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MiHoYo/SDK/UniWebViewMessage.h"
#include "unitysdk/System/Object.h"

namespace MiHoYo::SDK { class Web; }
namespace MiHoYo::SDK::Win { class OverseaPayManager; }
namespace System { class Action; }
namespace System { class String; }

#define MIHOYO_SDK_WIN_OVERSEAPAYMANAGER___C__DISPLAYCLASS43_0__CTOR_OFFSET UNITYSDK_OFFSET(0x1BE80130)
#define MIHOYO_SDK_WIN_OVERSEAPAYMANAGER___C__DISPLAYCLASS43_0__OPENAGELIMITWEBPASSPORT_B__0_OFFSET UNITYSDK_OFFSET(0x1BE80140)
#define MIHOYO_SDK_WIN_OVERSEAPAYMANAGER___C__DISPLAYCLASS43_0__OPENAGELIMITWEBPASSPORT_B__1_OFFSET UNITYSDK_OFFSET(0x1BE80210)
#define MIHOYO_SDK_WIN_OVERSEAPAYMANAGER___C__DISPLAYCLASS43_0__OPENAGELIMITWEBPASSPORT_B__2_OFFSET UNITYSDK_OFFSET(0x1BE80280)

namespace MiHoYo::SDK::Win
{
	inline static constexpr unsigned int OverseaPayManager___c__DisplayClass43_0_TypeDefinitionIndex = 21092;

	class OverseaPayManager___c__DisplayClass43_0 : public ::System::Object
	{
	public:
		::System::String* accountId; // 0x10
		::System::String* cookieToken; // 0x18
		::System::Action* closeCallback; // 0x20
		::MiHoYo::SDK::Win::OverseaPayManager* __4__this; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_OVERSEAPAYMANAGER___C__DISPLAYCLASS43_0__CTOR_OFFSET))(this);
		}

		::System::Void _OpenAgeLimitWebPassport_b__0(::MiHoYo::SDK::Web* web, ::System::String* _)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::Web*, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_OVERSEAPAYMANAGER___C__DISPLAYCLASS43_0__OPENAGELIMITWEBPASSPORT_B__0_OFFSET))(this, web, _);
		}

		::System::Void _OpenAgeLimitWebPassport_b__1(::MiHoYo::SDK::Web* webView, ::MiHoYo::SDK::UniWebViewMessage message)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::Web*, ::MiHoYo::SDK::UniWebViewMessage))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_OVERSEAPAYMANAGER___C__DISPLAYCLASS43_0__OPENAGELIMITWEBPASSPORT_B__1_OFFSET))(this, webView, message);
		}

		::System::Void _OpenAgeLimitWebPassport_b__2(::MiHoYo::SDK::Web* web)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::Web*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_OVERSEAPAYMANAGER___C__DISPLAYCLASS43_0__OPENAGELIMITWEBPASSPORT_B__2_OFFSET))(this, web);
		}
	};
}

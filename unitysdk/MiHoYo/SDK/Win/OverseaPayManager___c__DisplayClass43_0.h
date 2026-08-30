#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MiHoYo/SDK/UniWebViewMessage.h"
#include "unitysdk/System/Object.h"

namespace MiHoYo::SDK { class Web; }
namespace MiHoYo::SDK::Win { class OverseaPayManager; }
namespace System { class Action; }
namespace System { class String; }

#define MIHOYO_SDK_WIN_OVERSEAPAYMANAGER___C__DISPLAYCLASS43_0__CTOR_OFFSET UNITYSDK_OFFSET(0x1B8BF3A0)
#define MIHOYO_SDK_WIN_OVERSEAPAYMANAGER___C__DISPLAYCLASS43_0__OPENAGELIMITWEBPASSPORT_B__0_OFFSET UNITYSDK_OFFSET(0x1B8C7EC0)
#define MIHOYO_SDK_WIN_OVERSEAPAYMANAGER___C__DISPLAYCLASS43_0__OPENAGELIMITWEBPASSPORT_B__1_OFFSET UNITYSDK_OFFSET(0x1B8C7FB0)
#define MIHOYO_SDK_WIN_OVERSEAPAYMANAGER___C__DISPLAYCLASS43_0__OPENAGELIMITWEBPASSPORT_B__2_OFFSET UNITYSDK_OFFSET(0x1B8C8030)

namespace MiHoYo::SDK::Win
{
	inline static constexpr unsigned int OverseaPayManager___c__DisplayClass43_0_TypeDefinitionIndex = 9287;

	class OverseaPayManager___c__DisplayClass43_0 : public ::System::Object
	{
	public:
		::System::Action* closeCallback; // 0x10
		::MiHoYo::SDK::Win::OverseaPayManager* __4__this; // 0x18
		::System::String* accountId; // 0x20
		::System::String* cookieToken; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_OVERSEAPAYMANAGER___C__DISPLAYCLASS43_0__CTOR_OFFSET))(this);
		}

		::System::Void _OpenAgeLimitWebPassport_b__0(::MiHoYo::SDK::Web* a1, ::System::String* a2)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::Web*, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_OVERSEAPAYMANAGER___C__DISPLAYCLASS43_0__OPENAGELIMITWEBPASSPORT_B__0_OFFSET))(this, a1, a2);
		}

		::System::Void _OpenAgeLimitWebPassport_b__1(::MiHoYo::SDK::Web* a1, ::MiHoYo::SDK::UniWebViewMessage a2)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::Web*, ::MiHoYo::SDK::UniWebViewMessage))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_OVERSEAPAYMANAGER___C__DISPLAYCLASS43_0__OPENAGELIMITWEBPASSPORT_B__1_OFFSET))(this, a1, a2);
		}

		::System::Void _OpenAgeLimitWebPassport_b__2(::MiHoYo::SDK::Web* a1)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::Web*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_OVERSEAPAYMANAGER___C__DISPLAYCLASS43_0__OPENAGELIMITWEBPASSPORT_B__2_OFFSET))(this, a1);
		}
	};
}

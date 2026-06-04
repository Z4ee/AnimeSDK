#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MiHoYo/SDK/ReportType.h"
#include "unitysdk/MiHoYo/SDK/UniWebViewMessage.h"
#include "unitysdk/System/Object.h"

namespace MiHoYo::SDK { class JSONNode; }
namespace MiHoYo::SDK { class NetworkResponseModelEx; }
namespace MiHoYo::SDK { class Web; }
namespace MiHoYo::SDK { class Web_OnUniWebViewMessageDelegate; }
namespace MiHoYo::SDK::Win { class OverseaPayManager; }

#define MIHOYO_SDK_WIN_OVERSEAPAYMANAGER___C__DISPLAYCLASS39_0__CTOR_OFFSET UNITYSDK_OFFSET(0x18296850)
#define MIHOYO_SDK_WIN_OVERSEAPAYMANAGER___C__DISPLAYCLASS39_0__REQUESTCREATEORDER_B__0_OFFSET UNITYSDK_OFFSET(0x1829D070)
#define MIHOYO_SDK_WIN_OVERSEAPAYMANAGER___C__DISPLAYCLASS39_0__REQUESTCREATEORDER_B__1_OFFSET UNITYSDK_OFFSET(0x1829E2E0)

namespace MiHoYo::SDK::Win
{
	inline static constexpr unsigned int OverseaPayManager___c__DisplayClass39_0_TypeDefinitionIndex = 9001;

	class OverseaPayManager___c__DisplayClass39_0 : public ::System::Object
	{
	public:
		::MiHoYo::SDK::Win::OverseaPayManager* __4__this; // 0x10
		::MiHoYo::SDK::JSONNode* payInfo; // 0x18
		::MiHoYo::SDK::JSONNode* vendor; // 0x20
		::MiHoYo::SDK::Web_OnUniWebViewMessageDelegate* __9__1; // 0x28
		::MiHoYo::SDK::ReportType reportType; // 0x30

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_OVERSEAPAYMANAGER___C__DISPLAYCLASS39_0__CTOR_OFFSET))(this);
		}

		::System::Void _RequestCreateOrder_b__0(::MiHoYo::SDK::NetworkResponseModelEx* a1)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::NetworkResponseModelEx*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_OVERSEAPAYMANAGER___C__DISPLAYCLASS39_0__REQUESTCREATEORDER_B__0_OFFSET))(this, a1);
		}

		::System::Void _RequestCreateOrder_b__1(::MiHoYo::SDK::Web* a1, ::MiHoYo::SDK::UniWebViewMessage a2)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::Web*, ::MiHoYo::SDK::UniWebViewMessage))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_OVERSEAPAYMANAGER___C__DISPLAYCLASS39_0__REQUESTCREATEORDER_B__1_OFFSET))(this, a1, a2);
		}
	};
}

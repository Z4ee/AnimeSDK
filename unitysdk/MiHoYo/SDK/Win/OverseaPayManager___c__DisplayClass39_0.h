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

#define MIHOYO_SDK_WIN_OVERSEAPAYMANAGER___C__DISPLAYCLASS39_0__CTOR_OFFSET UNITYSDK_OFFSET(0x1CE29AA0)
#define MIHOYO_SDK_WIN_OVERSEAPAYMANAGER___C__DISPLAYCLASS39_0__REQUESTCREATEORDER_B__0_OFFSET UNITYSDK_OFFSET(0x1CE29AB0)
#define MIHOYO_SDK_WIN_OVERSEAPAYMANAGER___C__DISPLAYCLASS39_0__REQUESTCREATEORDER_B__1_OFFSET UNITYSDK_OFFSET(0x1CE2AC40)

namespace MiHoYo::SDK::Win
{
	inline static constexpr unsigned int OverseaPayManager___c__DisplayClass39_0_TypeDefinitionIndex = 21436;

	class OverseaPayManager___c__DisplayClass39_0 : public ::System::Object
	{
	public:
		::MiHoYo::SDK::Web_OnUniWebViewMessageDelegate* __9__1; // 0x10
		::MiHoYo::SDK::Win::OverseaPayManager* __4__this; // 0x18
		::MiHoYo::SDK::JSONNode* vendor; // 0x20
		::MiHoYo::SDK::JSONNode* payInfo; // 0x28
		::MiHoYo::SDK::ReportType reportType; // 0x30

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_OVERSEAPAYMANAGER___C__DISPLAYCLASS39_0__CTOR_OFFSET))(this);
		}

		::System::Void _RequestCreateOrder_b__0(::MiHoYo::SDK::NetworkResponseModelEx* response)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::NetworkResponseModelEx*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_OVERSEAPAYMANAGER___C__DISPLAYCLASS39_0__REQUESTCREATEORDER_B__0_OFFSET))(this, response);
		}

		::System::Void _RequestCreateOrder_b__1(::MiHoYo::SDK::Web* webView, ::MiHoYo::SDK::UniWebViewMessage message)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::Web*, ::MiHoYo::SDK::UniWebViewMessage))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_OVERSEAPAYMANAGER___C__DISPLAYCLASS39_0__REQUESTCREATEORDER_B__1_OFFSET))(this, webView, message);
		}
	};
}

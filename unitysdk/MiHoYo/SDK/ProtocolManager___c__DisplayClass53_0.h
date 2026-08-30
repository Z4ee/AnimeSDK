#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MiHoYo/SDK/UniWebViewMessage.h"
#include "unitysdk/System/Object.h"

namespace MiHoYo::SDK { class ProtocolManager; }
namespace MiHoYo::SDK { class Web; }

#define MIHOYO_SDK_PROTOCOLMANAGER___C__DISPLAYCLASS53_0__CTOR_OFFSET UNITYSDK_OFFSET(0x1BAADCF0)
#define MIHOYO_SDK_PROTOCOLMANAGER___C__DISPLAYCLASS53_0__OPENPROTOCOLWEBVIEW_B__0_OFFSET UNITYSDK_OFFSET(0x1BAB1580)

namespace MiHoYo::SDK
{
	inline static constexpr unsigned int ProtocolManager___c__DisplayClass53_0_TypeDefinitionIndex = 8011;

	class ProtocolManager___c__DisplayClass53_0 : public ::System::Object
	{
	public:
		::MiHoYo::SDK::Web* webView; // 0x10
		::MiHoYo::SDK::ProtocolManager* __4__this; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PROTOCOLMANAGER___C__DISPLAYCLASS53_0__CTOR_OFFSET))(this);
		}

		::System::Void _OpenProtocolWebView_b__0(::MiHoYo::SDK::Web* a1, ::MiHoYo::SDK::UniWebViewMessage a2)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::Web*, ::MiHoYo::SDK::UniWebViewMessage))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PROTOCOLMANAGER___C__DISPLAYCLASS53_0__OPENPROTOCOLWEBVIEW_B__0_OFFSET))(this, a1, a2);
		}
	};
}

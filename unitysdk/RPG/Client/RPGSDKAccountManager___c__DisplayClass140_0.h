#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MiHoYo/SDK/MiHoYoSDKUniWebViewMessage.h"
#include "unitysdk/System/Object.h"

#define RPG_CLIENT_RPGSDKACCOUNTMANAGER___C__DISPLAYCLASS140_0__CTOR_OFFSET UNITYSDK_OFFSET(0xA270800)
#define RPG_CLIENT_RPGSDKACCOUNTMANAGER___C__DISPLAYCLASS140_0___ONUNIWEBVIEWMESSAGEOPENITEMDETAILDIALOG_B__0_OFFSET UNITYSDK_OFFSET(0xA274290)

namespace RPG::Client
{
	inline static constexpr unsigned int RPGSDKAccountManager___c__DisplayClass140_0_TypeDefinitionIndex = 49516;

	class RPGSDKAccountManager___c__DisplayClass140_0 : public ::System::Object
	{
	public:
		::MiHoYo::SDK::MiHoYoSDKUniWebViewMessage message; // 0x10
		::System::UInt32 itemID; // 0x30

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_RPGSDKACCOUNTMANAGER___C__DISPLAYCLASS140_0__CTOR_OFFSET))(this);
		}

		::System::Void __OnUniWebViewMessageOpenItemDetailDialog_b__0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_RPGSDKACCOUNTMANAGER___C__DISPLAYCLASS140_0___ONUNIWEBVIEWMESSAGEOPENITEMDETAILDIALOG_B__0_OFFSET))(this);
		}
	};
}

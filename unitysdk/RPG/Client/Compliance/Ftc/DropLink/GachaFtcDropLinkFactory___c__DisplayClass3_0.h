#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class ItemData; }
namespace System { class String; }

#define RPG_CLIENT_COMPLIANCE_FTC_DROPLINK_GACHAFTCDROPLINKFACTORY___C__DISPLAYCLASS3_0__CTOR_OFFSET UNITYSDK_OFFSET(0xCBAF7E0)
#define RPG_CLIENT_COMPLIANCE_FTC_DROPLINK_GACHAFTCDROPLINKFACTORY___C__DISPLAYCLASS3_0___CREATEFORGACHAUPTOKEN_B__0_OFFSET UNITYSDK_OFFSET(0xCBAF9C0)

namespace RPG::Client::Compliance::Ftc::DropLink
{
	inline static constexpr unsigned int GachaFtcDropLinkFactory___c__DisplayClass3_0_TypeDefinitionIndex = 74825;

	class GachaFtcDropLinkFactory___c__DisplayClass3_0 : public ::System::Object
	{
	public:
		::RPG::Client::ItemData* item; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_COMPLIANCE_FTC_DROPLINK_GACHAFTCDROPLINKFACTORY___C__DISPLAYCLASS3_0__CTOR_OFFSET))(this);
		}

		::System::String* __CreateForGachaUpToken_b__0()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_COMPLIANCE_FTC_DROPLINK_GACHAFTCDROPLINKFACTORY___C__DISPLAYCLASS3_0___CREATEFORGACHAUPTOKEN_B__0_OFFSET))(this);
		}
	};
}

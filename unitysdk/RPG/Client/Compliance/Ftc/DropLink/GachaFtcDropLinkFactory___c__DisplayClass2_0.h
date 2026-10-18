#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class ItemData; }
namespace System { class String; }

#define RPG_CLIENT_COMPLIANCE_FTC_DROPLINK_GACHAFTCDROPLINKFACTORY___C__DISPLAYCLASS2_0__CTOR_OFFSET UNITYSDK_OFFSET(0xCBAF6E0)
#define RPG_CLIENT_COMPLIANCE_FTC_DROPLINK_GACHAFTCDROPLINKFACTORY___C__DISPLAYCLASS2_0___CREATEFORGACHANORMALTOKEN_B__0_OFFSET UNITYSDK_OFFSET(0xCBAF7F0)

namespace RPG::Client::Compliance::Ftc::DropLink
{
	inline static constexpr unsigned int GachaFtcDropLinkFactory___c__DisplayClass2_0_TypeDefinitionIndex = 74824;

	class GachaFtcDropLinkFactory___c__DisplayClass2_0 : public ::System::Object
	{
	public:
		::RPG::Client::ItemData* item; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_COMPLIANCE_FTC_DROPLINK_GACHAFTCDROPLINKFACTORY___C__DISPLAYCLASS2_0__CTOR_OFFSET))(this);
		}

		::System::String* __CreateForGachaNormalToken_b__0()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_COMPLIANCE_FTC_DROPLINK_GACHAFTCDROPLINKFACTORY___C__DISPLAYCLASS2_0___CREATEFORGACHANORMALTOKEN_B__0_OFFSET))(this);
		}
	};
}

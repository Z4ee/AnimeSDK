#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class RogueTournPersonaHexEquipmentSlotItemInfo; }

#define RPG_CLIENT_ROGUETOURNPERSONAHEXEQUIPMENTSLOTPANELINFO___C__DISPLAYCLASS16_0__CTOR_OFFSET UNITYSDK_OFFSET(0xB0F2600)
#define RPG_CLIENT_ROGUETOURNPERSONAHEXEQUIPMENTSLOTPANELINFO___C__DISPLAYCLASS16_0___ADDACHIVEDHEXES_B__0_OFFSET UNITYSDK_OFFSET(0xB0F2730)

namespace RPG::Client
{
	inline static constexpr unsigned int RogueTournPersonaHexEquipmentSlotPanelInfo___c__DisplayClass16_0_TypeDefinitionIndex = 67145;

	class RogueTournPersonaHexEquipmentSlotPanelInfo___c__DisplayClass16_0 : public ::System::Object
	{
	public:
		::System::UInt32 hexID; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNPERSONAHEXEQUIPMENTSLOTPANELINFO___C__DISPLAYCLASS16_0__CTOR_OFFSET))(this);
		}

		::System::Boolean __AddAchivedHexes_b__0(::RPG::Client::RogueTournPersonaHexEquipmentSlotItemInfo* h)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::RogueTournPersonaHexEquipmentSlotItemInfo*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNPERSONAHEXEQUIPMENTSLOTPANELINFO___C__DISPLAYCLASS16_0___ADDACHIVEDHEXES_B__0_OFFSET))(this, h);
		}
	};
}

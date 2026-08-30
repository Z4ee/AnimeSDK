#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class RogueTournPersonaHexEquipmentSlotItemInfo; }

#define RPG_CLIENT_ROGUETOURNPERSONAHEXEQUIPMENTSLOTPANELINFO___C__DISPLAYCLASS16_0__CTOR_OFFSET UNITYSDK_OFFSET(0xDF89480)
#define RPG_CLIENT_ROGUETOURNPERSONAHEXEQUIPMENTSLOTPANELINFO___C__DISPLAYCLASS16_0___ADDACHIVEDHEXES_B__0_OFFSET UNITYSDK_OFFSET(0xDF895B0)

namespace RPG::Client
{
	inline static constexpr unsigned int RogueTournPersonaHexEquipmentSlotPanelInfo___c__DisplayClass16_0_TypeDefinitionIndex = 72808;

	class RogueTournPersonaHexEquipmentSlotPanelInfo___c__DisplayClass16_0 : public ::System::Object
	{
	public:
		::System::UInt32 hexID; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNPERSONAHEXEQUIPMENTSLOTPANELINFO___C__DISPLAYCLASS16_0__CTOR_OFFSET))(this);
		}

		::System::Boolean __AddAchivedHexes_b__0(::RPG::Client::RogueTournPersonaHexEquipmentSlotItemInfo* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::RogueTournPersonaHexEquipmentSlotItemInfo*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNPERSONAHEXEQUIPMENTSLOTPANELINFO___C__DISPLAYCLASS16_0___ADDACHIVEDHEXES_B__0_OFFSET))(this, a1);
		}
	};
}

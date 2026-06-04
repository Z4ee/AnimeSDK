#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class IRogueTournHex; }

#define RPG_CLIENT_ROGUETOURNPERSONAHEXEQUIPMENTSLOTPANELINFO___C__DISPLAYCLASS15_0__CTOR_OFFSET UNITYSDK_OFFSET(0xC844C80)
#define RPG_CLIENT_ROGUETOURNPERSONAHEXEQUIPMENTSLOTPANELINFO___C__DISPLAYCLASS15_0___REMOVEINVALIDHEXES_B__0_OFFSET UNITYSDK_OFFSET(0xC844DA0)

namespace RPG::Client
{
	inline static constexpr unsigned int RogueTournPersonaHexEquipmentSlotPanelInfo___c__DisplayClass15_0_TypeDefinitionIndex = 68087;

	class RogueTournPersonaHexEquipmentSlotPanelInfo___c__DisplayClass15_0 : public ::System::Object
	{
	public:
		::System::UInt32 hexID; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNPERSONAHEXEQUIPMENTSLOTPANELINFO___C__DISPLAYCLASS15_0__CTOR_OFFSET))(this);
		}

		::System::Boolean __RemoveInvalidHexes_b__0(::RPG::Client::IRogueTournHex* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::IRogueTournHex*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNPERSONAHEXEQUIPMENTSLOTPANELINFO___C__DISPLAYCLASS15_0___REMOVEINVALIDHEXES_B__0_OFFSET))(this, a1);
		}
	};
}

#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class IRogueTournHex; }

#define RPG_CLIENT_ROGUETOURNPERSONAHEXEQUIPMENTVIEWMODEL___C__DISPLAYCLASS24_0__CTOR_OFFSET UNITYSDK_OFFSET(0xA3BC8F0)
#define RPG_CLIENT_ROGUETOURNPERSONAHEXEQUIPMENTVIEWMODEL___C__DISPLAYCLASS24_0__ISHEXEQUIPPED_B__0_OFFSET UNITYSDK_OFFSET(0xA3BDD50)

namespace RPG::Client
{
	inline static constexpr unsigned int RogueTournPersonaHexEquipmentViewModel___c__DisplayClass24_0_TypeDefinitionIndex = 59752;

	class RogueTournPersonaHexEquipmentViewModel___c__DisplayClass24_0 : public ::System::Object
	{
	public:
		::RPG::Client::IRogueTournHex* hex; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNPERSONAHEXEQUIPMENTVIEWMODEL___C__DISPLAYCLASS24_0__CTOR_OFFSET))(this);
		}

		::System::Boolean _IsHexEquipped_b__0(::RPG::Client::IRogueTournHex* h)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::IRogueTournHex*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNPERSONAHEXEQUIPMENTVIEWMODEL___C__DISPLAYCLASS24_0__ISHEXEQUIPPED_B__0_OFFSET))(this, h);
		}
	};
}

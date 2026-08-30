#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class IRogueTournHex; }
namespace RPG::Client { class RogueTournPersonaHexEquipmentViewModel; }

#define RPG_CLIENT_ROGUETOURNPERSONAHEXEQUIPMENTVIEWMODEL___C__DISPLAYCLASS41_0__CTOR_OFFSET UNITYSDK_OFFSET(0xDF8B1C0)
#define RPG_CLIENT_ROGUETOURNPERSONAHEXEQUIPMENTVIEWMODEL___C__DISPLAYCLASS41_0__EQUIPHEX_B__1_OFFSET UNITYSDK_OFFSET(0xDF8BE10)
#define RPG_CLIENT_ROGUETOURNPERSONAHEXEQUIPMENTVIEWMODEL___C__DISPLAYCLASS41_0__EQUIPHEX_B__2_OFFSET UNITYSDK_OFFSET(0xDF8BEC0)

namespace RPG::Client
{
	inline static constexpr unsigned int RogueTournPersonaHexEquipmentViewModel___c__DisplayClass41_0_TypeDefinitionIndex = 72813;

	class RogueTournPersonaHexEquipmentViewModel___c__DisplayClass41_0 : public ::System::Object
	{
	public:
		::RPG::Client::IRogueTournHex* hex; // 0x10
		::RPG::Client::RogueTournPersonaHexEquipmentViewModel* __4__this; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNPERSONAHEXEQUIPMENTVIEWMODEL___C__DISPLAYCLASS41_0__CTOR_OFFSET))(this);
		}

		::System::Void _EquipHex_b__1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNPERSONAHEXEQUIPMENTVIEWMODEL___C__DISPLAYCLASS41_0__EQUIPHEX_B__1_OFFSET))(this);
		}

		::System::Void _EquipHex_b__2()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNPERSONAHEXEQUIPMENTVIEWMODEL___C__DISPLAYCLASS41_0__EQUIPHEX_B__2_OFFSET))(this);
		}
	};
}

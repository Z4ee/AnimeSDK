#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class IRogueTournHex; }
namespace RPG::Client { class RogueTournPersonaHexEquipmentViewModel; }

#define RPG_CLIENT_ROGUETOURNPERSONAHEXEQUIPMENTVIEWMODEL___C__DISPLAYCLASS29_0__CTOR_OFFSET UNITYSDK_OFFSET(0xB0F3950)
#define RPG_CLIENT_ROGUETOURNPERSONAHEXEQUIPMENTVIEWMODEL___C__DISPLAYCLASS29_0__EQUIPHEX_B__1_OFFSET UNITYSDK_OFFSET(0xB0F46D0)
#define RPG_CLIENT_ROGUETOURNPERSONAHEXEQUIPMENTVIEWMODEL___C__DISPLAYCLASS29_0__EQUIPHEX_B__2_OFFSET UNITYSDK_OFFSET(0xB0F4770)

namespace RPG::Client
{
	inline static constexpr unsigned int RogueTournPersonaHexEquipmentViewModel___c__DisplayClass29_0_TypeDefinitionIndex = 67150;

	class RogueTournPersonaHexEquipmentViewModel___c__DisplayClass29_0 : public ::System::Object
	{
	public:
		::RPG::Client::RogueTournPersonaHexEquipmentViewModel* __4__this; // 0x10
		::RPG::Client::IRogueTournHex* hex; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNPERSONAHEXEQUIPMENTVIEWMODEL___C__DISPLAYCLASS29_0__CTOR_OFFSET))(this);
		}

		::System::Void _EquipHex_b__1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNPERSONAHEXEQUIPMENTVIEWMODEL___C__DISPLAYCLASS29_0__EQUIPHEX_B__1_OFFSET))(this);
		}

		::System::Void _EquipHex_b__2()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNPERSONAHEXEQUIPMENTVIEWMODEL___C__DISPLAYCLASS29_0__EQUIPHEX_B__2_OFFSET))(this);
		}
	};
}

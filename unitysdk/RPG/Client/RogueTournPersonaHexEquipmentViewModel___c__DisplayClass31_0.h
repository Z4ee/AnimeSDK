#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class IRogueTournHex; }
namespace RPG::Client { class RogueTournPersonaHexEquipmentViewModel; }

#define RPG_CLIENT_ROGUETOURNPERSONAHEXEQUIPMENTVIEWMODEL___C__DISPLAYCLASS31_0__CTOR_OFFSET UNITYSDK_OFFSET(0xC846680)
#define RPG_CLIENT_ROGUETOURNPERSONAHEXEQUIPMENTVIEWMODEL___C__DISPLAYCLASS31_0___SHOWUNEQUIPHEXCONFIRMDIALOG_B__0_OFFSET UNITYSDK_OFFSET(0xC846D70)

namespace RPG::Client
{
	inline static constexpr unsigned int RogueTournPersonaHexEquipmentViewModel___c__DisplayClass31_0_TypeDefinitionIndex = 68094;

	class RogueTournPersonaHexEquipmentViewModel___c__DisplayClass31_0 : public ::System::Object
	{
	public:
		::RPG::Client::RogueTournPersonaHexEquipmentViewModel* __4__this; // 0x10
		::RPG::Client::IRogueTournHex* hex; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNPERSONAHEXEQUIPMENTVIEWMODEL___C__DISPLAYCLASS31_0__CTOR_OFFSET))(this);
		}

		::System::Void __ShowUnEquipHexConfirmDialog_b__0(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNPERSONAHEXEQUIPMENTVIEWMODEL___C__DISPLAYCLASS31_0___SHOWUNEQUIPHEXCONFIRMDIALOG_B__0_OFFSET))(this, a1);
		}
	};
}

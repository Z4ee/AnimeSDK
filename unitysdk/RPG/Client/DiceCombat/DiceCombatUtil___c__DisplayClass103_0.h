#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class Action; }

#define RPG_CLIENT_DICECOMBAT_DICECOMBATUTIL___C__DISPLAYCLASS103_0__CTOR_OFFSET UNITYSDK_OFFSET(0x1C4283D0)
#define RPG_CLIENT_DICECOMBAT_DICECOMBATUTIL___C__DISPLAYCLASS103_0__TRANSFERTOENTRANCE_B__0_OFFSET UNITYSDK_OFFSET(0x1C428C50)

namespace RPG::Client::DiceCombat
{
	inline static constexpr unsigned int DiceCombatUtil___c__DisplayClass103_0_TypeDefinitionIndex = 75623;

	class DiceCombatUtil___c__DisplayClass103_0 : public ::System::Object
	{
	public:
		::System::Action* afterTeleportCallback; // 0x10
		::System::Action* preTeleportCallback; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DICECOMBAT_DICECOMBATUTIL___C__DISPLAYCLASS103_0__CTOR_OFFSET))(this);
		}

		::System::Void _TransferToEntrance_b__0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DICECOMBAT_DICECOMBATUTIL___C__DISPLAYCLASS103_0__TRANSFERTOENTRANCE_B__0_OFFSET))(this);
		}
	};
}

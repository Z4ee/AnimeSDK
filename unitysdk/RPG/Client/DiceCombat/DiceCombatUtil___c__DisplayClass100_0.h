#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define RPG_CLIENT_DICECOMBAT_DICECOMBATUTIL___C__DISPLAYCLASS100_0__CTOR_OFFSET UNITYSDK_OFFSET(0xCD435E0)
#define RPG_CLIENT_DICECOMBAT_DICECOMBATUTIL___C__DISPLAYCLASS100_0__TRYACCEPTMATCHINVITATION_B__0_OFFSET UNITYSDK_OFFSET(0xCD441F0)

namespace RPG::Client::DiceCombat
{
	inline static constexpr unsigned int DiceCombatUtil___c__DisplayClass100_0_TypeDefinitionIndex = 75623;

	class DiceCombatUtil___c__DisplayClass100_0 : public ::System::Object
	{
	public:
		::System::UInt64 lobbyID; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DICECOMBAT_DICECOMBATUTIL___C__DISPLAYCLASS100_0__CTOR_OFFSET))(this);
		}

		::System::Void _TryAcceptMatchInvitation_b__0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DICECOMBAT_DICECOMBATUTIL___C__DISPLAYCLASS100_0__TRYACCEPTMATCHINVITATION_B__0_OFFSET))(this);
		}
	};
}

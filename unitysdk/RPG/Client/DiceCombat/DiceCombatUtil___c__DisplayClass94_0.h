#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define RPG_CLIENT_DICECOMBAT_DICECOMBATUTIL___C__DISPLAYCLASS94_0__CTOR_OFFSET UNITYSDK_OFFSET(0x9491B10)
#define RPG_CLIENT_DICECOMBAT_DICECOMBATUTIL___C__DISPLAYCLASS94_0__TRYACCEPTMATCHINVITATION_B__0_OFFSET UNITYSDK_OFFSET(0x9492C60)

namespace RPG::Client::DiceCombat
{
	inline static constexpr unsigned int DiceCombatUtil___c__DisplayClass94_0_TypeDefinitionIndex = 61939;

	class DiceCombatUtil___c__DisplayClass94_0 : public ::System::Object
	{
	public:
		::System::UInt64 lobbyID; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DICECOMBAT_DICECOMBATUTIL___C__DISPLAYCLASS94_0__CTOR_OFFSET))(this);
		}

		::System::Void _TryAcceptMatchInvitation_b__0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DICECOMBAT_DICECOMBATUTIL___C__DISPLAYCLASS94_0__TRYACCEPTMATCHINVITATION_B__0_OFFSET))(this);
		}
	};
}

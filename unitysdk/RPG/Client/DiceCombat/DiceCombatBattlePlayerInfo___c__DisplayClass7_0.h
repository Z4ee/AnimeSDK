#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client::DiceCombat { class DiceCombatBattlePlayerInfo; }
namespace System { template <typename T1, typename T2, typename T3> class Action_3; }

#define RPG_CLIENT_DICECOMBAT_DICECOMBATBATTLEPLAYERINFO___C__DISPLAYCLASS7_0__CTOR_OFFSET UNITYSDK_OFFSET(0x180BDB90)
#define RPG_CLIENT_DICECOMBAT_DICECOMBATBATTLEPLAYERINFO___C__DISPLAYCLASS7_0__SETDICESELECTEDCHANGEDCALLBACK_B__0_OFFSET UNITYSDK_OFFSET(0x180BFAC0)

namespace RPG::Client::DiceCombat
{
	inline static constexpr unsigned int DiceCombatBattlePlayerInfo___c__DisplayClass7_0_TypeDefinitionIndex = 72132;

	class DiceCombatBattlePlayerInfo___c__DisplayClass7_0 : public ::System::Object
	{
	public:
		::RPG::Client::DiceCombat::DiceCombatBattlePlayerInfo* __4__this; // 0x10
		::System::Action_3<::System::Int32, ::System::Int32, ::System::Int32>* onSelectChanged; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DICECOMBAT_DICECOMBATBATTLEPLAYERINFO___C__DISPLAYCLASS7_0__CTOR_OFFSET))(this);
		}

		::System::Void _SetDiceSelectedChangedCallback_b__0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DICECOMBAT_DICECOMBATBATTLEPLAYERINFO___C__DISPLAYCLASS7_0__SETDICESELECTEDCHANGEDCALLBACK_B__0_OFFSET))(this);
		}
	};
}

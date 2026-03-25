#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client::DiceCombat { class DiceCombatBattlePlayerInfo; }
namespace System { template <typename T1, typename T2, typename T3> class Action_3; }

#define RPG_CLIENT_DICECOMBAT_DICECOMBATBATTLEPLAYERINFO___C__DISPLAYCLASS4_0__CTOR_OFFSET UNITYSDK_OFFSET(0x9470210)
#define RPG_CLIENT_DICECOMBAT_DICECOMBATBATTLEPLAYERINFO___C__DISPLAYCLASS4_0__SETDICESELECTEDCHANGEDCALLBACK_B__0_OFFSET UNITYSDK_OFFSET(0x9471510)

namespace RPG::Client::DiceCombat
{
	inline static constexpr unsigned int DiceCombatBattlePlayerInfo___c__DisplayClass4_0_TypeDefinitionIndex = 61899;

	class DiceCombatBattlePlayerInfo___c__DisplayClass4_0 : public ::System::Object
	{
	public:
		::RPG::Client::DiceCombat::DiceCombatBattlePlayerInfo* __4__this; // 0x10
		::System::Action_3<::System::Int32, ::System::Int32, ::System::Int32>* onSelectChanged; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DICECOMBAT_DICECOMBATBATTLEPLAYERINFO___C__DISPLAYCLASS4_0__CTOR_OFFSET))(this);
		}

		::System::Void _SetDiceSelectedChangedCallback_b__0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DICECOMBAT_DICECOMBATBATTLEPLAYERINFO___C__DISPLAYCLASS4_0__SETDICESELECTEDCHANGEDCALLBACK_B__0_OFFSET))(this);
		}
	};
}

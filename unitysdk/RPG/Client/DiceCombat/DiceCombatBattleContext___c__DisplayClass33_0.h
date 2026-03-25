#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_335;
namespace RPG::Client::DiceCombat { class DiceCombatForceRefreshEvent; }
namespace System { template <typename T1, typename T2> class Action_2; }
namespace XLua { class LuaTable; }

#define RPG_CLIENT_DICECOMBAT_DICECOMBATBATTLECONTEXT___C__DISPLAYCLASS33_0__ADDFORCEREFRESHEVENTHANDLER_B__0_OFFSET UNITYSDK_OFFSET(0x946EE40)
#define RPG_CLIENT_DICECOMBAT_DICECOMBATBATTLECONTEXT___C__DISPLAYCLASS33_0__CTOR_OFFSET UNITYSDK_OFFSET(0x946DDF0)

namespace RPG::Client::DiceCombat
{
	inline static constexpr unsigned int DiceCombatBattleContext___c__DisplayClass33_0_TypeDefinitionIndex = 61893;

	class DiceCombatBattleContext___c__DisplayClass33_0 : public ::System::Object
	{
	public:
		::System::Action_2<::XLua::LuaTable*, ::Class_0_16E4307DCC419505_335*>* eventHandler; // 0x10
		::XLua::LuaTable* target; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DICECOMBAT_DICECOMBATBATTLECONTEXT___C__DISPLAYCLASS33_0__CTOR_OFFSET))(this);
		}

		::System::Void _AddForceRefreshEventHandler_b__0(::RPG::Client::DiceCombat::DiceCombatForceRefreshEvent* evt)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::DiceCombat::DiceCombatForceRefreshEvent*))((::PBYTE)hIl2Cpp + RPG_CLIENT_DICECOMBAT_DICECOMBATBATTLECONTEXT___C__DISPLAYCLASS33_0__ADDFORCEREFRESHEVENTHANDLER_B__0_OFFSET))(this, evt);
		}
	};
}

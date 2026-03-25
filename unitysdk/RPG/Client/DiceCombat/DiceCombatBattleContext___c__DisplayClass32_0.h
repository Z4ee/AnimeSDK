#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_335;
namespace RPG::Client::DiceCombat { class DiceCombatEventProxy; }
namespace System { template <typename T1, typename T2> class Action_2; }
namespace XLua { class LuaTable; }

#define RPG_CLIENT_DICECOMBAT_DICECOMBATBATTLECONTEXT___C__DISPLAYCLASS32_0__ADDBATTLEEVENTHANDLER_B__0_OFFSET UNITYSDK_OFFSET(0x946EE10)
#define RPG_CLIENT_DICECOMBAT_DICECOMBATBATTLECONTEXT___C__DISPLAYCLASS32_0__CTOR_OFFSET UNITYSDK_OFFSET(0x946DCF0)

namespace RPG::Client::DiceCombat
{
	inline static constexpr unsigned int DiceCombatBattleContext___c__DisplayClass32_0_TypeDefinitionIndex = 61892;

	class DiceCombatBattleContext___c__DisplayClass32_0 : public ::System::Object
	{
	public:
		::XLua::LuaTable* target; // 0x10
		::System::Action_2<::XLua::LuaTable*, ::Class_0_16E4307DCC419505_335*>* eventHandler; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DICECOMBAT_DICECOMBATBATTLECONTEXT___C__DISPLAYCLASS32_0__CTOR_OFFSET))(this);
		}

		::System::Void _AddBattleEventHandler_b__0(::RPG::Client::DiceCombat::DiceCombatEventProxy* evt)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::DiceCombat::DiceCombatEventProxy*))((::PBYTE)hIl2Cpp + RPG_CLIENT_DICECOMBAT_DICECOMBATBATTLECONTEXT___C__DISPLAYCLASS32_0__ADDBATTLEEVENTHANDLER_B__0_OFFSET))(this, evt);
		}
	};
}

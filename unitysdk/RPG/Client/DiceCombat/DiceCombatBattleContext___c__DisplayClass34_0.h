#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client::DiceCombat { class DiceCombatPerformanceBattleEvent; }
namespace System { template <typename T1, typename T2> class Action_2; }
namespace XLua { class LuaTable; }

#define RPG_CLIENT_DICECOMBAT_DICECOMBATBATTLECONTEXT___C__DISPLAYCLASS34_0__APPENDPERFORMANCEEVENTHANDLER_B__0_OFFSET UNITYSDK_OFFSET(0x1930D5D0)
#define RPG_CLIENT_DICECOMBAT_DICECOMBATBATTLECONTEXT___C__DISPLAYCLASS34_0__CTOR_OFFSET UNITYSDK_OFFSET(0x1930BB60)

namespace RPG::Client::DiceCombat
{
	inline static constexpr unsigned int DiceCombatBattleContext___c__DisplayClass34_0_TypeDefinitionIndex = 75558;

	class DiceCombatBattleContext___c__DisplayClass34_0 : public ::System::Object
	{
	public:
		::XLua::LuaTable* target; // 0x10
		::System::Action_2<::XLua::LuaTable*, ::RPG::Client::DiceCombat::DiceCombatPerformanceBattleEvent*>* eventHandler; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DICECOMBAT_DICECOMBATBATTLECONTEXT___C__DISPLAYCLASS34_0__CTOR_OFFSET))(this);
		}

		::System::Void _AppendPerformanceEventHandler_b__0(::RPG::Client::DiceCombat::DiceCombatPerformanceBattleEvent* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::DiceCombat::DiceCombatPerformanceBattleEvent*))((::PBYTE)hIl2Cpp + RPG_CLIENT_DICECOMBAT_DICECOMBATBATTLECONTEXT___C__DISPLAYCLASS34_0__APPENDPERFORMANCEEVENTHANDLER_B__0_OFFSET))(this, a1);
		}
	};
}

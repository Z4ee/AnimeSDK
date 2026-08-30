#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client::DiceCombat { class DiceCombatForceRefreshEvent; }
namespace System { template <typename T1, typename T2> class Action_2; }
namespace XLua { class LuaTable; }

#define RPG_CLIENT_DICECOMBAT_DICECOMBATV2BATTLECONTEXT___C__DISPLAYCLASS44_0__APPENDFORCEREFRESHEVENTHANDLER_B__0_OFFSET UNITYSDK_OFFSET(0x1C42DA20)
#define RPG_CLIENT_DICECOMBAT_DICECOMBATV2BATTLECONTEXT___C__DISPLAYCLASS44_0__CTOR_OFFSET UNITYSDK_OFFSET(0x1C42A0B0)

namespace RPG::Client::DiceCombat
{
	inline static constexpr unsigned int DiceCombatV2BattleContext___c__DisplayClass44_0_TypeDefinitionIndex = 75688;

	class DiceCombatV2BattleContext___c__DisplayClass44_0 : public ::System::Object
	{
	public:
		::XLua::LuaTable* target; // 0x10
		::System::Action_2<::XLua::LuaTable*, ::RPG::Client::DiceCombat::DiceCombatForceRefreshEvent*>* eventHandler; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DICECOMBAT_DICECOMBATV2BATTLECONTEXT___C__DISPLAYCLASS44_0__CTOR_OFFSET))(this);
		}

		::System::Void _AppendForceRefreshEventHandler_b__0(::RPG::Client::DiceCombat::DiceCombatForceRefreshEvent* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::DiceCombat::DiceCombatForceRefreshEvent*))((::PBYTE)hIl2Cpp + RPG_CLIENT_DICECOMBAT_DICECOMBATV2BATTLECONTEXT___C__DISPLAYCLASS44_0__APPENDFORCEREFRESHEVENTHANDLER_B__0_OFFSET))(this, a1);
		}
	};
}

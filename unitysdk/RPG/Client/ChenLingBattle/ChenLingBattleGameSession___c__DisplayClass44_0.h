#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client::ChenLingBattle { class Soldier; }

#define RPG_CLIENT_CHENLINGBATTLE_CHENLINGBATTLEGAMESESSION___C__DISPLAYCLASS44_0__CTOR_OFFSET UNITYSDK_OFFSET(0xCAFC0A0)
#define RPG_CLIENT_CHENLINGBATTLE_CHENLINGBATTLEGAMESESSION___C__DISPLAYCLASS44_0__GETSOLDIERSBYCONFIGID_B__0_OFFSET UNITYSDK_OFFSET(0xCB01890)

namespace RPG::Client::ChenLingBattle
{
	inline static constexpr unsigned int ChenLingBattleGameSession___c__DisplayClass44_0_TypeDefinitionIndex = 75856;

	class ChenLingBattleGameSession___c__DisplayClass44_0 : public ::System::Object
	{
	public:
		::System::UInt32 configID; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGBATTLE_CHENLINGBATTLEGAMESESSION___C__DISPLAYCLASS44_0__CTOR_OFFSET))(this);
		}

		::System::Boolean _GetSoldiersByConfigID_b__0(::RPG::Client::ChenLingBattle::Soldier* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::ChenLingBattle::Soldier*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGBATTLE_CHENLINGBATTLEGAMESESSION___C__DISPLAYCLASS44_0__GETSOLDIERSBYCONFIGID_B__0_OFFSET))(this, a1);
		}
	};
}

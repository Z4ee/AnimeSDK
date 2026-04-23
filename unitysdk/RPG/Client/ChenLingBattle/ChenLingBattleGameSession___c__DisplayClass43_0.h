#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client::ChenLingBattle { class IEntity; }

#define RPG_CLIENT_CHENLINGBATTLE_CHENLINGBATTLEGAMESESSION___C__DISPLAYCLASS43_0__CTOR_OFFSET UNITYSDK_OFFSET(0x9F9C210)
#define RPG_CLIENT_CHENLINGBATTLE_CHENLINGBATTLEGAMESESSION___C__DISPLAYCLASS43_0__GETSOLDIERBYCONFIGID_B__0_OFFSET UNITYSDK_OFFSET(0x9FA18C0)

namespace RPG::Client::ChenLingBattle
{
	inline static constexpr unsigned int ChenLingBattleGameSession___c__DisplayClass43_0_TypeDefinitionIndex = 70093;

	class ChenLingBattleGameSession___c__DisplayClass43_0 : public ::System::Object
	{
	public:
		::System::UInt32 configID; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGBATTLE_CHENLINGBATTLEGAMESESSION___C__DISPLAYCLASS43_0__CTOR_OFFSET))(this);
		}

		::System::Boolean _GetSoldierByConfigID_b__0(::RPG::Client::ChenLingBattle::IEntity* x)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::ChenLingBattle::IEntity*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGBATTLE_CHENLINGBATTLEGAMESESSION___C__DISPLAYCLASS43_0__GETSOLDIERBYCONFIGID_B__0_OFFSET))(this, x);
		}
	};
}

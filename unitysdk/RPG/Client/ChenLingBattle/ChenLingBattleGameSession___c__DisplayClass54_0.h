#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client::ChenLingBattle { class IEntity; }

#define RPG_CLIENT_CHENLINGBATTLE_CHENLINGBATTLEGAMESESSION___C__DISPLAYCLASS54_0__CTOR_OFFSET UNITYSDK_OFFSET(0x9F9CC70)
#define RPG_CLIENT_CHENLINGBATTLE_CHENLINGBATTLEGAMESESSION___C__DISPLAYCLASS54_0__REMOVEENTITY_B__0_OFFSET UNITYSDK_OFFSET(0x9FA1A00)

namespace RPG::Client::ChenLingBattle
{
	inline static constexpr unsigned int ChenLingBattleGameSession___c__DisplayClass54_0_TypeDefinitionIndex = 70097;

	class ChenLingBattleGameSession___c__DisplayClass54_0 : public ::System::Object
	{
	public:
		::System::UInt32 uniqueID; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGBATTLE_CHENLINGBATTLEGAMESESSION___C__DISPLAYCLASS54_0__CTOR_OFFSET))(this);
		}

		::System::Boolean _RemoveEntity_b__0(::RPG::Client::ChenLingBattle::IEntity* x)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::ChenLingBattle::IEntity*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGBATTLE_CHENLINGBATTLEGAMESESSION___C__DISPLAYCLASS54_0__REMOVEENTITY_B__0_OFFSET))(this, x);
		}
	};
}

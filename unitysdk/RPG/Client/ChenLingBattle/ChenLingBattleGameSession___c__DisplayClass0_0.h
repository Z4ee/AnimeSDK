#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client::ChenLingBattle { class HandCard; }

#define RPG_CLIENT_CHENLINGBATTLE_CHENLINGBATTLEGAMESESSION___C__DISPLAYCLASS0_0__CTOR_OFFSET UNITYSDK_OFFSET(0x9F93D10)
#define RPG_CLIENT_CHENLINGBATTLE_CHENLINGBATTLEGAMESESSION___C__DISPLAYCLASS0_0__GETHANDCARD_B__0_OFFSET UNITYSDK_OFFSET(0x9FA17C0)

namespace RPG::Client::ChenLingBattle
{
	inline static constexpr unsigned int ChenLingBattleGameSession___c__DisplayClass0_0_TypeDefinitionIndex = 70091;

	class ChenLingBattleGameSession___c__DisplayClass0_0 : public ::System::Object
	{
	public:
		::System::UInt32 uniqueID; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGBATTLE_CHENLINGBATTLEGAMESESSION___C__DISPLAYCLASS0_0__CTOR_OFFSET))(this);
		}

		::System::Boolean _GetHandCard_b__0(::RPG::Client::ChenLingBattle::HandCard* x)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::ChenLingBattle::HandCard*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGBATTLE_CHENLINGBATTLEGAMESESSION___C__DISPLAYCLASS0_0__GETHANDCARD_B__0_OFFSET))(this, x);
		}
	};
}

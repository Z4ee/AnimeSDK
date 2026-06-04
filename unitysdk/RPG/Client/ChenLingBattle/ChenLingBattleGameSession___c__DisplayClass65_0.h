#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client::ChenLingBattle { class Effect; }

#define RPG_CLIENT_CHENLINGBATTLE_CHENLINGBATTLEGAMESESSION___C__DISPLAYCLASS65_0__CTOR_OFFSET UNITYSDK_OFFSET(0xB5B56C0)
#define RPG_CLIENT_CHENLINGBATTLE_CHENLINGBATTLEGAMESESSION___C__DISPLAYCLASS65_0__REMOVEEFFECT_B__0_OFFSET UNITYSDK_OFFSET(0xB5BA950)

namespace RPG::Client::ChenLingBattle
{
	inline static constexpr unsigned int ChenLingBattleGameSession___c__DisplayClass65_0_TypeDefinitionIndex = 70911;

	class ChenLingBattleGameSession___c__DisplayClass65_0 : public ::System::Object
	{
	public:
		::System::UInt64 uniqueID; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGBATTLE_CHENLINGBATTLEGAMESESSION___C__DISPLAYCLASS65_0__CTOR_OFFSET))(this);
		}

		::System::Boolean _RemoveEffect_b__0(::RPG::Client::ChenLingBattle::Effect* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::ChenLingBattle::Effect*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGBATTLE_CHENLINGBATTLEGAMESESSION___C__DISPLAYCLASS65_0__REMOVEEFFECT_B__0_OFFSET))(this, a1);
		}
	};
}

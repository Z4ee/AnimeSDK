#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client::ChenLingBattle { class Effect; }

#define RPG_CLIENT_CHENLINGBATTLE_CHENLINGBATTLEGAMESESSION___C__DISPLAYCLASS94_0__CTOR_OFFSET UNITYSDK_OFFSET(0xCA4F370)
#define RPG_CLIENT_CHENLINGBATTLE_CHENLINGBATTLEGAMESESSION___C__DISPLAYCLASS94_0__GETEFFECT_B__0_OFFSET UNITYSDK_OFFSET(0xCA50B80)

namespace RPG::Client::ChenLingBattle
{
	inline static constexpr unsigned int ChenLingBattleGameSession___c__DisplayClass94_0_TypeDefinitionIndex = 76342;

	class ChenLingBattleGameSession___c__DisplayClass94_0 : public ::System::Object
	{
	public:
		::System::UInt64 effectUniqueID; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGBATTLE_CHENLINGBATTLEGAMESESSION___C__DISPLAYCLASS94_0__CTOR_OFFSET))(this);
		}

		::System::Boolean _GetEffect_b__0(::RPG::Client::ChenLingBattle::Effect* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::ChenLingBattle::Effect*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGBATTLE_CHENLINGBATTLEGAMESESSION___C__DISPLAYCLASS94_0__GETEFFECT_B__0_OFFSET))(this, a1);
		}
	};
}

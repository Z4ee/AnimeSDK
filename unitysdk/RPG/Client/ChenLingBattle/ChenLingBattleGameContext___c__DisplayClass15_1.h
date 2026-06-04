#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client::Promises { class Promise; }

#define RPG_CLIENT_CHENLINGBATTLE_CHENLINGBATTLEGAMECONTEXT___C__DISPLAYCLASS15_1__CTOR_OFFSET UNITYSDK_OFFSET(0xB5AA2F0)
#define RPG_CLIENT_CHENLINGBATTLE_CHENLINGBATTLEGAMECONTEXT___C__DISPLAYCLASS15_1___INITPHASE_B__1_OFFSET UNITYSDK_OFFSET(0xB5AAE10)

namespace RPG::Client::ChenLingBattle
{
	inline static constexpr unsigned int ChenLingBattleGameContext___c__DisplayClass15_1_TypeDefinitionIndex = 70801;

	class ChenLingBattleGameContext___c__DisplayClass15_1 : public ::System::Object
	{
	public:
		::RPG::Client::Promises::Promise* promise; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGBATTLE_CHENLINGBATTLEGAMECONTEXT___C__DISPLAYCLASS15_1__CTOR_OFFSET))(this);
		}

		::System::Void __InitPhase_b__1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGBATTLE_CHENLINGBATTLEGAMECONTEXT___C__DISPLAYCLASS15_1___INITPHASE_B__1_OFFSET))(this);
		}
	};
}

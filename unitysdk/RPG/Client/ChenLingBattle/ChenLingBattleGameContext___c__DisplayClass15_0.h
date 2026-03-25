#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client::Promises { class Promise; }

#define RPG_CLIENT_CHENLINGBATTLE_CHENLINGBATTLEGAMECONTEXT___C__DISPLAYCLASS15_0__CTOR_OFFSET UNITYSDK_OFFSET(0x9323060)
#define RPG_CLIENT_CHENLINGBATTLE_CHENLINGBATTLEGAMECONTEXT___C__DISPLAYCLASS15_0___INITPHASE_B__0_OFFSET UNITYSDK_OFFSET(0x93246A0)

namespace RPG::Client::ChenLingBattle
{
	inline static constexpr unsigned int ChenLingBattleGameContext___c__DisplayClass15_0_TypeDefinitionIndex = 61990;

	class ChenLingBattleGameContext___c__DisplayClass15_0 : public ::System::Object
	{
	public:
		::RPG::Client::Promises::Promise* promise; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGBATTLE_CHENLINGBATTLEGAMECONTEXT___C__DISPLAYCLASS15_0__CTOR_OFFSET))(this);
		}

		::System::Void __InitPhase_b__0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGBATTLE_CHENLINGBATTLEGAMECONTEXT___C__DISPLAYCLASS15_0___INITPHASE_B__0_OFFSET))(this);
		}
	};
}

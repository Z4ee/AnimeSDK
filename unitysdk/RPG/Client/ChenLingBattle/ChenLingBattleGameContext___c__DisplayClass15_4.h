#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client::Promises { class Promise; }

#define RPG_CLIENT_CHENLINGBATTLE_CHENLINGBATTLEGAMECONTEXT___C__DISPLAYCLASS15_4__CTOR_OFFSET UNITYSDK_OFFSET(0xB5AA320)
#define RPG_CLIENT_CHENLINGBATTLE_CHENLINGBATTLEGAMECONTEXT___C__DISPLAYCLASS15_4___INITPHASE_B__4_OFFSET UNITYSDK_OFFSET(0xB5AAE70)

namespace RPG::Client::ChenLingBattle
{
	inline static constexpr unsigned int ChenLingBattleGameContext___c__DisplayClass15_4_TypeDefinitionIndex = 70804;

	class ChenLingBattleGameContext___c__DisplayClass15_4 : public ::System::Object
	{
	public:
		::RPG::Client::Promises::Promise* promise; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGBATTLE_CHENLINGBATTLEGAMECONTEXT___C__DISPLAYCLASS15_4__CTOR_OFFSET))(this);
		}

		::System::Void __InitPhase_b__4()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGBATTLE_CHENLINGBATTLEGAMECONTEXT___C__DISPLAYCLASS15_4___INITPHASE_B__4_OFFSET))(this);
		}
	};
}

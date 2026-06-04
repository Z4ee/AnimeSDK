#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client::Promises { class Promise; }

#define RPG_CLIENT_CHENLINGBATTLE_CHENLINGBATTLEGAMECONTEXT___C__DISPLAYCLASS15_3__CTOR_OFFSET UNITYSDK_OFFSET(0xB5AA310)
#define RPG_CLIENT_CHENLINGBATTLE_CHENLINGBATTLEGAMECONTEXT___C__DISPLAYCLASS15_3___INITPHASE_B__3_OFFSET UNITYSDK_OFFSET(0xB5AAE50)

namespace RPG::Client::ChenLingBattle
{
	inline static constexpr unsigned int ChenLingBattleGameContext___c__DisplayClass15_3_TypeDefinitionIndex = 70803;

	class ChenLingBattleGameContext___c__DisplayClass15_3 : public ::System::Object
	{
	public:
		::RPG::Client::Promises::Promise* promise; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGBATTLE_CHENLINGBATTLEGAMECONTEXT___C__DISPLAYCLASS15_3__CTOR_OFFSET))(this);
		}

		::System::Void __InitPhase_b__3()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGBATTLE_CHENLINGBATTLEGAMECONTEXT___C__DISPLAYCLASS15_3___INITPHASE_B__3_OFFSET))(this);
		}
	};
}

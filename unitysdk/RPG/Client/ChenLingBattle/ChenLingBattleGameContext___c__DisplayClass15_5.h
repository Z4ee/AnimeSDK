#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client::Promises { class Promise; }

#define RPG_CLIENT_CHENLINGBATTLE_CHENLINGBATTLEGAMECONTEXT___C__DISPLAYCLASS15_5__CTOR_OFFSET UNITYSDK_OFFSET(0x9F91290)
#define RPG_CLIENT_CHENLINGBATTLE_CHENLINGBATTLEGAMECONTEXT___C__DISPLAYCLASS15_5___INITPHASE_B__5_OFFSET UNITYSDK_OFFSET(0x9F91E00)

namespace RPG::Client::ChenLingBattle
{
	inline static constexpr unsigned int ChenLingBattleGameContext___c__DisplayClass15_5_TypeDefinitionIndex = 69993;

	class ChenLingBattleGameContext___c__DisplayClass15_5 : public ::System::Object
	{
	public:
		::RPG::Client::Promises::Promise* promise; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGBATTLE_CHENLINGBATTLEGAMECONTEXT___C__DISPLAYCLASS15_5__CTOR_OFFSET))(this);
		}

		::System::Void __InitPhase_b__5()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGBATTLE_CHENLINGBATTLEGAMECONTEXT___C__DISPLAYCLASS15_5___INITPHASE_B__5_OFFSET))(this);
		}
	};
}

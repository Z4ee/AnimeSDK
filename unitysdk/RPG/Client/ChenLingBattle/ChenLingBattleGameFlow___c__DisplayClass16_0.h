#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class AboveSwitchDialog; }

#define RPG_CLIENT_CHENLINGBATTLE_CHENLINGBATTLEGAMEFLOW___C__DISPLAYCLASS16_0__CTOR_OFFSET UNITYSDK_OFFSET(0xB5AC3B0)
#define RPG_CLIENT_CHENLINGBATTLE_CHENLINGBATTLEGAMEFLOW___C__DISPLAYCLASS16_0___SHOWBLACKDIALOGWAITCLOSE_B__0_OFFSET UNITYSDK_OFFSET(0xB5AC960)

namespace RPG::Client::ChenLingBattle
{
	inline static constexpr unsigned int ChenLingBattleGameFlow___c__DisplayClass16_0_TypeDefinitionIndex = 70809;

	class ChenLingBattleGameFlow___c__DisplayClass16_0 : public ::System::Object
	{
	public:
		::RPG::Client::AboveSwitchDialog* transfer; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGBATTLE_CHENLINGBATTLEGAMEFLOW___C__DISPLAYCLASS16_0__CTOR_OFFSET))(this);
		}

		::System::Void __ShowBlackDialogWaitClose_b__0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGBATTLE_CHENLINGBATTLEGAMEFLOW___C__DISPLAYCLASS16_0___SHOWBLACKDIALOGWAITCLOSE_B__0_OFFSET))(this);
		}
	};
}

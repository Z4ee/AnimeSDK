#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole { class UIAutoBattleRewardPopWindowController; }

#define MOLEMOLE_UIAUTOBATTLEREWARDPOPWINDOWCONTROLLER___C__DISPLAYCLASS21_0__CTOR_OFFSET UNITYSDK_OFFSET(0x152E0110)
#define MOLEMOLE_UIAUTOBATTLEREWARDPOPWINDOWCONTROLLER___C__DISPLAYCLASS21_0__ONITEMCLICK_B__0_OFFSET UNITYSDK_OFFSET(0x152E0120)

namespace MoleMole
{
	inline static constexpr unsigned int UIAutoBattleRewardPopWindowController___c__DisplayClass21_0_TypeDefinitionIndex = 61848;

	class UIAutoBattleRewardPopWindowController___c__DisplayClass21_0 : public ::System::Object
	{
	public:
		::MoleMole::UIAutoBattleRewardPopWindowController* __4__this; // 0x10
		::System::Int32 index; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIAUTOBATTLEREWARDPOPWINDOWCONTROLLER___C__DISPLAYCLASS21_0__CTOR_OFFSET))(this);
		}

		::System::Void _OnItemClick_b__0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIAUTOBATTLEREWARDPOPWINDOWCONTROLLER___C__DISPLAYCLASS21_0__ONITEMCLICK_B__0_OFFSET))(this);
		}
	};
}

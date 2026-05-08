#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole { class UIHollowMainPageController; }
namespace System { class Action; }

#define MOLEMOLE_UIHOLLOWMAINPAGECONTROLLER___C__DISPLAYCLASS39_0__CHECKCHESSBOARDPREPARE_B__2_OFFSET UNITYSDK_OFFSET(0x14819AE0)
#define MOLEMOLE_UIHOLLOWMAINPAGECONTROLLER___C__DISPLAYCLASS39_0__CHECKCHESSBOARDPREPARE_G____AFTERBATTLEWAITFORMAINPAGEFADEIN_1_OFFSET UNITYSDK_OFFSET(0x14819810)
#define MOLEMOLE_UIHOLLOWMAINPAGECONTROLLER___C__DISPLAYCLASS39_0__CHECKCHESSBOARDPREPARE_G____CHECKNORMALCHESSBOARD_0_OFFSET UNITYSDK_OFFSET(0x148195C0)
#define MOLEMOLE_UIHOLLOWMAINPAGECONTROLLER___C__DISPLAYCLASS39_0__CTOR_OFFSET UNITYSDK_OFFSET(0x148195B0)

namespace MoleMole
{
	inline static constexpr unsigned int UIHollowMainPageController___c__DisplayClass39_0_TypeDefinitionIndex = 44931;

	class UIHollowMainPageController___c__DisplayClass39_0 : public ::System::Object
	{
	public:
		::System::Action* preloadFinishCallBack; // 0x10
		::MoleMole::UIHollowMainPageController* __4__this; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWMAINPAGECONTROLLER___C__DISPLAYCLASS39_0__CTOR_OFFSET))(this);
		}

		::System::Void _CheckChessboardPrepare_g____checkNormalChessboard_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWMAINPAGECONTROLLER___C__DISPLAYCLASS39_0__CHECKCHESSBOARDPREPARE_G____CHECKNORMALCHESSBOARD_0_OFFSET))(this);
		}

		::System::Void _CheckChessboardPrepare_b__2()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWMAINPAGECONTROLLER___C__DISPLAYCLASS39_0__CHECKCHESSBOARDPREPARE_B__2_OFFSET))(this);
		}

		::System::Void _CheckChessboardPrepare_g____afterBattleWaitForMainPageFadeIn_1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWMAINPAGECONTROLLER___C__DISPLAYCLASS39_0__CHECKCHESSBOARDPREPARE_G____AFTERBATTLEWAITFORMAINPAGEFADEIN_1_OFFSET))(this);
		}
	};
}

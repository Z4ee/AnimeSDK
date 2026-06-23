#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole { class UIAbyssS2RewardDialogPageController; }
namespace MoleMole { class UIControllerContextBase; }

#define MOLEMOLE_UIABYSSS2REWARDDIALOGPAGECONTROLLER___C__DISPLAYCLASS16_0__CTOR_OFFSET UNITYSDK_OFFSET(0x173C0A20)
#define MOLEMOLE_UIABYSSS2REWARDDIALOGPAGECONTROLLER___C__DISPLAYCLASS16_0__ONUIOPEN_B__0_OFFSET UNITYSDK_OFFSET(0x173C0A30)

namespace MoleMole
{
	inline static constexpr unsigned int UIAbyssS2RewardDialogPageController___c__DisplayClass16_0_TypeDefinitionIndex = 66546;

	class UIAbyssS2RewardDialogPageController___c__DisplayClass16_0 : public ::System::Object
	{
	public:
		::MoleMole::UIControllerContextBase* openCtrlContext; // 0x10
		::MoleMole::UIAbyssS2RewardDialogPageController* __4__this; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIABYSSS2REWARDDIALOGPAGECONTROLLER___C__DISPLAYCLASS16_0__CTOR_OFFSET))(this);
		}

		::System::Void _OnUIOpen_b__0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIABYSSS2REWARDDIALOGPAGECONTROLLER___C__DISPLAYCLASS16_0__ONUIOPEN_B__0_OFFSET))(this);
		}
	};
}

#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIBangkovTipsDialogPopWindowController_ItemInfo.h"
#include "unitysdk/System/Object.h"

namespace MoleMole { class UIBangkovSecondTipsWidgetController; }
namespace MoleMole { class UIItemIconBtnWidgetController; }

#define MOLEMOLE_UIBANGKOVSECONDTIPSWIDGETCONTROLLER___C__DISPLAYCLASS9_0__CTOR_OFFSET UNITYSDK_OFFSET(0x175B67C0)
#define MOLEMOLE_UIBANGKOVSECONDTIPSWIDGETCONTROLLER___C__DISPLAYCLASS9_0__REFRESHVIEW_B__0_OFFSET UNITYSDK_OFFSET(0x175B67D0)

namespace MoleMole
{
	inline static constexpr unsigned int UIBangkovSecondTipsWidgetController___c__DisplayClass9_0_TypeDefinitionIndex = 42608;

	class UIBangkovSecondTipsWidgetController___c__DisplayClass9_0 : public ::System::Object
	{
	public:
		::MoleMole::UIBangkovSecondTipsWidgetController* __4__this; // 0x10
		::MoleMole::UIBangkovTipsDialogPopWindowController_ItemInfo itemInfo; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBANGKOVSECONDTIPSWIDGETCONTROLLER___C__DISPLAYCLASS9_0__CTOR_OFFSET))(this);
		}

		::System::Void _RefreshView_b__0(::MoleMole::UIItemIconBtnWidgetController* ctrl)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIItemIconBtnWidgetController*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBANGKOVSECONDTIPSWIDGETCONTROLLER___C__DISPLAYCLASS9_0__REFRESHVIEW_B__0_OFFSET))(this, ctrl);
		}
	};
}

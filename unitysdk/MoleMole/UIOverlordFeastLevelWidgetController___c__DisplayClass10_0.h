#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole { class UIOverlordFeastLevelWidgetController; }
namespace System { class Action; }

#define MOLEMOLE_UIOVERLORDFEASTLEVELWIDGETCONTROLLER___C__DISPLAYCLASS10_0__CTOR_OFFSET UNITYSDK_OFFSET(0x178C6CC0)
#define MOLEMOLE_UIOVERLORDFEASTLEVELWIDGETCONTROLLER___C__DISPLAYCLASS10_0__DOREFRESHVIEWWITHLEVELUPGRADE_B__0_OFFSET UNITYSDK_OFFSET(0x178C6CD0)
#define MOLEMOLE_UIOVERLORDFEASTLEVELWIDGETCONTROLLER___C__DISPLAYCLASS10_0__DOREFRESHVIEWWITHLEVELUPGRADE_B__1_OFFSET UNITYSDK_OFFSET(0x178C6E70)
#define MOLEMOLE_UIOVERLORDFEASTLEVELWIDGETCONTROLLER___C__DISPLAYCLASS10_0__DOREFRESHVIEWWITHLEVELUPGRADE_B__2_OFFSET UNITYSDK_OFFSET(0x178C6ED0)

namespace MoleMole
{
	inline static constexpr unsigned int UIOverlordFeastLevelWidgetController___c__DisplayClass10_0_TypeDefinitionIndex = 48863;

	class UIOverlordFeastLevelWidgetController___c__DisplayClass10_0 : public ::System::Object
	{
	public:
		::System::Action* __9__1; // 0x10
		::MoleMole::UIOverlordFeastLevelWidgetController* __4__this; // 0x18
		::System::Action* __9__2; // 0x20
		::System::Int32 curLevel; // 0x28
		::System::Single curProgress; // 0x2C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIOVERLORDFEASTLEVELWIDGETCONTROLLER___C__DISPLAYCLASS10_0__CTOR_OFFSET))(this);
		}

		::System::Void _DoRefreshViewWithLevelUpgrade_b__0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIOVERLORDFEASTLEVELWIDGETCONTROLLER___C__DISPLAYCLASS10_0__DOREFRESHVIEWWITHLEVELUPGRADE_B__0_OFFSET))(this);
		}

		::System::Void _DoRefreshViewWithLevelUpgrade_b__1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIOVERLORDFEASTLEVELWIDGETCONTROLLER___C__DISPLAYCLASS10_0__DOREFRESHVIEWWITHLEVELUPGRADE_B__1_OFFSET))(this);
		}

		::System::Void _DoRefreshViewWithLevelUpgrade_b__2()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIOVERLORDFEASTLEVELWIDGETCONTROLLER___C__DISPLAYCLASS10_0__DOREFRESHVIEWWITHLEVELUPGRADE_B__2_OFFSET))(this);
		}
	};
}

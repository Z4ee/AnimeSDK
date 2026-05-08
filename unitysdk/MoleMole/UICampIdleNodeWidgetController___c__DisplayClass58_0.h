#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole { class UICampIdleNodeWidgetController; }

#define MOLEMOLE_UICAMPIDLENODEWIDGETCONTROLLER___C__DISPLAYCLASS58_0__CTOR_OFFSET UNITYSDK_OFFSET(0x16813350)
#define MOLEMOLE_UICAMPIDLENODEWIDGETCONTROLLER___C__DISPLAYCLASS58_0__REFRESHVIEW_B__0_OFFSET UNITYSDK_OFFSET(0x16813360)
#define MOLEMOLE_UICAMPIDLENODEWIDGETCONTROLLER___C__DISPLAYCLASS58_0__REFRESHVIEW_B__1_OFFSET UNITYSDK_OFFSET(0x168133B0)

namespace MoleMole
{
	inline static constexpr unsigned int UICampIdleNodeWidgetController___c__DisplayClass58_0_TypeDefinitionIndex = 78264;

	class UICampIdleNodeWidgetController___c__DisplayClass58_0 : public ::System::Object
	{
	public:
		::MoleMole::UICampIdleNodeWidgetController* __4__this; // 0x10
		::System::Boolean showLockUI; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UICAMPIDLENODEWIDGETCONTROLLER___C__DISPLAYCLASS58_0__CTOR_OFFSET))(this);
		}

		::System::Void _RefreshView_b__0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UICAMPIDLENODEWIDGETCONTROLLER___C__DISPLAYCLASS58_0__REFRESHVIEW_B__0_OFFSET))(this);
		}

		::System::Void _RefreshView_b__1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UICAMPIDLENODEWIDGETCONTROLLER___C__DISPLAYCLASS58_0__REFRESHVIEW_B__1_OFFSET))(this);
		}
	};
}

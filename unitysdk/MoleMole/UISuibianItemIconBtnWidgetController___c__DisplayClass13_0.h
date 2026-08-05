#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole { class UISuibianItemIconBtnWidgetController; }
namespace System { class Action; }

#define MOLEMOLE_UISUIBIANITEMICONBTNWIDGETCONTROLLER___C__DISPLAYCLASS13_0__CTOR_OFFSET UNITYSDK_OFFSET(0x15199DA0)
#define MOLEMOLE_UISUIBIANITEMICONBTNWIDGETCONTROLLER___C__DISPLAYCLASS13_0__REFRESHVIEW_B__0_OFFSET UNITYSDK_OFFSET(0x15199DB0)

namespace MoleMole
{
	inline static constexpr unsigned int UISuibianItemIconBtnWidgetController___c__DisplayClass13_0_TypeDefinitionIndex = 55870;

	class UISuibianItemIconBtnWidgetController___c__DisplayClass13_0 : public ::System::Object
	{
	public:
		::System::Action* customTipHandle; // 0x10
		::MoleMole::UISuibianItemIconBtnWidgetController* __4__this; // 0x18
		::System::Int32 curCount; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UISUIBIANITEMICONBTNWIDGETCONTROLLER___C__DISPLAYCLASS13_0__CTOR_OFFSET))(this);
		}

		::System::Void _RefreshView_b__0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UISUIBIANITEMICONBTNWIDGETCONTROLLER___C__DISPLAYCLASS13_0__REFRESHVIEW_B__0_OFFSET))(this);
		}
	};
}

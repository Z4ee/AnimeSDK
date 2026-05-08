#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole { class UISuibianItemIconBtnWidgetController; }
namespace System { class Action; }

#define MOLEMOLE_UISUIBIANITEMICONBTNWIDGETCONTROLLER___C__DISPLAYCLASS14_0__CTOR_OFFSET UNITYSDK_OFFSET(0x14C0D0C0)
#define MOLEMOLE_UISUIBIANITEMICONBTNWIDGETCONTROLLER___C__DISPLAYCLASS14_0__REFRESHVIEW_B__0_OFFSET UNITYSDK_OFFSET(0x14C0D0D0)

namespace MoleMole
{
	inline static constexpr unsigned int UISuibianItemIconBtnWidgetController___c__DisplayClass14_0_TypeDefinitionIndex = 49005;

	class UISuibianItemIconBtnWidgetController___c__DisplayClass14_0 : public ::System::Object
	{
	public:
		::MoleMole::UISuibianItemIconBtnWidgetController* __4__this; // 0x10
		::System::Action* customTipHandle; // 0x18
		::System::Boolean isShowTip; // 0x20
		::System::Int32 itemID; // 0x24

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UISUIBIANITEMICONBTNWIDGETCONTROLLER___C__DISPLAYCLASS14_0__CTOR_OFFSET))(this);
		}

		::System::Void _RefreshView_b__0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UISUIBIANITEMICONBTNWIDGETCONTROLLER___C__DISPLAYCLASS14_0__REFRESHVIEW_B__0_OFFSET))(this);
		}
	};
}

#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole { class UIItemIconBtnSmallWidgetController; }

#define MOLEMOLE_UIITEMICONBTNSMALLWIDGETCONTROLLER___C__DISPLAYCLASS16_0__CTOR_OFFSET UNITYSDK_OFFSET(0x163C17F0)
#define MOLEMOLE_UIITEMICONBTNSMALLWIDGETCONTROLLER___C__DISPLAYCLASS16_0__REFRESHVIEW_B__0_OFFSET UNITYSDK_OFFSET(0x163C1800)

namespace MoleMole
{
	inline static constexpr unsigned int UIItemIconBtnSmallWidgetController___c__DisplayClass16_0_TypeDefinitionIndex = 46271;

	class UIItemIconBtnSmallWidgetController___c__DisplayClass16_0 : public ::System::Object
	{
	public:
		::MoleMole::UIItemIconBtnSmallWidgetController* __4__this; // 0x10
		::System::Int32 templateID; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIITEMICONBTNSMALLWIDGETCONTROLLER___C__DISPLAYCLASS16_0__CTOR_OFFSET))(this);
		}

		::System::Void _RefreshView_b__0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIITEMICONBTNSMALLWIDGETCONTROLLER___C__DISPLAYCLASS16_0__REFRESHVIEW_B__0_OFFSET))(this);
		}
	};
}

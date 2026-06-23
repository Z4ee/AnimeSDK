#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole { class UIItemIconBtnWidgetController; }
namespace System { class Action; }
namespace System { template <typename T> class Action_1; }

#define MOLEMOLE_UIITEMICONBTNWIDGETCONTROLLER___C__DISPLAYCLASS113_0__CTOR_OFFSET UNITYSDK_OFFSET(0x16E7DF00)
#define MOLEMOLE_UIITEMICONBTNWIDGETCONTROLLER___C__DISPLAYCLASS113_0__REFRESHVIEW_B__0_OFFSET UNITYSDK_OFFSET(0x16E7DF10)
#define MOLEMOLE_UIITEMICONBTNWIDGETCONTROLLER___C__DISPLAYCLASS113_0__REFRESHVIEW_B__1_OFFSET UNITYSDK_OFFSET(0x16E7E010)

namespace MoleMole
{
	inline static constexpr unsigned int UIItemIconBtnWidgetController___c__DisplayClass113_0_TypeDefinitionIndex = 79873;

	class UIItemIconBtnWidgetController___c__DisplayClass113_0 : public ::System::Object
	{
	public:
		::System::Action* customDoubleClickAction; // 0x10
		::System::Action* customTipHandle; // 0x18
		::MoleMole::UIItemIconBtnWidgetController* __4__this; // 0x20
		::System::Action_1<::MoleMole::UIItemIconBtnWidgetController*>* customTipHandleWithController; // 0x28
		::System::Int32 itemID; // 0x30
		::System::Boolean disableJump; // 0x34
		::System::Boolean isShowTip; // 0x35
		::System::Boolean jumpControl; // 0x36

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIITEMICONBTNWIDGETCONTROLLER___C__DISPLAYCLASS113_0__CTOR_OFFSET))(this);
		}

		::System::Void _RefreshView_b__0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIITEMICONBTNWIDGETCONTROLLER___C__DISPLAYCLASS113_0__REFRESHVIEW_B__0_OFFSET))(this);
		}

		::System::Void _RefreshView_b__1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIITEMICONBTNWIDGETCONTROLLER___C__DISPLAYCLASS113_0__REFRESHVIEW_B__1_OFFSET))(this);
		}
	};
}

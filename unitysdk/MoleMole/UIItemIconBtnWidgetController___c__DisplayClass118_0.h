#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_175;
namespace MoleMole { class UIItemIconBtnWidgetController; }
namespace System { class Action; }
namespace System { template <typename T> class Action_1; }

#define MOLEMOLE_UIITEMICONBTNWIDGETCONTROLLER___C__DISPLAYCLASS118_0__CTOR_OFFSET UNITYSDK_OFFSET(0x16506000)
#define MOLEMOLE_UIITEMICONBTNWIDGETCONTROLLER___C__DISPLAYCLASS118_0__REFRESHVIEW_B__0_OFFSET UNITYSDK_OFFSET(0x1650E8F0)
#define MOLEMOLE_UIITEMICONBTNWIDGETCONTROLLER___C__DISPLAYCLASS118_0__REFRESHVIEW_B__1_OFFSET UNITYSDK_OFFSET(0x1650E9F0)

namespace MoleMole
{
	inline static constexpr unsigned int UIItemIconBtnWidgetController___c__DisplayClass118_0_TypeDefinitionIndex = 53259;

	class UIItemIconBtnWidgetController___c__DisplayClass118_0 : public ::System::Object
	{
	public:
		::System::Action_1<::Class_0_16E4307DCC419505_175*>* customTipHandleWithController; // 0x10
		::System::Action* customDoubleClickAction; // 0x18
		::MoleMole::UIItemIconBtnWidgetController* __4__this; // 0x20
		::System::Action* customTipHandle; // 0x28
		::System::Boolean isShowTip; // 0x30
		::System::Boolean jumpControl; // 0x31
		::System::Boolean disableJump; // 0x32
		::System::Int32 itemID; // 0x34

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIITEMICONBTNWIDGETCONTROLLER___C__DISPLAYCLASS118_0__CTOR_OFFSET))(this);
		}

		::System::Void _RefreshView_b__0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIITEMICONBTNWIDGETCONTROLLER___C__DISPLAYCLASS118_0__REFRESHVIEW_B__0_OFFSET))(this);
		}

		::System::Void _RefreshView_b__1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIITEMICONBTNWIDGETCONTROLLER___C__DISPLAYCLASS118_0__REFRESHVIEW_B__1_OFFSET))(this);
		}
	};
}

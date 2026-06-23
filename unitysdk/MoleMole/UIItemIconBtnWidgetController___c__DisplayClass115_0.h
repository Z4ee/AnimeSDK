#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole { class UIItemIconBtnWidgetController; }
namespace System { class Action; }
namespace System { template <typename T> class Action_1; }

#define MOLEMOLE_UIITEMICONBTNWIDGETCONTROLLER___C__DISPLAYCLASS115_0__CTOR_OFFSET UNITYSDK_OFFSET(0x16C042F0)
#define MOLEMOLE_UIITEMICONBTNWIDGETCONTROLLER___C__DISPLAYCLASS115_0__REFRESHVIEW_B__0_OFFSET UNITYSDK_OFFSET(0x16C04300)
#define MOLEMOLE_UIITEMICONBTNWIDGETCONTROLLER___C__DISPLAYCLASS115_0__REFRESHVIEW_B__1_OFFSET UNITYSDK_OFFSET(0x16C04400)
#define MOLEMOLE_UIITEMICONBTNWIDGETCONTROLLER___C__DISPLAYCLASS115_0__REFRESHVIEW_B__2_OFFSET UNITYSDK_OFFSET(0x16C04580)
#define MOLEMOLE_UIITEMICONBTNWIDGETCONTROLLER___C__DISPLAYCLASS115_0__REFRESHVIEW_B__3_OFFSET UNITYSDK_OFFSET(0x16C045B0)
#define MOLEMOLE_UIITEMICONBTNWIDGETCONTROLLER___C__DISPLAYCLASS115_0__REFRESHVIEW_B__4_OFFSET UNITYSDK_OFFSET(0x16C045E0)
#define MOLEMOLE_UIITEMICONBTNWIDGETCONTROLLER___C__DISPLAYCLASS115_0__REFRESHVIEW_B__5_OFFSET UNITYSDK_OFFSET(0x16C04770)

namespace MoleMole
{
	inline static constexpr unsigned int UIItemIconBtnWidgetController___c__DisplayClass115_0_TypeDefinitionIndex = 79872;

	class UIItemIconBtnWidgetController___c__DisplayClass115_0 : public ::System::Object
	{
	public:
		::System::Action_1<::MoleMole::UIItemIconBtnWidgetController*>* customTipHandleWithController; // 0x10
		::System::Action* customDoubleClickAction; // 0x18
		::MoleMole::UIItemIconBtnWidgetController* __4__this; // 0x20
		::System::Action* customTipHandle; // 0x28
		::System::Boolean disableJump; // 0x30
		::System::Boolean jumpControl; // 0x31
		::System::Int32 curCount; // 0x34

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIITEMICONBTNWIDGETCONTROLLER___C__DISPLAYCLASS115_0__CTOR_OFFSET))(this);
		}

		::System::Void _RefreshView_b__0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIITEMICONBTNWIDGETCONTROLLER___C__DISPLAYCLASS115_0__REFRESHVIEW_B__0_OFFSET))(this);
		}

		::System::Void _RefreshView_b__1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIITEMICONBTNWIDGETCONTROLLER___C__DISPLAYCLASS115_0__REFRESHVIEW_B__1_OFFSET))(this);
		}

		::System::Void _RefreshView_b__2()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIITEMICONBTNWIDGETCONTROLLER___C__DISPLAYCLASS115_0__REFRESHVIEW_B__2_OFFSET))(this);
		}

		::System::Void _RefreshView_b__3()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIITEMICONBTNWIDGETCONTROLLER___C__DISPLAYCLASS115_0__REFRESHVIEW_B__3_OFFSET))(this);
		}

		::System::Void _RefreshView_b__4(::System::Single t1, ::System::Single t2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_UIITEMICONBTNWIDGETCONTROLLER___C__DISPLAYCLASS115_0__REFRESHVIEW_B__4_OFFSET))(this, t1, t2);
		}

		::System::Void _RefreshView_b__5(::System::Single t1, ::System::Single t2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_UIITEMICONBTNWIDGETCONTROLLER___C__DISPLAYCLASS115_0__REFRESHVIEW_B__5_OFFSET))(this, t1, t2);
		}
	};
}

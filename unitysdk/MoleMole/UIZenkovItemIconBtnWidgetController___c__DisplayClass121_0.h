#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_175;
namespace MoleMole { class UIZenkovItemIconBtnWidgetController; }
namespace System { class Action; }
namespace System { template <typename T> class Action_1; }

#define MOLEMOLE_UIZENKOVITEMICONBTNWIDGETCONTROLLER___C__DISPLAYCLASS121_0__CTOR_OFFSET UNITYSDK_OFFSET(0x14D9EAF0)
#define MOLEMOLE_UIZENKOVITEMICONBTNWIDGETCONTROLLER___C__DISPLAYCLASS121_0__REFRESHVIEW_B__0_OFFSET UNITYSDK_OFFSET(0x14D9EB00)
#define MOLEMOLE_UIZENKOVITEMICONBTNWIDGETCONTROLLER___C__DISPLAYCLASS121_0__REFRESHVIEW_B__1_OFFSET UNITYSDK_OFFSET(0x14D9EC20)
#define MOLEMOLE_UIZENKOVITEMICONBTNWIDGETCONTROLLER___C__DISPLAYCLASS121_0__REFRESHVIEW_B__2_OFFSET UNITYSDK_OFFSET(0x14D9EDA0)
#define MOLEMOLE_UIZENKOVITEMICONBTNWIDGETCONTROLLER___C__DISPLAYCLASS121_0__REFRESHVIEW_B__3_OFFSET UNITYSDK_OFFSET(0x14D9EDD0)

namespace MoleMole
{
	inline static constexpr unsigned int UIZenkovItemIconBtnWidgetController___c__DisplayClass121_0_TypeDefinitionIndex = 45168;

	class UIZenkovItemIconBtnWidgetController___c__DisplayClass121_0 : public ::System::Object
	{
	public:
		::MoleMole::UIZenkovItemIconBtnWidgetController* __4__this; // 0x10
		::System::Action_1<::Class_0_16E4307DCC419505_175*>* customTipHandleWithController; // 0x18
		::System::Action* customTipHandle; // 0x20
		::System::Action* customDoubleClickAction; // 0x28
		::System::Int32 curCount; // 0x30
		::System::Boolean jumpControl; // 0x34
		::System::Boolean disableJump; // 0x35

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIZENKOVITEMICONBTNWIDGETCONTROLLER___C__DISPLAYCLASS121_0__CTOR_OFFSET))(this);
		}

		::System::Void _RefreshView_b__0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIZENKOVITEMICONBTNWIDGETCONTROLLER___C__DISPLAYCLASS121_0__REFRESHVIEW_B__0_OFFSET))(this);
		}

		::System::Void _RefreshView_b__1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIZENKOVITEMICONBTNWIDGETCONTROLLER___C__DISPLAYCLASS121_0__REFRESHVIEW_B__1_OFFSET))(this);
		}

		::System::Void _RefreshView_b__2()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIZENKOVITEMICONBTNWIDGETCONTROLLER___C__DISPLAYCLASS121_0__REFRESHVIEW_B__2_OFFSET))(this);
		}

		::System::Void _RefreshView_b__3(::System::Single t1, ::System::Single t2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_UIZENKOVITEMICONBTNWIDGETCONTROLLER___C__DISPLAYCLASS121_0__REFRESHVIEW_B__3_OFFSET))(this, t1, t2);
		}
	};
}

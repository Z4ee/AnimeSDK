#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole { class UIGeneralToggleWidgetController; }
namespace System { class Action; }
namespace System { template <typename T> class Action_1; }
namespace System { template <typename T> class Func_1; }

#define MOLEMOLE_UIGENERALTOGGLEWIDGETCONTROLLER___C__DISPLAYCLASS13_0__CTOR_OFFSET UNITYSDK_OFFSET(0x18AE7070)
#define MOLEMOLE_UIGENERALTOGGLEWIDGETCONTROLLER___C__DISPLAYCLASS13_0__REFRESHVIEW_B__0_OFFSET UNITYSDK_OFFSET(0x18AE7080)
#define MOLEMOLE_UIGENERALTOGGLEWIDGETCONTROLLER___C__DISPLAYCLASS13_0__REFRESHVIEW_B__1_OFFSET UNITYSDK_OFFSET(0x18AE7240)
#define MOLEMOLE_UIGENERALTOGGLEWIDGETCONTROLLER___C__DISPLAYCLASS13_0__REFRESHVIEW_B__2_OFFSET UNITYSDK_OFFSET(0x18AE72E0)

namespace MoleMole
{
	inline static constexpr unsigned int UIGeneralToggleWidgetController___c__DisplayClass13_0_TypeDefinitionIndex = 89480;

	class UIGeneralToggleWidgetController___c__DisplayClass13_0 : public ::System::Object
	{
	public:
		::MoleMole::UIGeneralToggleWidgetController* __4__this; // 0x10
		::System::Action_1<::System::Action*>* doubleCheckAction; // 0x18
		::System::Func_1<::System::Boolean>* CheckCanToggle; // 0x20
		::System::Action* __9__2; // 0x28
		::System::Action* __9__1; // 0x30

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALTOGGLEWIDGETCONTROLLER___C__DISPLAYCLASS13_0__CTOR_OFFSET))(this);
		}

		::System::Void _RefreshView_b__0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALTOGGLEWIDGETCONTROLLER___C__DISPLAYCLASS13_0__REFRESHVIEW_B__0_OFFSET))(this);
		}

		::System::Void _RefreshView_b__1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALTOGGLEWIDGETCONTROLLER___C__DISPLAYCLASS13_0__REFRESHVIEW_B__1_OFFSET))(this);
		}

		::System::Void _RefreshView_b__2()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALTOGGLEWIDGETCONTROLLER___C__DISPLAYCLASS13_0__REFRESHVIEW_B__2_OFFSET))(this);
		}
	};
}

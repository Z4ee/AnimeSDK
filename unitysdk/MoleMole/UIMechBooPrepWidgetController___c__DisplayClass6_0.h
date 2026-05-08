#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_134;
namespace MoleMole { class UIMechBooPrepWidgetController; }
namespace System { template <typename T> class Action_1; }
namespace UnityEngine::UI::Extension { class UITimeWidget; }

#define MOLEMOLE_UIMECHBOOPREPWIDGETCONTROLLER___C__DISPLAYCLASS6_0__CTOR_OFFSET UNITYSDK_OFFSET(0x13FCD480)
#define MOLEMOLE_UIMECHBOOPREPWIDGETCONTROLLER___C__DISPLAYCLASS6_0__REFRESHVIEW_B__0_OFFSET UNITYSDK_OFFSET(0x13FCD490)
#define MOLEMOLE_UIMECHBOOPREPWIDGETCONTROLLER___C__DISPLAYCLASS6_0__REFRESHVIEW_B__1_OFFSET UNITYSDK_OFFSET(0x13FCD4C0)

namespace MoleMole
{
	inline static constexpr unsigned int UIMechBooPrepWidgetController___c__DisplayClass6_0_TypeDefinitionIndex = 39644;

	class UIMechBooPrepWidgetController___c__DisplayClass6_0 : public ::System::Object
	{
	public:
		::MoleMole::UIMechBooPrepWidgetController* __4__this; // 0x10
		::Class_0_16E4307DCC419505_134* levelInfo; // 0x18
		::System::Action_1<::Class_0_16E4307DCC419505_134*>* onClickScriptBtn; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMECHBOOPREPWIDGETCONTROLLER___C__DISPLAYCLASS6_0__CTOR_OFFSET))(this);
		}

		::System::Void _RefreshView_b__0(::UnityEngine::UI::Extension::UITimeWidget* timeWidget)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::UI::Extension::UITimeWidget*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMECHBOOPREPWIDGETCONTROLLER___C__DISPLAYCLASS6_0__REFRESHVIEW_B__0_OFFSET))(this, timeWidget);
		}

		::System::Void _RefreshView_b__1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMECHBOOPREPWIDGETCONTROLLER___C__DISPLAYCLASS6_0__REFRESHVIEW_B__1_OFFSET))(this);
		}
	};
}

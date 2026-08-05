#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_2_208CC9941471731A_852;
namespace MoleMole { class UIActivityGuideInfoWidgetController; }
namespace MoleMole { class UIActivityVideoWidgetController; }

#define MOLEMOLE_UIACTIVITYGUIDEINFOWIDGETCONTROLLER___C__DISPLAYCLASS13_0__CTOR_OFFSET UNITYSDK_OFFSET(0x192DC060)
#define MOLEMOLE_UIACTIVITYGUIDEINFOWIDGETCONTROLLER___C__DISPLAYCLASS13_0__REFRESHSUBTABS_B__0_OFFSET UNITYSDK_OFFSET(0x192DC070)

namespace MoleMole
{
	inline static constexpr unsigned int UIActivityGuideInfoWidgetController___c__DisplayClass13_0_TypeDefinitionIndex = 84915;

	class UIActivityGuideInfoWidgetController___c__DisplayClass13_0 : public ::System::Object
	{
	public:
		::Class_2_208CC9941471731A_852* questRuleTemplate; // 0x10
		::MoleMole::UIActivityVideoWidgetController* videoCtrl; // 0x18
		::MoleMole::UIActivityGuideInfoWidgetController* __4__this; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYGUIDEINFOWIDGETCONTROLLER___C__DISPLAYCLASS13_0__CTOR_OFFSET))(this);
		}

		::System::Void _RefreshSubTabs_b__0(::System::Int32 index)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYGUIDEINFOWIDGETCONTROLLER___C__DISPLAYCLASS13_0__REFRESHSUBTABS_B__0_OFFSET))(this, index);
		}
	};
}

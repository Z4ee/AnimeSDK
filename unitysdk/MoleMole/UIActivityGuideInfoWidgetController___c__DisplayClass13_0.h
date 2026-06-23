#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_2_208CC9941471731A_818;
namespace MoleMole { class UIActivityGuideInfoWidgetController; }
namespace MoleMole { class UIActivityVideoWidgetController; }

#define MOLEMOLE_UIACTIVITYGUIDEINFOWIDGETCONTROLLER___C__DISPLAYCLASS13_0__CTOR_OFFSET UNITYSDK_OFFSET(0x17E1CC70)
#define MOLEMOLE_UIACTIVITYGUIDEINFOWIDGETCONTROLLER___C__DISPLAYCLASS13_0__REFRESHSUBTABS_B__0_OFFSET UNITYSDK_OFFSET(0x17E1CC80)

namespace MoleMole
{
	inline static constexpr unsigned int UIActivityGuideInfoWidgetController___c__DisplayClass13_0_TypeDefinitionIndex = 85379;

	class UIActivityGuideInfoWidgetController___c__DisplayClass13_0 : public ::System::Object
	{
	public:
		::MoleMole::UIActivityGuideInfoWidgetController* __4__this; // 0x10
		::Class_2_208CC9941471731A_818* questRuleTemplate; // 0x18
		::MoleMole::UIActivityVideoWidgetController* videoCtrl; // 0x20

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

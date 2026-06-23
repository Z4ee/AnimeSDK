#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole { class UICoopHistoryTabWidgetController; }

#define MOLEMOLE_UICOOPHISTORYTABWIDGETCONTROLLER___C__DISPLAYCLASS6_0__CTOR_OFFSET UNITYSDK_OFFSET(0x176FC840)
#define MOLEMOLE_UICOOPHISTORYTABWIDGETCONTROLLER___C__DISPLAYCLASS6_0__ONSCROLLITEMUPDATE_B__0_OFFSET UNITYSDK_OFFSET(0x176FC850)

namespace MoleMole
{
	inline static constexpr unsigned int UICoopHistoryTabWidgetController___c__DisplayClass6_0_TypeDefinitionIndex = 48739;

	class UICoopHistoryTabWidgetController___c__DisplayClass6_0 : public ::System::Object
	{
	public:
		::MoleMole::UICoopHistoryTabWidgetController* __4__this; // 0x10
		::System::Int32 index; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UICOOPHISTORYTABWIDGETCONTROLLER___C__DISPLAYCLASS6_0__CTOR_OFFSET))(this);
		}

		::System::Void _OnScrollItemUpdate_b__0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UICOOPHISTORYTABWIDGETCONTROLLER___C__DISPLAYCLASS6_0__ONSCROLLITEMUPDATE_B__0_OFFSET))(this);
		}
	};
}

#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole { class DropDownItemWidgetController; }
namespace MoleMole { class UIGeneralDropDownTipsWidgetController; }

#define MOLEMOLE_UIGENERALDROPDOWNTIPSWIDGETCONTROLLER___C__DISPLAYCLASS15_0__CTOR_OFFSET UNITYSDK_OFFSET(0x155B1280)
#define MOLEMOLE_UIGENERALDROPDOWNTIPSWIDGETCONTROLLER___C__DISPLAYCLASS15_0__INITNORMALVIEW_B__0_OFFSET UNITYSDK_OFFSET(0x155B1290)

namespace MoleMole
{
	inline static constexpr unsigned int UIGeneralDropDownTipsWidgetController___c__DisplayClass15_0_TypeDefinitionIndex = 73657;

	class UIGeneralDropDownTipsWidgetController___c__DisplayClass15_0 : public ::System::Object
	{
	public:
		::MoleMole::DropDownItemWidgetController* ctrl; // 0x10
		::MoleMole::UIGeneralDropDownTipsWidgetController* __4__this; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALDROPDOWNTIPSWIDGETCONTROLLER___C__DISPLAYCLASS15_0__CTOR_OFFSET))(this);
		}

		::System::Void _InitNormalView_b__0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALDROPDOWNTIPSWIDGETCONTROLLER___C__DISPLAYCLASS15_0__INITNORMALVIEW_B__0_OFFSET))(this);
		}
	};
}

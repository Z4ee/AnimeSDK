#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole { class UIGeneralLevelUp02WidgetController___c__DisplayClass11_0; }

#define MOLEMOLE_UIGENERALLEVELUP02WIDGETCONTROLLER___C__DISPLAYCLASS11_1__CTOR_OFFSET UNITYSDK_OFFSET(0x17D9B460)
#define MOLEMOLE_UIGENERALLEVELUP02WIDGETCONTROLLER___C__DISPLAYCLASS11_1__REFRESHLEVELTXTVIEW_B__1_OFFSET UNITYSDK_OFFSET(0x17D9B470)
#define MOLEMOLE_UIGENERALLEVELUP02WIDGETCONTROLLER___C__DISPLAYCLASS11_1__REFRESHLEVELTXTVIEW_B__2_OFFSET UNITYSDK_OFFSET(0x17D9B520)

namespace MoleMole
{
	inline static constexpr unsigned int UIGeneralLevelUp02WidgetController___c__DisplayClass11_1_TypeDefinitionIndex = 75471;

	class UIGeneralLevelUp02WidgetController___c__DisplayClass11_1 : public ::System::Object
	{
	public:
		::MoleMole::UIGeneralLevelUp02WidgetController___c__DisplayClass11_0* CS___8__locals1; // 0x10
		::System::Single prvExpRatio; // 0x18
		::System::Single realExpProgressDuration; // 0x1C
		::System::Single timer; // 0x20
		::System::Single remainExpRatio; // 0x24

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALLEVELUP02WIDGETCONTROLLER___C__DISPLAYCLASS11_1__CTOR_OFFSET))(this);
		}

		::System::Void _RefreshLevelTxtView_b__1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALLEVELUP02WIDGETCONTROLLER___C__DISPLAYCLASS11_1__REFRESHLEVELTXTVIEW_B__1_OFFSET))(this);
		}

		::System::Void _RefreshLevelTxtView_b__2()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALLEVELUP02WIDGETCONTROLLER___C__DISPLAYCLASS11_1__REFRESHLEVELTXTVIEW_B__2_OFFSET))(this);
		}
	};
}

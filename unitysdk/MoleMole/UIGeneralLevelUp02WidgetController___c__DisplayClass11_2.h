#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole { class UIGeneralLevelUp02WidgetController___c__DisplayClass11_0; }
namespace System { class Action; }

#define MOLEMOLE_UIGENERALLEVELUP02WIDGETCONTROLLER___C__DISPLAYCLASS11_2__CTOR_OFFSET UNITYSDK_OFFSET(0x17BD3170)
#define MOLEMOLE_UIGENERALLEVELUP02WIDGETCONTROLLER___C__DISPLAYCLASS11_2__REFRESHLEVELTXTVIEW_B__10_OFFSET UNITYSDK_OFFSET(0x17BD3710)
#define MOLEMOLE_UIGENERALLEVELUP02WIDGETCONTROLLER___C__DISPLAYCLASS11_2__REFRESHLEVELTXTVIEW_B__4_OFFSET UNITYSDK_OFFSET(0x17BD3180)
#define MOLEMOLE_UIGENERALLEVELUP02WIDGETCONTROLLER___C__DISPLAYCLASS11_2__REFRESHLEVELTXTVIEW_B__5_OFFSET UNITYSDK_OFFSET(0x17BD3230)
#define MOLEMOLE_UIGENERALLEVELUP02WIDGETCONTROLLER___C__DISPLAYCLASS11_2__REFRESHLEVELTXTVIEW_B__6_OFFSET UNITYSDK_OFFSET(0x17BD38C0)
#define MOLEMOLE_UIGENERALLEVELUP02WIDGETCONTROLLER___C__DISPLAYCLASS11_2__REFRESHLEVELTXTVIEW_B__9_OFFSET UNITYSDK_OFFSET(0x17BD3670)

namespace MoleMole
{
	inline static constexpr unsigned int UIGeneralLevelUp02WidgetController___c__DisplayClass11_2_TypeDefinitionIndex = 75470;

	class UIGeneralLevelUp02WidgetController___c__DisplayClass11_2 : public ::System::Object
	{
	public:
		::MoleMole::UIGeneralLevelUp02WidgetController___c__DisplayClass11_0* CS___8__locals2; // 0x10
		::System::Action* __9__9; // 0x18
		::System::Action* __9__10; // 0x20
		::System::Single timer; // 0x28
		::System::Single remainExpRatio; // 0x2C
		::System::Single expProgressDuration_1; // 0x30
		::System::Single expProgressDuration_2; // 0x34
		::System::Single prvExpRatio; // 0x38

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALLEVELUP02WIDGETCONTROLLER___C__DISPLAYCLASS11_2__CTOR_OFFSET))(this);
		}

		::System::Void _RefreshLevelTxtView_b__4()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALLEVELUP02WIDGETCONTROLLER___C__DISPLAYCLASS11_2__REFRESHLEVELTXTVIEW_B__4_OFFSET))(this);
		}

		::System::Void _RefreshLevelTxtView_b__5()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALLEVELUP02WIDGETCONTROLLER___C__DISPLAYCLASS11_2__REFRESHLEVELTXTVIEW_B__5_OFFSET))(this);
		}

		::System::Void _RefreshLevelTxtView_b__9()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALLEVELUP02WIDGETCONTROLLER___C__DISPLAYCLASS11_2__REFRESHLEVELTXTVIEW_B__9_OFFSET))(this);
		}

		::System::Void _RefreshLevelTxtView_b__10()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALLEVELUP02WIDGETCONTROLLER___C__DISPLAYCLASS11_2__REFRESHLEVELTXTVIEW_B__10_OFFSET))(this);
		}

		::System::Void _RefreshLevelTxtView_b__6()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALLEVELUP02WIDGETCONTROLLER___C__DISPLAYCLASS11_2__REFRESHLEVELTXTVIEW_B__6_OFFSET))(this);
		}
	};
}

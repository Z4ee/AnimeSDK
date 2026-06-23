#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole { class UIGeneralLevelUp02WidgetController; }
namespace System { class Action; }

#define MOLEMOLE_UIGENERALLEVELUP02WIDGETCONTROLLER___C__DISPLAYCLASS11_0__CTOR_OFFSET UNITYSDK_OFFSET(0x167A4460)
#define MOLEMOLE_UIGENERALLEVELUP02WIDGETCONTROLLER___C__DISPLAYCLASS11_0__REFRESHLEVELTXTVIEW_B__11_OFFSET UNITYSDK_OFFSET(0x167A44C0)
#define MOLEMOLE_UIGENERALLEVELUP02WIDGETCONTROLLER___C__DISPLAYCLASS11_0__REFRESHLEVELTXTVIEW_B__3_OFFSET UNITYSDK_OFFSET(0x167A4470)
#define MOLEMOLE_UIGENERALLEVELUP02WIDGETCONTROLLER___C__DISPLAYCLASS11_0__REFRESHLEVELTXTVIEW_B__7_OFFSET UNITYSDK_OFFSET(0x167A4510)
#define MOLEMOLE_UIGENERALLEVELUP02WIDGETCONTROLLER___C__DISPLAYCLASS11_0__REFRESHLEVELTXTVIEW_B__8_OFFSET UNITYSDK_OFFSET(0x167A4560)
#define MOLEMOLE_UIGENERALLEVELUP02WIDGETCONTROLLER___C__DISPLAYCLASS11_0__REFRESHLEVELTXTVIEW_G__ONPROGRESS_0_OFFSET UNITYSDK_OFFSET(0x167A4580)

namespace MoleMole
{
	inline static constexpr unsigned int UIGeneralLevelUp02WidgetController___c__DisplayClass11_0_TypeDefinitionIndex = 64197;

	class UIGeneralLevelUp02WidgetController___c__DisplayClass11_0 : public ::System::Object
	{
	public:
		::System::Action* __9__11; // 0x10
		::MoleMole::UIGeneralLevelUp02WidgetController* __4__this; // 0x18
		::System::Int32 remainExp; // 0x20
		::System::Int32 expNeededForNxtLv; // 0x24

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALLEVELUP02WIDGETCONTROLLER___C__DISPLAYCLASS11_0__CTOR_OFFSET))(this);
		}

		::System::Void _RefreshLevelTxtView_b__3()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALLEVELUP02WIDGETCONTROLLER___C__DISPLAYCLASS11_0__REFRESHLEVELTXTVIEW_B__3_OFFSET))(this);
		}

		::System::Void _RefreshLevelTxtView_b__11()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALLEVELUP02WIDGETCONTROLLER___C__DISPLAYCLASS11_0__REFRESHLEVELTXTVIEW_B__11_OFFSET))(this);
		}

		::System::Void _RefreshLevelTxtView_b__7()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALLEVELUP02WIDGETCONTROLLER___C__DISPLAYCLASS11_0__REFRESHLEVELTXTVIEW_B__7_OFFSET))(this);
		}

		::System::Void _RefreshLevelTxtView_b__8()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALLEVELUP02WIDGETCONTROLLER___C__DISPLAYCLASS11_0__REFRESHLEVELTXTVIEW_B__8_OFFSET))(this);
		}

		::System::Void _RefreshLevelTxtView_g__OnProgress_0(::System::Single progress)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALLEVELUP02WIDGETCONTROLLER___C__DISPLAYCLASS11_0__REFRESHLEVELTXTVIEW_G__ONPROGRESS_0_OFFSET))(this, progress);
		}
	};
}

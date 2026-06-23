#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole { class UIPartnerDatePageController; }
namespace System { class Action; }

#define MOLEMOLE_UIPARTNERDATEPAGECONTROLLER___C__DISPLAYCLASS18_0__CTOR_OFFSET UNITYSDK_OFFSET(0x178D4D00)
#define MOLEMOLE_UIPARTNERDATEPAGECONTROLLER___C__DISPLAYCLASS18_0__SHOWSELECTWIDGET_B__0_OFFSET UNITYSDK_OFFSET(0x178D4D10)
#define MOLEMOLE_UIPARTNERDATEPAGECONTROLLER___C__DISPLAYCLASS18_0__SHOWSELECTWIDGET_B__1_OFFSET UNITYSDK_OFFSET(0x178D5200)
#define MOLEMOLE_UIPARTNERDATEPAGECONTROLLER___C__DISPLAYCLASS18_0__SHOWSELECTWIDGET_G__SETSTATE_2_OFFSET UNITYSDK_OFFSET(0x178D4D80)

namespace MoleMole
{
	inline static constexpr unsigned int UIPartnerDatePageController___c__DisplayClass18_0_TypeDefinitionIndex = 61895;

	class UIPartnerDatePageController___c__DisplayClass18_0 : public ::System::Object
	{
	public:
		::MoleMole::UIPartnerDatePageController* __4__this; // 0x10
		::System::Action* changeState; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIPARTNERDATEPAGECONTROLLER___C__DISPLAYCLASS18_0__CTOR_OFFSET))(this);
		}

		::System::Void _ShowSelectWidget_b__0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIPARTNERDATEPAGECONTROLLER___C__DISPLAYCLASS18_0__SHOWSELECTWIDGET_B__0_OFFSET))(this);
		}

		::System::Void _ShowSelectWidget_b__1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIPARTNERDATEPAGECONTROLLER___C__DISPLAYCLASS18_0__SHOWSELECTWIDGET_B__1_OFFSET))(this);
		}

		::System::Void _ShowSelectWidget_g__SetState_2()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIPARTNERDATEPAGECONTROLLER___C__DISPLAYCLASS18_0__SHOWSELECTWIDGET_G__SETSTATE_2_OFFSET))(this);
		}
	};
}

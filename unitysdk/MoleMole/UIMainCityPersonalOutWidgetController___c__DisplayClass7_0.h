#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole { class UIMainCityPersonalOutWidgetController; }
namespace System { class Action; }

#define MOLEMOLE_UIMAINCITYPERSONALOUTWIDGETCONTROLLER___C__DISPLAYCLASS7_0__CTOR_OFFSET UNITYSDK_OFFSET(0x179EAF50)
#define MOLEMOLE_UIMAINCITYPERSONALOUTWIDGETCONTROLLER___C__DISPLAYCLASS7_0__REFRESHVIEW_B__0_OFFSET UNITYSDK_OFFSET(0x179EAF60)
#define MOLEMOLE_UIMAINCITYPERSONALOUTWIDGETCONTROLLER___C__DISPLAYCLASS7_0__REFRESHVIEW_G__ONCLICKBTN_1_OFFSET UNITYSDK_OFFSET(0x179EB080)

namespace MoleMole
{
	inline static constexpr unsigned int UIMainCityPersonalOutWidgetController___c__DisplayClass7_0_TypeDefinitionIndex = 87358;

	class UIMainCityPersonalOutWidgetController___c__DisplayClass7_0 : public ::System::Object
	{
	public:
		::System::Action* callback; // 0x10
		::MoleMole::UIMainCityPersonalOutWidgetController* __4__this; // 0x18
		::System::Int32 unlockID; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMAINCITYPERSONALOUTWIDGETCONTROLLER___C__DISPLAYCLASS7_0__CTOR_OFFSET))(this);
		}

		::System::Void _RefreshView_b__0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMAINCITYPERSONALOUTWIDGETCONTROLLER___C__DISPLAYCLASS7_0__REFRESHVIEW_B__0_OFFSET))(this);
		}

		::System::Void _RefreshView_g__OnClickBtn_1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMAINCITYPERSONALOUTWIDGETCONTROLLER___C__DISPLAYCLASS7_0__REFRESHVIEW_G__ONCLICKBTN_1_OFFSET))(this);
		}
	};
}

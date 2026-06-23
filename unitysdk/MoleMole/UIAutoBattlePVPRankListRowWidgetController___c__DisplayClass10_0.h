#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Collections/Generic/KeyValuePair_2.h"
#include "unitysdk/System/Object.h"

class Class_3_E6E3938E70B764D0;
namespace MoleMole { class UIAutoBattlePVPRankListRowWidgetController; }

#define MOLEMOLE_UIAUTOBATTLEPVPRANKLISTROWWIDGETCONTROLLER___C__DISPLAYCLASS10_0__CTOR_OFFSET UNITYSDK_OFFSET(0x1733C410)
#define MOLEMOLE_UIAUTOBATTLEPVPRANKLISTROWWIDGETCONTROLLER___C__DISPLAYCLASS10_0__ONSCROLLITEMUPDATE_B__1_OFFSET UNITYSDK_OFFSET(0x1733C420)
#define MOLEMOLE_UIAUTOBATTLEPVPRANKLISTROWWIDGETCONTROLLER___C__DISPLAYCLASS10_0__ONSCROLLITEMUPDATE_G__SETUPPLATFORMUI_0_OFFSET UNITYSDK_OFFSET(0x1733C460)

namespace MoleMole
{
	inline static constexpr unsigned int UIAutoBattlePVPRankListRowWidgetController___c__DisplayClass10_0_TypeDefinitionIndex = 42586;

	class UIAutoBattlePVPRankListRowWidgetController___c__DisplayClass10_0 : public ::System::Object
	{
	public:
		::MoleMole::UIAutoBattlePVPRankListRowWidgetController* __4__this; // 0x10
		::System::Collections::Generic::KeyValuePair_2<::System::UInt32, ::System::UInt32> pair; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIAUTOBATTLEPVPRANKLISTROWWIDGETCONTROLLER___C__DISPLAYCLASS10_0__CTOR_OFFSET))(this);
		}

		::System::Boolean _OnScrollItemUpdate_b__1(::Class_3_E6E3938E70B764D0* x)
		{
			return ((::System::Boolean(*)(::PVOID, ::Class_3_E6E3938E70B764D0*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIAUTOBATTLEPVPRANKLISTROWWIDGETCONTROLLER___C__DISPLAYCLASS10_0__ONSCROLLITEMUPDATE_B__1_OFFSET))(this, x);
		}

		::System::Void _OnScrollItemUpdate_g__SetupPlatformUI_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIAUTOBATTLEPVPRANKLISTROWWIDGETCONTROLLER___C__DISPLAYCLASS10_0__ONSCROLLITEMUPDATE_G__SETUPPLATFORMUI_0_OFFSET))(this);
		}
	};
}

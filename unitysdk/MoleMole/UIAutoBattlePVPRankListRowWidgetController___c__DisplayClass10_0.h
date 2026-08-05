#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Collections/Generic/KeyValuePair_2.h"
#include "unitysdk/System/Object.h"

class Class_3_C9A9F1684B51A3BB;
namespace MoleMole { class UIAutoBattlePVPRankListRowWidgetController; }

#define MOLEMOLE_UIAUTOBATTLEPVPRANKLISTROWWIDGETCONTROLLER___C__DISPLAYCLASS10_0__CTOR_OFFSET UNITYSDK_OFFSET(0x189551D0)
#define MOLEMOLE_UIAUTOBATTLEPVPRANKLISTROWWIDGETCONTROLLER___C__DISPLAYCLASS10_0__ONSCROLLITEMUPDATE_B__1_OFFSET UNITYSDK_OFFSET(0x189551E0)
#define MOLEMOLE_UIAUTOBATTLEPVPRANKLISTROWWIDGETCONTROLLER___C__DISPLAYCLASS10_0__ONSCROLLITEMUPDATE_G__SETUPPLATFORMUI_0_OFFSET UNITYSDK_OFFSET(0x18955220)

namespace MoleMole
{
	inline static constexpr unsigned int UIAutoBattlePVPRankListRowWidgetController___c__DisplayClass10_0_TypeDefinitionIndex = 67949;

	class UIAutoBattlePVPRankListRowWidgetController___c__DisplayClass10_0 : public ::System::Object
	{
	public:
		::MoleMole::UIAutoBattlePVPRankListRowWidgetController* __4__this; // 0x10
		::System::Collections::Generic::KeyValuePair_2<::System::UInt32, ::System::UInt32> pair; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIAUTOBATTLEPVPRANKLISTROWWIDGETCONTROLLER___C__DISPLAYCLASS10_0__CTOR_OFFSET))(this);
		}

		::System::Boolean _OnScrollItemUpdate_b__1(::Class_3_C9A9F1684B51A3BB* x)
		{
			return ((::System::Boolean(*)(::PVOID, ::Class_3_C9A9F1684B51A3BB*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIAUTOBATTLEPVPRANKLISTROWWIDGETCONTROLLER___C__DISPLAYCLASS10_0__ONSCROLLITEMUPDATE_B__1_OFFSET))(this, x);
		}

		::System::Void _OnScrollItemUpdate_g__SetupPlatformUI_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIAUTOBATTLEPVPRANKLISTROWWIDGETCONTROLLER___C__DISPLAYCLASS10_0__ONSCROLLITEMUPDATE_G__SETUPPLATFORMUI_0_OFFSET))(this);
		}
	};
}

#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Struct_2_5F20C77812135856.h"
#include "unitysdk/System/Object.h"

class Class_2_B1CD45EAC8D61C61_Class_1_BBAF5C1264336F94;
class Class_3_C7A2D5492E2948E7;
namespace MoleMole { class UIHollowInfoReportRowWidgetController; }

#define MOLEMOLE_UIHOLLOWINFOREPORTROWWIDGETCONTROLLER___C__DISPLAYCLASS6_0__CTOR_OFFSET UNITYSDK_OFFSET(0x19FEF800)
#define MOLEMOLE_UIHOLLOWINFOREPORTROWWIDGETCONTROLLER___C__DISPLAYCLASS6_0__REFRESHVIEW_B__0_OFFSET UNITYSDK_OFFSET(0x19FEF810)

namespace MoleMole
{
	inline static constexpr unsigned int UIHollowInfoReportRowWidgetController___c__DisplayClass6_0_TypeDefinitionIndex = 67866;

	class UIHollowInfoReportRowWidgetController___c__DisplayClass6_0 : public ::System::Object
	{
	public:
		::MoleMole::UIHollowInfoReportRowWidgetController* __4__this; // 0x10
		::Class_3_C7A2D5492E2948E7* report; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWINFOREPORTROWWIDGETCONTROLLER___C__DISPLAYCLASS6_0__CTOR_OFFSET))(this);
		}

		::Struct_2_5F20C77812135856 _RefreshView_b__0(::Class_2_B1CD45EAC8D61C61_Class_1_BBAF5C1264336F94* context)
		{
			return ((::Struct_2_5F20C77812135856(*)(::PVOID, ::Class_2_B1CD45EAC8D61C61_Class_1_BBAF5C1264336F94*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWINFOREPORTROWWIDGETCONTROLLER___C__DISPLAYCLASS6_0__REFRESHVIEW_B__0_OFFSET))(this, context);
		}
	};
}

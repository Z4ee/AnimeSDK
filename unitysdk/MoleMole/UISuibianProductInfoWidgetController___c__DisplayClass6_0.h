#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole { class UISuibianProductInfoWidgetController; }

#define MOLEMOLE_UISUIBIANPRODUCTINFOWIDGETCONTROLLER___C__DISPLAYCLASS6_0__CTOR_OFFSET UNITYSDK_OFFSET(0x175A9E90)
#define MOLEMOLE_UISUIBIANPRODUCTINFOWIDGETCONTROLLER___C__DISPLAYCLASS6_0__REFRESHVIEW_B__0_OFFSET UNITYSDK_OFFSET(0x175A9EA0)

namespace MoleMole
{
	inline static constexpr unsigned int UISuibianProductInfoWidgetController___c__DisplayClass6_0_TypeDefinitionIndex = 81018;

	class UISuibianProductInfoWidgetController___c__DisplayClass6_0 : public ::System::Object
	{
	public:
		::MoleMole::UISuibianProductInfoWidgetController* __4__this; // 0x10
		::System::Int32 productID; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UISUIBIANPRODUCTINFOWIDGETCONTROLLER___C__DISPLAYCLASS6_0__CTOR_OFFSET))(this);
		}

		::System::Void _RefreshView_b__0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UISUIBIANPRODUCTINFOWIDGETCONTROLLER___C__DISPLAYCLASS6_0__REFRESHVIEW_B__0_OFFSET))(this);
		}
	};
}

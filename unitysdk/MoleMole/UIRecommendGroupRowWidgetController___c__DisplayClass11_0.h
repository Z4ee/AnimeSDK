#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole { class UIRecommendGroupRowWidgetController; }
namespace MoleMole { class UIRecommendTypePropertyRowWidgetController; }

#define MOLEMOLE_UIRECOMMENDGROUPROWWIDGETCONTROLLER___C__DISPLAYCLASS11_0__CTOR_OFFSET UNITYSDK_OFFSET(0x1666F360)
#define MOLEMOLE_UIRECOMMENDGROUPROWWIDGETCONTROLLER___C__DISPLAYCLASS11_0__REFRESHVIEWFORPROPERTY_B__0_OFFSET UNITYSDK_OFFSET(0x1666F370)

namespace MoleMole
{
	inline static constexpr unsigned int UIRecommendGroupRowWidgetController___c__DisplayClass11_0_TypeDefinitionIndex = 58805;

	class UIRecommendGroupRowWidgetController___c__DisplayClass11_0 : public ::System::Object
	{
	public:
		::MoleMole::UIRecommendTypePropertyRowWidgetController* ctrl; // 0x10
		::MoleMole::UIRecommendGroupRowWidgetController* __4__this; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIRECOMMENDGROUPROWWIDGETCONTROLLER___C__DISPLAYCLASS11_0__CTOR_OFFSET))(this);
		}

		::System::Void _RefreshViewForProperty_b__0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIRECOMMENDGROUPROWWIDGETCONTROLLER___C__DISPLAYCLASS11_0__REFRESHVIEWFORPROPERTY_B__0_OFFSET))(this);
		}
	};
}

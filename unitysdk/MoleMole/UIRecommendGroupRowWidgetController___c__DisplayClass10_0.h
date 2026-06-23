#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole { class UIRecommendGroupRowWidgetController; }
namespace MoleMole { class UIRecommendTypeSuitRowWidgetController; }

#define MOLEMOLE_UIRECOMMENDGROUPROWWIDGETCONTROLLER___C__DISPLAYCLASS10_0__CTOR_OFFSET UNITYSDK_OFFSET(0x1666F180)
#define MOLEMOLE_UIRECOMMENDGROUPROWWIDGETCONTROLLER___C__DISPLAYCLASS10_0__REFRESHVIEWFORSUIT_B__0_OFFSET UNITYSDK_OFFSET(0x1666F190)

namespace MoleMole
{
	inline static constexpr unsigned int UIRecommendGroupRowWidgetController___c__DisplayClass10_0_TypeDefinitionIndex = 58806;

	class UIRecommendGroupRowWidgetController___c__DisplayClass10_0 : public ::System::Object
	{
	public:
		::MoleMole::UIRecommendTypeSuitRowWidgetController* ctrl; // 0x10
		::MoleMole::UIRecommendGroupRowWidgetController* __4__this; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIRECOMMENDGROUPROWWIDGETCONTROLLER___C__DISPLAYCLASS10_0__CTOR_OFFSET))(this);
		}

		::System::Void _RefreshViewForSuit_b__0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIRECOMMENDGROUPROWWIDGETCONTROLLER___C__DISPLAYCLASS10_0__REFRESHVIEWFORSUIT_B__0_OFFSET))(this);
		}
	};
}

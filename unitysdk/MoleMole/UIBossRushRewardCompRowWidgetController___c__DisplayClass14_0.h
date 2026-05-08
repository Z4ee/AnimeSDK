#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole { class UIBossRushRewardCompRowWidgetController; }
namespace MoleMole { class UICasperShopContext; }

#define MOLEMOLE_UIBOSSRUSHREWARDCOMPROWWIDGETCONTROLLER___C__DISPLAYCLASS14_0__CTOR_OFFSET UNITYSDK_OFFSET(0x12F74CE0)
#define MOLEMOLE_UIBOSSRUSHREWARDCOMPROWWIDGETCONTROLLER___C__DISPLAYCLASS14_0__ONCLICKSWEEP_B__4_OFFSET UNITYSDK_OFFSET(0x12F74CF0)

namespace MoleMole
{
	inline static constexpr unsigned int UIBossRushRewardCompRowWidgetController___c__DisplayClass14_0_TypeDefinitionIndex = 76043;

	class UIBossRushRewardCompRowWidgetController___c__DisplayClass14_0 : public ::System::Object
	{
	public:
		::MoleMole::UIBossRushRewardCompRowWidgetController* __4__this; // 0x10
		::MoleMole::UICasperShopContext* shopContext; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBOSSRUSHREWARDCOMPROWWIDGETCONTROLLER___C__DISPLAYCLASS14_0__CTOR_OFFSET))(this);
		}

		::System::Void _OnClickSweep_b__4()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBOSSRUSHREWARDCOMPROWWIDGETCONTROLLER___C__DISPLAYCLASS14_0__ONCLICKSWEEP_B__4_OFFSET))(this);
		}
	};
}

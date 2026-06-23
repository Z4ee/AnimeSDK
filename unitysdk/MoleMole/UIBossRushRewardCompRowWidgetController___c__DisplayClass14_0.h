#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole { class UIBossRushRewardCompRowWidgetController; }
namespace MoleMole { class UICasperShopContext; }

#define MOLEMOLE_UIBOSSRUSHREWARDCOMPROWWIDGETCONTROLLER___C__DISPLAYCLASS14_0__CTOR_OFFSET UNITYSDK_OFFSET(0x14C06630)
#define MOLEMOLE_UIBOSSRUSHREWARDCOMPROWWIDGETCONTROLLER___C__DISPLAYCLASS14_0__ONCLICKSWEEP_B__4_OFFSET UNITYSDK_OFFSET(0x14C06640)

namespace MoleMole
{
	inline static constexpr unsigned int UIBossRushRewardCompRowWidgetController___c__DisplayClass14_0_TypeDefinitionIndex = 66220;

	class UIBossRushRewardCompRowWidgetController___c__DisplayClass14_0 : public ::System::Object
	{
	public:
		::MoleMole::UICasperShopContext* shopContext; // 0x10
		::MoleMole::UIBossRushRewardCompRowWidgetController* __4__this; // 0x18

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

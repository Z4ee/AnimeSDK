#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole { class UICasperShopContext; }
namespace MoleMole { class UIHollowCollectRewardDialogRewardItemWidgetController; }

#define MOLEMOLE_UIHOLLOWCOLLECTREWARDDIALOGREWARDITEMWIDGETCONTROLLER___C__DISPLAYCLASS4_0__CTOR_OFFSET UNITYSDK_OFFSET(0x169CBF20)
#define MOLEMOLE_UIHOLLOWCOLLECTREWARDDIALOGREWARDITEMWIDGETCONTROLLER___C__DISPLAYCLASS4_0__ONCLICKSWEEP_B__5_OFFSET UNITYSDK_OFFSET(0x169CBF30)

namespace MoleMole
{
	inline static constexpr unsigned int UIHollowCollectRewardDialogRewardItemWidgetController___c__DisplayClass4_0_TypeDefinitionIndex = 64747;

	class UIHollowCollectRewardDialogRewardItemWidgetController___c__DisplayClass4_0 : public ::System::Object
	{
	public:
		::MoleMole::UICasperShopContext* shopContext; // 0x10
		::MoleMole::UIHollowCollectRewardDialogRewardItemWidgetController* __4__this; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWCOLLECTREWARDDIALOGREWARDITEMWIDGETCONTROLLER___C__DISPLAYCLASS4_0__CTOR_OFFSET))(this);
		}

		::System::Void _OnClickSweep_b__5()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWCOLLECTREWARDDIALOGREWARDITEMWIDGETCONTROLLER___C__DISPLAYCLASS4_0__ONCLICKSWEEP_B__5_OFFSET))(this);
		}
	};
}

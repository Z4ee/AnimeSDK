#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole { class UIGachaPerformance3DModelController; }
namespace MoleMole { class UIGachaPerformancePageController; }

#define MOLEMOLE_UIGACHAPERFORMANCEPAGECONTROLLER___C__DISPLAYCLASS20_0__CTOR_OFFSET UNITYSDK_OFFSET(0x15A12770)
#define MOLEMOLE_UIGACHAPERFORMANCEPAGECONTROLLER___C__DISPLAYCLASS20_0__ONSKIPALLBTNCLICK_B__0_OFFSET UNITYSDK_OFFSET(0x15A12780)

namespace MoleMole
{
	inline static constexpr unsigned int UIGachaPerformancePageController___c__DisplayClass20_0_TypeDefinitionIndex = 82268;

	class UIGachaPerformancePageController___c__DisplayClass20_0 : public ::System::Object
	{
	public:
		::MoleMole::UIGachaPerformancePageController* __4__this; // 0x10
		::MoleMole::UIGachaPerformance3DModelController* ctrler; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGACHAPERFORMANCEPAGECONTROLLER___C__DISPLAYCLASS20_0__CTOR_OFFSET))(this);
		}

		::System::Void _OnSkipAllBtnClick_b__0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGACHAPERFORMANCEPAGECONTROLLER___C__DISPLAYCLASS20_0__ONSKIPALLBTNCLICK_B__0_OFFSET))(this);
		}
	};
}

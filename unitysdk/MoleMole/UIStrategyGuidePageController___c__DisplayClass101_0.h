#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole { class UIStrategyGuidePageController; }

#define MOLEMOLE_UISTRATEGYGUIDEPAGECONTROLLER___C__DISPLAYCLASS101_0__CTOR_OFFSET UNITYSDK_OFFSET(0x14C0CD30)
#define MOLEMOLE_UISTRATEGYGUIDEPAGECONTROLLER___C__DISPLAYCLASS101_0__ONMAXLEVELRECOMMENDTOGGLECLICK_B__0_OFFSET UNITYSDK_OFFSET(0x14C0CD40)

namespace MoleMole
{
	inline static constexpr unsigned int UIStrategyGuidePageController___c__DisplayClass101_0_TypeDefinitionIndex = 79269;

	class UIStrategyGuidePageController___c__DisplayClass101_0 : public ::System::Object
	{
	public:
		::MoleMole::UIStrategyGuidePageController* __4__this; // 0x10
		::System::Boolean newState; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UISTRATEGYGUIDEPAGECONTROLLER___C__DISPLAYCLASS101_0__CTOR_OFFSET))(this);
		}

		::System::Void _OnMaxLevelRecommendToggleClick_b__0(::System::Int32 ret)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UISTRATEGYGUIDEPAGECONTROLLER___C__DISPLAYCLASS101_0__ONMAXLEVELRECOMMENDTOGGLECLICK_B__0_OFFSET))(this, ret);
		}
	};
}

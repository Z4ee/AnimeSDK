#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole { class UIMainCityRewardTipsWidgetController; }
namespace MoleMole { class UIRewardTipsWidgetController; }
namespace System { class Action; }

#define MOLEMOLE_UIREWARDTIPSWIDGETCONTROLLER___C__DISPLAYCLASS20_0__CTOR_OFFSET UNITYSDK_OFFSET(0x14DA84B0)
#define MOLEMOLE_UIREWARDTIPSWIDGETCONTROLLER___C__DISPLAYCLASS20_0__RECYLEREWARDTIPWIDGET_B__0_OFFSET UNITYSDK_OFFSET(0x14DA84C0)

namespace MoleMole
{
	inline static constexpr unsigned int UIRewardTipsWidgetController___c__DisplayClass20_0_TypeDefinitionIndex = 73524;

	class UIRewardTipsWidgetController___c__DisplayClass20_0 : public ::System::Object
	{
	public:
		::MoleMole::UIRewardTipsWidgetController* __4__this; // 0x10
		::System::Action* fadeOutCallback; // 0x18
		::MoleMole::UIMainCityRewardTipsWidgetController* tipWidget; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIREWARDTIPSWIDGETCONTROLLER___C__DISPLAYCLASS20_0__CTOR_OFFSET))(this);
		}

		::System::Void _RecyleRewardTipWidget_b__0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIREWARDTIPSWIDGETCONTROLLER___C__DISPLAYCLASS20_0__RECYLEREWARDTIPWIDGET_B__0_OFFSET))(this);
		}
	};
}

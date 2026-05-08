#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole { class UISurveyPointsWidgetController___c__DisplayClass8_0; }
namespace UnityEngine::UI::Extension { class UIDynamicNumberLabel; }

#define MOLEMOLE_UISURVEYPOINTSWIDGETCONTROLLER___C__DISPLAYCLASS8_1__CTOR_OFFSET UNITYSDK_OFFSET(0x14C2BF00)
#define MOLEMOLE_UISURVEYPOINTSWIDGETCONTROLLER___C__DISPLAYCLASS8_1__REFRESHCONTROBUTEVIEW_B__5_OFFSET UNITYSDK_OFFSET(0x14C2BF10)

namespace MoleMole
{
	inline static constexpr unsigned int UISurveyPointsWidgetController___c__DisplayClass8_1_TypeDefinitionIndex = 74128;

	class UISurveyPointsWidgetController___c__DisplayClass8_1 : public ::System::Object
	{
	public:
		::UnityEngine::UI::Extension::UIDynamicNumberLabel* dynamicLabel; // 0x10
		::MoleMole::UISurveyPointsWidgetController___c__DisplayClass8_0* CS___8__locals1; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UISURVEYPOINTSWIDGETCONTROLLER___C__DISPLAYCLASS8_1__CTOR_OFFSET))(this);
		}

		::System::Void _RefreshControbuteView_b__5()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UISURVEYPOINTSWIDGETCONTROLLER___C__DISPLAYCLASS8_1__REFRESHCONTROBUTEVIEW_B__5_OFFSET))(this);
		}
	};
}

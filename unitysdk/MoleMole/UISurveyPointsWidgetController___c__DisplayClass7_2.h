#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole { class UISurveyPointsWidgetController___c__DisplayClass7_1; }
namespace UnityEngine::UI::Extension { class UIDynamicNumberLabel; }

#define MOLEMOLE_UISURVEYPOINTSWIDGETCONTROLLER___C__DISPLAYCLASS7_2__CTOR_OFFSET UNITYSDK_OFFSET(0x14C2A380)
#define MOLEMOLE_UISURVEYPOINTSWIDGETCONTROLLER___C__DISPLAYCLASS7_2__REFRESHVIEW_B__5_OFFSET UNITYSDK_OFFSET(0x14C2A390)

namespace MoleMole
{
	inline static constexpr unsigned int UISurveyPointsWidgetController___c__DisplayClass7_2_TypeDefinitionIndex = 74126;

	class UISurveyPointsWidgetController___c__DisplayClass7_2 : public ::System::Object
	{
	public:
		::MoleMole::UISurveyPointsWidgetController___c__DisplayClass7_1* CS___8__locals2; // 0x10
		::UnityEngine::UI::Extension::UIDynamicNumberLabel* dynamicLabel; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UISURVEYPOINTSWIDGETCONTROLLER___C__DISPLAYCLASS7_2__CTOR_OFFSET))(this);
		}

		::System::Void _RefreshView_b__5()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UISURVEYPOINTSWIDGETCONTROLLER___C__DISPLAYCLASS7_2__REFRESHVIEW_B__5_OFFSET))(this);
		}
	};
}

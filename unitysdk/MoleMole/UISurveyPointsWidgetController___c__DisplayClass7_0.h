#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_1AF3C5BF111F3525;
class Class_1_E398E2F4402CE967;
namespace MoleMole { class UISurveyPointsWidgetController; }
namespace System { class Action; }

#define MOLEMOLE_UISURVEYPOINTSWIDGETCONTROLLER___C__DISPLAYCLASS7_0__CTOR_OFFSET UNITYSDK_OFFSET(0x19152D50)
#define MOLEMOLE_UISURVEYPOINTSWIDGETCONTROLLER___C__DISPLAYCLASS7_0__REFRESHVIEW_B__4_OFFSET UNITYSDK_OFFSET(0x19152D60)
#define MOLEMOLE_UISURVEYPOINTSWIDGETCONTROLLER___C__DISPLAYCLASS7_0__REFRESHVIEW_B__6_OFFSET UNITYSDK_OFFSET(0x191531D0)
#define MOLEMOLE_UISURVEYPOINTSWIDGETCONTROLLER___C__DISPLAYCLASS7_0__REFRESHVIEW_G__ONPROGRESS_0_OFFSET UNITYSDK_OFFSET(0x19152FB0)

namespace MoleMole
{
	inline static constexpr unsigned int UISurveyPointsWidgetController___c__DisplayClass7_0_TypeDefinitionIndex = 76741;

	class UISurveyPointsWidgetController___c__DisplayClass7_0 : public ::System::Object
	{
	public:
		::MoleMole::UISurveyPointsWidgetController* __4__this; // 0x10
		::Class_1_E398E2F4402CE967* data; // 0x18
		::System::Action* __9__6; // 0x20
		::Class_1_1AF3C5BF111F3525* viewdata; // 0x28
		::System::Single timer; // 0x30
		::System::Int32 newLevel; // 0x34

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UISURVEYPOINTSWIDGETCONTROLLER___C__DISPLAYCLASS7_0__CTOR_OFFSET))(this);
		}

		::System::Void _RefreshView_b__4()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UISURVEYPOINTSWIDGETCONTROLLER___C__DISPLAYCLASS7_0__REFRESHVIEW_B__4_OFFSET))(this);
		}

		::System::Void _RefreshView_b__6()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UISURVEYPOINTSWIDGETCONTROLLER___C__DISPLAYCLASS7_0__REFRESHVIEW_B__6_OFFSET))(this);
		}

		::System::Void _RefreshView_g__OnProgress_0(::System::Single progress)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_UISURVEYPOINTSWIDGETCONTROLLER___C__DISPLAYCLASS7_0__REFRESHVIEW_G__ONPROGRESS_0_OFFSET))(this, progress);
		}
	};
}

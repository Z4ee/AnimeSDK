#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/ValueTuple_3.h"

namespace MoleMole { class UISurveyPointsWidgetController; }
namespace System { class Action; }

#define MOLEMOLE_UISURVEYPOINTSWIDGETCONTROLLER___C__DISPLAYCLASS8_0__CTOR_OFFSET UNITYSDK_OFFSET(0x14C2ACE0)
#define MOLEMOLE_UISURVEYPOINTSWIDGETCONTROLLER___C__DISPLAYCLASS8_0__REFRESHCONTROBUTEVIEW_B__1_OFFSET UNITYSDK_OFFSET(0x14C2ACF0)
#define MOLEMOLE_UISURVEYPOINTSWIDGETCONTROLLER___C__DISPLAYCLASS8_0__REFRESHCONTROBUTEVIEW_B__2_OFFSET UNITYSDK_OFFSET(0x14C2B1C0)
#define MOLEMOLE_UISURVEYPOINTSWIDGETCONTROLLER___C__DISPLAYCLASS8_0__REFRESHCONTROBUTEVIEW_B__3_OFFSET UNITYSDK_OFFSET(0x14C2B420)
#define MOLEMOLE_UISURVEYPOINTSWIDGETCONTROLLER___C__DISPLAYCLASS8_0__REFRESHCONTROBUTEVIEW_B__4_OFFSET UNITYSDK_OFFSET(0x14C2B6C0)
#define MOLEMOLE_UISURVEYPOINTSWIDGETCONTROLLER___C__DISPLAYCLASS8_0__REFRESHCONTROBUTEVIEW_B__6_OFFSET UNITYSDK_OFFSET(0x14C2B910)
#define MOLEMOLE_UISURVEYPOINTSWIDGETCONTROLLER___C__DISPLAYCLASS8_0__REFRESHCONTROBUTEVIEW_B__7_OFFSET UNITYSDK_OFFSET(0x14C2B990)
#define MOLEMOLE_UISURVEYPOINTSWIDGETCONTROLLER___C__DISPLAYCLASS8_0__REFRESHCONTROBUTEVIEW_B__8_OFFSET UNITYSDK_OFFSET(0x14C2BC20)
#define MOLEMOLE_UISURVEYPOINTSWIDGETCONTROLLER___C__DISPLAYCLASS8_0__REFRESHCONTROBUTEVIEW_G__ONPROGRESS_0_OFFSET UNITYSDK_OFFSET(0x14C2AF90)

namespace MoleMole
{
	inline static constexpr unsigned int UISurveyPointsWidgetController___c__DisplayClass8_0_TypeDefinitionIndex = 74127;

	class UISurveyPointsWidgetController___c__DisplayClass8_0 : public ::System::Object
	{
	public:
		::System::Action* __9__7; // 0x10
		::System::Action* __9__8; // 0x18
		::System::Action* __9__6; // 0x20
		::MoleMole::UISurveyPointsWidgetController* __4__this; // 0x28
		::System::Single prvRatio; // 0x30
		::System::ValueTuple_3<::System::Boolean, ::System::Int32, ::System::Int32> progressData; // 0x34
		::System::Boolean isMaxLevel; // 0x40
		::System::Int32 currentAbyssPoint; // 0x44
		::System::Single realExpProgressDuration; // 0x48
		::System::Single minRatio; // 0x4C
		::System::Single curRatio; // 0x50
		::System::Single timer; // 0x54
		::System::Int32 lastExp; // 0x58
		::System::Int32 levelNeedExp; // 0x5C
		::System::Int32 curLevel; // 0x60

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UISURVEYPOINTSWIDGETCONTROLLER___C__DISPLAYCLASS8_0__CTOR_OFFSET))(this);
		}

		::System::Void _RefreshControbuteView_b__1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UISURVEYPOINTSWIDGETCONTROLLER___C__DISPLAYCLASS8_0__REFRESHCONTROBUTEVIEW_B__1_OFFSET))(this);
		}

		::System::Void _RefreshControbuteView_b__2()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UISURVEYPOINTSWIDGETCONTROLLER___C__DISPLAYCLASS8_0__REFRESHCONTROBUTEVIEW_B__2_OFFSET))(this);
		}

		::System::Void _RefreshControbuteView_b__3()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UISURVEYPOINTSWIDGETCONTROLLER___C__DISPLAYCLASS8_0__REFRESHCONTROBUTEVIEW_B__3_OFFSET))(this);
		}

		::System::Void _RefreshControbuteView_b__4()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UISURVEYPOINTSWIDGETCONTROLLER___C__DISPLAYCLASS8_0__REFRESHCONTROBUTEVIEW_B__4_OFFSET))(this);
		}

		::System::Void _RefreshControbuteView_b__6()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UISURVEYPOINTSWIDGETCONTROLLER___C__DISPLAYCLASS8_0__REFRESHCONTROBUTEVIEW_B__6_OFFSET))(this);
		}

		::System::Void _RefreshControbuteView_b__7()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UISURVEYPOINTSWIDGETCONTROLLER___C__DISPLAYCLASS8_0__REFRESHCONTROBUTEVIEW_B__7_OFFSET))(this);
		}

		::System::Void _RefreshControbuteView_b__8()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UISURVEYPOINTSWIDGETCONTROLLER___C__DISPLAYCLASS8_0__REFRESHCONTROBUTEVIEW_B__8_OFFSET))(this);
		}

		::System::Void _RefreshControbuteView_g__OnProgress_0(::System::Single progress)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_UISURVEYPOINTSWIDGETCONTROLLER___C__DISPLAYCLASS8_0__REFRESHCONTROBUTEVIEW_G__ONPROGRESS_0_OFFSET))(this, progress);
		}
	};
}

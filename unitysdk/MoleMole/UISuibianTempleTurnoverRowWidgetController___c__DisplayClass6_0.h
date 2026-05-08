#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_2_CC6C6812D7C240D5;
namespace MoleMole { class UISuibianTempleTurnoverRowWidgetController; }
namespace System { class String; }
template <typename T> class Class_0_16E4307DCC41950C_13;

#define MOLEMOLE_UISUIBIANTEMPLETURNOVERROWWIDGETCONTROLLER___C__DISPLAYCLASS6_0__CTOR_OFFSET UNITYSDK_OFFSET(0x11B7A980)
#define MOLEMOLE_UISUIBIANTEMPLETURNOVERROWWIDGETCONTROLLER___C__DISPLAYCLASS6_0__REFRESHTREND_B__0_OFFSET UNITYSDK_OFFSET(0x11B7A990)
#define MOLEMOLE_UISUIBIANTEMPLETURNOVERROWWIDGETCONTROLLER___C__DISPLAYCLASS6_0__REFRESHTREND_B__1_OFFSET UNITYSDK_OFFSET(0x11B7AB20)

namespace MoleMole
{
	inline static constexpr unsigned int UISuibianTempleTurnoverRowWidgetController___c__DisplayClass6_0_TypeDefinitionIndex = 47961;

	class UISuibianTempleTurnoverRowWidgetController___c__DisplayClass6_0 : public ::System::Object
	{
	public:
		::Class_0_16E4307DCC41950C_13<::System::Int32>* trendID; // 0x10
		::MoleMole::UISuibianTempleTurnoverRowWidgetController* __4__this; // 0x18
		::Class_2_CC6C6812D7C240D5* slot; // 0x20
		::System::String* lockText; // 0x28
		::System::Boolean isCurrent; // 0x30

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UISUIBIANTEMPLETURNOVERROWWIDGETCONTROLLER___C__DISPLAYCLASS6_0__CTOR_OFFSET))(this);
		}

		::System::Void _RefreshTrend_b__0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UISUIBIANTEMPLETURNOVERROWWIDGETCONTROLLER___C__DISPLAYCLASS6_0__REFRESHTREND_B__0_OFFSET))(this);
		}

		::System::Void _RefreshTrend_b__1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UISUIBIANTEMPLETURNOVERROWWIDGETCONTROLLER___C__DISPLAYCLASS6_0__REFRESHTREND_B__1_OFFSET))(this);
		}
	};
}

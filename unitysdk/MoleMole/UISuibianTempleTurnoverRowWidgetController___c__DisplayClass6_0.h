#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_2_8E938CB3775CAF5D;
namespace MoleMole { class UISuibianTempleTurnoverRowWidgetController; }
namespace System { class String; }
template <typename T> class Class_0_16E4307DCC419505_159;

#define MOLEMOLE_UISUIBIANTEMPLETURNOVERROWWIDGETCONTROLLER___C__DISPLAYCLASS6_0__CTOR_OFFSET UNITYSDK_OFFSET(0x11E10CA0)
#define MOLEMOLE_UISUIBIANTEMPLETURNOVERROWWIDGETCONTROLLER___C__DISPLAYCLASS6_0__REFRESHTREND_B__0_OFFSET UNITYSDK_OFFSET(0x11E10CB0)
#define MOLEMOLE_UISUIBIANTEMPLETURNOVERROWWIDGETCONTROLLER___C__DISPLAYCLASS6_0__REFRESHTREND_B__1_OFFSET UNITYSDK_OFFSET(0x11E10E80)

namespace MoleMole
{
	inline static constexpr unsigned int UISuibianTempleTurnoverRowWidgetController___c__DisplayClass6_0_TypeDefinitionIndex = 51895;

	class UISuibianTempleTurnoverRowWidgetController___c__DisplayClass6_0 : public ::System::Object
	{
	public:
		::System::String* lockText; // 0x10
		::Class_0_16E4307DCC419505_159<::System::Int32>* trendID; // 0x18
		::MoleMole::UISuibianTempleTurnoverRowWidgetController* __4__this; // 0x20
		::Class_2_8E938CB3775CAF5D* slot; // 0x28
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

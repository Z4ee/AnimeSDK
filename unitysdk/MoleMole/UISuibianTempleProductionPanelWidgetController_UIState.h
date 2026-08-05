#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_5F5ACAAB9AA1EB49.h"
#include "unitysdk/MoleMole/UISuibianTempleProductionPanelWidgetController_BuddyState.h"

namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
template <typename T> class Class_0_16E4307DCC419505_159;

#define MOLEMOLE_UISUIBIANTEMPLEPRODUCTIONPANELWIDGETCONTROLLER_UISTATE_ONCREATEPROPERTY_OFFSET UNITYSDK_OFFSET(0x119F29E0)
#define MOLEMOLE_UISUIBIANTEMPLEPRODUCTIONPANELWIDGETCONTROLLER_UISTATE__CTOR_OFFSET UNITYSDK_OFFSET(0x119F2AA0)

namespace MoleMole
{
	inline static constexpr unsigned int UISuibianTempleProductionPanelWidgetController_UIState_TypeDefinitionIndex = 90733;

	class UISuibianTempleProductionPanelWidgetController_UIState : public ::Class_1_5F5ACAAB9AA1EB49
	{
	public:
		::Class_0_16E4307DCC419505_159<::System::Boolean>* GatherEnable; // 0x80
		::Class_0_16E4307DCC419505_159<::MoleMole::UISuibianTempleProductionPanelWidgetController_BuddyState>* State; // 0x88
		::Class_0_16E4307DCC419505_159<::System::Boolean>* IsAutoGet; // 0x90
		::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* TrackItemMap; // 0x98

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UISUIBIANTEMPLEPRODUCTIONPANELWIDGETCONTROLLER_UISTATE__CTOR_OFFSET))(this);
		}

		::System::Void OnCreateProperty()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UISUIBIANTEMPLEPRODUCTIONPANELWIDGETCONTROLLER_UISTATE_ONCREATEPROPERTY_OFFSET))(this);
		}
	};
}

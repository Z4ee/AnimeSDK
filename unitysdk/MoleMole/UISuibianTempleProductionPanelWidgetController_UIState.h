#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_C331A5DC726F030A.h"
#include "unitysdk/MoleMole/UISuibianTempleProductionPanelWidgetController_BuddyState.h"

namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
template <typename T> class Class_0_16E4307DCC419505_165;

#define MOLEMOLE_UISUIBIANTEMPLEPRODUCTIONPANELWIDGETCONTROLLER_UISTATE_ONCREATEPROPERTY_OFFSET UNITYSDK_OFFSET(0x122B7F20)
#define MOLEMOLE_UISUIBIANTEMPLEPRODUCTIONPANELWIDGETCONTROLLER_UISTATE__CTOR_OFFSET UNITYSDK_OFFSET(0x122B7FD0)

namespace MoleMole
{
	inline static constexpr unsigned int UISuibianTempleProductionPanelWidgetController_UIState_TypeDefinitionIndex = 51218;

	class UISuibianTempleProductionPanelWidgetController_UIState : public ::Class_1_C331A5DC726F030A
	{
	public:
		::Class_0_16E4307DCC419505_165<::System::Boolean>* IsAutoGet; // 0x60
		::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* TrackItemMap; // 0x68
		::Class_0_16E4307DCC419505_165<::MoleMole::UISuibianTempleProductionPanelWidgetController_BuddyState>* State; // 0x70
		::Class_0_16E4307DCC419505_165<::System::Boolean>* GatherEnable; // 0x78

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

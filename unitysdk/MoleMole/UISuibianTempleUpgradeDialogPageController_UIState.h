#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_C331A5DC726F030A.h"

template <typename T> class Class_0_16E4307DCC419505_165;

#define MOLEMOLE_UISUIBIANTEMPLEUPGRADEDIALOGPAGECONTROLLER_UISTATE_ONCREATEPROPERTY_OFFSET UNITYSDK_OFFSET(0x11BBD3F0)
#define MOLEMOLE_UISUIBIANTEMPLEUPGRADEDIALOGPAGECONTROLLER_UISTATE__CTOR_OFFSET UNITYSDK_OFFSET(0x11BBD480)

namespace MoleMole
{
	inline static constexpr unsigned int UISuibianTempleUpgradeDialogPageController_UIState_TypeDefinitionIndex = 45994;

	class UISuibianTempleUpgradeDialogPageController_UIState : public ::Class_1_C331A5DC726F030A
	{
	public:
		::Class_0_16E4307DCC419505_165<::System::Int32>* CurrentLevel; // 0x60
		::Class_0_16E4307DCC419505_165<::System::Boolean>* EnableUpgrade; // 0x68

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UISUIBIANTEMPLEUPGRADEDIALOGPAGECONTROLLER_UISTATE__CTOR_OFFSET))(this);
		}

		::System::Void OnCreateProperty()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UISUIBIANTEMPLEUPGRADEDIALOGPAGECONTROLLER_UISTATE_ONCREATEPROPERTY_OFFSET))(this);
		}
	};
}

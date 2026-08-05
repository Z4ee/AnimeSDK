#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_5F5ACAAB9AA1EB49.h"

template <typename T> class Class_0_16E4307DCC419505_159;

#define MOLEMOLE_UISUIBIANTEMPLEUPGRADEDIALOGPAGECONTROLLER_UISTATE_ONCREATEPROPERTY_OFFSET UNITYSDK_OFFSET(0x151227A0)
#define MOLEMOLE_UISUIBIANTEMPLEUPGRADEDIALOGPAGECONTROLLER_UISTATE__CTOR_OFFSET UNITYSDK_OFFSET(0x15122840)

namespace MoleMole
{
	inline static constexpr unsigned int UISuibianTempleUpgradeDialogPageController_UIState_TypeDefinitionIndex = 62144;

	class UISuibianTempleUpgradeDialogPageController_UIState : public ::Class_1_5F5ACAAB9AA1EB49
	{
	public:
		::Class_0_16E4307DCC419505_159<::System::Int32>* CurrentLevel; // 0x80
		::Class_0_16E4307DCC419505_159<::System::Boolean>* EnableUpgrade; // 0x88

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

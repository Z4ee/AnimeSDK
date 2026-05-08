#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_F4299CC27263318B.h"

template <typename T> class Class_0_16E4307DCC41950C_13;

#define MOLEMOLE_UISUIBIANTEMPLEUPGRADEDIALOGPAGECONTROLLER_UISTATE_ONCREATEPROPERTY_OFFSET UNITYSDK_OFFSET(0x1303CEC0)
#define MOLEMOLE_UISUIBIANTEMPLEUPGRADEDIALOGPAGECONTROLLER_UISTATE__CTOR_OFFSET UNITYSDK_OFFSET(0x1303CF50)

namespace MoleMole
{
	inline static constexpr unsigned int UISuibianTempleUpgradeDialogPageController_UIState_TypeDefinitionIndex = 44344;

	class UISuibianTempleUpgradeDialogPageController_UIState : public ::Class_1_F4299CC27263318B
	{
	public:
		::Class_0_16E4307DCC41950C_13<::System::Boolean>* EnableUpgrade; // 0x70
		::Class_0_16E4307DCC41950C_13<::System::Int32>* CurrentLevel; // 0x78

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

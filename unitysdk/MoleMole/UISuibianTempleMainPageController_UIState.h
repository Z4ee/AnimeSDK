#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_5F5ACAAB9AA1EB49.h"

template <typename T> class Class_0_16E4307DCC419505_163;

#define MOLEMOLE_UISUIBIANTEMPLEMAINPAGECONTROLLER_UISTATE_ONCREATEPROPERTY_OFFSET UNITYSDK_OFFSET(0x15E93390)
#define MOLEMOLE_UISUIBIANTEMPLEMAINPAGECONTROLLER_UISTATE__CTOR_OFFSET UNITYSDK_OFFSET(0x15E93750)

namespace MoleMole
{
	inline static constexpr unsigned int UISuibianTempleMainPageController_UIState_TypeDefinitionIndex = 89145;

	class UISuibianTempleMainPageController_UIState : public ::Class_1_5F5ACAAB9AA1EB49
	{
	public:
		::Class_0_16E4307DCC419505_163<::System::Int32>* SimulationValue; // 0x80

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UISUIBIANTEMPLEMAINPAGECONTROLLER_UISTATE__CTOR_OFFSET))(this);
		}

		::System::Void OnCreateProperty()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UISUIBIANTEMPLEMAINPAGECONTROLLER_UISTATE_ONCREATEPROPERTY_OFFSET))(this);
		}
	};
}

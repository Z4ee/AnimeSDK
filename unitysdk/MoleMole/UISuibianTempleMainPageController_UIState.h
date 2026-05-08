#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_F4299CC27263318B.h"

template <typename T> class Class_0_16E4307DCC419505_97;

#define MOLEMOLE_UISUIBIANTEMPLEMAINPAGECONTROLLER_UISTATE_ONCREATEPROPERTY_OFFSET UNITYSDK_OFFSET(0x1378ACB0)
#define MOLEMOLE_UISUIBIANTEMPLEMAINPAGECONTROLLER_UISTATE__CTOR_OFFSET UNITYSDK_OFFSET(0x1378B070)

namespace MoleMole
{
	inline static constexpr unsigned int UISuibianTempleMainPageController_UIState_TypeDefinitionIndex = 75990;

	class UISuibianTempleMainPageController_UIState : public ::Class_1_F4299CC27263318B
	{
	public:
		::Class_0_16E4307DCC419505_97<::System::Int32>* SimulationValue; // 0x70

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

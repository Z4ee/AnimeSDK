#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_5F5ACAAB9AA1EB49.h"

template <typename T> class Class_0_16E4307DCC419505_159;

#define MOLEMOLE_UIBALLGAMEICONCARDWIDGETCONTROLLER_UISTATE_ONCREATEPROPERTY_OFFSET UNITYSDK_OFFSET(0x1F36AA70)
#define MOLEMOLE_UIBALLGAMEICONCARDWIDGETCONTROLLER_UISTATE__CTOR_OFFSET UNITYSDK_OFFSET(0x1F36AB10)

namespace MoleMole
{
	inline static constexpr unsigned int UIBallGameIconCardWidgetController_UIState_TypeDefinitionIndex = 93471;

	class UIBallGameIconCardWidgetController_UIState : public ::Class_1_5F5ACAAB9AA1EB49
	{
	public:
		::Class_0_16E4307DCC419505_159<::System::Single>* ExpPercent; // 0x80
		::Class_0_16E4307DCC419505_159<::System::Int32>* Level; // 0x88

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBALLGAMEICONCARDWIDGETCONTROLLER_UISTATE__CTOR_OFFSET))(this);
		}

		::System::Void OnCreateProperty()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBALLGAMEICONCARDWIDGETCONTROLLER_UISTATE_ONCREATEPROPERTY_OFFSET))(this);
		}
	};
}

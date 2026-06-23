#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_C331A5DC726F030A.h"

template <typename T> class Class_0_16E4307DCC419505_165;

#define MOLEMOLE_UIBALLGAMEICONCARDWIDGETCONTROLLER_UISTATE_ONCREATEPROPERTY_OFFSET UNITYSDK_OFFSET(0x1E589D00)
#define MOLEMOLE_UIBALLGAMEICONCARDWIDGETCONTROLLER_UISTATE__CTOR_OFFSET UNITYSDK_OFFSET(0x1E589D90)

namespace MoleMole
{
	inline static constexpr unsigned int UIBallGameIconCardWidgetController_UIState_TypeDefinitionIndex = 89482;

	class UIBallGameIconCardWidgetController_UIState : public ::Class_1_C331A5DC726F030A
	{
	public:
		::Class_0_16E4307DCC419505_165<::System::Single>* ExpPercent; // 0x60
		::Class_0_16E4307DCC419505_165<::System::Int32>* Level; // 0x68

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

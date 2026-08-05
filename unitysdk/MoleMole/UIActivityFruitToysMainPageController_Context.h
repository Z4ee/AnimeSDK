#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_7B044D15E4826ADC.h"
#include "unitysdk/MoleMole/UIControllerContextBase.h"

#define MOLEMOLE_UIACTIVITYFRUITTOYSMAINPAGECONTROLLER_CONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0x18E0F1F0)

namespace MoleMole
{
	inline static constexpr unsigned int UIActivityFruitToysMainPageController_Context_TypeDefinitionIndex = 84805;

	class UIActivityFruitToysMainPageController_Context : public ::MoleMole::UIControllerContextBase
	{
	public:
		::Enum_3_7B044D15E4826ADC ActivityType; // 0x28

		::System::Void _ctor(::Enum_3_7B044D15E4826ADC activityType)
		{
			return ((::System::Void(*)(::PVOID, ::Enum_3_7B044D15E4826ADC))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYFRUITTOYSMAINPAGECONTROLLER_CONTEXT__CTOR_OFFSET))(this, activityType);
		}
	};
}

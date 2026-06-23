#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIControllerContextBase.h"

#define MOLEMOLE_UIRABDEPOSITORYELEMENTTEXTTAGROWWIDGETCONTROLLER_DATA__CTOR_OFFSET UNITYSDK_OFFSET(0x15610F80)

namespace MoleMole
{
	inline static constexpr unsigned int UIRABDepositoryElementTextTagRowWidgetController_Data_TypeDefinitionIndex = 58764;

	class UIRABDepositoryElementTextTagRowWidgetController_Data : public ::MoleMole::UIControllerContextBase
	{
	public:
		::System::Int32 characterDescId; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIRABDEPOSITORYELEMENTTEXTTAGROWWIDGETCONTROLLER_DATA__CTOR_OFFSET))(this);
		}
	};
}

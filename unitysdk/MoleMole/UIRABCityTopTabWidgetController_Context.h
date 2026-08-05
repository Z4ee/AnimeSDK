#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIControllerContextBase.h"

#define MOLEMOLE_UIRABCITYTOPTABWIDGETCONTROLLER_CONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0x15F5D4F0)

namespace MoleMole
{
	inline static constexpr unsigned int UIRABCityTopTabWidgetController_Context_TypeDefinitionIndex = 42200;

	class UIRABCityTopTabWidgetController_Context : public ::MoleMole::UIControllerContextBase
	{
	public:
		::System::Int32 TabId; // 0x28
		::System::Int32 TabIndex; // 0x2C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIRABCITYTOPTABWIDGETCONTROLLER_CONTEXT__CTOR_OFFSET))(this);
		}
	};
}

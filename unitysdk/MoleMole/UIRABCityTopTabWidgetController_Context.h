#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIControllerContextBase.h"

#define MOLEMOLE_UIRABCITYTOPTABWIDGETCONTROLLER_CONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0x1717E520)

namespace MoleMole
{
	inline static constexpr unsigned int UIRABCityTopTabWidgetController_Context_TypeDefinitionIndex = 67174;

	class UIRABCityTopTabWidgetController_Context : public ::MoleMole::UIControllerContextBase
	{
	public:
		::System::Int32 TabIndex; // 0x28
		::System::Int32 TabId; // 0x2C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIRABCITYTOPTABWIDGETCONTROLLER_CONTEXT__CTOR_OFFSET))(this);
		}
	};
}

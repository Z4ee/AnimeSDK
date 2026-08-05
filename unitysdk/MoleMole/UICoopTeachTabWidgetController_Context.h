#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIControllerContextBase.h"

namespace MoleMole { class UICoopTeachTabWidgetController_Data; }

#define MOLEMOLE_UICOOPTEACHTABWIDGETCONTROLLER_CONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0x16061E60)

namespace MoleMole
{
	inline static constexpr unsigned int UICoopTeachTabWidgetController_Context_TypeDefinitionIndex = 41005;

	class UICoopTeachTabWidgetController_Context : public ::MoleMole::UIControllerContextBase
	{
	public:
		::MoleMole::UICoopTeachTabWidgetController_Data* Data; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UICOOPTEACHTABWIDGETCONTROLLER_CONTEXT__CTOR_OFFSET))(this);
		}
	};
}

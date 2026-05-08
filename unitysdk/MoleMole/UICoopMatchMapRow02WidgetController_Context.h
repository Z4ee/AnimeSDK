#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIControllerContextBase.h"

namespace MoleMole { class UICoopMatchMapRow02WidgetController_Data; }

#define MOLEMOLE_UICOOPMATCHMAPROW02WIDGETCONTROLLER_CONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0x14ECBA10)

namespace MoleMole
{
	inline static constexpr unsigned int UICoopMatchMapRow02WidgetController_Context_TypeDefinitionIndex = 73029;

	class UICoopMatchMapRow02WidgetController_Context : public ::MoleMole::UIControllerContextBase
	{
	public:
		::MoleMole::UICoopMatchMapRow02WidgetController_Data* Data; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UICOOPMATCHMAPROW02WIDGETCONTROLLER_CONTEXT__CTOR_OFFSET))(this);
		}
	};
}

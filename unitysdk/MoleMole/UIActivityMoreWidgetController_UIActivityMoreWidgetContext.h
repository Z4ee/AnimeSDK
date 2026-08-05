#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIControllerContextBase.h"

namespace MoleMole { class ActivityWidgetContext; }

#define MOLEMOLE_UIACTIVITYMOREWIDGETCONTROLLER_UIACTIVITYMOREWIDGETCONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0x1975B410)

namespace MoleMole
{
	inline static constexpr unsigned int UIActivityMoreWidgetController_UIActivityMoreWidgetContext_TypeDefinitionIndex = 90664;

	class UIActivityMoreWidgetController_UIActivityMoreWidgetContext : public ::MoleMole::UIControllerContextBase
	{
	public:
		::MoleMole::ActivityWidgetContext* WidgetContext; // 0x28
		::System::Int32 RoleIndex; // 0x30

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYMOREWIDGETCONTROLLER_UIACTIVITYMOREWIDGETCONTEXT__CTOR_OFFSET))(this);
		}
	};
}

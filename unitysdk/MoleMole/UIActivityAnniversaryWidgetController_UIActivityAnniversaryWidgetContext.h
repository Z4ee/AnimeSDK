#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIControllerContextBase.h"

namespace MoleMole { class ActivityWidgetContext; }

#define MOLEMOLE_UIACTIVITYANNIVERSARYWIDGETCONTROLLER_UIACTIVITYANNIVERSARYWIDGETCONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0x1864D710)

namespace MoleMole
{
	inline static constexpr unsigned int UIActivityAnniversaryWidgetController_UIActivityAnniversaryWidgetContext_TypeDefinitionIndex = 58573;

	class UIActivityAnniversaryWidgetController_UIActivityAnniversaryWidgetContext : public ::MoleMole::UIControllerContextBase
	{
	public:
		::MoleMole::ActivityWidgetContext* WidgetContext; // 0x28
		::System::Int32 RoleIndex; // 0x30

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYANNIVERSARYWIDGETCONTROLLER_UIACTIVITYANNIVERSARYWIDGETCONTEXT__CTOR_OFFSET))(this);
		}
	};
}

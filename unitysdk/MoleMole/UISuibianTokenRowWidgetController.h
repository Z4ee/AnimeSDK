#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIGeneralTokenRowWidgetController.h"

namespace MoleMole { class UIControlReference; }

#define MOLEMOLE_UISUIBIANTOKENROWWIDGETCONTROLLER_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x160F0340)
#define MOLEMOLE_UISUIBIANTOKENROWWIDGETCONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x160F03E0)
#define MOLEMOLE_UISUIBIANTOKENROWWIDGETCONTROLLER___BASE_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x160F0440)

namespace MoleMole
{
	inline static constexpr unsigned int UISuibianTokenRowWidgetController_TypeDefinitionIndex = 73439;

	class UISuibianTokenRowWidgetController : public ::MoleMole::UIGeneralTokenRowWidgetController
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UISUIBIANTOKENROWWIDGETCONTROLLER__CTOR_OFFSET))(this);
		}

		::System::Void OnCreateView(::MoleMole::UIControlReference* controlReference)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UISUIBIANTOKENROWWIDGETCONTROLLER_ONCREATEVIEW_OFFSET))(this, controlReference);
		}

		::System::Void __base_OnCreateView(::MoleMole::UIControlReference* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UISUIBIANTOKENROWWIDGETCONTROLLER___BASE_ONCREATEVIEW_OFFSET))(this, P0);
		}
	};
}

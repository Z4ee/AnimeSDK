#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIGeneralTokenRowWidgetController.h"

namespace MoleMole { class UIControlReference; }

#define MOLEMOLE_UISUIBIANTOKENROWWIDGETCONTROLLER_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x15C37320)
#define MOLEMOLE_UISUIBIANTOKENROWWIDGETCONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x15C373C0)
#define MOLEMOLE_UISUIBIANTOKENROWWIDGETCONTROLLER___BASE_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x15C37420)

namespace MoleMole
{
	inline static constexpr unsigned int UISuibianTokenRowWidgetController_TypeDefinitionIndex = 68416;

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

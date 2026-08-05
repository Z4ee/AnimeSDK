#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIWidgetController.h"

class Class_2_0096754AC2F6E253_4;
namespace MoleMole { class UIControlReference; }
namespace MoleMole { class UIControllerContextBase; }
namespace System { class String; }

#define MOLEMOLE_UIMONSTERFANTASYTRANSITIONWIDGETCONTROLLER_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x17968ED0)
#define MOLEMOLE_UIMONSTERFANTASYTRANSITIONWIDGETCONTROLLER_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x17968F60)
#define MOLEMOLE_UIMONSTERFANTASYTRANSITIONWIDGETCONTROLLER_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x17968E00)
#define MOLEMOLE_UIMONSTERFANTASYTRANSITIONWIDGETCONTROLLER_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x17968E60)
#define MOLEMOLE_UIMONSTERFANTASYTRANSITIONWIDGETCONTROLLER_SETTEXT_OFFSET UNITYSDK_OFFSET(0x17968FE0)
#define MOLEMOLE_UIMONSTERFANTASYTRANSITIONWIDGETCONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x17969080)
#define MOLEMOLE_UIMONSTERFANTASYTRANSITIONWIDGETCONTROLLER___BASE_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x179690E0)
#define MOLEMOLE_UIMONSTERFANTASYTRANSITIONWIDGETCONTROLLER___BASE_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x17969170)
#define MOLEMOLE_UIMONSTERFANTASYTRANSITIONWIDGETCONTROLLER___BASE_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x17969200)
#define MOLEMOLE_UIMONSTERFANTASYTRANSITIONWIDGETCONTROLLER___BASE_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x17969290)

namespace MoleMole
{
	inline static constexpr unsigned int UIMonsterFantasyTransitionWidgetController_TypeDefinitionIndex = 71437;

	class UIMonsterFantasyTransitionWidgetController : public ::MoleMole::UIWidgetController
	{
	public:
		::Class_2_0096754AC2F6E253_4* _view; // 0x2C0

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMONSTERFANTASYTRANSITIONWIDGETCONTROLLER__CTOR_OFFSET))(this);
		}

		::System::Void OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMONSTERFANTASYTRANSITIONWIDGETCONTROLLER_ONUIINIT_OFFSET))(this);
		}

		::System::Void OnUIOpen(::MoleMole::UIControllerContextBase* openCtrlContext)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMONSTERFANTASYTRANSITIONWIDGETCONTROLLER_ONUIOPEN_OFFSET))(this, openCtrlContext);
		}

		::System::Void OnCreateView(::MoleMole::UIControlReference* controlReference)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMONSTERFANTASYTRANSITIONWIDGETCONTROLLER_ONCREATEVIEW_OFFSET))(this, controlReference);
		}

		::System::Void OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMONSTERFANTASYTRANSITIONWIDGETCONTROLLER_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void SetText(::System::String* text, ::System::String* text02)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMONSTERFANTASYTRANSITIONWIDGETCONTROLLER_SETTEXT_OFFSET))(this, text, text02);
		}

		::System::Void __base_OnCreateView(::MoleMole::UIControlReference* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMONSTERFANTASYTRANSITIONWIDGETCONTROLLER___BASE_ONCREATEVIEW_OFFSET))(this, P0);
		}

		::System::Void __base_OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMONSTERFANTASYTRANSITIONWIDGETCONTROLLER___BASE_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void __base_OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMONSTERFANTASYTRANSITIONWIDGETCONTROLLER___BASE_ONUIINIT_OFFSET))(this);
		}

		::System::Void __base_OnUIOpen(::MoleMole::UIControllerContextBase* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMONSTERFANTASYTRANSITIONWIDGETCONTROLLER___BASE_ONUIOPEN_OFFSET))(this, P0);
		}
	};
}

#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIWidgetController.h"

class Class_2_7BEEB90214042948_19;
namespace MoleMole { class UIControlReference; }
namespace MoleMole { class UIControllerContextBase; }
namespace System { class String; }

#define MOLEMOLE_UIINLEVELPAUSEADDITIONALWIDGETCONTROLLER_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x189E2000)
#define MOLEMOLE_UIINLEVELPAUSEADDITIONALWIDGETCONTROLLER_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x189E2160)
#define MOLEMOLE_UIINLEVELPAUSEADDITIONALWIDGETCONTROLLER_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x189E2090)
#define MOLEMOLE_UIINLEVELPAUSEADDITIONALWIDGETCONTROLLER_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x189E20F0)
#define MOLEMOLE_UIINLEVELPAUSEADDITIONALWIDGETCONTROLLER_SHOWDESC_OFFSET UNITYSDK_OFFSET(0x189E21E0)
#define MOLEMOLE_UIINLEVELPAUSEADDITIONALWIDGETCONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x189E2270)
#define MOLEMOLE_UIINLEVELPAUSEADDITIONALWIDGETCONTROLLER___BASE_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x189E22D0)
#define MOLEMOLE_UIINLEVELPAUSEADDITIONALWIDGETCONTROLLER___BASE_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x189E2360)
#define MOLEMOLE_UIINLEVELPAUSEADDITIONALWIDGETCONTROLLER___BASE_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x189E23F0)
#define MOLEMOLE_UIINLEVELPAUSEADDITIONALWIDGETCONTROLLER___BASE_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x189E2480)

namespace MoleMole
{
	inline static constexpr unsigned int UIInLevelPauseAdditionalWidgetController_TypeDefinitionIndex = 89841;

	class UIInLevelPauseAdditionalWidgetController : public ::MoleMole::UIWidgetController
	{
	public:
		::Class_2_7BEEB90214042948_19* _view; // 0x2C0

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELPAUSEADDITIONALWIDGETCONTROLLER__CTOR_OFFSET))(this);
		}

		::System::Void OnCreateView(::MoleMole::UIControlReference* controlReference)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELPAUSEADDITIONALWIDGETCONTROLLER_ONCREATEVIEW_OFFSET))(this, controlReference);
		}

		::System::Void OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELPAUSEADDITIONALWIDGETCONTROLLER_ONUIINIT_OFFSET))(this);
		}

		::System::Void OnUIOpen(::MoleMole::UIControllerContextBase* openCtrlContext)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELPAUSEADDITIONALWIDGETCONTROLLER_ONUIOPEN_OFFSET))(this, openCtrlContext);
		}

		::System::Void OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELPAUSEADDITIONALWIDGETCONTROLLER_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void ShowDesc(::System::String* descKey)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELPAUSEADDITIONALWIDGETCONTROLLER_SHOWDESC_OFFSET))(this, descKey);
		}

		::System::Void __base_OnCreateView(::MoleMole::UIControlReference* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELPAUSEADDITIONALWIDGETCONTROLLER___BASE_ONCREATEVIEW_OFFSET))(this, P0);
		}

		::System::Void __base_OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELPAUSEADDITIONALWIDGETCONTROLLER___BASE_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void __base_OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELPAUSEADDITIONALWIDGETCONTROLLER___BASE_ONUIINIT_OFFSET))(this);
		}

		::System::Void __base_OnUIOpen(::MoleMole::UIControllerContextBase* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELPAUSEADDITIONALWIDGETCONTROLLER___BASE_ONUIOPEN_OFFSET))(this, P0);
		}
	};
}

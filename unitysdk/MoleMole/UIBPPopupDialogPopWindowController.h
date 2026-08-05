#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_3EDF246633A325B0.h"
#include "unitysdk/MoleMole/UIWindowController.h"

class Class_1_B3454C7F36D4C73F;
class Class_2_79F6D62CE30E3F8E_72;
namespace MoleMole { class MonoGamepadModule; }
namespace MoleMole { class UIBPPurchseInfoWidgetController; }
namespace MoleMole { class UIControlReference; }
namespace MoleMole { class UIControllerContextBase; }
namespace MoleMole { class UIGeneralBtn03WidgetController; }

#define MOLEMOLE_UIBPPOPUPDIALOGPOPWINDOWCONTROLLER_GET_WINDOWTYPE_OFFSET UNITYSDK_OFFSET(0x1B709A70)
#define MOLEMOLE_UIBPPOPUPDIALOGPOPWINDOWCONTROLLER_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x1B70A060)
#define MOLEMOLE_UIBPPOPUPDIALOGPOPWINDOWCONTROLLER_ONGAMEPADMODULEFOCUS_OFFSET UNITYSDK_OFFSET(0x1B70A3F0)
#define MOLEMOLE_UIBPPOPUPDIALOGPOPWINDOWCONTROLLER_ONGAMEPADMODULELOSTFOCUS_OFFSET UNITYSDK_OFFSET(0x19A62110)
#define MOLEMOLE_UIBPPOPUPDIALOGPOPWINDOWCONTROLLER_ONHIDE_OFFSET UNITYSDK_OFFSET(0x1B70A2A0)
#define MOLEMOLE_UIBPPOPUPDIALOGPOPWINDOWCONTROLLER_ONSHOW_OFFSET UNITYSDK_OFFSET(0x1B70A1B0)
#define MOLEMOLE_UIBPPOPUPDIALOGPOPWINDOWCONTROLLER_ONUICLOSE_OFFSET UNITYSDK_OFFSET(0x1B70A0F0)
#define MOLEMOLE_UIBPPOPUPDIALOGPOPWINDOWCONTROLLER_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x1B70A370)
#define MOLEMOLE_UIBPPOPUPDIALOGPOPWINDOWCONTROLLER_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x1B709AE0)
#define MOLEMOLE_UIBPPOPUPDIALOGPOPWINDOWCONTROLLER_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x1B709BA0)
#define MOLEMOLE_UIBPPOPUPDIALOGPOPWINDOWCONTROLLER_TRYOVERRIDESELECTONFOCUS_OFFSET UNITYSDK_OFFSET(0x19A622D0)
#define MOLEMOLE_UIBPPOPUPDIALOGPOPWINDOWCONTROLLER_UPDATE_OFFSET UNITYSDK_OFFSET(0x1B709A80)
#define MOLEMOLE_UIBPPOPUPDIALOGPOPWINDOWCONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x19A623A0)
#define MOLEMOLE_UIBPPOPUPDIALOGPOPWINDOWCONTROLLER___BASE_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x19A623B0)
#define MOLEMOLE_UIBPPOPUPDIALOGPOPWINDOWCONTROLLER___BASE_ONGAMEPADMODULEFOCUS_OFFSET UNITYSDK_OFFSET(0x19A62440)
#define MOLEMOLE_UIBPPOPUPDIALOGPOPWINDOWCONTROLLER___BASE_ONGAMEPADMODULELOSTFOCUS_OFFSET UNITYSDK_OFFSET(0x19A624D0)
#define MOLEMOLE_UIBPPOPUPDIALOGPOPWINDOWCONTROLLER___BASE_ONHIDE_OFFSET UNITYSDK_OFFSET(0x19A62560)
#define MOLEMOLE_UIBPPOPUPDIALOGPOPWINDOWCONTROLLER___BASE_ONSHOW_OFFSET UNITYSDK_OFFSET(0x19A625F0)
#define MOLEMOLE_UIBPPOPUPDIALOGPOPWINDOWCONTROLLER___BASE_ONUICLOSE_OFFSET UNITYSDK_OFFSET(0x19A62600)
#define MOLEMOLE_UIBPPOPUPDIALOGPOPWINDOWCONTROLLER___BASE_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x19A626C0)
#define MOLEMOLE_UIBPPOPUPDIALOGPOPWINDOWCONTROLLER___BASE_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x19A626D0)
#define MOLEMOLE_UIBPPOPUPDIALOGPOPWINDOWCONTROLLER___BASE_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x19A626E0)
#define MOLEMOLE_UIBPPOPUPDIALOGPOPWINDOWCONTROLLER___BASE_TRYOVERRIDESELECTONFOCUS_OFFSET UNITYSDK_OFFSET(0x19A62770)

namespace MoleMole
{
	inline static constexpr unsigned int UIBPPopupDialogPopWindowController_TypeDefinitionIndex = 47425;

	class UIBPPopupDialogPopWindowController : public ::MoleMole::UIWindowController
	{
	public:
		::Class_2_79F6D62CE30E3F8E_72* _view; // 0x318
		::MoleMole::UIBPPurchseInfoWidgetController* infoWidgetController; // 0x320
		::Class_1_B3454C7F36D4C73F* purchaseInfoHandler; // 0x328
		::MoleMole::UIGeneralBtn03WidgetController* infoBtn; // 0x330

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBPPOPUPDIALOGPOPWINDOWCONTROLLER__CTOR_OFFSET))(this);
		}

		::Enum_3_3EDF246633A325B0 get_windowType()
		{
			return ((::Enum_3_3EDF246633A325B0(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBPPOPUPDIALOGPOPWINDOWCONTROLLER_GET_WINDOWTYPE_OFFSET))(this);
		}

		::System::Void Update()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBPPOPUPDIALOGPOPWINDOWCONTROLLER_UPDATE_OFFSET))(this);
		}

		::System::Void OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBPPOPUPDIALOGPOPWINDOWCONTROLLER_ONUIINIT_OFFSET))(this);
		}

		::System::Void OnUIOpen(::MoleMole::UIControllerContextBase* openCtrlContext)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBPPOPUPDIALOGPOPWINDOWCONTROLLER_ONUIOPEN_OFFSET))(this, openCtrlContext);
		}

		::System::Void OnCreateView(::MoleMole::UIControlReference* controlReference)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBPPOPUPDIALOGPOPWINDOWCONTROLLER_ONCREATEVIEW_OFFSET))(this, controlReference);
		}

		::System::Void OnUIClose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBPPOPUPDIALOGPOPWINDOWCONTROLLER_ONUICLOSE_OFFSET))(this);
		}

		::System::Void OnShow(::MoleMole::UIControllerContextBase* showCtrlContext)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBPPOPUPDIALOGPOPWINDOWCONTROLLER_ONSHOW_OFFSET))(this, showCtrlContext);
		}

		::System::Void OnHide()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBPPOPUPDIALOGPOPWINDOWCONTROLLER_ONHIDE_OFFSET))(this);
		}

		::System::Void OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBPPOPUPDIALOGPOPWINDOWCONTROLLER_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void OnGamepadModuleFocus(::MoleMole::MonoGamepadModule* gamepadModule)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::MonoGamepadModule*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBPPOPUPDIALOGPOPWINDOWCONTROLLER_ONGAMEPADMODULEFOCUS_OFFSET))(this, gamepadModule);
		}

		::System::Void OnGamepadModuleLostFocus(::MoleMole::MonoGamepadModule* gamepadModule)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::MonoGamepadModule*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBPPOPUPDIALOGPOPWINDOWCONTROLLER_ONGAMEPADMODULELOSTFOCUS_OFFSET))(this, gamepadModule);
		}

		::System::Boolean TryOverrideSelectOnFocus(::MoleMole::MonoGamepadModule* gamepadModule, ::System::Int32& selectIndex)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::MonoGamepadModule*, ::System::Int32&))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBPPOPUPDIALOGPOPWINDOWCONTROLLER_TRYOVERRIDESELECTONFOCUS_OFFSET))(this, gamepadModule, selectIndex);
		}

		::System::Void __base_OnCreateView(::MoleMole::UIControlReference* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBPPOPUPDIALOGPOPWINDOWCONTROLLER___BASE_ONCREATEVIEW_OFFSET))(this, P0);
		}

		::System::Void __base_OnGamepadModuleFocus(::MoleMole::MonoGamepadModule* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::MonoGamepadModule*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBPPOPUPDIALOGPOPWINDOWCONTROLLER___BASE_ONGAMEPADMODULEFOCUS_OFFSET))(this, P0);
		}

		::System::Void __base_OnGamepadModuleLostFocus(::MoleMole::MonoGamepadModule* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::MonoGamepadModule*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBPPOPUPDIALOGPOPWINDOWCONTROLLER___BASE_ONGAMEPADMODULELOSTFOCUS_OFFSET))(this, P0);
		}

		::System::Void __base_OnHide()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBPPOPUPDIALOGPOPWINDOWCONTROLLER___BASE_ONHIDE_OFFSET))(this);
		}

		::System::Void __base_OnShow(::MoleMole::UIControllerContextBase* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBPPOPUPDIALOGPOPWINDOWCONTROLLER___BASE_ONSHOW_OFFSET))(this, P0);
		}

		::System::Void __base_OnUIClose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBPPOPUPDIALOGPOPWINDOWCONTROLLER___BASE_ONUICLOSE_OFFSET))(this);
		}

		::System::Void __base_OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBPPOPUPDIALOGPOPWINDOWCONTROLLER___BASE_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void __base_OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBPPOPUPDIALOGPOPWINDOWCONTROLLER___BASE_ONUIINIT_OFFSET))(this);
		}

		::System::Void __base_OnUIOpen(::MoleMole::UIControllerContextBase* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBPPOPUPDIALOGPOPWINDOWCONTROLLER___BASE_ONUIOPEN_OFFSET))(this, P0);
		}

		::System::Boolean __base_TryOverrideSelectOnFocus(::MoleMole::MonoGamepadModule* P0, ::System::Int32& P1)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::MonoGamepadModule*, ::System::Int32&))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBPPOPUPDIALOGPOPWINDOWCONTROLLER___BASE_TRYOVERRIDESELECTONFOCUS_OFFSET))(this, P0, P1);
		}
	};
}

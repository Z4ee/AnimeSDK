#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/InputActionEvent.h"
#include "unitysdk/MoleMole/UIWidgetController.h"

class Class_2_37A8AA30A4705A09;
namespace MoleMole { class MonoGamepadModule; }
namespace MoleMole { class UIControlReference; }
namespace MoleMole { class UIControllerContextBase; }
namespace MoleMole { class UIGeneralTokenRowWidgetController; }
namespace MoleMole { class UITokenShowConfig; }
namespace System { class Action; }
namespace System { class EventArgs; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_UIGENERALTOKENWIDGETCONTROLLER_FORCESETCONSOLENAVIGATIONLOSTFOCUS_OFFSET UNITYSDK_OFFSET(0x19E89550)
#define MOLEMOLE_UIGENERALTOKENWIDGETCONTROLLER_GETTOKEN_OFFSET UNITYSDK_OFFSET(0x19E89630)
#define MOLEMOLE_UIGENERALTOKENWIDGETCONTROLLER_GET_ISFOCUSED_OFFSET UNITYSDK_OFFSET(0x19E881D0)
#define MOLEMOLE_UIGENERALTOKENWIDGETCONTROLLER_INITVIEW_OFFSET UNITYSDK_OFFSET(0x19E884C0)
#define MOLEMOLE_UIGENERALTOKENWIDGETCONTROLLER_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x19E88A60)
#define MOLEMOLE_UIGENERALTOKENWIDGETCONTROLLER_ONINPUTACTION_OFFSET UNITYSDK_OFFSET(0x19E88E10)
#define MOLEMOLE_UIGENERALTOKENWIDGETCONTROLLER_ONITEMCHANGED_OFFSET UNITYSDK_OFFSET(0x19E89710)
#define MOLEMOLE_UIGENERALTOKENWIDGETCONTROLLER_ONLAYOUTPLATFORMCHANGED_OFFSET UNITYSDK_OFFSET(0x19E88B70)
#define MOLEMOLE_UIGENERALTOKENWIDGETCONTROLLER_ONPACKAGEITEMCHANGED_OFFSET UNITYSDK_OFFSET(0x19E896C0)
#define MOLEMOLE_UIGENERALTOKENWIDGETCONTROLLER_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x19E88AF0)
#define MOLEMOLE_UIGENERALTOKENWIDGETCONTROLLER_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x19E883A0)
#define MOLEMOLE_UIGENERALTOKENWIDGETCONTROLLER_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x19E88570)
#define MOLEMOLE_UIGENERALTOKENWIDGETCONTROLLER_REFRESHCONSOLENAVIGATIONFUNCTION_OFFSET UNITYSDK_OFFSET(0x19E88BE0)
#define MOLEMOLE_UIGENERALTOKENWIDGETCONTROLLER_REFRESHVIEW_OFFSET UNITYSDK_OFFSET(0x19E88750)
#define MOLEMOLE_UIGENERALTOKENWIDGETCONTROLLER_SETCONSOLENAVIGATIONBACKMODULE_OFFSET UNITYSDK_OFFSET(0x19E89460)
#define MOLEMOLE_UIGENERALTOKENWIDGETCONTROLLER_SETCONSOLENAVIGATIONENABLED_OFFSET UNITYSDK_OFFSET(0x19E89400)
#define MOLEMOLE_UIGENERALTOKENWIDGETCONTROLLER_SETTOKENITEMID_OFFSET UNITYSDK_OFFSET(0x19E89140)
#define MOLEMOLE_UIGENERALTOKENWIDGETCONTROLLER_TRYDIRECTTRIGGERTOKENBTN_OFFSET UNITYSDK_OFFSET(0x19E88EA0)
#define MOLEMOLE_UIGENERALTOKENWIDGETCONTROLLER_UPDATEONCHANGED_OFFSET UNITYSDK_OFFSET(0x19E89760)
#define MOLEMOLE_UIGENERALTOKENWIDGETCONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x19E89820)
#define MOLEMOLE_UIGENERALTOKENWIDGETCONTROLLER___BASE_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x19E89880)
#define MOLEMOLE_UIGENERALTOKENWIDGETCONTROLLER___BASE_ONINPUTACTION_OFFSET UNITYSDK_OFFSET(0x19E89910)
#define MOLEMOLE_UIGENERALTOKENWIDGETCONTROLLER___BASE_ONLAYOUTPLATFORMCHANGED_OFFSET UNITYSDK_OFFSET(0x19E89940)
#define MOLEMOLE_UIGENERALTOKENWIDGETCONTROLLER___BASE_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x19E899D0)
#define MOLEMOLE_UIGENERALTOKENWIDGETCONTROLLER___BASE_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x19E89A60)
#define MOLEMOLE_UIGENERALTOKENWIDGETCONTROLLER___BASE_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x19E89AF0)

namespace MoleMole
{
	inline static constexpr unsigned int UIGeneralTokenWidgetController_TypeDefinitionIndex = 51471;

	class UIGeneralTokenWidgetController : public ::MoleMole::UIWidgetController
	{
	public:
		::Class_2_37A8AA30A4705A09* _view; // 0x2C0
		::System::Action* _tokenExternalClickHandle; // 0x2C8
		::System::Collections::Generic::List_1<::MoleMole::UITokenShowConfig*>* _tokenShowConfigs; // 0x2D0
		::System::Collections::Generic::List_1<::MoleMole::UIGeneralTokenRowWidgetController*>* _tokenRowList; // 0x2D8
		::System::Boolean _isEnableConsoleNavigation; // 0x2E0
		::System::Boolean _isConsoleDirectTriggerButton; // 0x2E1

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALTOKENWIDGETCONTROLLER__CTOR_OFFSET))(this);
		}

		::System::Boolean get_IsFocused()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALTOKENWIDGETCONTROLLER_GET_ISFOCUSED_OFFSET))(this);
		}

		::System::Void OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALTOKENWIDGETCONTROLLER_ONUIINIT_OFFSET))(this);
		}

		::System::Void OnUIOpen(::MoleMole::UIControllerContextBase* openCtrlContext)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALTOKENWIDGETCONTROLLER_ONUIOPEN_OFFSET))(this, openCtrlContext);
		}

		::System::Void OnCreateView(::MoleMole::UIControlReference* controlReference)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALTOKENWIDGETCONTROLLER_ONCREATEVIEW_OFFSET))(this, controlReference);
		}

		::System::Void OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALTOKENWIDGETCONTROLLER_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void OnLayoutPlatformChanged()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALTOKENWIDGETCONTROLLER_ONLAYOUTPLATFORMCHANGED_OFFSET))(this);
		}

		::System::Boolean OnInputAction(::MoleMole::InputActionEvent inputAction)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::InputActionEvent))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALTOKENWIDGETCONTROLLER_ONINPUTACTION_OFFSET))(this, inputAction);
		}

		::System::Void SetTokenItemID(::System::Collections::Generic::List_1<::System::Int32>* tTokenItemID, ::System::Collections::Generic::List_1<::System::Boolean>* hideAddIcon)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::System::Int32>*, ::System::Collections::Generic::List_1<::System::Boolean>*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALTOKENWIDGETCONTROLLER_SETTOKENITEMID_OFFSET))(this, tTokenItemID, hideAddIcon);
		}

		::System::Void SetConsoleNavigationEnabled(::System::Boolean isEnable)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALTOKENWIDGETCONTROLLER_SETCONSOLENAVIGATIONENABLED_OFFSET))(this, isEnable);
		}

		::System::Void SetConsoleNavigationBackModule(::MoleMole::MonoGamepadModule* targetModule, ::System::String* targetModuleName)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::MonoGamepadModule*, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALTOKENWIDGETCONTROLLER_SETCONSOLENAVIGATIONBACKMODULE_OFFSET))(this, targetModule, targetModuleName);
		}

		::System::Void ForceSetConsoleNavigationLostFocus()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALTOKENWIDGETCONTROLLER_FORCESETCONSOLENAVIGATIONLOSTFOCUS_OFFSET))(this);
		}

		::MoleMole::UIGeneralTokenRowWidgetController* GetToken(::System::Int32 index)
		{
			return ((::MoleMole::UIGeneralTokenRowWidgetController*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALTOKENWIDGETCONTROLLER_GETTOKEN_OFFSET))(this, index);
		}

		::System::Void InitView()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALTOKENWIDGETCONTROLLER_INITVIEW_OFFSET))(this);
		}

		::System::Void OnPackageItemChanged(::System::EventArgs* args)
		{
			return ((::System::Void(*)(::PVOID, ::System::EventArgs*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALTOKENWIDGETCONTROLLER_ONPACKAGEITEMCHANGED_OFFSET))(this, args);
		}

		::System::Void OnItemChanged(::System::EventArgs* args)
		{
			return ((::System::Void(*)(::PVOID, ::System::EventArgs*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALTOKENWIDGETCONTROLLER_ONITEMCHANGED_OFFSET))(this, args);
		}

		::System::Void RefreshView()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALTOKENWIDGETCONTROLLER_REFRESHVIEW_OFFSET))(this);
		}

		::System::Void UpdateOnChanged()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALTOKENWIDGETCONTROLLER_UPDATEONCHANGED_OFFSET))(this);
		}

		::System::Void RefreshConsoleNavigationFunction()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALTOKENWIDGETCONTROLLER_REFRESHCONSOLENAVIGATIONFUNCTION_OFFSET))(this);
		}

		::System::Boolean TryDirectTriggerTokenBtn()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALTOKENWIDGETCONTROLLER_TRYDIRECTTRIGGERTOKENBTN_OFFSET))(this);
		}

		::System::Void __base_OnCreateView(::MoleMole::UIControlReference* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALTOKENWIDGETCONTROLLER___BASE_ONCREATEVIEW_OFFSET))(this, P0);
		}

		::System::Boolean __base_OnInputAction(::MoleMole::InputActionEvent P0)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::InputActionEvent))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALTOKENWIDGETCONTROLLER___BASE_ONINPUTACTION_OFFSET))(this, P0);
		}

		::System::Void __base_OnLayoutPlatformChanged()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALTOKENWIDGETCONTROLLER___BASE_ONLAYOUTPLATFORMCHANGED_OFFSET))(this);
		}

		::System::Void __base_OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALTOKENWIDGETCONTROLLER___BASE_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void __base_OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALTOKENWIDGETCONTROLLER___BASE_ONUIINIT_OFFSET))(this);
		}

		::System::Void __base_OnUIOpen(::MoleMole::UIControllerContextBase* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALTOKENWIDGETCONTROLLER___BASE_ONUIOPEN_OFFSET))(this, P0);
		}
	};
}

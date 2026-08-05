#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIWidgetController.h"

class Class_2_3E1A0459A6647B99_16;
class Class_2_B4378B46E0020E85;
namespace MoleMole { class UIControlReference; }
namespace MoleMole { class UIControllerContextBase; }
namespace MoleMole { class UIGeneralToggleWidgetController_OnClickCallback; }
namespace System { class Action; }
namespace System { template <typename T> class Action_1; }
namespace System { template <typename T> class Func_1; }

#define MOLEMOLE_UIGENERALTOGGLEWIDGETCONTROLLER_AFTERSHOW_OFFSET UNITYSDK_OFFSET(0x1A3191C0)
#define MOLEMOLE_UIGENERALTOGGLEWIDGETCONTROLLER_BINDCLICKCALLBACK_OFFSET UNITYSDK_OFFSET(0x1A319400)
#define MOLEMOLE_UIGENERALTOGGLEWIDGETCONTROLLER_CHANGEONSTATE_OFFSET UNITYSDK_OFFSET(0x1A319740)
#define MOLEMOLE_UIGENERALTOGGLEWIDGETCONTROLLER_GETISON_OFFSET UNITYSDK_OFFSET(0x1A319D50)
#define MOLEMOLE_UIGENERALTOGGLEWIDGETCONTROLLER_GET_ISON_OFFSET UNITYSDK_OFFSET(0x1A318FD0)
#define MOLEMOLE_UIGENERALTOGGLEWIDGETCONTROLLER_GET_TOGGLEBUTTON_OFFSET UNITYSDK_OFFSET(0x1A318FB0)
#define MOLEMOLE_UIGENERALTOGGLEWIDGETCONTROLLER_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x1A3190B0)
#define MOLEMOLE_UIGENERALTOGGLEWIDGETCONTROLLER_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x1A319140)
#define MOLEMOLE_UIGENERALTOGGLEWIDGETCONTROLLER_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x1A318FE0)
#define MOLEMOLE_UIGENERALTOGGLEWIDGETCONTROLLER_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x1A319040)
#define MOLEMOLE_UIGENERALTOGGLEWIDGETCONTROLLER_OVERRIDECLICKCALLBACK_OFFSET UNITYSDK_OFFSET(0x1A319300)
#define MOLEMOLE_UIGENERALTOGGLEWIDGETCONTROLLER_REFRESHVIEW_OFFSET UNITYSDK_OFFSET(0x1A319540)
#define MOLEMOLE_UIGENERALTOGGLEWIDGETCONTROLLER_SETISON_OFFSET UNITYSDK_OFFSET(0x1A319260)
#define MOLEMOLE_UIGENERALTOGGLEWIDGETCONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x1A319DA0)
#define MOLEMOLE_UIGENERALTOGGLEWIDGETCONTROLLER___BASE_AFTERSHOW_OFFSET UNITYSDK_OFFSET(0x1A319E00)
#define MOLEMOLE_UIGENERALTOGGLEWIDGETCONTROLLER___BASE_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x1A319E10)
#define MOLEMOLE_UIGENERALTOGGLEWIDGETCONTROLLER___BASE_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x1A319EA0)
#define MOLEMOLE_UIGENERALTOGGLEWIDGETCONTROLLER___BASE_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x1A319F30)
#define MOLEMOLE_UIGENERALTOGGLEWIDGETCONTROLLER___BASE_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x1A319FC0)

namespace MoleMole
{
	inline static constexpr unsigned int UIGeneralToggleWidgetController_TypeDefinitionIndex = 89476;

	class UIGeneralToggleWidgetController : public ::MoleMole::UIWidgetController
	{
	public:
		::Class_2_3E1A0459A6647B99_16* _view; // 0x2C0
		::System::Boolean isOn; // 0x2C8
		::MoleMole::UIGeneralToggleWidgetController_OnClickCallback* callback; // 0x2D0

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALTOGGLEWIDGETCONTROLLER__CTOR_OFFSET))(this);
		}

		::Class_2_B4378B46E0020E85* get_ToggleButton()
		{
			return ((::Class_2_B4378B46E0020E85*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALTOGGLEWIDGETCONTROLLER_GET_TOGGLEBUTTON_OFFSET))(this);
		}

		::System::Boolean get_IsOn()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALTOGGLEWIDGETCONTROLLER_GET_ISON_OFFSET))(this);
		}

		::System::Void OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALTOGGLEWIDGETCONTROLLER_ONUIINIT_OFFSET))(this);
		}

		::System::Void OnUIOpen(::MoleMole::UIControllerContextBase* openCtrlContext)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALTOGGLEWIDGETCONTROLLER_ONUIOPEN_OFFSET))(this, openCtrlContext);
		}

		::System::Void OnCreateView(::MoleMole::UIControlReference* controlReference)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALTOGGLEWIDGETCONTROLLER_ONCREATEVIEW_OFFSET))(this, controlReference);
		}

		::System::Void OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALTOGGLEWIDGETCONTROLLER_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void AfterShow()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALTOGGLEWIDGETCONTROLLER_AFTERSHOW_OFFSET))(this);
		}

		::System::Void OverrideClickCallback(::System::Action* callback)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALTOGGLEWIDGETCONTROLLER_OVERRIDECLICKCALLBACK_OFFSET))(this, callback);
		}

		::System::Void BindClickCallback(::System::Action* callback)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALTOGGLEWIDGETCONTROLLER_BINDCLICKCALLBACK_OFFSET))(this, callback);
		}

		::System::Void RefreshView(::System::Boolean isOn, ::MoleMole::UIGeneralToggleWidgetController_OnClickCallback* callback, ::System::Func_1<::System::Boolean>* CheckCanToggle, ::System::Action_1<::System::Action*>* doubleCheckAction)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean, ::MoleMole::UIGeneralToggleWidgetController_OnClickCallback*, ::System::Func_1<::System::Boolean>*, ::System::Action_1<::System::Action*>*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALTOGGLEWIDGETCONTROLLER_REFRESHVIEW_OFFSET))(this, isOn, callback, CheckCanToggle, doubleCheckAction);
		}

		::System::Void SetIsOn(::System::Boolean isOn, ::System::Boolean useAnim, ::System::Boolean isInit, ::System::Boolean doCallBack)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean, ::System::Boolean, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALTOGGLEWIDGETCONTROLLER_SETISON_OFFSET))(this, isOn, useAnim, isInit, doCallBack);
		}

		::System::Void ChangeONState(::System::Boolean inisOn, ::System::Boolean useAnim, ::System::Boolean force)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALTOGGLEWIDGETCONTROLLER_CHANGEONSTATE_OFFSET))(this, inisOn, useAnim, force);
		}

		::System::Boolean GetIsOn()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALTOGGLEWIDGETCONTROLLER_GETISON_OFFSET))(this);
		}

		::System::Void __base_AfterShow()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALTOGGLEWIDGETCONTROLLER___BASE_AFTERSHOW_OFFSET))(this);
		}

		::System::Void __base_OnCreateView(::MoleMole::UIControlReference* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALTOGGLEWIDGETCONTROLLER___BASE_ONCREATEVIEW_OFFSET))(this, P0);
		}

		::System::Void __base_OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALTOGGLEWIDGETCONTROLLER___BASE_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void __base_OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALTOGGLEWIDGETCONTROLLER___BASE_ONUIINIT_OFFSET))(this);
		}

		::System::Void __base_OnUIOpen(::MoleMole::UIControllerContextBase* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALTOGGLEWIDGETCONTROLLER___BASE_ONUIOPEN_OFFSET))(this, P0);
		}
	};
}

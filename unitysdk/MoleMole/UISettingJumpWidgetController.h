#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_7FA27888FA17A22A.h"
#include "unitysdk/MoleMole/ESystemSettingType.h"
#include "unitysdk/MoleMole/UIWidgetController.h"

class Class_2_80927B392D07AC08;
namespace MoleMole { class UIControlReference; }
namespace MoleMole { class UIControllerContextBase; }
namespace System { class EventArgs; }

#define MOLEMOLE_UISETTINGJUMPWIDGETCONTROLLER_INITVIEW_OFFSET UNITYSDK_OFFSET(0x15E8C840)
#define MOLEMOLE_UISETTINGJUMPWIDGETCONTROLLER_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x15E8C660)
#define MOLEMOLE_UISETTINGJUMPWIDGETCONTROLLER_ONJUMPBTNCLICKED_OFFSET UNITYSDK_OFFSET(0x15E8CEC0)
#define MOLEMOLE_UISETTINGJUMPWIDGETCONTROLLER_ONSETTINGONUIDISABLESTATECHANGED_OFFSET UNITYSDK_OFFSET(0x15E8D0E0)
#define MOLEMOLE_UISETTINGJUMPWIDGETCONTROLLER_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x15E8CB30)
#define MOLEMOLE_UISETTINGJUMPWIDGETCONTROLLER_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x15E8C6F0)
#define MOLEMOLE_UISETTINGJUMPWIDGETCONTROLLER_REFRESHNOTIFICATIONNODE_OFFSET UNITYSDK_OFFSET(0x15E8CD60)
#define MOLEMOLE_UISETTINGJUMPWIDGETCONTROLLER_REFRESHSETTINGONUIDISABLESTATE_OFFSET UNITYSDK_OFFSET(0x15E8CBB0)
#define MOLEMOLE_UISETTINGJUMPWIDGETCONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x15E8D190)
#define MOLEMOLE_UISETTINGJUMPWIDGETCONTROLLER___BASE_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x15E8D250)
#define MOLEMOLE_UISETTINGJUMPWIDGETCONTROLLER___BASE_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x15E8D2E0)
#define MOLEMOLE_UISETTINGJUMPWIDGETCONTROLLER___BASE_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x15E8D370)

namespace MoleMole
{
	inline static constexpr unsigned int UISettingJumpWidgetController_TypeDefinitionIndex = 75118;

	class UISettingJumpWidgetController : public ::MoleMole::UIWidgetController
	{
	public:
		::Class_2_80927B392D07AC08* _view; // 0x2C0
		::System::Boolean _isSettingOnUIDisable; // 0x2C8
		::System::Int32 _hintVersion; // 0x2CC
		::Enum_3_7FA27888FA17A22A _settingContentType; // 0x2D0
		::MoleMole::ESystemSettingType _settingType; // 0x2D4

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UISETTINGJUMPWIDGETCONTROLLER__CTOR_OFFSET))(this);
		}

		::System::Void OnCreateView(::MoleMole::UIControlReference* controlReference)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UISETTINGJUMPWIDGETCONTROLLER_ONCREATEVIEW_OFFSET))(this, controlReference);
		}

		::System::Void OnUIOpen(::MoleMole::UIControllerContextBase* openCtrlContext)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UISETTINGJUMPWIDGETCONTROLLER_ONUIOPEN_OFFSET))(this, openCtrlContext);
		}

		::System::Void OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UISETTINGJUMPWIDGETCONTROLLER_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void InitView()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UISETTINGJUMPWIDGETCONTROLLER_INITVIEW_OFFSET))(this);
		}

		::System::Void OnJumpBtnClicked()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UISETTINGJUMPWIDGETCONTROLLER_ONJUMPBTNCLICKED_OFFSET))(this);
		}

		::System::Void OnSettingOnUIDisableStateChanged(::System::EventArgs* args)
		{
			return ((::System::Void(*)(::PVOID, ::System::EventArgs*))((::PBYTE)hIl2Cpp + MOLEMOLE_UISETTINGJUMPWIDGETCONTROLLER_ONSETTINGONUIDISABLESTATECHANGED_OFFSET))(this, args);
		}

		::System::Void RefreshSettingOnUIDisableState()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UISETTINGJUMPWIDGETCONTROLLER_REFRESHSETTINGONUIDISABLESTATE_OFFSET))(this);
		}

		::System::Void RefreshNotificationNode()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UISETTINGJUMPWIDGETCONTROLLER_REFRESHNOTIFICATIONNODE_OFFSET))(this);
		}

		::System::Void __base_OnCreateView(::MoleMole::UIControlReference* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UISETTINGJUMPWIDGETCONTROLLER___BASE_ONCREATEVIEW_OFFSET))(this, P0);
		}

		::System::Void __base_OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UISETTINGJUMPWIDGETCONTROLLER___BASE_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void __base_OnUIOpen(::MoleMole::UIControllerContextBase* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UISETTINGJUMPWIDGETCONTROLLER___BASE_ONUIOPEN_OFFSET))(this, P0);
		}
	};
}

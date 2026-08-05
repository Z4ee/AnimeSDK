#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIWidgetController.h"

class Class_2_B643415D9462D8E2_1;
namespace MoleMole { class UIControlReference; }
namespace MoleMole { class UIControllerContextBase; }

#define MOLEMOLE_UIPLAYERACCESSORYTABWIDGETCONTROLLER_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x15177070)
#define MOLEMOLE_UIPLAYERACCESSORYTABWIDGETCONTROLLER_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x15177100)
#define MOLEMOLE_UIPLAYERACCESSORYTABWIDGETCONTROLLER_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x15176D60)
#define MOLEMOLE_UIPLAYERACCESSORYTABWIDGETCONTROLLER_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x15176DC0)
#define MOLEMOLE_UIPLAYERACCESSORYTABWIDGETCONTROLLER_REFRESHBANNED_OFFSET UNITYSDK_OFFSET(0x15177000)
#define MOLEMOLE_UIPLAYERACCESSORYTABWIDGETCONTROLLER_REFRESHNOTIFICATIONBADGE_OFFSET UNITYSDK_OFFSET(0x15176EA0)
#define MOLEMOLE_UIPLAYERACCESSORYTABWIDGETCONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x15177180)
#define MOLEMOLE_UIPLAYERACCESSORYTABWIDGETCONTROLLER___BASE_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x151771E0)
#define MOLEMOLE_UIPLAYERACCESSORYTABWIDGETCONTROLLER___BASE_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x15177270)
#define MOLEMOLE_UIPLAYERACCESSORYTABWIDGETCONTROLLER___BASE_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x15177300)
#define MOLEMOLE_UIPLAYERACCESSORYTABWIDGETCONTROLLER___BASE_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x15177390)

namespace MoleMole
{
	inline static constexpr unsigned int UIPlayerAccessoryTabWidgetController_TypeDefinitionIndex = 48847;

	class UIPlayerAccessoryTabWidgetController : public ::MoleMole::UIWidgetController
	{
	public:
		::Class_2_B643415D9462D8E2_1* _view; // 0x2C0

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIPLAYERACCESSORYTABWIDGETCONTROLLER__CTOR_OFFSET))(this);
		}

		::System::Void OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIPLAYERACCESSORYTABWIDGETCONTROLLER_ONUIINIT_OFFSET))(this);
		}

		::System::Void OnUIOpen(::MoleMole::UIControllerContextBase* openCtrlContext)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIPLAYERACCESSORYTABWIDGETCONTROLLER_ONUIOPEN_OFFSET))(this, openCtrlContext);
		}

		::System::Void RefreshBanned(::System::Boolean isBanned)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIPLAYERACCESSORYTABWIDGETCONTROLLER_REFRESHBANNED_OFFSET))(this, isBanned);
		}

		::System::Void RefreshNotificationBadge(::System::Int32 popupKey)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UIPLAYERACCESSORYTABWIDGETCONTROLLER_REFRESHNOTIFICATIONBADGE_OFFSET))(this, popupKey);
		}

		::System::Void OnCreateView(::MoleMole::UIControlReference* controlReference)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIPLAYERACCESSORYTABWIDGETCONTROLLER_ONCREATEVIEW_OFFSET))(this, controlReference);
		}

		::System::Void OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIPLAYERACCESSORYTABWIDGETCONTROLLER_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void __base_OnCreateView(::MoleMole::UIControlReference* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIPLAYERACCESSORYTABWIDGETCONTROLLER___BASE_ONCREATEVIEW_OFFSET))(this, P0);
		}

		::System::Void __base_OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIPLAYERACCESSORYTABWIDGETCONTROLLER___BASE_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void __base_OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIPLAYERACCESSORYTABWIDGETCONTROLLER___BASE_ONUIINIT_OFFSET))(this);
		}

		::System::Void __base_OnUIOpen(::MoleMole::UIControllerContextBase* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIPLAYERACCESSORYTABWIDGETCONTROLLER___BASE_ONUIOPEN_OFFSET))(this, P0);
		}
	};
}

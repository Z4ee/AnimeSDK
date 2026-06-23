#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIWidgetController.h"

class Class_2_84C5762596489D18;
namespace MoleMole { class UIControlReference; }
namespace MoleMole { class UIControllerContextBase; }
namespace System { template <typename T> class Action_1; }

#define MOLEMOLE_UIACTIVITYAETHERXROLEROWWIDGETCONTROLLER_BINDCALLBACK_OFFSET UNITYSDK_OFFSET(0x1873FDA0)
#define MOLEMOLE_UIACTIVITYAETHERXROLEROWWIDGETCONTROLLER_INITROLEINDEX_OFFSET UNITYSDK_OFFSET(0x1873FBC0)
#define MOLEMOLE_UIACTIVITYAETHERXROLEROWWIDGETCONTROLLER_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x1873FAB0)
#define MOLEMOLE_UIACTIVITYAETHERXROLEROWWIDGETCONTROLLER_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x1873FB40)
#define MOLEMOLE_UIACTIVITYAETHERXROLEROWWIDGETCONTROLLER_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x1873F8E0)
#define MOLEMOLE_UIACTIVITYAETHERXROLEROWWIDGETCONTROLLER_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x1873FA40)
#define MOLEMOLE_UIACTIVITYAETHERXROLEROWWIDGETCONTROLLER_SETINTERACTABLE_OFFSET UNITYSDK_OFFSET(0x1873FD30)
#define MOLEMOLE_UIACTIVITYAETHERXROLEROWWIDGETCONTROLLER_SETSELECT_OFFSET UNITYSDK_OFFSET(0x1873FC10)
#define MOLEMOLE_UIACTIVITYAETHERXROLEROWWIDGETCONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x1873FDF0)
#define MOLEMOLE_UIACTIVITYAETHERXROLEROWWIDGETCONTROLLER__ONUIINIT_B__3_0_OFFSET UNITYSDK_OFFSET(0x1873FE50)
#define MOLEMOLE_UIACTIVITYAETHERXROLEROWWIDGETCONTROLLER___BASE_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x1873FEB0)
#define MOLEMOLE_UIACTIVITYAETHERXROLEROWWIDGETCONTROLLER___BASE_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x1873FF40)
#define MOLEMOLE_UIACTIVITYAETHERXROLEROWWIDGETCONTROLLER___BASE_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x1873FFD0)
#define MOLEMOLE_UIACTIVITYAETHERXROLEROWWIDGETCONTROLLER___BASE_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x18740060)

namespace MoleMole
{
	inline static constexpr unsigned int UIActivityAetherXRoleRowWidgetController_TypeDefinitionIndex = 43833;

	class UIActivityAetherXRoleRowWidgetController : public ::MoleMole::UIWidgetController
	{
	public:
		::Class_2_84C5762596489D18* _view; // 0x2C0
		::System::Action_1<::MoleMole::UIActivityAetherXRoleRowWidgetController*>* _callback; // 0x2C8
		::System::Int32 roleIndex; // 0x2D0

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYAETHERXROLEROWWIDGETCONTROLLER__CTOR_OFFSET))(this);
		}

		::System::Void OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYAETHERXROLEROWWIDGETCONTROLLER_ONUIINIT_OFFSET))(this);
		}

		::System::Void OnUIOpen(::MoleMole::UIControllerContextBase* openCtrlContext)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYAETHERXROLEROWWIDGETCONTROLLER_ONUIOPEN_OFFSET))(this, openCtrlContext);
		}

		::System::Void OnCreateView(::MoleMole::UIControlReference* controlReference)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYAETHERXROLEROWWIDGETCONTROLLER_ONCREATEVIEW_OFFSET))(this, controlReference);
		}

		::System::Void OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYAETHERXROLEROWWIDGETCONTROLLER_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void InitRoleIndex(::System::Int32 roleIndex)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYAETHERXROLEROWWIDGETCONTROLLER_INITROLEINDEX_OFFSET))(this, roleIndex);
		}

		::System::Void SetSelect(::System::Boolean select)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYAETHERXROLEROWWIDGETCONTROLLER_SETSELECT_OFFSET))(this, select);
		}

		::System::Void SetInteractable(::System::Boolean interactable)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYAETHERXROLEROWWIDGETCONTROLLER_SETINTERACTABLE_OFFSET))(this, interactable);
		}

		::System::Void BindCallback(::System::Action_1<::MoleMole::UIActivityAetherXRoleRowWidgetController*>* cb)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_1<::MoleMole::UIActivityAetherXRoleRowWidgetController*>*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYAETHERXROLEROWWIDGETCONTROLLER_BINDCALLBACK_OFFSET))(this, cb);
		}

		::System::Void _OnUIInit_b__3_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYAETHERXROLEROWWIDGETCONTROLLER__ONUIINIT_B__3_0_OFFSET))(this);
		}

		::System::Void __base_OnCreateView(::MoleMole::UIControlReference* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYAETHERXROLEROWWIDGETCONTROLLER___BASE_ONCREATEVIEW_OFFSET))(this, P0);
		}

		::System::Void __base_OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYAETHERXROLEROWWIDGETCONTROLLER___BASE_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void __base_OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYAETHERXROLEROWWIDGETCONTROLLER___BASE_ONUIINIT_OFFSET))(this);
		}

		::System::Void __base_OnUIOpen(::MoleMole::UIControllerContextBase* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYAETHERXROLEROWWIDGETCONTROLLER___BASE_ONUIOPEN_OFFSET))(this, P0);
		}
	};
}

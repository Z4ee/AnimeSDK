#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIWidgetController.h"

class Class_2_610CEADF7C44C275_3;
namespace MoleMole { class UIControlReference; }
namespace MoleMole { class UIControllerContextBase; }
namespace System { template <typename T> class Action_1; }

#define MOLEMOLE_UIACTIVITYAETHERXWEAPONWIDGETCONTROLLER_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x11D9A910)
#define MOLEMOLE_UIACTIVITYAETHERXWEAPONWIDGETCONTROLLER_ONITEMSELECT_OFFSET UNITYSDK_OFFSET(0x11D9AAB0)
#define MOLEMOLE_UIACTIVITYAETHERXWEAPONWIDGETCONTROLLER_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x11D9A9A0)
#define MOLEMOLE_UIACTIVITYAETHERXWEAPONWIDGETCONTROLLER_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x11D9A770)
#define MOLEMOLE_UIACTIVITYAETHERXWEAPONWIDGETCONTROLLER_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x11D9A8A0)
#define MOLEMOLE_UIACTIVITYAETHERXWEAPONWIDGETCONTROLLER_REFRESHVIEW_OFFSET UNITYSDK_OFFSET(0x11D9AA20)
#define MOLEMOLE_UIACTIVITYAETHERXWEAPONWIDGETCONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x11D9AD60)
#define MOLEMOLE_UIACTIVITYAETHERXWEAPONWIDGETCONTROLLER___BASE_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x11D9ADC0)
#define MOLEMOLE_UIACTIVITYAETHERXWEAPONWIDGETCONTROLLER___BASE_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x11D9AE50)
#define MOLEMOLE_UIACTIVITYAETHERXWEAPONWIDGETCONTROLLER___BASE_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x11D9AEE0)
#define MOLEMOLE_UIACTIVITYAETHERXWEAPONWIDGETCONTROLLER___BASE_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x11D9AF70)

namespace MoleMole
{
	inline static constexpr unsigned int UIActivityAetherXWeaponWidgetController_TypeDefinitionIndex = 64814;

	class UIActivityAetherXWeaponWidgetController : public ::MoleMole::UIWidgetController
	{
	public:
		::Class_2_610CEADF7C44C275_3* _view; // 0x2C0
		::System::Int32 _itemID; // 0x2C8
		::System::Int32 _index; // 0x2CC
		::System::Action_1<::System::Int32>* OnSelect; // 0x2D0

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYAETHERXWEAPONWIDGETCONTROLLER__CTOR_OFFSET))(this);
		}

		::System::Void OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYAETHERXWEAPONWIDGETCONTROLLER_ONUIINIT_OFFSET))(this);
		}

		::System::Void OnUIOpen(::MoleMole::UIControllerContextBase* openCtrlContext)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYAETHERXWEAPONWIDGETCONTROLLER_ONUIOPEN_OFFSET))(this, openCtrlContext);
		}

		::System::Void OnCreateView(::MoleMole::UIControlReference* controlReference)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYAETHERXWEAPONWIDGETCONTROLLER_ONCREATEVIEW_OFFSET))(this, controlReference);
		}

		::System::Void OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYAETHERXWEAPONWIDGETCONTROLLER_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void RefreshView(::System::Int32 index, ::System::Int32 takenIndex, ::System::Int32 itemID)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYAETHERXWEAPONWIDGETCONTROLLER_REFRESHVIEW_OFFSET))(this, index, takenIndex, itemID);
		}

		::System::Void OnItemSelect()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYAETHERXWEAPONWIDGETCONTROLLER_ONITEMSELECT_OFFSET))(this);
		}

		::System::Void __base_OnCreateView(::MoleMole::UIControlReference* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYAETHERXWEAPONWIDGETCONTROLLER___BASE_ONCREATEVIEW_OFFSET))(this, P0);
		}

		::System::Void __base_OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYAETHERXWEAPONWIDGETCONTROLLER___BASE_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void __base_OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYAETHERXWEAPONWIDGETCONTROLLER___BASE_ONUIINIT_OFFSET))(this);
		}

		::System::Void __base_OnUIOpen(::MoleMole::UIControllerContextBase* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYAETHERXWEAPONWIDGETCONTROLLER___BASE_ONUIOPEN_OFFSET))(this, P0);
		}
	};
}

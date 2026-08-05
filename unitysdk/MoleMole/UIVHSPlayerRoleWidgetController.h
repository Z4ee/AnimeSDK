#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIVHSPlayerRoleWidgetController_PlayerType.h"
#include "unitysdk/MoleMole/UIWidgetController.h"

class Class_2_214D9C2B38669660;
namespace MoleMole { class UIControlReference; }
namespace System { class String; }

#define MOLEMOLE_UIVHSPLAYERROLEWIDGETCONTROLLER_AFTERDATACHANGE_OFFSET UNITYSDK_OFFSET(0x15A781C0)
#define MOLEMOLE_UIVHSPLAYERROLEWIDGETCONTROLLER_GET_NAMETEXTMAP_OFFSET UNITYSDK_OFFSET(0x15A78590)
#define MOLEMOLE_UIVHSPLAYERROLEWIDGETCONTROLLER_GET_NPCRESOURCE_OFFSET UNITYSDK_OFFSET(0x15A78610)
#define MOLEMOLE_UIVHSPLAYERROLEWIDGETCONTROLLER_GET_PLAYERTYPE_OFFSET UNITYSDK_OFFSET(0x15A78690)
#define MOLEMOLE_UIVHSPLAYERROLEWIDGETCONTROLLER_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x15A780B0)
#define MOLEMOLE_UIVHSPLAYERROLEWIDGETCONTROLLER_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x15A78140)
#define MOLEMOLE_UIVHSPLAYERROLEWIDGETCONTROLLER_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x15A78010)
#define MOLEMOLE_UIVHSPLAYERROLEWIDGETCONTROLLER_SET_PLAYERTYPE_OFFSET UNITYSDK_OFFSET(0x15A786A0)
#define MOLEMOLE_UIVHSPLAYERROLEWIDGETCONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x15A78710)
#define MOLEMOLE_UIVHSPLAYERROLEWIDGETCONTROLLER___BASE_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x15A78770)
#define MOLEMOLE_UIVHSPLAYERROLEWIDGETCONTROLLER___BASE_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x15A78800)
#define MOLEMOLE_UIVHSPLAYERROLEWIDGETCONTROLLER___BASE_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x15A78890)

namespace MoleMole
{
	inline static constexpr unsigned int UIVHSPlayerRoleWidgetController_TypeDefinitionIndex = 54710;

	class UIVHSPlayerRoleWidgetController : public ::MoleMole::UIWidgetController
	{
	public:
		::Class_2_214D9C2B38669660* _view; // 0x2C0
		::MoleMole::UIVHSPlayerRoleWidgetController_PlayerType _playerType; // 0x2C8

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIVHSPLAYERROLEWIDGETCONTROLLER__CTOR_OFFSET))(this);
		}

		::System::Void OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIVHSPLAYERROLEWIDGETCONTROLLER_ONUIINIT_OFFSET))(this);
		}

		::System::Void OnCreateView(::MoleMole::UIControlReference* controlReference)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIVHSPLAYERROLEWIDGETCONTROLLER_ONCREATEVIEW_OFFSET))(this, controlReference);
		}

		::System::Void OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIVHSPLAYERROLEWIDGETCONTROLLER_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void AfterDataChange()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIVHSPLAYERROLEWIDGETCONTROLLER_AFTERDATACHANGE_OFFSET))(this);
		}

		::MoleMole::UIVHSPlayerRoleWidgetController_PlayerType get_playerType()
		{
			return ((::MoleMole::UIVHSPlayerRoleWidgetController_PlayerType(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIVHSPLAYERROLEWIDGETCONTROLLER_GET_PLAYERTYPE_OFFSET))(this);
		}

		::System::Void set_playerType(::MoleMole::UIVHSPlayerRoleWidgetController_PlayerType value)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIVHSPlayerRoleWidgetController_PlayerType))((::PBYTE)hIl2Cpp + MOLEMOLE_UIVHSPLAYERROLEWIDGETCONTROLLER_SET_PLAYERTYPE_OFFSET))(this, value);
		}

		::System::String* get_nameTextmap()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIVHSPLAYERROLEWIDGETCONTROLLER_GET_NAMETEXTMAP_OFFSET))(this);
		}

		::System::String* get_npcResource()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIVHSPLAYERROLEWIDGETCONTROLLER_GET_NPCRESOURCE_OFFSET))(this);
		}

		::System::Void __base_OnCreateView(::MoleMole::UIControlReference* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIVHSPLAYERROLEWIDGETCONTROLLER___BASE_ONCREATEVIEW_OFFSET))(this, P0);
		}

		::System::Void __base_OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIVHSPLAYERROLEWIDGETCONTROLLER___BASE_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void __base_OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIVHSPLAYERROLEWIDGETCONTROLLER___BASE_ONUIINIT_OFFSET))(this);
		}
	};
}

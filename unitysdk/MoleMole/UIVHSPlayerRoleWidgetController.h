#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIVHSPlayerRoleWidgetController_PlayerType.h"
#include "unitysdk/MoleMole/UIWidgetController.h"

class Class_2_214D9C2B38669660;
namespace MoleMole { class UIControlReference; }
namespace System { class String; }

#define MOLEMOLE_UIVHSPLAYERROLEWIDGETCONTROLLER_AFTERDATACHANGE_OFFSET UNITYSDK_OFFSET(0x148F96D0)
#define MOLEMOLE_UIVHSPLAYERROLEWIDGETCONTROLLER_GET_NAMETEXTMAP_OFFSET UNITYSDK_OFFSET(0x148F9AA0)
#define MOLEMOLE_UIVHSPLAYERROLEWIDGETCONTROLLER_GET_NPCRESOURCE_OFFSET UNITYSDK_OFFSET(0x148F9B20)
#define MOLEMOLE_UIVHSPLAYERROLEWIDGETCONTROLLER_GET_PLAYERTYPE_OFFSET UNITYSDK_OFFSET(0x148F9BA0)
#define MOLEMOLE_UIVHSPLAYERROLEWIDGETCONTROLLER_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x148F95C0)
#define MOLEMOLE_UIVHSPLAYERROLEWIDGETCONTROLLER_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x148F9650)
#define MOLEMOLE_UIVHSPLAYERROLEWIDGETCONTROLLER_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x148F9520)
#define MOLEMOLE_UIVHSPLAYERROLEWIDGETCONTROLLER_SET_PLAYERTYPE_OFFSET UNITYSDK_OFFSET(0x148F9BB0)
#define MOLEMOLE_UIVHSPLAYERROLEWIDGETCONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x148F9C20)
#define MOLEMOLE_UIVHSPLAYERROLEWIDGETCONTROLLER___BASE_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x148F9C80)
#define MOLEMOLE_UIVHSPLAYERROLEWIDGETCONTROLLER___BASE_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x148F9D10)
#define MOLEMOLE_UIVHSPLAYERROLEWIDGETCONTROLLER___BASE_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x148F9DA0)

namespace MoleMole
{
	inline static constexpr unsigned int UIVHSPlayerRoleWidgetController_TypeDefinitionIndex = 82245;

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

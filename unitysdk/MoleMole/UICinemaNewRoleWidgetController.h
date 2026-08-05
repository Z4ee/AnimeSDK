#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIWidgetController.h"

class Class_2_B209BD9CC7A9C533_8;
namespace MoleMole { class UIControlReference; }
namespace MoleMole { class UIControllerContextBase; }

#define MOLEMOLE_UICINEMANEWROLEWIDGETCONTROLLER_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x18AA05C0)
#define MOLEMOLE_UICINEMANEWROLEWIDGETCONTROLLER_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x18AA0650)
#define MOLEMOLE_UICINEMANEWROLEWIDGETCONTROLLER_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x18AA04F0)
#define MOLEMOLE_UICINEMANEWROLEWIDGETCONTROLLER_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x18AA0550)
#define MOLEMOLE_UICINEMANEWROLEWIDGETCONTROLLER_REFRESHDATEROLE_OFFSET UNITYSDK_OFFSET(0x18AA06D0)
#define MOLEMOLE_UICINEMANEWROLEWIDGETCONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x18AA08C0)
#define MOLEMOLE_UICINEMANEWROLEWIDGETCONTROLLER___BASE_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x18AA0920)
#define MOLEMOLE_UICINEMANEWROLEWIDGETCONTROLLER___BASE_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x18AA09B0)
#define MOLEMOLE_UICINEMANEWROLEWIDGETCONTROLLER___BASE_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x18AA0A40)
#define MOLEMOLE_UICINEMANEWROLEWIDGETCONTROLLER___BASE_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x18AA0AD0)

namespace MoleMole
{
	inline static constexpr unsigned int UICinemaNewRoleWidgetController_TypeDefinitionIndex = 83559;

	class UICinemaNewRoleWidgetController : public ::MoleMole::UIWidgetController
	{
	public:
		::Class_2_B209BD9CC7A9C533_8* _view; // 0x2C0

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UICINEMANEWROLEWIDGETCONTROLLER__CTOR_OFFSET))(this);
		}

		::System::Void OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UICINEMANEWROLEWIDGETCONTROLLER_ONUIINIT_OFFSET))(this);
		}

		::System::Void OnUIOpen(::MoleMole::UIControllerContextBase* openCtrlContext)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UICINEMANEWROLEWIDGETCONTROLLER_ONUIOPEN_OFFSET))(this, openCtrlContext);
		}

		::System::Void OnCreateView(::MoleMole::UIControlReference* controlReference)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UICINEMANEWROLEWIDGETCONTROLLER_ONCREATEVIEW_OFFSET))(this, controlReference);
		}

		::System::Void OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UICINEMANEWROLEWIDGETCONTROLLER_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void RefreshDateRole(::System::Int32 dateLevelID)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UICINEMANEWROLEWIDGETCONTROLLER_REFRESHDATEROLE_OFFSET))(this, dateLevelID);
		}

		::System::Void __base_OnCreateView(::MoleMole::UIControlReference* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UICINEMANEWROLEWIDGETCONTROLLER___BASE_ONCREATEVIEW_OFFSET))(this, P0);
		}

		::System::Void __base_OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UICINEMANEWROLEWIDGETCONTROLLER___BASE_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void __base_OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UICINEMANEWROLEWIDGETCONTROLLER___BASE_ONUIINIT_OFFSET))(this);
		}

		::System::Void __base_OnUIOpen(::MoleMole::UIControllerContextBase* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UICINEMANEWROLEWIDGETCONTROLLER___BASE_ONUIOPEN_OFFSET))(this, P0);
		}
	};
}

#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIWidgetController.h"

class Class_2_3472F445CD26042F;
namespace MoleMole { class UIControlReference; }
namespace MoleMole { class UIControllerContextBase; }
namespace UnityEngine::UI::Extension { class UITabButton; }

#define MOLEMOLE_UIMECHBOOTABWIDGETCONTROLLER_GET_TABBUTTON_OFFSET UNITYSDK_OFFSET(0x17DF7A40)
#define MOLEMOLE_UIMECHBOOTABWIDGETCONTROLLER_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x17DF83A0)
#define MOLEMOLE_UIMECHBOOTABWIDGETCONTROLLER_ONLAYOUTPLATFORMCHANGED_OFFSET UNITYSDK_OFFSET(0x17DF7F60)
#define MOLEMOLE_UIMECHBOOTABWIDGETCONTROLLER_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x17DF8430)
#define MOLEMOLE_UIMECHBOOTABWIDGETCONTROLLER_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x17DF7A60)
#define MOLEMOLE_UIMECHBOOTABWIDGETCONTROLLER_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x17DF7AC0)
#define MOLEMOLE_UIMECHBOOTABWIDGETCONTROLLER_REFRESHSELECTED_OFFSET UNITYSDK_OFFSET(0x17DF8260)
#define MOLEMOLE_UIMECHBOOTABWIDGETCONTROLLER_REFRESHTABNEW_OFFSET UNITYSDK_OFFSET(0x17DF8100)
#define MOLEMOLE_UIMECHBOOTABWIDGETCONTROLLER_SETCOSTSTATE_OFFSET UNITYSDK_OFFSET(0x17DF8330)
#define MOLEMOLE_UIMECHBOOTABWIDGETCONTROLLER_SETTOTALCOST_OFFSET UNITYSDK_OFFSET(0x17DF82B0)
#define MOLEMOLE_UIMECHBOOTABWIDGETCONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x17DF84B0)
#define MOLEMOLE_UIMECHBOOTABWIDGETCONTROLLER___BASE_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x17DF8510)
#define MOLEMOLE_UIMECHBOOTABWIDGETCONTROLLER___BASE_ONLAYOUTPLATFORMCHANGED_OFFSET UNITYSDK_OFFSET(0x17DF85A0)
#define MOLEMOLE_UIMECHBOOTABWIDGETCONTROLLER___BASE_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x17DF8630)
#define MOLEMOLE_UIMECHBOOTABWIDGETCONTROLLER___BASE_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x17DF86C0)
#define MOLEMOLE_UIMECHBOOTABWIDGETCONTROLLER___BASE_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x17DF8750)

namespace MoleMole
{
	inline static constexpr unsigned int UIMechBooTabWidgetController_TypeDefinitionIndex = 54022;

	class UIMechBooTabWidgetController : public ::MoleMole::UIWidgetController
	{
	public:
		::Class_2_3472F445CD26042F* _view; // 0x2C0
		::System::Int32 m_tabID; // 0x2C8
		::System::Int32 m_scriptID; // 0x2CC
		::System::Boolean m_isUnlocked; // 0x2D0

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMECHBOOTABWIDGETCONTROLLER__CTOR_OFFSET))(this);
		}

		::UnityEngine::UI::Extension::UITabButton* get_TabButton()
		{
			return ((::UnityEngine::UI::Extension::UITabButton*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMECHBOOTABWIDGETCONTROLLER_GET_TABBUTTON_OFFSET))(this);
		}

		::System::Void OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMECHBOOTABWIDGETCONTROLLER_ONUIINIT_OFFSET))(this);
		}

		::System::Void OnUIOpen(::MoleMole::UIControllerContextBase* openCtrlContext)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMECHBOOTABWIDGETCONTROLLER_ONUIOPEN_OFFSET))(this, openCtrlContext);
		}

		::System::Void OnLayoutPlatformChanged()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMECHBOOTABWIDGETCONTROLLER_ONLAYOUTPLATFORMCHANGED_OFFSET))(this);
		}

		::System::Void RefreshTabNew()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMECHBOOTABWIDGETCONTROLLER_REFRESHTABNEW_OFFSET))(this);
		}

		::System::Void RefreshSelected(::System::Boolean selected)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMECHBOOTABWIDGETCONTROLLER_REFRESHSELECTED_OFFSET))(this, selected);
		}

		::System::Void SetTotalCost(::System::Int32 totalCost)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMECHBOOTABWIDGETCONTROLLER_SETTOTALCOST_OFFSET))(this, totalCost);
		}

		::System::Void SetCostState(::System::Boolean show)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMECHBOOTABWIDGETCONTROLLER_SETCOSTSTATE_OFFSET))(this, show);
		}

		::System::Void OnCreateView(::MoleMole::UIControlReference* controlReference)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMECHBOOTABWIDGETCONTROLLER_ONCREATEVIEW_OFFSET))(this, controlReference);
		}

		::System::Void OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMECHBOOTABWIDGETCONTROLLER_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void __base_OnCreateView(::MoleMole::UIControlReference* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMECHBOOTABWIDGETCONTROLLER___BASE_ONCREATEVIEW_OFFSET))(this, P0);
		}

		::System::Void __base_OnLayoutPlatformChanged()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMECHBOOTABWIDGETCONTROLLER___BASE_ONLAYOUTPLATFORMCHANGED_OFFSET))(this);
		}

		::System::Void __base_OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMECHBOOTABWIDGETCONTROLLER___BASE_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void __base_OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMECHBOOTABWIDGETCONTROLLER___BASE_ONUIINIT_OFFSET))(this);
		}

		::System::Void __base_OnUIOpen(::MoleMole::UIControllerContextBase* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMECHBOOTABWIDGETCONTROLLER___BASE_ONUIOPEN_OFFSET))(this, P0);
		}
	};
}

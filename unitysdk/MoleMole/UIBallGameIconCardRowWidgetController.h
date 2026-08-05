#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIWidgetController.h"

class Class_2_6F62EBE3127F6886_2;
class Class_3_6F28FFD006F2B451;
namespace MoleMole { class UIControlReference; }
namespace MoleMole { class UIControllerContextBase; }

#define MOLEMOLE_UIBALLGAMEICONCARDROWWIDGETCONTROLLER_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x1ED52BD0)
#define MOLEMOLE_UIBALLGAMEICONCARDROWWIDGETCONTROLLER_ONSHOW_OFFSET UNITYSDK_OFFSET(0x1ED52B50)
#define MOLEMOLE_UIBALLGAMEICONCARDROWWIDGETCONTROLLER_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x1ED52C60)
#define MOLEMOLE_UIBALLGAMEICONCARDROWWIDGETCONTROLLER_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x1ED52A00)
#define MOLEMOLE_UIBALLGAMEICONCARDROWWIDGETCONTROLLER_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x1ED52A70)
#define MOLEMOLE_UIBALLGAMEICONCARDROWWIDGETCONTROLLER_REFRESHVIEW_OFFSET UNITYSDK_OFFSET(0x1ED52CF0)
#define MOLEMOLE_UIBALLGAMEICONCARDROWWIDGETCONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x1ED53080)
#define MOLEMOLE_UIBALLGAMEICONCARDROWWIDGETCONTROLLER___BASE_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x1ED530E0)
#define MOLEMOLE_UIBALLGAMEICONCARDROWWIDGETCONTROLLER___BASE_ONSHOW_OFFSET UNITYSDK_OFFSET(0x1ED53170)
#define MOLEMOLE_UIBALLGAMEICONCARDROWWIDGETCONTROLLER___BASE_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x1ED53210)
#define MOLEMOLE_UIBALLGAMEICONCARDROWWIDGETCONTROLLER___BASE_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x1ED532A0)
#define MOLEMOLE_UIBALLGAMEICONCARDROWWIDGETCONTROLLER___BASE_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x1ED53330)

namespace MoleMole
{
	inline static constexpr unsigned int UIBallGameIconCardRowWidgetController_TypeDefinitionIndex = 93468;

	class UIBallGameIconCardRowWidgetController : public ::MoleMole::UIWidgetController
	{
	public:
		::Class_2_6F62EBE3127F6886_2* _view; // 0x2C0
		::System::Int32 bulletid; // 0x2C8
		::Class_3_6F28FFD006F2B451* world; // 0x2D0

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBALLGAMEICONCARDROWWIDGETCONTROLLER__CTOR_OFFSET))(this);
		}

		::System::Void OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBALLGAMEICONCARDROWWIDGETCONTROLLER_ONUIINIT_OFFSET))(this);
		}

		::System::Void OnUIOpen(::MoleMole::UIControllerContextBase* openCtrlContext)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBALLGAMEICONCARDROWWIDGETCONTROLLER_ONUIOPEN_OFFSET))(this, openCtrlContext);
		}

		::System::Void OnShow(::MoleMole::UIControllerContextBase* showCtrlContext)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBALLGAMEICONCARDROWWIDGETCONTROLLER_ONSHOW_OFFSET))(this, showCtrlContext);
		}

		::System::Void OnCreateView(::MoleMole::UIControlReference* controlReference)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBALLGAMEICONCARDROWWIDGETCONTROLLER_ONCREATEVIEW_OFFSET))(this, controlReference);
		}

		::System::Void OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBALLGAMEICONCARDROWWIDGETCONTROLLER_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void RefreshView(::System::Int32 bulletID)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBALLGAMEICONCARDROWWIDGETCONTROLLER_REFRESHVIEW_OFFSET))(this, bulletID);
		}

		::System::Void __base_OnCreateView(::MoleMole::UIControlReference* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBALLGAMEICONCARDROWWIDGETCONTROLLER___BASE_ONCREATEVIEW_OFFSET))(this, P0);
		}

		::System::Void __base_OnShow(::MoleMole::UIControllerContextBase* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBALLGAMEICONCARDROWWIDGETCONTROLLER___BASE_ONSHOW_OFFSET))(this, P0);
		}

		::System::Void __base_OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBALLGAMEICONCARDROWWIDGETCONTROLLER___BASE_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void __base_OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBALLGAMEICONCARDROWWIDGETCONTROLLER___BASE_ONUIINIT_OFFSET))(this);
		}

		::System::Void __base_OnUIOpen(::MoleMole::UIControllerContextBase* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBALLGAMEICONCARDROWWIDGETCONTROLLER___BASE_ONUIOPEN_OFFSET))(this, P0);
		}
	};
}

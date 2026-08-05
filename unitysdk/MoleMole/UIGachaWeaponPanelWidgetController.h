#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIGachaPanelWidget.h"

class Class_2_5AA0454A6F10A0DC_2;
namespace MoleMole { class UIControlReference; }
namespace MoleMole { class UIControllerContextBase; }
namespace MoleMole { class UIGachaWidgetContextBase; }

#define MOLEMOLE_UIGACHAWEAPONPANELWIDGETCONTROLLER_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x183FEFC0)
#define MOLEMOLE_UIGACHAWEAPONPANELWIDGETCONTROLLER_ONSHOW_OFFSET UNITYSDK_OFFSET(0x183FEAD0)
#define MOLEMOLE_UIGACHAWEAPONPANELWIDGETCONTROLLER_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x183FF050)
#define MOLEMOLE_UIGACHAWEAPONPANELWIDGETCONTROLLER_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x183FEA00)
#define MOLEMOLE_UIGACHAWEAPONPANELWIDGETCONTROLLER_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x183FEA60)
#define MOLEMOLE_UIGACHAWEAPONPANELWIDGETCONTROLLER_REFRESHVIEW_OFFSET UNITYSDK_OFFSET(0x183FEBC0)
#define MOLEMOLE_UIGACHAWEAPONPANELWIDGETCONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x183FF0D0)
#define MOLEMOLE_UIGACHAWEAPONPANELWIDGETCONTROLLER___BASE_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x183FF130)
#define MOLEMOLE_UIGACHAWEAPONPANELWIDGETCONTROLLER___BASE_ONSHOW_OFFSET UNITYSDK_OFFSET(0x183FF1C0)
#define MOLEMOLE_UIGACHAWEAPONPANELWIDGETCONTROLLER___BASE_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x183FF260)
#define MOLEMOLE_UIGACHAWEAPONPANELWIDGETCONTROLLER___BASE_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x183FF2F0)
#define MOLEMOLE_UIGACHAWEAPONPANELWIDGETCONTROLLER___BASE_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x183FF380)

namespace MoleMole
{
	inline static constexpr unsigned int UIGachaWeaponPanelWidgetController_TypeDefinitionIndex = 90352;

	class UIGachaWeaponPanelWidgetController : public ::MoleMole::UIGachaPanelWidget
	{
	public:
		::Class_2_5AA0454A6F10A0DC_2* _view; // 0x2C0
		::MoleMole::UIGachaWidgetContextBase* _context; // 0x2C8

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGACHAWEAPONPANELWIDGETCONTROLLER__CTOR_OFFSET))(this);
		}

		::System::Void OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGACHAWEAPONPANELWIDGETCONTROLLER_ONUIINIT_OFFSET))(this);
		}

		::System::Void OnUIOpen(::MoleMole::UIControllerContextBase* openCtrlContext)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGACHAWEAPONPANELWIDGETCONTROLLER_ONUIOPEN_OFFSET))(this, openCtrlContext);
		}

		::System::Void OnShow(::MoleMole::UIControllerContextBase* showCtrlContext)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGACHAWEAPONPANELWIDGETCONTROLLER_ONSHOW_OFFSET))(this, showCtrlContext);
		}

		::System::Void OnCreateView(::MoleMole::UIControlReference* controlReference)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGACHAWEAPONPANELWIDGETCONTROLLER_ONCREATEVIEW_OFFSET))(this, controlReference);
		}

		::System::Void OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGACHAWEAPONPANELWIDGETCONTROLLER_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void RefreshView()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGACHAWEAPONPANELWIDGETCONTROLLER_REFRESHVIEW_OFFSET))(this);
		}

		::System::Void __base_OnCreateView(::MoleMole::UIControlReference* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGACHAWEAPONPANELWIDGETCONTROLLER___BASE_ONCREATEVIEW_OFFSET))(this, P0);
		}

		::System::Void __base_OnShow(::MoleMole::UIControllerContextBase* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGACHAWEAPONPANELWIDGETCONTROLLER___BASE_ONSHOW_OFFSET))(this, P0);
		}

		::System::Void __base_OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGACHAWEAPONPANELWIDGETCONTROLLER___BASE_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void __base_OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGACHAWEAPONPANELWIDGETCONTROLLER___BASE_ONUIINIT_OFFSET))(this);
		}

		::System::Void __base_OnUIOpen(::MoleMole::UIControllerContextBase* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGACHAWEAPONPANELWIDGETCONTROLLER___BASE_ONUIOPEN_OFFSET))(this, P0);
		}
	};
}

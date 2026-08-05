#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIGachaBgRowWidget.h"

class Class_2_208CC9941471731A_895;
class Class_2_8469E7523673A92C_11;
namespace MoleMole { class UIControlReference; }
namespace MoleMole { class UIControllerContextBase; }
namespace MoleMole { class UIGachaCommonBgWidgetController; }
namespace MoleMole { class UIGachaWidgetContextBase; }

#define MOLEMOLE_UIGACHAWEAPONBGROWWIDGETCONTROLLER_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x18EB4E90)
#define MOLEMOLE_UIGACHAWEAPONBGROWWIDGETCONTROLLER_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x18EB4F20)
#define MOLEMOLE_UIGACHAWEAPONBGROWWIDGETCONTROLLER_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x18EB4730)
#define MOLEMOLE_UIGACHAWEAPONBGROWWIDGETCONTROLLER_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x18EB4790)
#define MOLEMOLE_UIGACHAWEAPONBGROWWIDGETCONTROLLER_REFRESHVIEW_OFFSET UNITYSDK_OFFSET(0x18EB48E0)
#define MOLEMOLE_UIGACHAWEAPONBGROWWIDGETCONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x18EB4FA0)
#define MOLEMOLE_UIGACHAWEAPONBGROWWIDGETCONTROLLER___BASE_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x18EB5000)
#define MOLEMOLE_UIGACHAWEAPONBGROWWIDGETCONTROLLER___BASE_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x18EB5090)
#define MOLEMOLE_UIGACHAWEAPONBGROWWIDGETCONTROLLER___BASE_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x18EB5120)
#define MOLEMOLE_UIGACHAWEAPONBGROWWIDGETCONTROLLER___BASE_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x18EB51B0)

namespace MoleMole
{
	inline static constexpr unsigned int UIGachaWeaponBgRowWidgetController_TypeDefinitionIndex = 62152;

	class UIGachaWeaponBgRowWidgetController : public ::MoleMole::UIGachaBgRowWidget
	{
	public:
		::Class_2_8469E7523673A92C_11* _view; // 0x2C0
		::Class_2_208CC9941471731A_895* _uiConfig; // 0x2C8
		::MoleMole::UIGachaWidgetContextBase* _context; // 0x2D0
		::MoleMole::UIGachaCommonBgWidgetController* _bgWidget; // 0x2D8

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGACHAWEAPONBGROWWIDGETCONTROLLER__CTOR_OFFSET))(this);
		}

		::System::Void OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGACHAWEAPONBGROWWIDGETCONTROLLER_ONUIINIT_OFFSET))(this);
		}

		::System::Void OnUIOpen(::MoleMole::UIControllerContextBase* openCtrlContext)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGACHAWEAPONBGROWWIDGETCONTROLLER_ONUIOPEN_OFFSET))(this, openCtrlContext);
		}

		::System::Void OnCreateView(::MoleMole::UIControlReference* controlReference)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGACHAWEAPONBGROWWIDGETCONTROLLER_ONCREATEVIEW_OFFSET))(this, controlReference);
		}

		::System::Void OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGACHAWEAPONBGROWWIDGETCONTROLLER_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void RefreshView()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGACHAWEAPONBGROWWIDGETCONTROLLER_REFRESHVIEW_OFFSET))(this);
		}

		::System::Void __base_OnCreateView(::MoleMole::UIControlReference* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGACHAWEAPONBGROWWIDGETCONTROLLER___BASE_ONCREATEVIEW_OFFSET))(this, P0);
		}

		::System::Void __base_OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGACHAWEAPONBGROWWIDGETCONTROLLER___BASE_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void __base_OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGACHAWEAPONBGROWWIDGETCONTROLLER___BASE_ONUIINIT_OFFSET))(this);
		}

		::System::Void __base_OnUIOpen(::MoleMole::UIControllerContextBase* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGACHAWEAPONBGROWWIDGETCONTROLLER___BASE_ONUIOPEN_OFFSET))(this, P0);
		}
	};
}

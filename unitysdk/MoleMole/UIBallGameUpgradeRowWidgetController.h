#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIWidgetController.h"

class Class_2_E0A5D94BBE3C60BB_1;
class Class_3_6F28FFD006F2B451;
namespace MoleMole { class UIControlReference; }
namespace MoleMole { class UIControllerContextBase; }

#define MOLEMOLE_UIBALLGAMEUPGRADEROWWIDGETCONTROLLER_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x1F203670)
#define MOLEMOLE_UIBALLGAMEUPGRADEROWWIDGETCONTROLLER_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x1F203700)
#define MOLEMOLE_UIBALLGAMEUPGRADEROWWIDGETCONTROLLER_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x1F203580)
#define MOLEMOLE_UIBALLGAMEUPGRADEROWWIDGETCONTROLLER_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x1F2035F0)
#define MOLEMOLE_UIBALLGAMEUPGRADEROWWIDGETCONTROLLER_PLAYUPGRADEANIMATION_OFFSET UNITYSDK_OFFSET(0x1F203790)
#define MOLEMOLE_UIBALLGAMEUPGRADEROWWIDGETCONTROLLER_REFRESHRARITYBG_OFFSET UNITYSDK_OFFSET(0x1F203C30)
#define MOLEMOLE_UIBALLGAMEUPGRADEROWWIDGETCONTROLLER_REFRESHVIEW_OFFSET UNITYSDK_OFFSET(0x1F203980)
#define MOLEMOLE_UIBALLGAMEUPGRADEROWWIDGETCONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x1F203E40)
#define MOLEMOLE_UIBALLGAMEUPGRADEROWWIDGETCONTROLLER___BASE_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x1F203EA0)
#define MOLEMOLE_UIBALLGAMEUPGRADEROWWIDGETCONTROLLER___BASE_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x1F203F30)
#define MOLEMOLE_UIBALLGAMEUPGRADEROWWIDGETCONTROLLER___BASE_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x1F203FC0)
#define MOLEMOLE_UIBALLGAMEUPGRADEROWWIDGETCONTROLLER___BASE_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x1F204050)

namespace MoleMole
{
	inline static constexpr unsigned int UIBallGameUpgradeRowWidgetController_TypeDefinitionIndex = 93393;

	class UIBallGameUpgradeRowWidgetController : public ::MoleMole::UIWidgetController
	{
	public:
		::Class_2_E0A5D94BBE3C60BB_1* _view; // 0x2C0

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBALLGAMEUPGRADEROWWIDGETCONTROLLER__CTOR_OFFSET))(this);
		}

		::System::Void OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBALLGAMEUPGRADEROWWIDGETCONTROLLER_ONUIINIT_OFFSET))(this);
		}

		::System::Void OnUIOpen(::MoleMole::UIControllerContextBase* openCtrlContext)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBALLGAMEUPGRADEROWWIDGETCONTROLLER_ONUIOPEN_OFFSET))(this, openCtrlContext);
		}

		::System::Void OnCreateView(::MoleMole::UIControlReference* controlReference)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBALLGAMEUPGRADEROWWIDGETCONTROLLER_ONCREATEVIEW_OFFSET))(this, controlReference);
		}

		::System::Void OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBALLGAMEUPGRADEROWWIDGETCONTROLLER_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void PlayUpgradeAnimation(::System::Int32 addLevel, ::System::Boolean skipAnim)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBALLGAMEUPGRADEROWWIDGETCONTROLLER_PLAYUPGRADEANIMATION_OFFSET))(this, addLevel, skipAnim);
		}

		::System::Void RefreshView(::Class_3_6F28FFD006F2B451* world, ::System::Int32 bulletid)
		{
			return ((::System::Void(*)(::PVOID, ::Class_3_6F28FFD006F2B451*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBALLGAMEUPGRADEROWWIDGETCONTROLLER_REFRESHVIEW_OFFSET))(this, world, bulletid);
		}

		::System::Void RefreshRarityBG(::System::Int32 color)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBALLGAMEUPGRADEROWWIDGETCONTROLLER_REFRESHRARITYBG_OFFSET))(this, color);
		}

		::System::Void __base_OnCreateView(::MoleMole::UIControlReference* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBALLGAMEUPGRADEROWWIDGETCONTROLLER___BASE_ONCREATEVIEW_OFFSET))(this, P0);
		}

		::System::Void __base_OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBALLGAMEUPGRADEROWWIDGETCONTROLLER___BASE_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void __base_OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBALLGAMEUPGRADEROWWIDGETCONTROLLER___BASE_ONUIINIT_OFFSET))(this);
		}

		::System::Void __base_OnUIOpen(::MoleMole::UIControllerContextBase* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBALLGAMEUPGRADEROWWIDGETCONTROLLER___BASE_ONUIOPEN_OFFSET))(this, P0);
		}
	};
}

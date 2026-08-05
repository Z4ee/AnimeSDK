#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_03024D6472FC8F3A.h"
#include "unitysdk/Enum_3_3EDF246633A325B0.h"
#include "unitysdk/MoleMole/UIWindowController.h"

class Class_2_5FC8B03E48700862;
namespace MoleMole { class MonoGamepadModule; }
namespace MoleMole { class UIControlReference; }
namespace MoleMole { class UIControllerContextBase; }
namespace MoleMole { class UIGeneralShopLevelInfoWidgetController; }
namespace MoleMole { class UIVHSStoreLevelInfoWidgetController; }
namespace UnityEngine { class Transform; }

#define MOLEMOLE_UIVHSSTORELEVELINFODIALOGPOPWINDOWCONTROLLER_GET_WINDOWTYPE_OFFSET UNITYSDK_OFFSET(0x10EF94A0)
#define MOLEMOLE_UIVHSSTORELEVELINFODIALOGPOPWINDOWCONTROLLER_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x10EFA240)
#define MOLEMOLE_UIVHSSTORELEVELINFODIALOGPOPWINDOWCONTROLLER_ONGAMEPADMODULESELECTINDEX_OFFSET UNITYSDK_OFFSET(0x10EFA340)
#define MOLEMOLE_UIVHSSTORELEVELINFODIALOGPOPWINDOWCONTROLLER_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x10EFA2D0)
#define MOLEMOLE_UIVHSSTORELEVELINFODIALOGPOPWINDOWCONTROLLER_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x10EF94B0)
#define MOLEMOLE_UIVHSSTORELEVELINFODIALOGPOPWINDOWCONTROLLER_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x10EFA1D0)
#define MOLEMOLE_UIVHSSTORELEVELINFODIALOGPOPWINDOWCONTROLLER_REFRESHLAYOUT_OFFSET UNITYSDK_OFFSET(0x10EF9E20)
#define MOLEMOLE_UIVHSSTORELEVELINFODIALOGPOPWINDOWCONTROLLER_SCROLLTOTARGET_OFFSET UNITYSDK_OFFSET(0x10EF9EE0)
#define MOLEMOLE_UIVHSSTORELEVELINFODIALOGPOPWINDOWCONTROLLER_UPDATELEVELITEM_OFFSET UNITYSDK_OFFSET(0x10EF9AD0)
#define MOLEMOLE_UIVHSSTORELEVELINFODIALOGPOPWINDOWCONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x10EFA720)
#define MOLEMOLE_UIVHSSTORELEVELINFODIALOGPOPWINDOWCONTROLLER__UPDATELEVELITEM_B__8_0_OFFSET UNITYSDK_OFFSET(0x10EFA730)
#define MOLEMOLE_UIVHSSTORELEVELINFODIALOGPOPWINDOWCONTROLLER___BASE_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x10EFA8F0)
#define MOLEMOLE_UIVHSSTORELEVELINFODIALOGPOPWINDOWCONTROLLER___BASE_ONGAMEPADMODULESELECTINDEX_OFFSET UNITYSDK_OFFSET(0x10EFA980)
#define MOLEMOLE_UIVHSSTORELEVELINFODIALOGPOPWINDOWCONTROLLER___BASE_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x10EFAA30)
#define MOLEMOLE_UIVHSSTORELEVELINFODIALOGPOPWINDOWCONTROLLER___BASE_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x10EFAA40)
#define MOLEMOLE_UIVHSSTORELEVELINFODIALOGPOPWINDOWCONTROLLER___BASE_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x10EFAA50)

namespace MoleMole
{
	inline static constexpr unsigned int UIVHSStoreLevelInfoDialogPopWindowController_TypeDefinitionIndex = 57207;

	class UIVHSStoreLevelInfoDialogPopWindowController : public ::MoleMole::UIWindowController
	{
	public:
		::Class_2_5FC8B03E48700862* _view; // 0x318
		::System::Int32 _curSelectLevel; // 0x320
		::MoleMole::UIGeneralShopLevelInfoWidgetController* _selectCtrl; // 0x328

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIVHSSTORELEVELINFODIALOGPOPWINDOWCONTROLLER__CTOR_OFFSET))(this);
		}

		::Enum_3_3EDF246633A325B0 get_windowType()
		{
			return ((::Enum_3_3EDF246633A325B0(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIVHSSTORELEVELINFODIALOGPOPWINDOWCONTROLLER_GET_WINDOWTYPE_OFFSET))(this);
		}

		::System::Void OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIVHSSTORELEVELINFODIALOGPOPWINDOWCONTROLLER_ONUIINIT_OFFSET))(this);
		}

		::System::Void OnUIOpen(::MoleMole::UIControllerContextBase* openCtrlContext)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIVHSSTORELEVELINFODIALOGPOPWINDOWCONTROLLER_ONUIOPEN_OFFSET))(this, openCtrlContext);
		}

		::System::Void OnCreateView(::MoleMole::UIControlReference* controlReference)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIVHSSTORELEVELINFODIALOGPOPWINDOWCONTROLLER_ONCREATEVIEW_OFFSET))(this, controlReference);
		}

		::System::Void OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIVHSSTORELEVELINFODIALOGPOPWINDOWCONTROLLER_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void OnGamepadModuleSelectIndex(::MoleMole::MonoGamepadModule* gamepadModule, ::System::Int32 index, ::UnityEngine::Transform* trans, ::Enum_3_03024D6472FC8F3A result)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::MonoGamepadModule*, ::System::Int32, ::UnityEngine::Transform*, ::Enum_3_03024D6472FC8F3A))((::PBYTE)hIl2Cpp + MOLEMOLE_UIVHSSTORELEVELINFODIALOGPOPWINDOWCONTROLLER_ONGAMEPADMODULESELECTINDEX_OFFSET))(this, gamepadModule, index, trans, result);
		}

		::System::Void UpdateLevelItem(::MoleMole::UIVHSStoreLevelInfoWidgetController* ctrl, ::System::Int32 dataIndex)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIVHSStoreLevelInfoWidgetController*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UIVHSSTORELEVELINFODIALOGPOPWINDOWCONTROLLER_UPDATELEVELITEM_OFFSET))(this, ctrl, dataIndex);
		}

		::System::Void RefreshLayout()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIVHSSTORELEVELINFODIALOGPOPWINDOWCONTROLLER_REFRESHLAYOUT_OFFSET))(this);
		}

		::System::Void ScrollToTarget(::System::Boolean hasAnim)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIVHSSTORELEVELINFODIALOGPOPWINDOWCONTROLLER_SCROLLTOTARGET_OFFSET))(this, hasAnim);
		}

		::System::Void _UpdateLevelItem_b__8_0(::MoleMole::UIGeneralShopLevelInfoWidgetController* selectCtrl)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIGeneralShopLevelInfoWidgetController*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIVHSSTORELEVELINFODIALOGPOPWINDOWCONTROLLER__UPDATELEVELITEM_B__8_0_OFFSET))(this, selectCtrl);
		}

		::System::Void __base_OnCreateView(::MoleMole::UIControlReference* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIVHSSTORELEVELINFODIALOGPOPWINDOWCONTROLLER___BASE_ONCREATEVIEW_OFFSET))(this, P0);
		}

		::System::Void __base_OnGamepadModuleSelectIndex(::MoleMole::MonoGamepadModule* P0, ::System::Int32 P1, ::UnityEngine::Transform* P2, ::Enum_3_03024D6472FC8F3A P3)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::MonoGamepadModule*, ::System::Int32, ::UnityEngine::Transform*, ::Enum_3_03024D6472FC8F3A))((::PBYTE)hIl2Cpp + MOLEMOLE_UIVHSSTORELEVELINFODIALOGPOPWINDOWCONTROLLER___BASE_ONGAMEPADMODULESELECTINDEX_OFFSET))(this, P0, P1, P2, P3);
		}

		::System::Void __base_OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIVHSSTORELEVELINFODIALOGPOPWINDOWCONTROLLER___BASE_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void __base_OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIVHSSTORELEVELINFODIALOGPOPWINDOWCONTROLLER___BASE_ONUIINIT_OFFSET))(this);
		}

		::System::Void __base_OnUIOpen(::MoleMole::UIControllerContextBase* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIVHSSTORELEVELINFODIALOGPOPWINDOWCONTROLLER___BASE_ONUIOPEN_OFFSET))(this, P0);
		}
	};
}

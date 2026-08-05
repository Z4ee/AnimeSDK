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
namespace MoleMole { class UIVideoshopLevelInfoWidgetController; }
namespace UnityEngine { class RectTransform; }
namespace UnityEngine { class Transform; }

#define MOLEMOLE_UIVIDEOSHOPLEVELINFODIALOGPOPWINDOWCONTROLLER_GET_WINDOWTYPE_OFFSET UNITYSDK_OFFSET(0x188B6C60)
#define MOLEMOLE_UIVIDEOSHOPLEVELINFODIALOGPOPWINDOWCONTROLLER_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x188B6C70)
#define MOLEMOLE_UIVIDEOSHOPLEVELINFODIALOGPOPWINDOWCONTROLLER_ONGAMEPADMODULESELECTINDEX_OFFSET UNITYSDK_OFFSET(0x188B78A0)
#define MOLEMOLE_UIVIDEOSHOPLEVELINFODIALOGPOPWINDOWCONTROLLER_ONUICLOSE_OFFSET UNITYSDK_OFFSET(0x188B77A0)
#define MOLEMOLE_UIVIDEOSHOPLEVELINFODIALOGPOPWINDOWCONTROLLER_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x188B7830)
#define MOLEMOLE_UIVIDEOSHOPLEVELINFODIALOGPOPWINDOWCONTROLLER_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x188B6D00)
#define MOLEMOLE_UIVIDEOSHOPLEVELINFODIALOGPOPWINDOWCONTROLLER_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x188B7730)
#define MOLEMOLE_UIVIDEOSHOPLEVELINFODIALOGPOPWINDOWCONTROLLER_REFRESHLAYOUT_OFFSET UNITYSDK_OFFSET(0x188B76A0)
#define MOLEMOLE_UIVIDEOSHOPLEVELINFODIALOGPOPWINDOWCONTROLLER_UPDATELEVELITEM_OFFSET UNITYSDK_OFFSET(0x188B7350)
#define MOLEMOLE_UIVIDEOSHOPLEVELINFODIALOGPOPWINDOWCONTROLLER_UPDATE_OFFSET UNITYSDK_OFFSET(0x188B7C80)
#define MOLEMOLE_UIVIDEOSHOPLEVELINFODIALOGPOPWINDOWCONTROLLER__CCTOR_OFFSET UNITYSDK_OFFSET(0x188B7ED0)
#define MOLEMOLE_UIVIDEOSHOPLEVELINFODIALOGPOPWINDOWCONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x188B7EC0)
#define MOLEMOLE_UIVIDEOSHOPLEVELINFODIALOGPOPWINDOWCONTROLLER__UPDATELEVELITEM_B__10_0_OFFSET UNITYSDK_OFFSET(0x188B7EE0)
#define MOLEMOLE_UIVIDEOSHOPLEVELINFODIALOGPOPWINDOWCONTROLLER___BASE_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x188B8120)
#define MOLEMOLE_UIVIDEOSHOPLEVELINFODIALOGPOPWINDOWCONTROLLER___BASE_ONGAMEPADMODULESELECTINDEX_OFFSET UNITYSDK_OFFSET(0x188B81B0)
#define MOLEMOLE_UIVIDEOSHOPLEVELINFODIALOGPOPWINDOWCONTROLLER___BASE_ONUICLOSE_OFFSET UNITYSDK_OFFSET(0x188B8260)
#define MOLEMOLE_UIVIDEOSHOPLEVELINFODIALOGPOPWINDOWCONTROLLER___BASE_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x188B8320)
#define MOLEMOLE_UIVIDEOSHOPLEVELINFODIALOGPOPWINDOWCONTROLLER___BASE_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x188B8330)
#define MOLEMOLE_UIVIDEOSHOPLEVELINFODIALOGPOPWINDOWCONTROLLER___BASE_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x188B8340)

namespace MoleMole
{
	inline static constexpr unsigned int UIVideoshopLevelInfoDialogPopWindowController_TypeDefinitionIndex = 84996;

	class UIVideoshopLevelInfoDialogPopWindowController : public ::MoleMole::UIWindowController
	{
	public:
		static ::System::Int32* StaticGet_MAX_FORGE_LEVEL()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(UIVideoshopLevelInfoDialogPopWindowController_TypeDefinitionIndex)->GetStaticField(0xB460);
		}
		::UnityEngine::RectTransform* ScrollViewRect; // 0x318
		::System::Int32 _curSelectLevel; // 0x320
		::MoleMole::UIGeneralShopLevelInfoWidgetController* _selectCtrl; // 0x328
		::Class_2_5FC8B03E48700862* _view; // 0x330
		::UnityEngine::RectTransform* detailContentRectTrans; // 0x338

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIVIDEOSHOPLEVELINFODIALOGPOPWINDOWCONTROLLER__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_UIVIDEOSHOPLEVELINFODIALOGPOPWINDOWCONTROLLER__CCTOR_OFFSET))();
		}

		::Enum_3_3EDF246633A325B0 get_windowType()
		{
			return ((::Enum_3_3EDF246633A325B0(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIVIDEOSHOPLEVELINFODIALOGPOPWINDOWCONTROLLER_GET_WINDOWTYPE_OFFSET))(this);
		}

		::System::Void OnCreateView(::MoleMole::UIControlReference* controlReference)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIVIDEOSHOPLEVELINFODIALOGPOPWINDOWCONTROLLER_ONCREATEVIEW_OFFSET))(this, controlReference);
		}

		::System::Void OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIVIDEOSHOPLEVELINFODIALOGPOPWINDOWCONTROLLER_ONUIINIT_OFFSET))(this);
		}

		::System::Void OnUIOpen(::MoleMole::UIControllerContextBase* openCtrlContext)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIVIDEOSHOPLEVELINFODIALOGPOPWINDOWCONTROLLER_ONUIOPEN_OFFSET))(this, openCtrlContext);
		}

		::System::Void OnUIClose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIVIDEOSHOPLEVELINFODIALOGPOPWINDOWCONTROLLER_ONUICLOSE_OFFSET))(this);
		}

		::System::Void OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIVIDEOSHOPLEVELINFODIALOGPOPWINDOWCONTROLLER_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void OnGamepadModuleSelectIndex(::MoleMole::MonoGamepadModule* gamepadModule, ::System::Int32 index, ::UnityEngine::Transform* trans, ::Enum_3_03024D6472FC8F3A result)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::MonoGamepadModule*, ::System::Int32, ::UnityEngine::Transform*, ::Enum_3_03024D6472FC8F3A))((::PBYTE)hIl2Cpp + MOLEMOLE_UIVIDEOSHOPLEVELINFODIALOGPOPWINDOWCONTROLLER_ONGAMEPADMODULESELECTINDEX_OFFSET))(this, gamepadModule, index, trans, result);
		}

		::System::Void Update()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIVIDEOSHOPLEVELINFODIALOGPOPWINDOWCONTROLLER_UPDATE_OFFSET))(this);
		}

		::System::Void UpdateLevelItem(::MoleMole::UIVideoshopLevelInfoWidgetController* ctrl, ::System::Int32 dataIndex)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIVideoshopLevelInfoWidgetController*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UIVIDEOSHOPLEVELINFODIALOGPOPWINDOWCONTROLLER_UPDATELEVELITEM_OFFSET))(this, ctrl, dataIndex);
		}

		::System::Void RefreshLayout()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIVIDEOSHOPLEVELINFODIALOGPOPWINDOWCONTROLLER_REFRESHLAYOUT_OFFSET))(this);
		}

		::System::Void _UpdateLevelItem_b__10_0(::MoleMole::UIGeneralShopLevelInfoWidgetController* selectCtrl)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIGeneralShopLevelInfoWidgetController*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIVIDEOSHOPLEVELINFODIALOGPOPWINDOWCONTROLLER__UPDATELEVELITEM_B__10_0_OFFSET))(this, selectCtrl);
		}

		::System::Void __base_OnCreateView(::MoleMole::UIControlReference* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIVIDEOSHOPLEVELINFODIALOGPOPWINDOWCONTROLLER___BASE_ONCREATEVIEW_OFFSET))(this, P0);
		}

		::System::Void __base_OnGamepadModuleSelectIndex(::MoleMole::MonoGamepadModule* P0, ::System::Int32 P1, ::UnityEngine::Transform* P2, ::Enum_3_03024D6472FC8F3A P3)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::MonoGamepadModule*, ::System::Int32, ::UnityEngine::Transform*, ::Enum_3_03024D6472FC8F3A))((::PBYTE)hIl2Cpp + MOLEMOLE_UIVIDEOSHOPLEVELINFODIALOGPOPWINDOWCONTROLLER___BASE_ONGAMEPADMODULESELECTINDEX_OFFSET))(this, P0, P1, P2, P3);
		}

		::System::Void __base_OnUIClose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIVIDEOSHOPLEVELINFODIALOGPOPWINDOWCONTROLLER___BASE_ONUICLOSE_OFFSET))(this);
		}

		::System::Void __base_OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIVIDEOSHOPLEVELINFODIALOGPOPWINDOWCONTROLLER___BASE_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void __base_OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIVIDEOSHOPLEVELINFODIALOGPOPWINDOWCONTROLLER___BASE_ONUIINIT_OFFSET))(this);
		}

		::System::Void __base_OnUIOpen(::MoleMole::UIControllerContextBase* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIVIDEOSHOPLEVELINFODIALOGPOPWINDOWCONTROLLER___BASE_ONUIOPEN_OFFSET))(this, P0);
		}
	};
}

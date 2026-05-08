#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_3EDF246633A325B0.h"
#include "unitysdk/MoleMole/UIWindowController.h"

class Class_1_57F7F2BF8C55D6B6;
class Class_2_0E70B6069F671466;
class Class_2_2F3C7D4EFC74D485;
namespace MoleMole { class MonoGamepadModule; }
namespace MoleMole { class UIControlReference; }
namespace MoleMole { class UIControllerContextBase; }
namespace MoleMole { class UIPersonalInfoWidgetController; }
namespace System { class EventArgs; }

#define MOLEMOLE_UIFRIENDDETAILDIALOGPOPWINDOWCONTROLLER_GET_WINDOWTYPE_OFFSET UNITYSDK_OFFSET(0x149D3300)
#define MOLEMOLE_UIFRIENDDETAILDIALOGPOPWINDOWCONTROLLER_INITPLATFORM_OFFSET UNITYSDK_OFFSET(0x149D3BD0)
#define MOLEMOLE_UIFRIENDDETAILDIALOGPOPWINDOWCONTROLLER_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x149D4130)
#define MOLEMOLE_UIFRIENDDETAILDIALOGPOPWINDOWCONTROLLER_ONGAMEPADMODULEFOCUS_OFFSET UNITYSDK_OFFSET(0x149D36C0)
#define MOLEMOLE_UIFRIENDDETAILDIALOGPOPWINDOWCONTROLLER_ONSHOW_OFFSET UNITYSDK_OFFSET(0x149D4090)
#define MOLEMOLE_UIFRIENDDETAILDIALOGPOPWINDOWCONTROLLER_ONSWITCHPLATFORMINFO_OFFSET UNITYSDK_OFFSET(0x149D3550)
#define MOLEMOLE_UIFRIENDDETAILDIALOGPOPWINDOWCONTROLLER_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x149D3310)
#define MOLEMOLE_UIFRIENDDETAILDIALOGPOPWINDOWCONTROLLER_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x149D3760)
#define MOLEMOLE_UIFRIENDDETAILDIALOGPOPWINDOWCONTROLLER_SHOWUIVIEW_OFFSET UNITYSDK_OFFSET(0x149D41C0)
#define MOLEMOLE_UIFRIENDDETAILDIALOGPOPWINDOWCONTROLLER_SWITCHPLATFORMINFO_OFFSET UNITYSDK_OFFSET(0x149D3650)
#define MOLEMOLE_UIFRIENDDETAILDIALOGPOPWINDOWCONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x149D4250)
#define MOLEMOLE_UIFRIENDDETAILDIALOGPOPWINDOWCONTROLLER__INITPLATFORM_B__12_0_OFFSET UNITYSDK_OFFSET(0x149D4260)
#define MOLEMOLE_UIFRIENDDETAILDIALOGPOPWINDOWCONTROLLER__INITPLATFORM_B__12_1_OFFSET UNITYSDK_OFFSET(0x149D42C0)
#define MOLEMOLE_UIFRIENDDETAILDIALOGPOPWINDOWCONTROLLER___BASE_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x149D4320)
#define MOLEMOLE_UIFRIENDDETAILDIALOGPOPWINDOWCONTROLLER___BASE_ONGAMEPADMODULEFOCUS_OFFSET UNITYSDK_OFFSET(0x149D43B0)
#define MOLEMOLE_UIFRIENDDETAILDIALOGPOPWINDOWCONTROLLER___BASE_ONSHOW_OFFSET UNITYSDK_OFFSET(0x149D4440)
#define MOLEMOLE_UIFRIENDDETAILDIALOGPOPWINDOWCONTROLLER___BASE_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x149D4450)
#define MOLEMOLE_UIFRIENDDETAILDIALOGPOPWINDOWCONTROLLER___BASE_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x149D4460)

namespace MoleMole
{
	inline static constexpr unsigned int UIFriendDetailDialogPopWindowController_TypeDefinitionIndex = 78885;

	class UIFriendDetailDialogPopWindowController : public ::MoleMole::UIWindowController
	{
	public:
		::Class_2_0E70B6069F671466* _view; // 0x310
		::Class_2_2F3C7D4EFC74D485* _model; // 0x318
		::MoleMole::UIPersonalInfoWidgetController* _personalInfoController; // 0x320
		::Class_1_57F7F2BF8C55D6B6* _info; // 0x328
		::System::Boolean _allowShowPlatform; // 0x330
		::System::Boolean _canSwitchPlatformInfo; // 0x331

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIFRIENDDETAILDIALOGPOPWINDOWCONTROLLER__CTOR_OFFSET))(this);
		}

		::Enum_3_3EDF246633A325B0 get_windowType()
		{
			return ((::Enum_3_3EDF246633A325B0(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIFRIENDDETAILDIALOGPOPWINDOWCONTROLLER_GET_WINDOWTYPE_OFFSET))(this);
		}

		::System::Void OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIFRIENDDETAILDIALOGPOPWINDOWCONTROLLER_ONUIINIT_OFFSET))(this);
		}

		::System::Void OnSwitchPlatformInfo(::System::EventArgs* args)
		{
			return ((::System::Void(*)(::PVOID, ::System::EventArgs*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIFRIENDDETAILDIALOGPOPWINDOWCONTROLLER_ONSWITCHPLATFORMINFO_OFFSET))(this, args);
		}

		::System::Void SwitchPlatformInfo(::System::Boolean isShowingPlatformInfo)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIFRIENDDETAILDIALOGPOPWINDOWCONTROLLER_SWITCHPLATFORMINFO_OFFSET))(this, isShowingPlatformInfo);
		}

		::System::Void OnGamepadModuleFocus(::MoleMole::MonoGamepadModule* gamepadModule)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::MonoGamepadModule*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIFRIENDDETAILDIALOGPOPWINDOWCONTROLLER_ONGAMEPADMODULEFOCUS_OFFSET))(this, gamepadModule);
		}

		::System::Void OnUIOpen(::MoleMole::UIControllerContextBase* openCtrlContext)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIFRIENDDETAILDIALOGPOPWINDOWCONTROLLER_ONUIOPEN_OFFSET))(this, openCtrlContext);
		}

		::System::Void OnShow(::MoleMole::UIControllerContextBase* showCtrlContext)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIFRIENDDETAILDIALOGPOPWINDOWCONTROLLER_ONSHOW_OFFSET))(this, showCtrlContext);
		}

		::System::Void OnCreateView(::MoleMole::UIControlReference* controlReference)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIFRIENDDETAILDIALOGPOPWINDOWCONTROLLER_ONCREATEVIEW_OFFSET))(this, controlReference);
		}

		::System::Void InitPlatform()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIFRIENDDETAILDIALOGPOPWINDOWCONTROLLER_INITPLATFORM_OFFSET))(this);
		}

		::System::Void ShowUIView()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIFRIENDDETAILDIALOGPOPWINDOWCONTROLLER_SHOWUIVIEW_OFFSET))(this);
		}

		::System::Void _InitPlatform_b__12_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIFRIENDDETAILDIALOGPOPWINDOWCONTROLLER__INITPLATFORM_B__12_0_OFFSET))(this);
		}

		::System::Void _InitPlatform_b__12_1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIFRIENDDETAILDIALOGPOPWINDOWCONTROLLER__INITPLATFORM_B__12_1_OFFSET))(this);
		}

		::System::Void __base_OnCreateView(::MoleMole::UIControlReference* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIFRIENDDETAILDIALOGPOPWINDOWCONTROLLER___BASE_ONCREATEVIEW_OFFSET))(this, P0);
		}

		::System::Void __base_OnGamepadModuleFocus(::MoleMole::MonoGamepadModule* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::MonoGamepadModule*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIFRIENDDETAILDIALOGPOPWINDOWCONTROLLER___BASE_ONGAMEPADMODULEFOCUS_OFFSET))(this, P0);
		}

		::System::Void __base_OnShow(::MoleMole::UIControllerContextBase* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIFRIENDDETAILDIALOGPOPWINDOWCONTROLLER___BASE_ONSHOW_OFFSET))(this, P0);
		}

		::System::Void __base_OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIFRIENDDETAILDIALOGPOPWINDOWCONTROLLER___BASE_ONUIINIT_OFFSET))(this);
		}

		::System::Void __base_OnUIOpen(::MoleMole::UIControllerContextBase* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIFRIENDDETAILDIALOGPOPWINDOWCONTROLLER___BASE_ONUIOPEN_OFFSET))(this, P0);
		}
	};
}

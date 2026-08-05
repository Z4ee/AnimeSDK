#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_3EDF246633A325B0.h"
#include "unitysdk/MoleMole/UIWindowController.h"

class Class_1_BE6BF7909AD9D940;
class Class_2_9D4A1E4158F1CD49;
namespace MoleMole { class MonoGamepadModule; }
namespace MoleMole { class UIControlReference; }
namespace MoleMole { class UIControllerContextBase; }
namespace MoleMole { class UIFriendInfoWidgetController; }

#define MOLEMOLE_UISELECTFRIENDLISTPOPWINDOWCONTROLLER_GET_WINDOWTYPE_OFFSET UNITYSDK_OFFSET(0x15E8BEC0)
#define MOLEMOLE_UISELECTFRIENDLISTPOPWINDOWCONTROLLER_ONCLICKSENDMSGBTN_OFFSET UNITYSDK_OFFSET(0x15E8C200)
#define MOLEMOLE_UISELECTFRIENDLISTPOPWINDOWCONTROLLER_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x15E8C2E0)
#define MOLEMOLE_UISELECTFRIENDLISTPOPWINDOWCONTROLLER_ONGAMEPADMODULEFOCUS_OFFSET UNITYSDK_OFFSET(0x15E8C3E0)
#define MOLEMOLE_UISELECTFRIENDLISTPOPWINDOWCONTROLLER_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x15E8C370)
#define MOLEMOLE_UISELECTFRIENDLISTPOPWINDOWCONTROLLER_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x15E8BED0)
#define MOLEMOLE_UISELECTFRIENDLISTPOPWINDOWCONTROLLER_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x15E8BFF0)
#define MOLEMOLE_UISELECTFRIENDLISTPOPWINDOWCONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x15E8C480)
#define MOLEMOLE_UISELECTFRIENDLISTPOPWINDOWCONTROLLER___BASE_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x15E8C490)
#define MOLEMOLE_UISELECTFRIENDLISTPOPWINDOWCONTROLLER___BASE_ONGAMEPADMODULEFOCUS_OFFSET UNITYSDK_OFFSET(0x15E8C520)
#define MOLEMOLE_UISELECTFRIENDLISTPOPWINDOWCONTROLLER___BASE_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x15E8C5B0)
#define MOLEMOLE_UISELECTFRIENDLISTPOPWINDOWCONTROLLER___BASE_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x15E8C5C0)
#define MOLEMOLE_UISELECTFRIENDLISTPOPWINDOWCONTROLLER___BASE_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x15E8C5D0)

namespace MoleMole
{
	inline static constexpr unsigned int UISelectFriendListPopWindowController_TypeDefinitionIndex = 58796;

	class UISelectFriendListPopWindowController : public ::MoleMole::UIWindowController
	{
	public:
		::Class_2_9D4A1E4158F1CD49* _view; // 0x318
		::MoleMole::UIFriendInfoWidgetController* _friendInfoController; // 0x320

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UISELECTFRIENDLISTPOPWINDOWCONTROLLER__CTOR_OFFSET))(this);
		}

		::Enum_3_3EDF246633A325B0 get_windowType()
		{
			return ((::Enum_3_3EDF246633A325B0(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UISELECTFRIENDLISTPOPWINDOWCONTROLLER_GET_WINDOWTYPE_OFFSET))(this);
		}

		::System::Void OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UISELECTFRIENDLISTPOPWINDOWCONTROLLER_ONUIINIT_OFFSET))(this);
		}

		::System::Void OnUIOpen(::MoleMole::UIControllerContextBase* openCtrlContext)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UISELECTFRIENDLISTPOPWINDOWCONTROLLER_ONUIOPEN_OFFSET))(this, openCtrlContext);
		}

		::System::Void OnClickSendMsgBtn(::Class_1_BE6BF7909AD9D940* info)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_BE6BF7909AD9D940*))((::PBYTE)hIl2Cpp + MOLEMOLE_UISELECTFRIENDLISTPOPWINDOWCONTROLLER_ONCLICKSENDMSGBTN_OFFSET))(this, info);
		}

		::System::Void OnCreateView(::MoleMole::UIControlReference* controlReference)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UISELECTFRIENDLISTPOPWINDOWCONTROLLER_ONCREATEVIEW_OFFSET))(this, controlReference);
		}

		::System::Void OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UISELECTFRIENDLISTPOPWINDOWCONTROLLER_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void OnGamepadModuleFocus(::MoleMole::MonoGamepadModule* gamepadModule)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::MonoGamepadModule*))((::PBYTE)hIl2Cpp + MOLEMOLE_UISELECTFRIENDLISTPOPWINDOWCONTROLLER_ONGAMEPADMODULEFOCUS_OFFSET))(this, gamepadModule);
		}

		::System::Void __base_OnCreateView(::MoleMole::UIControlReference* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UISELECTFRIENDLISTPOPWINDOWCONTROLLER___BASE_ONCREATEVIEW_OFFSET))(this, P0);
		}

		::System::Void __base_OnGamepadModuleFocus(::MoleMole::MonoGamepadModule* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::MonoGamepadModule*))((::PBYTE)hIl2Cpp + MOLEMOLE_UISELECTFRIENDLISTPOPWINDOWCONTROLLER___BASE_ONGAMEPADMODULEFOCUS_OFFSET))(this, P0);
		}

		::System::Void __base_OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UISELECTFRIENDLISTPOPWINDOWCONTROLLER___BASE_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void __base_OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UISELECTFRIENDLISTPOPWINDOWCONTROLLER___BASE_ONUIINIT_OFFSET))(this);
		}

		::System::Void __base_OnUIOpen(::MoleMole::UIControllerContextBase* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UISELECTFRIENDLISTPOPWINDOWCONTROLLER___BASE_ONUIOPEN_OFFSET))(this, P0);
		}
	};
}

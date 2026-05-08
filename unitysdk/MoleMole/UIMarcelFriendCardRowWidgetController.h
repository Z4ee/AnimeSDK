#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/ScrollViewItemWidgetController.h"
#include "unitysdk/UnityEngine/Color.h"

class Class_0_16E4307DCC419505_11;
class Class_1_BE6BF7909AD9D940;
class Class_2_2F3C7D4EFC74D485;
class Class_2_79AE422BA06F6D26_47;
namespace MoleMole { class UIControlReference; }
namespace MoleMole { class UIMarcelFriendCardRowWidgetController_Context; }
namespace System { class Action; }
namespace System { class EventArgs; }
namespace System { class Object; }
namespace UnityEngine::UI::Extension { class UILocalizationText; }

#define MOLEMOLE_UIMARCELFRIENDCARDROWWIDGETCONTROLLER_ONCLICKINVITECALLBACK_OFFSET UNITYSDK_OFFSET(0x150FB3A0)
#define MOLEMOLE_UIMARCELFRIENDCARDROWWIDGETCONTROLLER_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x150F9D60)
#define MOLEMOLE_UIMARCELFRIENDCARDROWWIDGETCONTROLLER_ONSCROLLITEMUPDATE_OFFSET UNITYSDK_OFFSET(0x150F9E70)
#define MOLEMOLE_UIMARCELFRIENDCARDROWWIDGETCONTROLLER_ONSWITCHPLATFORMINFO_OFFSET UNITYSDK_OFFSET(0x150F9B00)
#define MOLEMOLE_UIMARCELFRIENDCARDROWWIDGETCONTROLLER_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x150F9DF0)
#define MOLEMOLE_UIMARCELFRIENDCARDROWWIDGETCONTROLLER_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x150F9960)
#define MOLEMOLE_UIMARCELFRIENDCARDROWWIDGETCONTROLLER_RESETARCADESTATE_OFFSET UNITYSDK_OFFSET(0x150FA080)
#define MOLEMOLE_UIMARCELFRIENDCARDROWWIDGETCONTROLLER_SHOWINFO_OFFSET UNITYSDK_OFFSET(0x150FA010)
#define MOLEMOLE_UIMARCELFRIENDCARDROWWIDGETCONTROLLER_SHOWPLATFORMUI_OFFSET UNITYSDK_OFFSET(0x150F9B90)
#define MOLEMOLE_UIMARCELFRIENDCARDROWWIDGETCONTROLLER_SHOWUIVIEW_OFFSET UNITYSDK_OFFSET(0x150FAAC0)
#define MOLEMOLE_UIMARCELFRIENDCARDROWWIDGETCONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x150FB5E0)
#define MOLEMOLE_UIMARCELFRIENDCARDROWWIDGETCONTROLLER__ONCLICKINVITECALLBACK_B__13_0_OFFSET UNITYSDK_OFFSET(0x150FB600)
#define MOLEMOLE_UIMARCELFRIENDCARDROWWIDGETCONTROLLER__SHOWUIVIEW_G__SETUPPLATFORMUI_11_0_OFFSET UNITYSDK_OFFSET(0x150FB2F0)
#define MOLEMOLE_UIMARCELFRIENDCARDROWWIDGETCONTROLLER___BASE_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x150FB800)
#define MOLEMOLE_UIMARCELFRIENDCARDROWWIDGETCONTROLLER___BASE_ONSCROLLITEMUPDATE_OFFSET UNITYSDK_OFFSET(0x150FB890)
#define MOLEMOLE_UIMARCELFRIENDCARDROWWIDGETCONTROLLER___BASE_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x150FB930)
#define MOLEMOLE_UIMARCELFRIENDCARDROWWIDGETCONTROLLER___BASE_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x150FB9C0)

namespace MoleMole
{
	inline static constexpr unsigned int UIMarcelFriendCardRowWidgetController_TypeDefinitionIndex = 56935;

	class UIMarcelFriendCardRowWidgetController : public ::MoleMole::ScrollViewItemWidgetController
	{
	public:
		::Class_2_79AE422BA06F6D26_47* _view; // 0x2E8
		::Class_2_2F3C7D4EFC74D485* _model; // 0x2F0
		::System::Action* InviteCallBack; // 0x2F8
		::MoleMole::UIMarcelFriendCardRowWidgetController_Context* _context; // 0x300
		::System::Boolean _allowShowPlatform; // 0x308
		::System::Boolean _canSwitchPlatformInfo; // 0x309
		::System::Boolean _isShowingPlatform; // 0x30A
		::UnityEngine::UI::Extension::UILocalizationText* displayNameText; // 0x310
		::UnityEngine::Color defaultOfflineColor; // 0x318

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMARCELFRIENDCARDROWWIDGETCONTROLLER__CTOR_OFFSET))(this);
		}

		::System::Void OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMARCELFRIENDCARDROWWIDGETCONTROLLER_ONUIINIT_OFFSET))(this);
		}

		::System::Void OnSwitchPlatformInfo(::System::EventArgs* args)
		{
			return ((::System::Void(*)(::PVOID, ::System::EventArgs*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMARCELFRIENDCARDROWWIDGETCONTROLLER_ONSWITCHPLATFORMINFO_OFFSET))(this, args);
		}

		::System::Void OnCreateView(::MoleMole::UIControlReference* controlReference)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMARCELFRIENDCARDROWWIDGETCONTROLLER_ONCREATEVIEW_OFFSET))(this, controlReference);
		}

		::System::Void OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMARCELFRIENDCARDROWWIDGETCONTROLLER_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void OnScrollItemUpdate(::System::Int32 index, ::System::Object* data, ::System::Boolean init)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Object*, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMARCELFRIENDCARDROWWIDGETCONTROLLER_ONSCROLLITEMUPDATE_OFFSET))(this, index, data, init);
		}

		::System::Void ShowInfo(::Class_1_BE6BF7909AD9D940* info)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_BE6BF7909AD9D940*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMARCELFRIENDCARDROWWIDGETCONTROLLER_SHOWINFO_OFFSET))(this, info);
		}

		::System::Void ShowPlatformUI(::System::Boolean isShowingPlatformInfo)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMARCELFRIENDCARDROWWIDGETCONTROLLER_SHOWPLATFORMUI_OFFSET))(this, isShowingPlatformInfo);
		}

		::System::Void ShowUIView()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMARCELFRIENDCARDROWWIDGETCONTROLLER_SHOWUIVIEW_OFFSET))(this);
		}

		::System::Void ResetArcadeState()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMARCELFRIENDCARDROWWIDGETCONTROLLER_RESETARCADESTATE_OFFSET))(this);
		}

		::System::Void OnClickInviteCallback()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMARCELFRIENDCARDROWWIDGETCONTROLLER_ONCLICKINVITECALLBACK_OFFSET))(this);
		}

		::System::Void _ShowUIView_g__SetupPlatformUI_11_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMARCELFRIENDCARDROWWIDGETCONTROLLER__SHOWUIVIEW_G__SETUPPLATFORMUI_11_0_OFFSET))(this);
		}

		::System::Void _OnClickInviteCallback_b__13_0(::Class_0_16E4307DCC419505_11* _)
		{
			return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_11*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMARCELFRIENDCARDROWWIDGETCONTROLLER__ONCLICKINVITECALLBACK_B__13_0_OFFSET))(this, _);
		}

		::System::Void __base_OnCreateView(::MoleMole::UIControlReference* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMARCELFRIENDCARDROWWIDGETCONTROLLER___BASE_ONCREATEVIEW_OFFSET))(this, P0);
		}

		::System::Void __base_OnScrollItemUpdate(::System::Int32 P0, ::System::Object* P1, ::System::Boolean P2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Object*, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMARCELFRIENDCARDROWWIDGETCONTROLLER___BASE_ONSCROLLITEMUPDATE_OFFSET))(this, P0, P1, P2);
		}

		::System::Void __base_OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMARCELFRIENDCARDROWWIDGETCONTROLLER___BASE_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void __base_OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMARCELFRIENDCARDROWWIDGETCONTROLLER___BASE_ONUIINIT_OFFSET))(this);
		}
	};
}

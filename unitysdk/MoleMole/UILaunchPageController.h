#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_3EDF246633A325B0.h"
#include "unitysdk/Foundation/Coroutine/CoroutineHandle.h"
#include "unitysdk/MoleMole/InputActionEvent.h"
#include "unitysdk/MoleMole/UIWindowController.h"

class Class_1_E9529ED64113E4E9;
class Class_2_79F6D62CE30E3F8E_31;
namespace MoleMole { class UIControlReference; }
namespace MoleMole { class UIControllerContextBase; }
namespace System { class Action; }
namespace System { class String; }
namespace UnityEngine { class Animation; }
namespace UnityEngine::UI { class RawImage; }
namespace UnityEngine::UI::Extension { class UIButtonEx; }

#define MOLEMOLE_UILAUNCHPAGECONTROLLER_ENDGAMELOGO_OFFSET UNITYSDK_OFFSET(0x169B3AB0)
#define MOLEMOLE_UILAUNCHPAGECONTROLLER_GAMESTART_OFFSET UNITYSDK_OFFSET(0x169B2F60)
#define MOLEMOLE_UILAUNCHPAGECONTROLLER_GETLAUNCHVIDEOPATH_OFFSET UNITYSDK_OFFSET(0x169B32A0)
#define MOLEMOLE_UILAUNCHPAGECONTROLLER_GET_WINDOWTYPE_OFFSET UNITYSDK_OFFSET(0x169B27C0)
#define MOLEMOLE_UILAUNCHPAGECONTROLLER_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x169B2D10)
#define MOLEMOLE_UILAUNCHPAGECONTROLLER_ONINPUTACTION_OFFSET UNITYSDK_OFFSET(0x169B2DA0)
#define MOLEMOLE_UILAUNCHPAGECONTROLLER_ONSHOW_OFFSET UNITYSDK_OFFSET(0x169B2830)
#define MOLEMOLE_UILAUNCHPAGECONTROLLER_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x169B48C0)
#define MOLEMOLE_UILAUNCHPAGECONTROLLER_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x169B3E00)
#define MOLEMOLE_UILAUNCHPAGECONTROLLER_PLAYGAMELOGO_OFFSET UNITYSDK_OFFSET(0x169B3350)
#define MOLEMOLE_UILAUNCHPAGECONTROLLER_PLAYKOREAAGELIMIT_OFFSET UNITYSDK_OFFSET(0x169B45B0)
#define MOLEMOLE_UILAUNCHPAGECONTROLLER_PLAYMHYLOGO_OFFSET UNITYSDK_OFFSET(0x169B3190)
#define MOLEMOLE_UILAUNCHPAGECONTROLLER_PLAYWARNINGLOGO_OFFSET UNITYSDK_OFFSET(0x169B3CC0)
#define MOLEMOLE_UILAUNCHPAGECONTROLLER_SETSKIP_OFFSET UNITYSDK_OFFSET(0x169B3840)
#define MOLEMOLE_UILAUNCHPAGECONTROLLER_SETUIWINDOWSETTING_OFFSET UNITYSDK_OFFSET(0x169B27D0)
#define MOLEMOLE_UILAUNCHPAGECONTROLLER_SHOULDSKIPLOGOFORGROUPTELEPORT_OFFSET UNITYSDK_OFFSET(0x169B2F20)
#define MOLEMOLE_UILAUNCHPAGECONTROLLER_STATE_PLAYTITLE_OFFSET UNITYSDK_OFFSET(0x169B2890)
#define MOLEMOLE_UILAUNCHPAGECONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x169B4910)
#define MOLEMOLE_UILAUNCHPAGECONTROLLER__PLAYWARNINGLOGO_B__15_0_OFFSET UNITYSDK_OFFSET(0x169B4B60)
#define MOLEMOLE_UILAUNCHPAGECONTROLLER__SETSKIP_B__13_0_OFFSET UNITYSDK_OFFSET(0x169B4960)
#define MOLEMOLE_UILAUNCHPAGECONTROLLER__SETSKIP_B__13_1_OFFSET UNITYSDK_OFFSET(0x169B4A00)
#define MOLEMOLE_UILAUNCHPAGECONTROLLER___BASE_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x169B4B70)
#define MOLEMOLE_UILAUNCHPAGECONTROLLER___BASE_ONINPUTACTION_OFFSET UNITYSDK_OFFSET(0x169B4C00)
#define MOLEMOLE_UILAUNCHPAGECONTROLLER___BASE_ONSHOW_OFFSET UNITYSDK_OFFSET(0x169B4C30)
#define MOLEMOLE_UILAUNCHPAGECONTROLLER___BASE_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x169B4C40)
#define MOLEMOLE_UILAUNCHPAGECONTROLLER___BASE_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x169B4C50)
#define MOLEMOLE_UILAUNCHPAGECONTROLLER___BASE_SETUIWINDOWSETTING_OFFSET UNITYSDK_OFFSET(0x169B4C60)

namespace MoleMole
{
	inline static constexpr unsigned int UILaunchPageController_TypeDefinitionIndex = 67079;

	class UILaunchPageController : public ::MoleMole::UIWindowController
	{
	public:
		::System::Single waitSkipTime; // 0x318
		::System::Boolean isGameStart; // 0x31C
		::UnityEngine::UI::Extension::UIButtonEx* skipButton; // 0x320
		::Class_2_79F6D62CE30E3F8E_31* _view; // 0x328
		::UnityEngine::Animation* mhyLogoPlay; // 0x330
		::UnityEngine::Animation* gameLogoPlay; // 0x338
		::UnityEngine::Animation* warningLogoPlay; // 0x340
		::System::Single _animationTime; // 0x348
		::Class_1_E9529ED64113E4E9* playerHelper; // 0x350
		::UnityEngine::UI::RawImage* _screen; // 0x358
		::System::Single _videoFadeOutTime; // 0x360
		::Foundation::Coroutine::CoroutineHandle videoDelayFadeHand; // 0x364
		::UnityEngine::Animation* videoMaskAni; // 0x368
		::System::String* koraLimitVideoUrl; // 0x370

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UILAUNCHPAGECONTROLLER__CTOR_OFFSET))(this);
		}

		::Enum_3_3EDF246633A325B0 get_windowType()
		{
			return ((::Enum_3_3EDF246633A325B0(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UILAUNCHPAGECONTROLLER_GET_WINDOWTYPE_OFFSET))(this);
		}

		::System::Void SetUIWindowSetting()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UILAUNCHPAGECONTROLLER_SETUIWINDOWSETTING_OFFSET))(this);
		}

		::System::Void OnShow(::MoleMole::UIControllerContextBase* showCtrlContext)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UILAUNCHPAGECONTROLLER_ONSHOW_OFFSET))(this, showCtrlContext);
		}

		::System::Void OnCreateView(::MoleMole::UIControlReference* controlReference)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UILAUNCHPAGECONTROLLER_ONCREATEVIEW_OFFSET))(this, controlReference);
		}

		::System::Boolean OnInputAction(::MoleMole::InputActionEvent inputAction)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::InputActionEvent))((::PBYTE)hIl2Cpp + MOLEMOLE_UILAUNCHPAGECONTROLLER_ONINPUTACTION_OFFSET))(this, inputAction);
		}

		::System::Void State_PlayTitle()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UILAUNCHPAGECONTROLLER_STATE_PLAYTITLE_OFFSET))(this);
		}

		::System::Void PlayMHYLogo()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UILAUNCHPAGECONTROLLER_PLAYMHYLOGO_OFFSET))(this);
		}

		::System::String* GetLaunchVideoPath()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UILAUNCHPAGECONTROLLER_GETLAUNCHVIDEOPATH_OFFSET))(this);
		}

		::System::Void PlayGameLogo()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UILAUNCHPAGECONTROLLER_PLAYGAMELOGO_OFFSET))(this);
		}

		::System::Void SetSkip()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UILAUNCHPAGECONTROLLER_SETSKIP_OFFSET))(this);
		}

		::System::Void EndGameLogo(::Class_1_E9529ED64113E4E9* helper)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_E9529ED64113E4E9*))((::PBYTE)hIl2Cpp + MOLEMOLE_UILAUNCHPAGECONTROLLER_ENDGAMELOGO_OFFSET))(this, helper);
		}

		::System::Void PlayWarningLogo()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UILAUNCHPAGECONTROLLER_PLAYWARNINGLOGO_OFFSET))(this);
		}

		::System::Void GameStart()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UILAUNCHPAGECONTROLLER_GAMESTART_OFFSET))(this);
		}

		::System::Void OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UILAUNCHPAGECONTROLLER_ONUIINIT_OFFSET))(this);
		}

		::System::Void PlayKoreaAgeLimit(::System::Action* next)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + MOLEMOLE_UILAUNCHPAGECONTROLLER_PLAYKOREAAGELIMIT_OFFSET))(this, next);
		}

		::System::Void OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UILAUNCHPAGECONTROLLER_ONUIDESTROY_OFFSET))(this);
		}

		static ::System::Boolean ShouldSkipLogoForGroupTeleport()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_UILAUNCHPAGECONTROLLER_SHOULDSKIPLOGOFORGROUPTELEPORT_OFFSET))();
		}

		::System::Void _SetSkip_b__13_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UILAUNCHPAGECONTROLLER__SETSKIP_B__13_0_OFFSET))(this);
		}

		::System::Void _SetSkip_b__13_1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UILAUNCHPAGECONTROLLER__SETSKIP_B__13_1_OFFSET))(this);
		}

		::System::Void _PlayWarningLogo_b__15_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UILAUNCHPAGECONTROLLER__PLAYWARNINGLOGO_B__15_0_OFFSET))(this);
		}

		::System::Void __base_OnCreateView(::MoleMole::UIControlReference* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UILAUNCHPAGECONTROLLER___BASE_ONCREATEVIEW_OFFSET))(this, P0);
		}

		::System::Boolean __base_OnInputAction(::MoleMole::InputActionEvent P0)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::InputActionEvent))((::PBYTE)hIl2Cpp + MOLEMOLE_UILAUNCHPAGECONTROLLER___BASE_ONINPUTACTION_OFFSET))(this, P0);
		}

		::System::Void __base_OnShow(::MoleMole::UIControllerContextBase* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UILAUNCHPAGECONTROLLER___BASE_ONSHOW_OFFSET))(this, P0);
		}

		::System::Void __base_OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UILAUNCHPAGECONTROLLER___BASE_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void __base_OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UILAUNCHPAGECONTROLLER___BASE_ONUIINIT_OFFSET))(this);
		}

		::System::Void __base_SetUIWindowSetting()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UILAUNCHPAGECONTROLLER___BASE_SETUIWINDOWSETTING_OFFSET))(this);
		}
	};
}

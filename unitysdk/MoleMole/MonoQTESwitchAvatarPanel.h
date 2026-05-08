#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_3EDF246633A325B0.h"
#include "unitysdk/MoleMole/UIWindowController.h"

class Class_3_816015CAFD8353F7;
namespace MoleMole { class MonoQTEBtnCountdown; }
namespace MoleMole { class TweenBar; }
namespace System { class String; }
namespace UnityEngine { class Animation; }
namespace UnityEngine { class RectTransform; }
namespace UnityEngine::UI { class Image; }
namespace UnityEngine::UI { class Text; }
namespace UnityEngine::UI::Extension { class UIButtonEx; }

#define MOLEMOLE_MONOQTESWITCHAVATARPANEL_GET_WINDOWTYPE_OFFSET UNITYSDK_OFFSET(0x142AC990)
#define MOLEMOLE_MONOQTESWITCHAVATARPANEL_INITQTEAVATARBTNPANEL_OFFSET UNITYSDK_OFFSET(0x142ADB60)
#define MOLEMOLE_MONOQTESWITCHAVATARPANEL_ONBEFOREWORLDUPDATE_OFFSET UNITYSDK_OFFSET(0x142AE660)
#define MOLEMOLE_MONOQTESWITCHAVATARPANEL_ONLEFTCHARBTNCLICK_OFFSET UNITYSDK_OFFSET(0x142AF480)
#define MOLEMOLE_MONOQTESWITCHAVATARPANEL_ONQTEWINDOWCLOSED_OFFSET UNITYSDK_OFFSET(0x142AEB80)
#define MOLEMOLE_MONOQTESWITCHAVATARPANEL_ONQTEWINDOWOPENED_OFFSET UNITYSDK_OFFSET(0x142AEA80)
#define MOLEMOLE_MONOQTESWITCHAVATARPANEL_ONRIGHTCHARBTNCLICK_OFFSET UNITYSDK_OFFSET(0x142AF500)
#define MOLEMOLE_MONOQTESWITCHAVATARPANEL_ONSWITCHBTNCLICKED_OFFSET UNITYSDK_OFFSET(0x142AEA20)
#define MOLEMOLE_MONOQTESWITCHAVATARPANEL_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x142ADA60)
#define MOLEMOLE_MONOQTESWITCHAVATARPANEL_PLAYANIM_OFFSET UNITYSDK_OFFSET(0x142AE2A0)
#define MOLEMOLE_MONOQTESWITCHAVATARPANEL_PLAYFADEOUTANIMEND_OFFSET UNITYSDK_OFFSET(0x142AE320)
#define MOLEMOLE_MONOQTESWITCHAVATARPANEL_SECONDSTODATATIMEFORMAT_OFFSET UNITYSDK_OFFSET(0x142AEDB0)
#define MOLEMOLE_MONOQTESWITCHAVATARPANEL_SETAVATARICONINFO_OFFSET UNITYSDK_OFFSET(0x142AEFF0)
#define MOLEMOLE_MONOQTESWITCHAVATARPANEL_SETDEFAULTTIMERTWEENBAR_OFFSET UNITYSDK_OFFSET(0x142AE560)
#define MOLEMOLE_MONOQTESWITCHAVATARPANEL_SETQTEEFFECTACTIVE_OFFSET UNITYSDK_OFFSET(0x142AE370)
#define MOLEMOLE_MONOQTESWITCHAVATARPANEL_STARTPLAYLOOPANIM_OFFSET UNITYSDK_OFFSET(0x142AE1C0)
#define MOLEMOLE_MONOQTESWITCHAVATARPANEL_STARTPLAYTWEERBAR_OFFSET UNITYSDK_OFFSET(0x142ADFB0)
#define MOLEMOLE_MONOQTESWITCHAVATARPANEL_START_OFFSET UNITYSDK_OFFSET(0x142AC9A0)
#define MOLEMOLE_MONOQTESWITCHAVATARPANEL_SWITCHAVATAR_OFFSET UNITYSDK_OFFSET(0x142AF580)
#define MOLEMOLE_MONOQTESWITCHAVATARPANEL_TWEENQTETIMEBAR_OFFSET UNITYSDK_OFFSET(0x142AE000)
#define MOLEMOLE_MONOQTESWITCHAVATARPANEL_UPDATEQTEBTNCOUNTDOWNPANEL_OFFSET UNITYSDK_OFFSET(0x142AE790)
#define MOLEMOLE_MONOQTESWITCHAVATARPANEL__CTOR_OFFSET UNITYSDK_OFFSET(0x142AF640)
#define MOLEMOLE_MONOQTESWITCHAVATARPANEL___BASE_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x142AF650)

namespace MoleMole
{
	inline static constexpr unsigned int MonoQTESwitchAvatarPanel_TypeDefinitionIndex = 62890;

	class MonoQTESwitchAvatarPanel : public ::MoleMole::UIWindowController
	{
	public:
		// static const ::System::String* QTE_OPEN_ANIM; // 0x0
		// static const ::System::String* QTE_CLOSE_ANIM; // 0x0
		// static const ::System::String* QTE_LOOP_ANIM; // 0x0
		::MoleMole::MonoQTEBtnCountdown* _monoQTEBtnCountdown; // 0x310
		::UnityEngine::Animation* _qteStateChangeAnim; // 0x318
		::UnityEngine::RectTransform* _contextTrans; // 0x320
		::MoleMole::TweenBar* _timerBar; // 0x328
		::UnityEngine::UI::Text* _timerText; // 0x330
		::UnityEngine::UI::Extension::UIButtonEx* _leftCharBtn; // 0x338
		::UnityEngine::UI::Extension::UIButtonEx* _rightCharBtn; // 0x340
		::System::Boolean _leftBtnClickTrigger; // 0x348
		::System::Boolean _rightBtnClickTrigger; // 0x349
		::UnityEngine::UI::Image* _leftCharIcon; // 0x350
		::UnityEngine::UI::Image* _rightCharIcon; // 0x358
		::System::Boolean isTickTimer; // 0x360
		::System::Boolean isPlayingFadeOutAnim; // 0x361
		::System::UInt32 _leftChooseEntityID; // 0x364
		::System::UInt32 _rightChooseEntityID; // 0x368
		::Class_3_816015CAFD8353F7* switchAvatarComponent; // 0x370

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOQTESWITCHAVATARPANEL__CTOR_OFFSET))(this);
		}

		::Enum_3_3EDF246633A325B0 get_windowType()
		{
			return ((::Enum_3_3EDF246633A325B0(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOQTESWITCHAVATARPANEL_GET_WINDOWTYPE_OFFSET))(this);
		}

		::System::Void Start()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOQTESWITCHAVATARPANEL_START_OFFSET))(this);
		}

		::System::Void OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOQTESWITCHAVATARPANEL_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void InitQTEAvatarBtnPanel()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOQTESWITCHAVATARPANEL_INITQTEAVATARBTNPANEL_OFFSET))(this);
		}

		::System::Void StartPlayTweerBar()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOQTESWITCHAVATARPANEL_STARTPLAYTWEERBAR_OFFSET))(this);
		}

		::System::Void StartPlayLoopAnim()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOQTESWITCHAVATARPANEL_STARTPLAYLOOPANIM_OFFSET))(this);
		}

		::System::Void PlayFadeOutAnimEnd()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOQTESWITCHAVATARPANEL_PLAYFADEOUTANIMEND_OFFSET))(this);
		}

		::System::Void PlayAnim(::System::String* anim)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOQTESWITCHAVATARPANEL_PLAYANIM_OFFSET))(this, anim);
		}

		::System::Void TweenQTETimeBar()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOQTESWITCHAVATARPANEL_TWEENQTETIMEBAR_OFFSET))(this);
		}

		::System::Void SetDefaultTimerTweenBar()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOQTESWITCHAVATARPANEL_SETDEFAULTTIMERTWEENBAR_OFFSET))(this);
		}

		::System::Void OnBeforeWorldUpdate(::System::Single deltaTime)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOQTESWITCHAVATARPANEL_ONBEFOREWORLDUPDATE_OFFSET))(this, deltaTime);
		}

		::System::Void UpdateQTEBtnCountDownPanel()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOQTESWITCHAVATARPANEL_UPDATEQTEBTNCOUNTDOWNPANEL_OFFSET))(this);
		}

		::System::String* SecondsToDataTimeFormat(::System::Single totalSeconds)
		{
			return ((::System::String*(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOQTESWITCHAVATARPANEL_SECONDSTODATATIMEFORMAT_OFFSET))(this, totalSeconds);
		}

		::System::Void OnQTEWindowOpened()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOQTESWITCHAVATARPANEL_ONQTEWINDOWOPENED_OFFSET))(this);
		}

		::System::Void SetAvatarIconInfo()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOQTESWITCHAVATARPANEL_SETAVATARICONINFO_OFFSET))(this);
		}

		::System::Void OnQTEWindowClosed()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOQTESWITCHAVATARPANEL_ONQTEWINDOWCLOSED_OFFSET))(this);
		}

		::System::Void SetQteEffectActive(::System::Boolean active)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOQTESWITCHAVATARPANEL_SETQTEEFFECTACTIVE_OFFSET))(this, active);
		}

		::System::Void OnLeftCharBtnClick()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOQTESWITCHAVATARPANEL_ONLEFTCHARBTNCLICK_OFFSET))(this);
		}

		::System::Void OnRightCharBtnClick()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOQTESWITCHAVATARPANEL_ONRIGHTCHARBTNCLICK_OFFSET))(this);
		}

		::System::Void OnSwitchBtnClicked(::System::UInt32 chooseEntityID, ::System::Boolean isReverseOffset)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOQTESWITCHAVATARPANEL_ONSWITCHBTNCLICKED_OFFSET))(this, chooseEntityID, isReverseOffset);
		}

		::System::Void SwitchAvatar(::System::UInt32 chooseEntityID, ::System::Boolean isReverseOffset)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOQTESWITCHAVATARPANEL_SWITCHAVATAR_OFFSET))(this, chooseEntityID, isReverseOffset);
		}

		::System::Void __base_OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOQTESWITCHAVATARPANEL___BASE_ONUIDESTROY_OFFSET))(this);
		}
	};
}

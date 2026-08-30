#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/AkCallbackType.h"
#include "unitysdk/RPG/Client/B51Racing/B51RacingTRControl_ETRToastState.h"
#include "unitysdk/Sofa/BaseSofaControl.h"

class AkCallbackInfo;
class Class_0_16E4307DCC419505_1402;
class Class_1_243AEB71B7D38FD2;
namespace RPG::Client { class LocalizedText; }
namespace System { class Object; }
namespace System { class String; }
namespace UnityEngine { class Animation; }
namespace UnityEngine { class CanvasGroup; }
namespace UnityEngine::UI { class Image; }

#define RPG_CLIENT_B51RACING_B51RACINGTRCONTROL_HIDE_OFFSET UNITYSDK_OFFSET(0xC898030)
#define RPG_CLIENT_B51RACING_B51RACINGTRCONTROL_ONTREVENTTRIGGERED_OFFSET UNITYSDK_OFFSET(0xC8985C0)
#define RPG_CLIENT_B51RACING_B51RACINGTRCONTROL_SETUPVIEW_OFFSET UNITYSDK_OFFSET(0xC897C20)
#define RPG_CLIENT_B51RACING_B51RACINGTRCONTROL_TICK_OFFSET UNITYSDK_OFFSET(0xC898410)
#define RPG_CLIENT_B51RACING_B51RACINGTRCONTROL__CTOR_OFFSET UNITYSDK_OFFSET(0xC899660)
#define RPG_CLIENT_B51RACING_B51RACINGTRCONTROL__FINISHORNOTIFYPRESENTATION_OFFSET UNITYSDK_OFFSET(0xC898760)
#define RPG_CLIENT_B51RACING_B51RACINGTRCONTROL__FINISHPRESENTATIONIFNEEDED_OFFSET UNITYSDK_OFFSET(0xC898110)
#define RPG_CLIENT_B51RACING_B51RACINGTRCONTROL__GETCONFIGREPOSITORY_OFFSET UNITYSDK_OFFSET(0xC8987D0)
#define RPG_CLIENT_B51RACING_B51RACINGTRCONTROL__GETMATCHFLOWSERVICE_OFFSET UNITYSDK_OFFSET(0xC899100)
#define RPG_CLIENT_B51RACING_B51RACINGTRCONTROL__GETTEMPORARYBETAMINIMUMSHOWDURATION_OFFSET UNITYSDK_OFFSET(0xC898B60)
#define RPG_CLIENT_B51RACING_B51RACINGTRCONTROL__ONBINDVIEWMODEL_OFFSET UNITYSDK_OFFSET(0xC8992A0)
#define RPG_CLIENT_B51RACING_B51RACINGTRCONTROL__ONDESTROY_OFFSET UNITYSDK_OFFSET(0xC8994E0)
#define RPG_CLIENT_B51RACING_B51RACINGTRCONTROL__ONINITIALIZECOMPONENT_OFFSET UNITYSDK_OFFSET(0xC8991A0)
#define RPG_CLIENT_B51RACING_B51RACINGTRCONTROL__ONVOICEFINISHED_OFFSET UNITYSDK_OFFSET(0xC899050)
#define RPG_CLIENT_B51RACING_B51RACINGTRCONTROL__PLAYANIMATION_OFFSET UNITYSDK_OFFSET(0xC898C50)
#define RPG_CLIENT_B51RACING_B51RACINGTRCONTROL__PLAYTOAST_OFFSET UNITYSDK_OFFSET(0xC898890)
#define RPG_CLIENT_B51RACING_B51RACINGTRCONTROL__PLAYVOICE_OFFSET UNITYSDK_OFFSET(0xC898EB0)
#define RPG_CLIENT_B51RACING_B51RACINGTRCONTROL__SETVISIBLE_OFFSET UNITYSDK_OFFSET(0xC8982C0)
#define RPG_CLIENT_B51RACING_B51RACINGTRCONTROL__STARTFADEOUT_OFFSET UNITYSDK_OFFSET(0xC898500)
#define RPG_CLIENT_B51RACING_B51RACINGTRCONTROL__STOPVOICE_OFFSET UNITYSDK_OFFSET(0xC898220)
#define RPG_CLIENT_B51RACING_B51RACINGTRCONTROL__TRYREGISTERTICK_OFFSET UNITYSDK_OFFSET(0xC898D90)

namespace RPG::Client::B51Racing
{
	inline static constexpr unsigned int B51RacingTRControl_TypeDefinitionIndex = 80577;

	class B51RacingTRControl : public ::Sofa::BaseSofaControl
	{
	public:
		// static const ::System::Single BETA_MINIMUM_SHOW_DURATION; // 0x0
		// static const ::System::String* FADE_IN_ANIM_CLIP; // 0x0
		// static const ::System::String* FADE_OUT_ANIM_CLIP; // 0x0
		::UnityEngine::CanvasGroup* _RootCanvasGroup; // 0x38
		::UnityEngine::Animation* _Animation; // 0x40
		::UnityEngine::UI::Image* _Icon; // 0x48
		::RPG::Client::LocalizedText* _TitleText; // 0x50
		::RPG::Client::LocalizedText* _ContentText; // 0x58
		::Class_1_243AEB71B7D38FD2* _MatchFlowService; // 0x60
		::RPG::Client::B51Racing::B51RacingTRControl_ETRToastState _ToastState; // 0x68
		::System::Single _StateElapsedTime; // 0x6C
		::System::Single _FadeOutDuration; // 0x70
		::System::Single _MinimumShowDuration; // 0x74
		::System::UInt32 _VoicePlayingID; // 0x78
		::System::Boolean _IsPostingVoice; // 0x7C
		::System::Boolean _IsFadeOutPending; // 0x7D
		::System::Boolean _VoiceFinishedBeforePostReturned; // 0x7E
		::System::Boolean _IsPresenting; // 0x7F

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_B51RACING_B51RACINGTRCONTROL__CTOR_OFFSET))(this);
		}

		::System::Void SetupView()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_B51RACING_B51RACINGTRCONTROL_SETUPVIEW_OFFSET))(this);
		}

		::System::Void Hide()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_B51RACING_B51RACINGTRCONTROL_HIDE_OFFSET))(this);
		}

		::System::Void Tick(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_B51RACING_B51RACINGTRCONTROL_TICK_OFFSET))(this, a1);
		}

		::System::Void OnTREventTriggered(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_B51RACING_B51RACINGTRCONTROL_ONTREVENTTRIGGERED_OFFSET))(this, a1);
		}

		static ::System::Single _GetTemporaryBetaMinimumShowDuration()
		{
			return ((::System::Single(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_B51RACING_B51RACINGTRCONTROL__GETTEMPORARYBETAMINIMUMSHOWDURATION_OFFSET))();
		}

		::System::Void _PlayToast()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_B51RACING_B51RACINGTRCONTROL__PLAYTOAST_OFFSET))(this);
		}

		::System::Void _PlayVoice()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_B51RACING_B51RACINGTRCONTROL__PLAYVOICE_OFFSET))(this);
		}

		::System::Void _OnVoiceFinished(::System::UInt32 a1, ::AkCallbackType a2, ::AkCallbackInfo* a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::AkCallbackType, ::AkCallbackInfo*))((::PBYTE)hIl2Cpp + RPG_CLIENT_B51RACING_B51RACINGTRCONTROL__ONVOICEFINISHED_OFFSET))(this, a1, a2, a3);
		}

		::System::Void _StartFadeOut()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_B51RACING_B51RACINGTRCONTROL__STARTFADEOUT_OFFSET))(this);
		}

		::System::Single _PlayAnimation(::System::String* a1)
		{
			return ((::System::Single(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_B51RACING_B51RACINGTRCONTROL__PLAYANIMATION_OFFSET))(this, a1);
		}

		::System::Void _FinishOrNotifyPresentation(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_B51RACING_B51RACINGTRCONTROL__FINISHORNOTIFYPRESENTATION_OFFSET))(this, a1);
		}

		::System::Void _FinishPresentationIfNeeded(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_B51RACING_B51RACINGTRCONTROL__FINISHPRESENTATIONIFNEEDED_OFFSET))(this, a1);
		}

		::System::Void _SetVisible(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_B51RACING_B51RACINGTRCONTROL__SETVISIBLE_OFFSET))(this, a1);
		}

		::System::Void _StopVoice()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_B51RACING_B51RACINGTRCONTROL__STOPVOICE_OFFSET))(this);
		}

		::System::Boolean _TryRegisterTick()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_B51RACING_B51RACINGTRCONTROL__TRYREGISTERTICK_OFFSET))(this);
		}

		::Class_1_243AEB71B7D38FD2* _GetMatchFlowService()
		{
			return ((::Class_1_243AEB71B7D38FD2*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_B51RACING_B51RACINGTRCONTROL__GETMATCHFLOWSERVICE_OFFSET))(this);
		}

		::Class_0_16E4307DCC419505_1402* _GetConfigRepository()
		{
			return ((::Class_0_16E4307DCC419505_1402*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_B51RACING_B51RACINGTRCONTROL__GETCONFIGREPOSITORY_OFFSET))(this);
		}

		::System::Void _OnInitializeComponent()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_B51RACING_B51RACINGTRCONTROL__ONINITIALIZECOMPONENT_OFFSET))(this);
		}

		::System::Void _OnBindViewModel()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_B51RACING_B51RACINGTRCONTROL__ONBINDVIEWMODEL_OFFSET))(this);
		}

		::System::Void _OnDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_B51RACING_B51RACINGTRCONTROL__ONDESTROY_OFFSET))(this);
		}
	};
}

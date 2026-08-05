#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_3EDF246633A325B0.h"
#include "unitysdk/Enum_3_8E90989A26BC6232.h"
#include "unitysdk/Foundation/Coroutine/CoroutineHandle.h"
#include "unitysdk/MoleMole/InputActionEvent.h"
#include "unitysdk/MoleMole/UIBaseChatPlusController.h"

class Class_1_2D5DADE6FF36AA79;
class Class_1_76E0C108A0F7FA7D;
class Class_2_ACF3AD21D9602888;
class Class_2_CEC585D0736F3660;
class Class_3_848BA58F81F05F34_1;
namespace MoleMole { class ChatPlusPlayContext; }
namespace MoleMole { class UIControlReference; }
namespace MoleMole { class UIControllerContextBase; }
namespace MoleMole::GalGame { class PlayChatPlusStoryNode; }
namespace MoleMole::GalGame { class TagAniPair; }
namespace MoleMole::GalGame { class TagGroupAniPair; }
namespace MoleMole::GalGame { class TimelinePair; }
namespace System { class Action; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_UICHATPLUSPAGECONTROLLER_ADDONFINISHCALLBACK_OFFSET UNITYSDK_OFFSET(0x18A9A910)
#define MOLEMOLE_UICHATPLUSPAGECONTROLLER_CLOSECHILDWITHOUTNARRATOR_OFFSET UNITYSDK_OFFSET(0x18A9AA10)
#define MOLEMOLE_UICHATPLUSPAGECONTROLLER_DOSTARTSKIPCHAT_OFFSET UNITYSDK_OFFSET(0x18A9A730)
#define MOLEMOLE_UICHATPLUSPAGECONTROLLER_ENSUREONGOINGFADEIN_OFFSET UNITYSDK_OFFSET(0x18A9A350)
#define MOLEMOLE_UICHATPLUSPAGECONTROLLER_FINISH_OFFSET UNITYSDK_OFFSET(0x18A99900)
#define MOLEMOLE_UICHATPLUSPAGECONTROLLER_GETSPEAKERFACIALKEY_OFFSET UNITYSDK_OFFSET(0x18A9B840)
#define MOLEMOLE_UICHATPLUSPAGECONTROLLER_GET_HOTSWITCHROOTLAYERSTATE_OFFSET UNITYSDK_OFFSET(0x1A6437B0)
#define MOLEMOLE_UICHATPLUSPAGECONTROLLER_GET_WINDOWTYPE_OFFSET UNITYSDK_OFFSET(0x1A6437A0)
#define MOLEMOLE_UICHATPLUSPAGECONTROLLER_INITVIEW_OFFSET UNITYSDK_OFFSET(0x18A99200)
#define MOLEMOLE_UICHATPLUSPAGECONTROLLER_MANUALSTART_OFFSET UNITYSDK_OFFSET(0x18A99190)
#define MOLEMOLE_UICHATPLUSPAGECONTROLLER_ONCONTINUEBTNCLICKED_OFFSET UNITYSDK_OFFSET(0x18A9AE70)
#define MOLEMOLE_UICHATPLUSPAGECONTROLLER_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x1A6437C0)
#define MOLEMOLE_UICHATPLUSPAGECONTROLLER_ONINPUTACTION_OFFSET UNITYSDK_OFFSET(0x1A643F90)
#define MOLEMOLE_UICHATPLUSPAGECONTROLLER_ONNODERUN_OFFSET UNITYSDK_OFFSET(0x18A9A650)
#define MOLEMOLE_UICHATPLUSPAGECONTROLLER_ONSHOW_OFFSET UNITYSDK_OFFSET(0x1A643DC0)
#define MOLEMOLE_UICHATPLUSPAGECONTROLLER_ONUICLOSE_OFFSET UNITYSDK_OFFSET(0x1A644340)
#define MOLEMOLE_UICHATPLUSPAGECONTROLLER_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x18A9C7F0)
#define MOLEMOLE_UICHATPLUSPAGECONTROLLER_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x1A643850)
#define MOLEMOLE_UICHATPLUSPAGECONTROLLER_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x1A643CE0)
#define MOLEMOLE_UICHATPLUSPAGECONTROLLER_PLAYNPCANIMATION_OFFSET UNITYSDK_OFFSET(0x18A99F20)
#define MOLEMOLE_UICHATPLUSPAGECONTROLLER_PLAYSTORYNODE_OFFSET UNITYSDK_OFFSET(0x18A99CC0)
#define MOLEMOLE_UICHATPLUSPAGECONTROLLER_PLAYTEXT_OFFSET UNITYSDK_OFFSET(0x18A9B0C0)
#define MOLEMOLE_UICHATPLUSPAGECONTROLLER_PLAYTIMELINE_OFFSET UNITYSDK_OFFSET(0x18A9C050)
#define MOLEMOLE_UICHATPLUSPAGECONTROLLER_POSTSOUND_OFFSET UNITYSDK_OFFSET(0x18A9BDA0)
#define MOLEMOLE_UICHATPLUSPAGECONTROLLER_POSTVOICE_OFFSET UNITYSDK_OFFSET(0x18A9B1D0)
#define MOLEMOLE_UICHATPLUSPAGECONTROLLER_SETEXITTRANSITION_OFFSET UNITYSDK_OFFSET(0x18A9A9C0)
#define MOLEMOLE_UICHATPLUSPAGECONTROLLER_SETNARRATORACTIVE_OFFSET UNITYSDK_OFFSET(0x18A99EA0)
#define MOLEMOLE_UICHATPLUSPAGECONTROLLER_SETONGOINGACTIVE_OFFSET UNITYSDK_OFFSET(0x18A99E20)
#define MOLEMOLE_UICHATPLUSPAGECONTROLLER_SETUIWINDOWSETTING_OFFSET UNITYSDK_OFFSET(0x1A643F20)
#define MOLEMOLE_UICHATPLUSPAGECONTROLLER_SHOWNARRATORSCREEN_OFFSET UNITYSDK_OFFSET(0x18A9C660)
#define MOLEMOLE_UICHATPLUSPAGECONTROLLER_SKIPSTORYPLAY_OFFSET UNITYSDK_OFFSET(0x18A9A530)
#define MOLEMOLE_UICHATPLUSPAGECONTROLLER_STARTSKIPCHAT_OFFSET UNITYSDK_OFFSET(0x18A9A790)
#define MOLEMOLE_UICHATPLUSPAGECONTROLLER_STOPALLTIMELINE_OFFSET UNITYSDK_OFFSET(0x18A9C2E0)
#define MOLEMOLE_UICHATPLUSPAGECONTROLLER_STOPCURRENTSOUND_OFFSET UNITYSDK_OFFSET(0x18A9BF10)
#define MOLEMOLE_UICHATPLUSPAGECONTROLLER_STOPCURRENTVOICE_OFFSET UNITYSDK_OFFSET(0x18A9B6E0)
#define MOLEMOLE_UICHATPLUSPAGECONTROLLER_STOPTIMELINEBYKEY_OFFSET UNITYSDK_OFFSET(0x18A9C4E0)
#define MOLEMOLE_UICHATPLUSPAGECONTROLLER_UPDATEPLAY_OFFSET UNITYSDK_OFFSET(0x18A99840)
#define MOLEMOLE_UICHATPLUSPAGECONTROLLER_UPDATESKIPSTATE_OFFSET UNITYSDK_OFFSET(0x18A9A6A0)
#define MOLEMOLE_UICHATPLUSPAGECONTROLLER_UPDATE_OFFSET UNITYSDK_OFFSET(0x1A6442B0)
#define MOLEMOLE_UICHATPLUSPAGECONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x18A9CC20)
#define MOLEMOLE_UICHATPLUSPAGECONTROLLER__INITVIEW_B__27_0_OFFSET UNITYSDK_OFFSET(0x18A9CD40)
#define MOLEMOLE_UICHATPLUSPAGECONTROLLER__ONCONTINUEBTNCLICKED_B__43_0_OFFSET UNITYSDK_OFFSET(0x18A9CD50)
#define MOLEMOLE_UICHATPLUSPAGECONTROLLER__ONUIINIT_B__18_0_OFFSET UNITYSDK_OFFSET(0x18A9CD30)
#define MOLEMOLE_UICHATPLUSPAGECONTROLLER___BASE_FINISH_OFFSET UNITYSDK_OFFSET(0x18A9CDC0)
#define MOLEMOLE_UICHATPLUSPAGECONTROLLER___BASE_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x18A9CE50)
#define MOLEMOLE_UICHATPLUSPAGECONTROLLER___BASE_ONINPUTACTION_OFFSET UNITYSDK_OFFSET(0x18A9CEE0)
#define MOLEMOLE_UICHATPLUSPAGECONTROLLER___BASE_ONNODERUN_OFFSET UNITYSDK_OFFSET(0x18A9CF10)
#define MOLEMOLE_UICHATPLUSPAGECONTROLLER___BASE_ONSHOW_OFFSET UNITYSDK_OFFSET(0x18A9CFA0)
#define MOLEMOLE_UICHATPLUSPAGECONTROLLER___BASE_ONUICLOSE_OFFSET UNITYSDK_OFFSET(0x18A9CFB0)
#define MOLEMOLE_UICHATPLUSPAGECONTROLLER___BASE_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x18A9D070)
#define MOLEMOLE_UICHATPLUSPAGECONTROLLER___BASE_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x18A9D080)
#define MOLEMOLE_UICHATPLUSPAGECONTROLLER___BASE_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x18A9D090)
#define MOLEMOLE_UICHATPLUSPAGECONTROLLER___BASE_SETUIWINDOWSETTING_OFFSET UNITYSDK_OFFSET(0x18A9D120)
#define MOLEMOLE_UICHATPLUSPAGECONTROLLER___BASE_STARTSKIPCHAT_OFFSET UNITYSDK_OFFSET(0x18A9D1B0)
#define MOLEMOLE_UICHATPLUSPAGECONTROLLER___BASE_UPDATESKIPSTATE_OFFSET UNITYSDK_OFFSET(0x18A9D250)

namespace MoleMole
{
	inline static constexpr unsigned int UIChatPlusPageController_TypeDefinitionIndex = 46950;

	class UIChatPlusPageController : public ::MoleMole::UIBaseChatPlusController
	{
	public:
		// static const ::System::String* SKIP_TALK_TRIGGER; // 0x0
		::Class_1_76E0C108A0F7FA7D* _chatSkipBtnItem; // 0x3D8
		::System::Int64 _currChatUid; // 0x3E0
		::MoleMole::ChatPlusPlayContext* _plusOpenContext; // 0x3E8
		::System::Action_1<::Class_2_CEC585D0736F3660*>* _callback; // 0x3F0
		::System::String* CurrentTimelineKey; // 0x3F8
		::System::Int32 _exitTransitionID; // 0x400
		::System::Single _btnTimer; // 0x404
		::System::UInt32 _currentPendingVoice; // 0x408
		::System::UInt32 _currentPendingSound; // 0x40C
		::System::Collections::Generic::List_1<::System::String*>* _playingTimeLine; // 0x410
		::System::Boolean _withoutPlayFadeIn; // 0x418
		::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>* galTalkRealTextDic; // 0x420
		::Foundation::Coroutine::CoroutineHandle _playStoryPlayAvatarDelay; // 0x428
		::Foundation::Coroutine::CoroutineHandle _contentAniFadeInDelay; // 0x42C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UICHATPLUSPAGECONTROLLER__CTOR_OFFSET))(this);
		}

		::Enum_3_3EDF246633A325B0 get_windowType()
		{
			return ((::Enum_3_3EDF246633A325B0(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UICHATPLUSPAGECONTROLLER_GET_WINDOWTYPE_OFFSET))(this);
		}

		::Enum_3_8E90989A26BC6232 get_HotSwitchRootLayerState()
		{
			return ((::Enum_3_8E90989A26BC6232(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UICHATPLUSPAGECONTROLLER_GET_HOTSWITCHROOTLAYERSTATE_OFFSET))(this);
		}

		::System::Void OnCreateView(::MoleMole::UIControlReference* controlReference)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UICHATPLUSPAGECONTROLLER_ONCREATEVIEW_OFFSET))(this, controlReference);
		}

		::System::Void OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UICHATPLUSPAGECONTROLLER_ONUIINIT_OFFSET))(this);
		}

		::System::Void OnUIOpen(::MoleMole::UIControllerContextBase* openCtrlContext)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UICHATPLUSPAGECONTROLLER_ONUIOPEN_OFFSET))(this, openCtrlContext);
		}

		::System::Void OnShow(::MoleMole::UIControllerContextBase* showCtrlContext)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UICHATPLUSPAGECONTROLLER_ONSHOW_OFFSET))(this, showCtrlContext);
		}

		::System::Void SetUIWindowSetting()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UICHATPLUSPAGECONTROLLER_SETUIWINDOWSETTING_OFFSET))(this);
		}

		::System::Boolean OnInputAction(::MoleMole::InputActionEvent inputAction)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::InputActionEvent))((::PBYTE)hIl2Cpp + MOLEMOLE_UICHATPLUSPAGECONTROLLER_ONINPUTACTION_OFFSET))(this, inputAction);
		}

		::System::Void Update()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UICHATPLUSPAGECONTROLLER_UPDATE_OFFSET))(this);
		}

		::System::Void OnUIClose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UICHATPLUSPAGECONTROLLER_ONUICLOSE_OFFSET))(this);
		}

		::System::Void ManualStart()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UICHATPLUSPAGECONTROLLER_MANUALSTART_OFFSET))(this);
		}

		::System::Void UpdatePlay(::System::Single deltaTime)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_UICHATPLUSPAGECONTROLLER_UPDATEPLAY_OFFSET))(this, deltaTime);
		}

		::System::Void InitView(::System::Int32 id)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UICHATPLUSPAGECONTROLLER_INITVIEW_OFFSET))(this, id);
		}

		::System::Void PlayStoryNode(::MoleMole::GalGame::PlayChatPlusStoryNode* config, ::System::Action_1<::System::Boolean>* finishFunc, ::System::Action* voiceEndFunc, ::System::Boolean isSkip)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::GalGame::PlayChatPlusStoryNode*, ::System::Action_1<::System::Boolean>*, ::System::Action*, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UICHATPLUSPAGECONTROLLER_PLAYSTORYNODE_OFFSET))(this, config, finishFunc, voiceEndFunc, isSkip);
		}

		::System::Void SetOnGoingActive(::System::Boolean isActive)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UICHATPLUSPAGECONTROLLER_SETONGOINGACTIVE_OFFSET))(this, isActive);
		}

		::System::Void SetNarratorActive(::System::Boolean isActive)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UICHATPLUSPAGECONTROLLER_SETNARRATORACTIVE_OFFSET))(this, isActive);
		}

		::System::Void PlayNpcAnimation(::System::Collections::Generic::List_1<::MoleMole::GalGame::TagAniPair*>* tagAniParams, ::System::Collections::Generic::List_1<::MoleMole::GalGame::TagGroupAniPair*>* groupAniParams, ::System::Int32 facialActionID, ::System::Int32 speakerNpcTag, ::System::String* speakerMember)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::MoleMole::GalGame::TagAniPair*>*, ::System::Collections::Generic::List_1<::MoleMole::GalGame::TagGroupAniPair*>*, ::System::Int32, ::System::Int32, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_UICHATPLUSPAGECONTROLLER_PLAYNPCANIMATION_OFFSET))(this, tagAniParams, groupAniParams, facialActionID, speakerNpcTag, speakerMember);
		}

		::System::Void EnsureOnGoingFadeIn(::System::Action* callback)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + MOLEMOLE_UICHATPLUSPAGECONTROLLER_ENSUREONGOINGFADEIN_OFFSET))(this, callback);
		}

		::System::Void SkipStoryPlay()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UICHATPLUSPAGECONTROLLER_SKIPSTORYPLAY_OFFSET))(this);
		}

		::System::Void OnNodeRun(::Class_1_2D5DADE6FF36AA79* node)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_2D5DADE6FF36AA79*))((::PBYTE)hIl2Cpp + MOLEMOLE_UICHATPLUSPAGECONTROLLER_ONNODERUN_OFFSET))(this, node);
		}

		::System::Void UpdateSkipState(::Class_1_2D5DADE6FF36AA79* node)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_2D5DADE6FF36AA79*))((::PBYTE)hIl2Cpp + MOLEMOLE_UICHATPLUSPAGECONTROLLER_UPDATESKIPSTATE_OFFSET))(this, node);
		}

		::System::Void DoStartSkipChat()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UICHATPLUSPAGECONTROLLER_DOSTARTSKIPCHAT_OFFSET))(this);
		}

		::System::Void StartSkipChat()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UICHATPLUSPAGECONTROLLER_STARTSKIPCHAT_OFFSET))(this);
		}

		::System::Void AddOnFinishCallback(::System::Action_1<::Class_2_CEC585D0736F3660*>* _action)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_1<::Class_2_CEC585D0736F3660*>*))((::PBYTE)hIl2Cpp + MOLEMOLE_UICHATPLUSPAGECONTROLLER_ADDONFINISHCALLBACK_OFFSET))(this, _action);
		}

		::System::Void SetExitTransition(::System::Int32 transitionID)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UICHATPLUSPAGECONTROLLER_SETEXITTRANSITION_OFFSET))(this, transitionID);
		}

		::System::Void CloseChildWithOutNarrator()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UICHATPLUSPAGECONTROLLER_CLOSECHILDWITHOUTNARRATOR_OFFSET))(this);
		}

		::System::Void OnContinueBtnClicked()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UICHATPLUSPAGECONTROLLER_ONCONTINUEBTNCLICKED_OFFSET))(this);
		}

		::System::Void Finish()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UICHATPLUSPAGECONTROLLER_FINISH_OFFSET))(this);
		}

		::System::Void PlayText(::System::String* playText, ::System::Single speed, ::System::String* realText, ::System::Single delay, ::System::Int32 recordIndex, ::Class_2_ACF3AD21D9602888* seqPlayable)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Single, ::System::String*, ::System::Single, ::System::Int32, ::Class_2_ACF3AD21D9602888*))((::PBYTE)hIl2Cpp + MOLEMOLE_UICHATPLUSPAGECONTROLLER_PLAYTEXT_OFFSET))(this, playText, speed, realText, delay, recordIndex, seqPlayable);
		}

		::System::Void PostVoice(::MoleMole::GalGame::PlayChatPlusStoryNode* config, ::Class_3_848BA58F81F05F34_1* endCallBack)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::GalGame::PlayChatPlusStoryNode*, ::Class_3_848BA58F81F05F34_1*))((::PBYTE)hIl2Cpp + MOLEMOLE_UICHATPLUSPAGECONTROLLER_POSTVOICE_OFFSET))(this, config, endCallBack);
		}

		::System::String* GetSpeakerFacialKey(::MoleMole::GalGame::PlayChatPlusStoryNode* config)
		{
			return ((::System::String*(*)(::PVOID, ::MoleMole::GalGame::PlayChatPlusStoryNode*))((::PBYTE)hIl2Cpp + MOLEMOLE_UICHATPLUSPAGECONTROLLER_GETSPEAKERFACIALKEY_OFFSET))(this, config);
		}

		::System::Void PostSound(::System::String* eventName, ::Class_3_848BA58F81F05F34_1* endCallBack)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::Class_3_848BA58F81F05F34_1*))((::PBYTE)hIl2Cpp + MOLEMOLE_UICHATPLUSPAGECONTROLLER_POSTSOUND_OFFSET))(this, eventName, endCallBack);
		}

		::System::Void StopCurrentVoice()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UICHATPLUSPAGECONTROLLER_STOPCURRENTVOICE_OFFSET))(this);
		}

		::System::Void StopCurrentSound()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UICHATPLUSPAGECONTROLLER_STOPCURRENTSOUND_OFFSET))(this);
		}

		::System::Void PlayTimeLine(::System::Collections::Generic::List_1<::MoleMole::GalGame::TimelinePair*>* TimelineParams)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::MoleMole::GalGame::TimelinePair*>*))((::PBYTE)hIl2Cpp + MOLEMOLE_UICHATPLUSPAGECONTROLLER_PLAYTIMELINE_OFFSET))(this, TimelineParams);
		}

		::System::Void StopAllTimeLine(::System::Boolean isDestroy)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UICHATPLUSPAGECONTROLLER_STOPALLTIMELINE_OFFSET))(this, isDestroy);
		}

		::System::Void StopTimeLineByKey(::System::String* timelineKey, ::System::Boolean isDestroy)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UICHATPLUSPAGECONTROLLER_STOPTIMELINEBYKEY_OFFSET))(this, timelineKey, isDestroy);
		}

		::System::Void ShowNarratorScreen(::System::String* textKey, ::System::Boolean anim, ::System::Action* onFinished, ::System::Single delay, ::System::Single speakSpeed, ::System::String* soundEvent, ::System::Action* onFadeInFinished)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Boolean, ::System::Action*, ::System::Single, ::System::Single, ::System::String*, ::System::Action*))((::PBYTE)hIl2Cpp + MOLEMOLE_UICHATPLUSPAGECONTROLLER_SHOWNARRATORSCREEN_OFFSET))(this, textKey, anim, onFinished, delay, speakSpeed, soundEvent, onFadeInFinished);
		}

		::System::Void OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UICHATPLUSPAGECONTROLLER_ONUIDESTROY_OFFSET))(this);
		}

		::System::Boolean _OnUIInit_b__18_0()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UICHATPLUSPAGECONTROLLER__ONUIINIT_B__18_0_OFFSET))(this);
		}

		::System::Void _InitView_b__27_0(::System::Int64 uid)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int64))((::PBYTE)hIl2Cpp + MOLEMOLE_UICHATPLUSPAGECONTROLLER__INITVIEW_B__27_0_OFFSET))(this, uid);
		}

		::System::Void _OnContinueBtnClicked_b__43_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UICHATPLUSPAGECONTROLLER__ONCONTINUEBTNCLICKED_B__43_0_OFFSET))(this);
		}

		::System::Void __base_Finish()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UICHATPLUSPAGECONTROLLER___BASE_FINISH_OFFSET))(this);
		}

		::System::Void __base_OnCreateView(::MoleMole::UIControlReference* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UICHATPLUSPAGECONTROLLER___BASE_ONCREATEVIEW_OFFSET))(this, P0);
		}

		::System::Boolean __base_OnInputAction(::MoleMole::InputActionEvent P0)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::InputActionEvent))((::PBYTE)hIl2Cpp + MOLEMOLE_UICHATPLUSPAGECONTROLLER___BASE_ONINPUTACTION_OFFSET))(this, P0);
		}

		::System::Void __base_OnNodeRun(::Class_1_2D5DADE6FF36AA79* P0)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_2D5DADE6FF36AA79*))((::PBYTE)hIl2Cpp + MOLEMOLE_UICHATPLUSPAGECONTROLLER___BASE_ONNODERUN_OFFSET))(this, P0);
		}

		::System::Void __base_OnShow(::MoleMole::UIControllerContextBase* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UICHATPLUSPAGECONTROLLER___BASE_ONSHOW_OFFSET))(this, P0);
		}

		::System::Void __base_OnUIClose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UICHATPLUSPAGECONTROLLER___BASE_ONUICLOSE_OFFSET))(this);
		}

		::System::Void __base_OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UICHATPLUSPAGECONTROLLER___BASE_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void __base_OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UICHATPLUSPAGECONTROLLER___BASE_ONUIINIT_OFFSET))(this);
		}

		::System::Void __base_OnUIOpen(::MoleMole::UIControllerContextBase* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UICHATPLUSPAGECONTROLLER___BASE_ONUIOPEN_OFFSET))(this, P0);
		}

		::System::Void __base_SetUIWindowSetting()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UICHATPLUSPAGECONTROLLER___BASE_SETUIWINDOWSETTING_OFFSET))(this);
		}

		::System::Void __base_StartSkipChat()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UICHATPLUSPAGECONTROLLER___BASE_STARTSKIPCHAT_OFFSET))(this);
		}

		::System::Void __base_UpdateSkipState(::Class_1_2D5DADE6FF36AA79* P0)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_2D5DADE6FF36AA79*))((::PBYTE)hIl2Cpp + MOLEMOLE_UICHATPLUSPAGECONTROLLER___BASE_UPDATESKIPSTATE_OFFSET))(this, P0);
		}
	};
}

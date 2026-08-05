#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_3EDF246633A325B0.h"
#include "unitysdk/Foundation/Coroutine/CoroutineHandle.h"
#include "unitysdk/MoleMole/GalGame/InLevelChatEntitySlot.h"
#include "unitysdk/MoleMole/GalGame/MainCityChatNPCLocation.h"
#include "unitysdk/MoleMole/GalGame/ModelConfigTemplateType.h"
#include "unitysdk/MoleMole/InputActionEvent.h"
#include "unitysdk/MoleMole/UIBaseChatPlayController.h"
#include "unitysdk/System/ValueTuple_2.h"

class Class_0_16E4307DCC419505_8;
class Class_1_2D5DADE6FF36AA79;
class Class_1_76E0C108A0F7FA7D;
class Class_2_147177123441150A;
class Class_2_701D0105B8E2A1C9;
class Class_2_79AE422BA06F6D26_224;
class Class_2_79AE422BA06F6D26_224_Class_2_99BC69CB30FB4283_1;
class Class_2_ACF3AD21D9602888;
class Class_2_B4378B46E0020E85;
class Class_2_CEC585D0736F3660;
class Class_3_848BA58F81F05F34;
class Class_3_848BA58F81F05F34_1;
namespace MoleMole { class UIControlReference; }
namespace MoleMole { class UIControllerContextBase; }
namespace MoleMole::Battle { class Entity; }
namespace MoleMole::GalGame { class MainCityChatBranchNode; }
namespace MoleMole::GalGame { class MainCityChatInLevelPlayStoryNode; }
namespace MoleMole::GalGame { class MainCityChatPlayStoryNode; }
namespace MoleMole::GalGame { class MainCityChatTransitionDisplayItem; }
namespace MoleMole::GalGame { class SpeakerActionCfg; }
namespace System { class Action; }
namespace System { class EventArgs; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections { class IEnumerator; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Animation; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine::UI::Extension { class UILocalizationText; }
template <typename T> class Class_2_0D31A1661D004892;

#define MOLEMOLE_UIMAINCITYCHATPLAYWIDGETCONTROLLER_ADDONFINISHCALLBACK_OFFSET UNITYSDK_OFFSET(0x168B64B0)
#define MOLEMOLE_UIMAINCITYCHATPLAYWIDGETCONTROLLER_CHECKAVATARGREY_OFFSET UNITYSDK_OFFSET(0x168B7460)
#define MOLEMOLE_UIMAINCITYCHATPLAYWIDGETCONTROLLER_DOSTARTSKIPCHAT_OFFSET UNITYSDK_OFFSET(0x168B2C40)
#define MOLEMOLE_UIMAINCITYCHATPLAYWIDGETCONTROLLER_ENSUREPREVIOUSNODEFADEOUT_OFFSET UNITYSDK_OFFSET(0x168B8F20)
#define MOLEMOLE_UIMAINCITYCHATPLAYWIDGETCONTROLLER_FINISH_OFFSET UNITYSDK_OFFSET(0x168B57C0)
#define MOLEMOLE_UIMAINCITYCHATPLAYWIDGETCONTROLLER_GETORCREATECHATBTN_OFFSET UNITYSDK_OFFSET(0x168B6820)
#define MOLEMOLE_UIMAINCITYCHATPLAYWIDGETCONTROLLER_GETSPEAKERFACIALKEY_OFFSET UNITYSDK_OFFSET(0x168BA3D0)
#define MOLEMOLE_UIMAINCITYCHATPLAYWIDGETCONTROLLER_GET_INPUTHANDLELAYER_OFFSET UNITYSDK_OFFSET(0x168B2350)
#define MOLEMOLE_UIMAINCITYCHATPLAYWIDGETCONTROLLER_GET_WINDOWTYPE_OFFSET UNITYSDK_OFFSET(0x168B2360)
#define MOLEMOLE_UIMAINCITYCHATPLAYWIDGETCONTROLLER_INITVIEW_OFFSET UNITYSDK_OFFSET(0x168B31C0)
#define MOLEMOLE_UIMAINCITYCHATPLAYWIDGETCONTROLLER_INLEVELPLAYSTORYNODE_OFFSET UNITYSDK_OFFSET(0x168BB140)
#define MOLEMOLE_UIMAINCITYCHATPLAYWIDGETCONTROLLER_JUMPSECTIONFORBRANCH_OFFSET UNITYSDK_OFFSET(0x168B8720)
#define MOLEMOLE_UIMAINCITYCHATPLAYWIDGETCONTROLLER_MANUALSTART_OFFSET UNITYSDK_OFFSET(0x168B3150)
#define MOLEMOLE_UIMAINCITYCHATPLAYWIDGETCONTROLLER_ONAUTOBTNCLICKED_OFFSET UNITYSDK_OFFSET(0x168B5770)
#define MOLEMOLE_UIMAINCITYCHATPLAYWIDGETCONTROLLER_ONCONTINUEBTNCLICKED_OFFSET UNITYSDK_OFFSET(0x168B5570)
#define MOLEMOLE_UIMAINCITYCHATPLAYWIDGETCONTROLLER_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x168B3900)
#define MOLEMOLE_UIMAINCITYCHATPLAYWIDGETCONTROLLER_ONINPUTACTION_OFFSET UNITYSDK_OFFSET(0x168B4FC0)
#define MOLEMOLE_UIMAINCITYCHATPLAYWIDGETCONTROLLER_ONINTERACTFINISH_OFFSET UNITYSDK_OFFSET(0x168B62F0)
#define MOLEMOLE_UIMAINCITYCHATPLAYWIDGETCONTROLLER_ONLAYOUTPLATFORMCHANGED_OFFSET UNITYSDK_OFFSET(0x168B5330)
#define MOLEMOLE_UIMAINCITYCHATPLAYWIDGETCONTROLLER_ONNODERUN_OFFSET UNITYSDK_OFFSET(0x168B2F40)
#define MOLEMOLE_UIMAINCITYCHATPLAYWIDGETCONTROLLER_ONSHOW_OFFSET UNITYSDK_OFFSET(0x168B3020)
#define MOLEMOLE_UIMAINCITYCHATPLAYWIDGETCONTROLLER_ONTRANSITIONFADEIN_OFFSET UNITYSDK_OFFSET(0x168B62A0)
#define MOLEMOLE_UIMAINCITYCHATPLAYWIDGETCONTROLLER_ONUICLOSE_OFFSET UNITYSDK_OFFSET(0x168B3F10)
#define MOLEMOLE_UIMAINCITYCHATPLAYWIDGETCONTROLLER_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x168B4BA0)
#define MOLEMOLE_UIMAINCITYCHATPLAYWIDGETCONTROLLER_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x168B2370)
#define MOLEMOLE_UIMAINCITYCHATPLAYWIDGETCONTROLLER_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x168B28B0)
#define MOLEMOLE_UIMAINCITYCHATPLAYWIDGETCONTROLLER_PLAYCHATPANELFADEIN_OFFSET UNITYSDK_OFFSET(0x168B6390)
#define MOLEMOLE_UIMAINCITYCHATPLAYWIDGETCONTROLLER_PLAYCHATPANELFADEOUT_OFFSET UNITYSDK_OFFSET(0x168B6420)
#define MOLEMOLE_UIMAINCITYCHATPLAYWIDGETCONTROLLER_PLAYFADEOUTEFFECT_OFFSET UNITYSDK_OFFSET(0x168B5DB0)
#define MOLEMOLE_UIMAINCITYCHATPLAYWIDGETCONTROLLER_PLAYLASTNODEFINISH_OFFSET UNITYSDK_OFFSET(0x168B8A70)
#define MOLEMOLE_UIMAINCITYCHATPLAYWIDGETCONTROLLER_PLAYSTORYNODE_OFFSET UNITYSDK_OFFSET(0x168B9320)
#define MOLEMOLE_UIMAINCITYCHATPLAYWIDGETCONTROLLER_PLAYTEXT_OFFSET UNITYSDK_OFFSET(0x168BB280)
#define MOLEMOLE_UIMAINCITYCHATPLAYWIDGETCONTROLLER_PLAYVOICEANDSOUNDEVENT_OFFSET UNITYSDK_OFFSET(0x168B9590)
#define MOLEMOLE_UIMAINCITYCHATPLAYWIDGETCONTROLLER_PLAYVOICEWITHDELAY_OFFSET UNITYSDK_OFFSET(0x168B98E0)
#define MOLEMOLE_UIMAINCITYCHATPLAYWIDGETCONTROLLER_POSTFACIAL_OFFSET UNITYSDK_OFFSET(0x168B9480)
#define MOLEMOLE_UIMAINCITYCHATPLAYWIDGETCONTROLLER_POSTSOUNDEVENTCONTINUE_OFFSET UNITYSDK_OFFSET(0x168B9A40)
#define MOLEMOLE_UIMAINCITYCHATPLAYWIDGETCONTROLLER_POSTSOUNDEVENT_OFFSET UNITYSDK_OFFSET(0x168B9BF0)
#define MOLEMOLE_UIMAINCITYCHATPLAYWIDGETCONTROLLER_POSTVOICE_OFFSET UNITYSDK_OFFSET(0x168B9E00)
#define MOLEMOLE_UIMAINCITYCHATPLAYWIDGETCONTROLLER_REPLACEAVATARNAME_OFFSET UNITYSDK_OFFSET(0x168B6560)
#define MOLEMOLE_UIMAINCITYCHATPLAYWIDGETCONTROLLER_SETBLACKSCREENSTATENOANIM_OFFSET UNITYSDK_OFFSET(0x168BAAB0)
#define MOLEMOLE_UIMAINCITYCHATPLAYWIDGETCONTROLLER_SETBLACKSCREENSTATE_OFFSET UNITYSDK_OFFSET(0x168BAC90)
#define MOLEMOLE_UIMAINCITYCHATPLAYWIDGETCONTROLLER_SETEXITTRANSITION_OFFSET UNITYSDK_OFFSET(0x168BAA60)
#define MOLEMOLE_UIMAINCITYCHATPLAYWIDGETCONTROLLER_SETFINISHWITHNEXTINDEX_OFFSET UNITYSDK_OFFSET(0x168B6740)
#define MOLEMOLE_UIMAINCITYCHATPLAYWIDGETCONTROLLER_SETSHOWNAMEFORSLOT_OFFSET UNITYSDK_OFFSET(0x168B6680)
#define MOLEMOLE_UIMAINCITYCHATPLAYWIDGETCONTROLLER_SETTRANSITIONICON_OFFSET UNITYSDK_OFFSET(0x168B75E0)
#define MOLEMOLE_UIMAINCITYCHATPLAYWIDGETCONTROLLER_SHOW3DMODEL_OFFSET UNITYSDK_OFFSET(0x168B9240)
#define MOLEMOLE_UIMAINCITYCHATPLAYWIDGETCONTROLLER_SHOWCUSTOMTRANSITION_OFFSET UNITYSDK_OFFSET(0x168B7C00)
#define MOLEMOLE_UIMAINCITYCHATPLAYWIDGETCONTROLLER_SHOWNARRATORSCREEN_OFFSET UNITYSDK_OFFSET(0x168BA8C0)
#define MOLEMOLE_UIMAINCITYCHATPLAYWIDGETCONTROLLER_SHOWQUESTRECOMMEND_OFFSET UNITYSDK_OFFSET(0x168B9140)
#define MOLEMOLE_UIMAINCITYCHATPLAYWIDGETCONTROLLER_SHOWTRANSITION_OFFSET UNITYSDK_OFFSET(0x168B6D70)
#define MOLEMOLE_UIMAINCITYCHATPLAYWIDGETCONTROLLER_SKIPSTORYPLAY_OFFSET UNITYSDK_OFFSET(0x168B2E20)
#define MOLEMOLE_UIMAINCITYCHATPLAYWIDGETCONTROLLER_STARTSKIPCHAT_OFFSET UNITYSDK_OFFSET(0x168B2CA0)
#define MOLEMOLE_UIMAINCITYCHATPLAYWIDGETCONTROLLER_STOPCURRENTSOUND_OFFSET UNITYSDK_OFFSET(0x168BA6B0)
#define MOLEMOLE_UIMAINCITYCHATPLAYWIDGETCONTROLLER_STOPCURRENTVOICE_OFFSET UNITYSDK_OFFSET(0x168BA480)
#define MOLEMOLE_UIMAINCITYCHATPLAYWIDGETCONTROLLER_TRYNEXT_OFFSET UNITYSDK_OFFSET(0x168B6210)
#define MOLEMOLE_UIMAINCITYCHATPLAYWIDGETCONTROLLER_TRYSKIPTRANSITION_OFFSET UNITYSDK_OFFSET(0x168B69A0)
#define MOLEMOLE_UIMAINCITYCHATPLAYWIDGETCONTROLLER_UPDATEPLAY_OFFSET UNITYSDK_OFFSET(0x168B4F00)
#define MOLEMOLE_UIMAINCITYCHATPLAYWIDGETCONTROLLER_UPDATESKIPSTATE_OFFSET UNITYSDK_OFFSET(0x168B2F90)
#define MOLEMOLE_UIMAINCITYCHATPLAYWIDGETCONTROLLER_UPDATE_OFFSET UNITYSDK_OFFSET(0x168B4DC0)
#define MOLEMOLE_UIMAINCITYCHATPLAYWIDGETCONTROLLER_WAITINTERACT_OFFSET UNITYSDK_OFFSET(0x168B8E90)
#define MOLEMOLE_UIMAINCITYCHATPLAYWIDGETCONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x168BB3E0)
#define MOLEMOLE_UIMAINCITYCHATPLAYWIDGETCONTROLLER__INITVIEW_B__76_0_OFFSET UNITYSDK_OFFSET(0x168BB920)
#define MOLEMOLE_UIMAINCITYCHATPLAYWIDGETCONTROLLER__ONCONTINUEBTNCLICKED_B__32_0_OFFSET UNITYSDK_OFFSET(0x168BB660)
#define MOLEMOLE_UIMAINCITYCHATPLAYWIDGETCONTROLLER__ONUIINIT_B__17_0_OFFSET UNITYSDK_OFFSET(0x168BB630)
#define MOLEMOLE_UIMAINCITYCHATPLAYWIDGETCONTROLLER__ONUIOPEN_B__18_0_OFFSET UNITYSDK_OFFSET(0x168BB640)
#define MOLEMOLE_UIMAINCITYCHATPLAYWIDGETCONTROLLER__ONUIOPEN_B__18_1_OFFSET UNITYSDK_OFFSET(0x168BB650)
#define MOLEMOLE_UIMAINCITYCHATPLAYWIDGETCONTROLLER__PLAYFADEOUTEFFECT_B__40_0_OFFSET UNITYSDK_OFFSET(0x168BB6D0)
#define MOLEMOLE_UIMAINCITYCHATPLAYWIDGETCONTROLLER__PLAYLASTNODEFINISH_B__52_0_OFFSET UNITYSDK_OFFSET(0x168BB6E0)
#define MOLEMOLE_UIMAINCITYCHATPLAYWIDGETCONTROLLER__PLAYLASTNODEFINISH_B__52_1_OFFSET UNITYSDK_OFFSET(0x168BB710)
#define MOLEMOLE_UIMAINCITYCHATPLAYWIDGETCONTROLLER__PLAYLASTNODEFINISH_B__52_2_OFFSET UNITYSDK_OFFSET(0x168BB750)
#define MOLEMOLE_UIMAINCITYCHATPLAYWIDGETCONTROLLER__SETBLACKSCREENSTATE_B__72_0_OFFSET UNITYSDK_OFFSET(0x168BB8E0)
#define MOLEMOLE_UIMAINCITYCHATPLAYWIDGETCONTROLLER__SHOW3DMODEL_G__GETMODELTEMPLATE_56_1_OFFSET UNITYSDK_OFFSET(0x168BB780)
#define MOLEMOLE_UIMAINCITYCHATPLAYWIDGETCONTROLLER__SHOW3DMODEL_G__GETTEXTMAPKEY_56_2_OFFSET UNITYSDK_OFFSET(0x168BB890)
#define MOLEMOLE_UIMAINCITYCHATPLAYWIDGETCONTROLLER__SHOWTRANSITION_G__SETTEXT_47_0_OFFSET UNITYSDK_OFFSET(0x168B78F0)
#define MOLEMOLE_UIMAINCITYCHATPLAYWIDGETCONTROLLER___BASE_FINISH_OFFSET UNITYSDK_OFFSET(0x168BB930)
#define MOLEMOLE_UIMAINCITYCHATPLAYWIDGETCONTROLLER___BASE_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x168BB9C0)
#define MOLEMOLE_UIMAINCITYCHATPLAYWIDGETCONTROLLER___BASE_ONINPUTACTION_OFFSET UNITYSDK_OFFSET(0x168BBA50)
#define MOLEMOLE_UIMAINCITYCHATPLAYWIDGETCONTROLLER___BASE_ONLAYOUTPLATFORMCHANGED_OFFSET UNITYSDK_OFFSET(0x168BBA80)
#define MOLEMOLE_UIMAINCITYCHATPLAYWIDGETCONTROLLER___BASE_ONNODERUN_OFFSET UNITYSDK_OFFSET(0x168BBB10)
#define MOLEMOLE_UIMAINCITYCHATPLAYWIDGETCONTROLLER___BASE_ONSHOW_OFFSET UNITYSDK_OFFSET(0x168BBBA0)
#define MOLEMOLE_UIMAINCITYCHATPLAYWIDGETCONTROLLER___BASE_ONUICLOSE_OFFSET UNITYSDK_OFFSET(0x168BBBB0)
#define MOLEMOLE_UIMAINCITYCHATPLAYWIDGETCONTROLLER___BASE_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x168BBC70)
#define MOLEMOLE_UIMAINCITYCHATPLAYWIDGETCONTROLLER___BASE_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x168BBC80)
#define MOLEMOLE_UIMAINCITYCHATPLAYWIDGETCONTROLLER___BASE_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x168BBC90)
#define MOLEMOLE_UIMAINCITYCHATPLAYWIDGETCONTROLLER___BASE_STARTSKIPCHAT_OFFSET UNITYSDK_OFFSET(0x168BBD20)
#define MOLEMOLE_UIMAINCITYCHATPLAYWIDGETCONTROLLER___BASE_UPDATESKIPSTATE_OFFSET UNITYSDK_OFFSET(0x168BBDC0)

namespace MoleMole
{
	inline static constexpr unsigned int UIMainCityChatPlayWidgetController_TypeDefinitionIndex = 77909;

	class UIMainCityChatPlayWidgetController : public ::MoleMole::UIBaseChatPlayController
	{
	public:
		// static const ::System::String* ContentAniFadeIn; // 0x0
		::Class_2_79AE422BA06F6D26_224* _view; // 0x3C8
		::System::Collections::Generic::List_1<::UnityEngine::UI::Extension::UILocalizationText*>* _trackTexts; // 0x3D0
		::System::Collections::Generic::List_1<::Class_2_B4378B46E0020E85*>* _trackInfoButtons; // 0x3D8
		::System::Collections::Generic::List_1<::Class_2_B4378B46E0020E85*>* _trackConfirmButtons; // 0x3E0
		::System::Collections::Generic::List_1<::UnityEngine::GameObject*>* _trackInfoGameObjects; // 0x3E8
		::System::Collections::Generic::List_1<::UnityEngine::GameObject*>* _trackEmptyGameObjects; // 0x3F0
		::System::Collections::Generic::List_1<::UnityEngine::Animation*>* _trackAcceptAnims; // 0x3F8
		::System::Int32 _interactNpcTag; // 0x400
		::System::Boolean _isInteractSuccess; // 0x404
		::System::UInt32 _currentPendingVoice; // 0x408
		::System::UInt32 _currentPendingSound; // 0x40C
		::Class_1_76E0C108A0F7FA7D* _chatSkipBtnItem; // 0x410
		::Foundation::Coroutine::CoroutineHandle _playStoryPlayAvatarDelay; // 0x418
		::Foundation::Coroutine::CoroutineHandle _contentAniFadeInDelay; // 0x41C
		::Foundation::Coroutine::CoroutineHandle _inLevelCharacterAnimatorDelay; // 0x420
		::System::Single _btnTimer; // 0x424
		::System::Action_1<::Class_2_CEC585D0736F3660*>* _callback; // 0x428
		::System::String* replaceTextMapTD; // 0x430
		::System::String* leftName; // 0x438
		::System::String* rightName; // 0x440
		::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>* galTalkRealTextDic; // 0x448
		::System::Boolean _playAnimation; // 0x450
		::System::Int32 _exitTransitionID; // 0x454
		::System::Boolean _showBlackScreen; // 0x458
		::System::Collections::Generic::Dictionary_2<::System::ValueTuple_2<::System::Int32, ::System::Int32>, ::System::Collections::Generic::List_1<::System::Collections::Generic::List_1<::System::Int32>*>*>* _branchNodeHistory; // 0x460
		::System::Collections::Generic::Dictionary_2<::System::ValueTuple_2<::System::Int32, ::System::Int32>, ::System::Collections::Generic::List_1<::System::Int32>*>* _transitionNodeHistory; // 0x468
		::System::Boolean withoutPlayFadeIn; // 0x470
		::System::Collections::Generic::Dictionary_2<::MoleMole::GalGame::InLevelChatEntitySlot, ::System::String*>* _slotNames; // 0x478
		::System::String* CurrentTimelineKey; // 0x480
		::System::Collections::Generic::List_1<::Class_2_0D31A1661D004892<::Class_2_79AE422BA06F6D26_224_Class_2_99BC69CB30FB4283_1*>*>* _selectChatBtnList; // 0x488
		::System::Int64 _currChatUid; // 0x490

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMAINCITYCHATPLAYWIDGETCONTROLLER__CTOR_OFFSET))(this);
		}

		::System::Int32 get_InputHandleLayer()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMAINCITYCHATPLAYWIDGETCONTROLLER_GET_INPUTHANDLELAYER_OFFSET))(this);
		}

		::Enum_3_3EDF246633A325B0 get_windowType()
		{
			return ((::Enum_3_3EDF246633A325B0(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMAINCITYCHATPLAYWIDGETCONTROLLER_GET_WINDOWTYPE_OFFSET))(this);
		}

		::System::Void OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMAINCITYCHATPLAYWIDGETCONTROLLER_ONUIINIT_OFFSET))(this);
		}

		::System::Void OnUIOpen(::MoleMole::UIControllerContextBase* openCtrlContext)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMAINCITYCHATPLAYWIDGETCONTROLLER_ONUIOPEN_OFFSET))(this, openCtrlContext);
		}

		::System::Void DoStartSkipChat()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMAINCITYCHATPLAYWIDGETCONTROLLER_DOSTARTSKIPCHAT_OFFSET))(this);
		}

		::System::Void StartSkipChat()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMAINCITYCHATPLAYWIDGETCONTROLLER_STARTSKIPCHAT_OFFSET))(this);
		}

		::System::Void SkipStoryPlay()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMAINCITYCHATPLAYWIDGETCONTROLLER_SKIPSTORYPLAY_OFFSET))(this);
		}

		::System::Void OnNodeRun(::Class_1_2D5DADE6FF36AA79* node)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_2D5DADE6FF36AA79*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMAINCITYCHATPLAYWIDGETCONTROLLER_ONNODERUN_OFFSET))(this, node);
		}

		::System::Void UpdateSkipState(::Class_1_2D5DADE6FF36AA79* node)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_2D5DADE6FF36AA79*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMAINCITYCHATPLAYWIDGETCONTROLLER_UPDATESKIPSTATE_OFFSET))(this, node);
		}

		::System::Void OnShow(::MoleMole::UIControllerContextBase* showCtrlContext)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMAINCITYCHATPLAYWIDGETCONTROLLER_ONSHOW_OFFSET))(this, showCtrlContext);
		}

		::System::Void ManualStart()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMAINCITYCHATPLAYWIDGETCONTROLLER_MANUALSTART_OFFSET))(this);
		}

		::System::Void OnCreateView(::MoleMole::UIControlReference* controlReference)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMAINCITYCHATPLAYWIDGETCONTROLLER_ONCREATEVIEW_OFFSET))(this, controlReference);
		}

		::System::Void OnUIClose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMAINCITYCHATPLAYWIDGETCONTROLLER_ONUICLOSE_OFFSET))(this);
		}

		::System::Void OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMAINCITYCHATPLAYWIDGETCONTROLLER_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void Update()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMAINCITYCHATPLAYWIDGETCONTROLLER_UPDATE_OFFSET))(this);
		}

		::System::Boolean OnInputAction(::MoleMole::InputActionEvent inputAction)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::InputActionEvent))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMAINCITYCHATPLAYWIDGETCONTROLLER_ONINPUTACTION_OFFSET))(this, inputAction);
		}

		::System::Void OnLayoutPlatformChanged()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMAINCITYCHATPLAYWIDGETCONTROLLER_ONLAYOUTPLATFORMCHANGED_OFFSET))(this);
		}

		::System::Void OnContinueBtnClicked()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMAINCITYCHATPLAYWIDGETCONTROLLER_ONCONTINUEBTNCLICKED_OFFSET))(this);
		}

		::System::Void OnAutoBtnClicked()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMAINCITYCHATPLAYWIDGETCONTROLLER_ONAUTOBTNCLICKED_OFFSET))(this);
		}

		::System::Void Finish()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMAINCITYCHATPLAYWIDGETCONTROLLER_FINISH_OFFSET))(this);
		}

		::System::Void TryNext()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMAINCITYCHATPLAYWIDGETCONTROLLER_TRYNEXT_OFFSET))(this);
		}

		::System::Void OnTransitionFadeIn(::System::EventArgs* args)
		{
			return ((::System::Void(*)(::PVOID, ::System::EventArgs*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMAINCITYCHATPLAYWIDGETCONTROLLER_ONTRANSITIONFADEIN_OFFSET))(this, args);
		}

		::System::Void OnInteractFinish(::System::EventArgs* args)
		{
			return ((::System::Void(*)(::PVOID, ::System::EventArgs*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMAINCITYCHATPLAYWIDGETCONTROLLER_ONINTERACTFINISH_OFFSET))(this, args);
		}

		::System::Void PlayChatPanelFadeIn()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMAINCITYCHATPLAYWIDGETCONTROLLER_PLAYCHATPANELFADEIN_OFFSET))(this);
		}

		::System::Void PlayChatPanelFadeOut()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMAINCITYCHATPLAYWIDGETCONTROLLER_PLAYCHATPANELFADEOUT_OFFSET))(this);
		}

		::System::Single PlayFadeOutEffect()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMAINCITYCHATPLAYWIDGETCONTROLLER_PLAYFADEOUTEFFECT_OFFSET))(this);
		}

		::System::Void AddOnFinishCallback(::System::Action_1<::Class_2_CEC585D0736F3660*>* _action)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_1<::Class_2_CEC585D0736F3660*>*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMAINCITYCHATPLAYWIDGETCONTROLLER_ADDONFINISHCALLBACK_OFFSET))(this, _action);
		}

		::System::Void ReplaceAvatarName(::MoleMole::GalGame::MainCityChatNPCLocation location, ::System::Int32 avatarId, ::System::String* customName)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::GalGame::MainCityChatNPCLocation, ::System::Int32, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMAINCITYCHATPLAYWIDGETCONTROLLER_REPLACEAVATARNAME_OFFSET))(this, location, avatarId, customName);
		}

		::System::Void SetShowNameForSlot(::MoleMole::GalGame::InLevelChatEntitySlot slot, ::System::String* showName)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::GalGame::InLevelChatEntitySlot, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMAINCITYCHATPLAYWIDGETCONTROLLER_SETSHOWNAMEFORSLOT_OFFSET))(this, slot, showName);
		}

		::System::Void SetFinishWithNextIndex(::Class_1_2D5DADE6FF36AA79* transitionNode, ::System::Int32 bindSectionIndex, ::System::Int32 bindSubSectionIndex)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_2D5DADE6FF36AA79*, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMAINCITYCHATPLAYWIDGETCONTROLLER_SETFINISHWITHNEXTINDEX_OFFSET))(this, transitionNode, bindSectionIndex, bindSubSectionIndex);
		}

		::Class_2_79AE422BA06F6D26_224_Class_2_99BC69CB30FB4283_1* GetOrCreateChatBtn(::System::Int32 index)
		{
			return ((::Class_2_79AE422BA06F6D26_224_Class_2_99BC69CB30FB4283_1*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMAINCITYCHATPLAYWIDGETCONTROLLER_GETORCREATECHATBTN_OFFSET))(this, index);
		}

		::System::Void TrySkipTransition(::Class_1_2D5DADE6FF36AA79* transitionNode, ::System::Collections::Generic::List_1<::MoleMole::GalGame::MainCityChatTransitionDisplayItem*>* transitionList, ::System::Boolean isClickSkip)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_2D5DADE6FF36AA79*, ::System::Collections::Generic::List_1<::MoleMole::GalGame::MainCityChatTransitionDisplayItem*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMAINCITYCHATPLAYWIDGETCONTROLLER_TRYSKIPTRANSITION_OFFSET))(this, transitionNode, transitionList, isClickSkip);
		}

		::System::Void ShowTransition(::Class_1_2D5DADE6FF36AA79* transitionNode, ::System::Collections::Generic::List_1<::MoleMole::GalGame::MainCityChatTransitionDisplayItem*>* transitionList)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_2D5DADE6FF36AA79*, ::System::Collections::Generic::List_1<::MoleMole::GalGame::MainCityChatTransitionDisplayItem*>*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMAINCITYCHATPLAYWIDGETCONTROLLER_SHOWTRANSITION_OFFSET))(this, transitionNode, transitionList);
		}

		::System::Boolean CheckAvatarGrey(::MoleMole::GalGame::MainCityChatTransitionDisplayItem* config)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::GalGame::MainCityChatTransitionDisplayItem*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMAINCITYCHATPLAYWIDGETCONTROLLER_CHECKAVATARGREY_OFFSET))(this, config);
		}

		::System::Void SetTransitionIcon(::Class_2_79AE422BA06F6D26_224_Class_2_99BC69CB30FB4283_1* go, ::MoleMole::GalGame::MainCityChatTransitionDisplayItem* config, ::System::Boolean greyText)
		{
			return ((::System::Void(*)(::PVOID, ::Class_2_79AE422BA06F6D26_224_Class_2_99BC69CB30FB4283_1*, ::MoleMole::GalGame::MainCityChatTransitionDisplayItem*, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMAINCITYCHATPLAYWIDGETCONTROLLER_SETTRANSITIONICON_OFFSET))(this, go, config, greyText);
		}

		::System::Void ShowCustomTransition(::Class_2_147177123441150A* transition)
		{
			return ((::System::Void(*)(::PVOID, ::Class_2_147177123441150A*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMAINCITYCHATPLAYWIDGETCONTROLLER_SHOWCUSTOMTRANSITION_OFFSET))(this, transition);
		}

		::System::Void JumpSectionForBranch(::MoleMole::GalGame::MainCityChatBranchNode* branchConfig)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::GalGame::MainCityChatBranchNode*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMAINCITYCHATPLAYWIDGETCONTROLLER_JUMPSECTIONFORBRANCH_OFFSET))(this, branchConfig);
		}

		::System::Single PlayLastNodeFinish(::UnityEngine::GameObject* nextObj)
		{
			return ((::System::Single(*)(::PVOID, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMAINCITYCHATPLAYWIDGETCONTROLLER_PLAYLASTNODEFINISH_OFFSET))(this, nextObj);
		}

		::System::Collections::IEnumerator* WaitInteract(::Class_2_147177123441150A* transition)
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID, ::Class_2_147177123441150A*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMAINCITYCHATPLAYWIDGETCONTROLLER_WAITINTERACT_OFFSET))(this, transition);
		}

		::System::Single EnsurePreviousNodeFadeOut(::UnityEngine::GameObject* targetGo, ::System::Boolean showBlackScreen, ::System::Action* callback)
		{
			return ((::System::Single(*)(::PVOID, ::UnityEngine::GameObject*, ::System::Boolean, ::System::Action*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMAINCITYCHATPLAYWIDGETCONTROLLER_ENSUREPREVIOUSNODEFADEOUT_OFFSET))(this, targetGo, showBlackScreen, callback);
		}

		::System::Void ShowQuestRecommend(::Class_2_701D0105B8E2A1C9* node)
		{
			return ((::System::Void(*)(::PVOID, ::Class_2_701D0105B8E2A1C9*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMAINCITYCHATPLAYWIDGETCONTROLLER_SHOWQUESTRECOMMEND_OFFSET))(this, node);
		}

		::System::Void Show3DModel(::System::Int32 modelID, ::MoleMole::GalGame::ModelConfigTemplateType templateType, ::System::Action* callback)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::MoleMole::GalGame::ModelConfigTemplateType, ::System::Action*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMAINCITYCHATPLAYWIDGETCONTROLLER_SHOW3DMODEL_OFFSET))(this, modelID, templateType, callback);
		}

		::System::Void PlayStoryNode(::MoleMole::GalGame::MainCityChatPlayStoryNode* config, ::System::Action* finishFunc, ::System::Boolean isSkip)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::GalGame::MainCityChatPlayStoryNode*, ::System::Action*, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMAINCITYCHATPLAYWIDGETCONTROLLER_PLAYSTORYNODE_OFFSET))(this, config, finishFunc, isSkip);
		}

		::System::Void PostFacial(::MoleMole::GalGame::SpeakerActionCfg* speakerCfg)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::GalGame::SpeakerActionCfg*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMAINCITYCHATPLAYWIDGETCONTROLLER_POSTFACIAL_OFFSET))(this, speakerCfg);
		}

		::System::Void PlayVoiceAndSoundEvent(::MoleMole::GalGame::MainCityChatPlayStoryNode* config, ::System::String* voiceKey, ::System::Single textPlayDelay)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::GalGame::MainCityChatPlayStoryNode*, ::System::String*, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMAINCITYCHATPLAYWIDGETCONTROLLER_PLAYVOICEANDSOUNDEVENT_OFFSET))(this, config, voiceKey, textPlayDelay);
		}

		::System::Void PlayVoiceWithDelay(::System::String* voiceKey, ::System::Single textPlayDelay, ::Class_3_848BA58F81F05F34_1* endedCallback, ::MoleMole::GalGame::SpeakerActionCfg* speakerCfg)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Single, ::Class_3_848BA58F81F05F34_1*, ::MoleMole::GalGame::SpeakerActionCfg*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMAINCITYCHATPLAYWIDGETCONTROLLER_PLAYVOICEWITHDELAY_OFFSET))(this, voiceKey, textPlayDelay, endedCallback, speakerCfg);
		}

		::System::Void PostVoice(::System::String* voiceKey, ::Class_3_848BA58F81F05F34* successCallback, ::Class_3_848BA58F81F05F34_1* endedCallback, ::MoleMole::GalGame::SpeakerActionCfg* speakerCfg)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::Class_3_848BA58F81F05F34*, ::Class_3_848BA58F81F05F34_1*, ::MoleMole::GalGame::SpeakerActionCfg*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMAINCITYCHATPLAYWIDGETCONTROLLER_POSTVOICE_OFFSET))(this, voiceKey, successCallback, endedCallback, speakerCfg);
		}

		::System::String* GetSpeakerFacialKey(::MoleMole::GalGame::SpeakerActionCfg* speakerCfg)
		{
			return ((::System::String*(*)(::PVOID, ::MoleMole::GalGame::SpeakerActionCfg*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMAINCITYCHATPLAYWIDGETCONTROLLER_GETSPEAKERFACIALKEY_OFFSET))(this, speakerCfg);
		}

		::System::Void PostSoundEvent(::System::String* eventName, ::Class_3_848BA58F81F05F34* successCallback, ::Class_3_848BA58F81F05F34_1* endedCallback)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::Class_3_848BA58F81F05F34*, ::Class_3_848BA58F81F05F34_1*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMAINCITYCHATPLAYWIDGETCONTROLLER_POSTSOUNDEVENT_OFFSET))(this, eventName, successCallback, endedCallback);
		}

		::System::Void PostSoundEventContinue(::System::String* eventName)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMAINCITYCHATPLAYWIDGETCONTROLLER_POSTSOUNDEVENTCONTINUE_OFFSET))(this, eventName);
		}

		::System::Void StopCurrentVoice()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMAINCITYCHATPLAYWIDGETCONTROLLER_STOPCURRENTVOICE_OFFSET))(this);
		}

		::System::Void StopCurrentSound()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMAINCITYCHATPLAYWIDGETCONTROLLER_STOPCURRENTSOUND_OFFSET))(this);
		}

		::System::Void ShowNarratorScreen(::System::Collections::Generic::List_1<::System::String*>* textKeys, ::System::Boolean anim, ::System::Action* onFinished, ::System::Single delay, ::System::Single speakSpeed, ::System::String* soundEvent, ::System::Action* onFadeInFinished, ::System::Boolean isSkip)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::System::String*>*, ::System::Boolean, ::System::Action*, ::System::Single, ::System::Single, ::System::String*, ::System::Action*, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMAINCITYCHATPLAYWIDGETCONTROLLER_SHOWNARRATORSCREEN_OFFSET))(this, textKeys, anim, onFinished, delay, speakSpeed, soundEvent, onFadeInFinished, isSkip);
		}

		::System::Void SetExitTransition(::System::Int32 transitionID)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMAINCITYCHATPLAYWIDGETCONTROLLER_SETEXITTRANSITION_OFFSET))(this, transitionID);
		}

		::System::Void SetBlackScreenStateNoAnim(::System::Boolean show)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMAINCITYCHATPLAYWIDGETCONTROLLER_SETBLACKSCREENSTATENOANIM_OFFSET))(this, show);
		}

		::System::Single SetBlackScreenState(::System::Boolean show, ::System::Boolean isForce)
		{
			return ((::System::Single(*)(::PVOID, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMAINCITYCHATPLAYWIDGETCONTROLLER_SETBLACKSCREENSTATE_OFFSET))(this, show, isForce);
		}

		::System::Void InLevelPlayStoryNode(::MoleMole::GalGame::MainCityChatInLevelPlayStoryNode* config, ::MoleMole::Battle::Entity* entity, ::System::Action* finishFunc, ::System::Boolean isSkip)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::GalGame::MainCityChatInLevelPlayStoryNode*, ::MoleMole::Battle::Entity*, ::System::Action*, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMAINCITYCHATPLAYWIDGETCONTROLLER_INLEVELPLAYSTORYNODE_OFFSET))(this, config, entity, finishFunc, isSkip);
		}

		::System::Void PlayText(::System::String* playText, ::System::Single speed, ::System::String* realText, ::System::Single delay, ::System::Int32 recordIndex, ::Class_2_ACF3AD21D9602888* seqPlayable)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Single, ::System::String*, ::System::Single, ::System::Int32, ::Class_2_ACF3AD21D9602888*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMAINCITYCHATPLAYWIDGETCONTROLLER_PLAYTEXT_OFFSET))(this, playText, speed, realText, delay, recordIndex, seqPlayable);
		}

		::System::Void InitView(::System::Int32 id)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMAINCITYCHATPLAYWIDGETCONTROLLER_INITVIEW_OFFSET))(this, id);
		}

		::System::Void UpdatePlay(::System::Single deltaTime)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMAINCITYCHATPLAYWIDGETCONTROLLER_UPDATEPLAY_OFFSET))(this, deltaTime);
		}

		::System::Boolean _OnUIInit_b__17_0()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMAINCITYCHATPLAYWIDGETCONTROLLER__ONUIINIT_B__17_0_OFFSET))(this);
		}

		::System::Void _OnUIOpen_b__18_0(::System::EventArgs* args)
		{
			return ((::System::Void(*)(::PVOID, ::System::EventArgs*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMAINCITYCHATPLAYWIDGETCONTROLLER__ONUIOPEN_B__18_0_OFFSET))(this, args);
		}

		::System::Void _OnUIOpen_b__18_1(::System::EventArgs* args)
		{
			return ((::System::Void(*)(::PVOID, ::System::EventArgs*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMAINCITYCHATPLAYWIDGETCONTROLLER__ONUIOPEN_B__18_1_OFFSET))(this, args);
		}

		::System::Void _OnContinueBtnClicked_b__32_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMAINCITYCHATPLAYWIDGETCONTROLLER__ONCONTINUEBTNCLICKED_B__32_0_OFFSET))(this);
		}

		::System::Void _PlayFadeOutEffect_b__40_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMAINCITYCHATPLAYWIDGETCONTROLLER__PLAYFADEOUTEFFECT_B__40_0_OFFSET))(this);
		}

		static ::System::Void _ShowTransition_g__SetText_47_0(::Class_2_79AE422BA06F6D26_224_Class_2_99BC69CB30FB4283_1* go, ::MoleMole::GalGame::MainCityChatTransitionDisplayItem* config)
		{
			return ((::System::Void(*)(::Class_2_79AE422BA06F6D26_224_Class_2_99BC69CB30FB4283_1*, ::MoleMole::GalGame::MainCityChatTransitionDisplayItem*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMAINCITYCHATPLAYWIDGETCONTROLLER__SHOWTRANSITION_G__SETTEXT_47_0_OFFSET))(go, config);
		}

		::System::Void _PlayLastNodeFinish_b__52_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMAINCITYCHATPLAYWIDGETCONTROLLER__PLAYLASTNODEFINISH_B__52_0_OFFSET))(this);
		}

		::System::Void _PlayLastNodeFinish_b__52_1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMAINCITYCHATPLAYWIDGETCONTROLLER__PLAYLASTNODEFINISH_B__52_1_OFFSET))(this);
		}

		::System::Void _PlayLastNodeFinish_b__52_2()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMAINCITYCHATPLAYWIDGETCONTROLLER__PLAYLASTNODEFINISH_B__52_2_OFFSET))(this);
		}

		static ::Class_0_16E4307DCC419505_8* _Show3DModel_g__GetModelTemplate_56_1(::System::Int32 id, ::MoleMole::GalGame::ModelConfigTemplateType type)
		{
			return ((::Class_0_16E4307DCC419505_8*(*)(::System::Int32, ::MoleMole::GalGame::ModelConfigTemplateType))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMAINCITYCHATPLAYWIDGETCONTROLLER__SHOW3DMODEL_G__GETMODELTEMPLATE_56_1_OFFSET))(id, type);
		}

		static ::System::String* _Show3DModel_g__GetTextMapKey_56_2(::MoleMole::GalGame::ModelConfigTemplateType type)
		{
			return ((::System::String*(*)(::MoleMole::GalGame::ModelConfigTemplateType))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMAINCITYCHATPLAYWIDGETCONTROLLER__SHOW3DMODEL_G__GETTEXTMAPKEY_56_2_OFFSET))(type);
		}

		::System::Void _SetBlackScreenState_b__72_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMAINCITYCHATPLAYWIDGETCONTROLLER__SETBLACKSCREENSTATE_B__72_0_OFFSET))(this);
		}

		::System::Void _InitView_b__76_0(::System::Int64 uid)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int64))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMAINCITYCHATPLAYWIDGETCONTROLLER__INITVIEW_B__76_0_OFFSET))(this, uid);
		}

		::System::Void __base_Finish()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMAINCITYCHATPLAYWIDGETCONTROLLER___BASE_FINISH_OFFSET))(this);
		}

		::System::Void __base_OnCreateView(::MoleMole::UIControlReference* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMAINCITYCHATPLAYWIDGETCONTROLLER___BASE_ONCREATEVIEW_OFFSET))(this, P0);
		}

		::System::Boolean __base_OnInputAction(::MoleMole::InputActionEvent P0)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::InputActionEvent))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMAINCITYCHATPLAYWIDGETCONTROLLER___BASE_ONINPUTACTION_OFFSET))(this, P0);
		}

		::System::Void __base_OnLayoutPlatformChanged()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMAINCITYCHATPLAYWIDGETCONTROLLER___BASE_ONLAYOUTPLATFORMCHANGED_OFFSET))(this);
		}

		::System::Void __base_OnNodeRun(::Class_1_2D5DADE6FF36AA79* P0)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_2D5DADE6FF36AA79*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMAINCITYCHATPLAYWIDGETCONTROLLER___BASE_ONNODERUN_OFFSET))(this, P0);
		}

		::System::Void __base_OnShow(::MoleMole::UIControllerContextBase* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMAINCITYCHATPLAYWIDGETCONTROLLER___BASE_ONSHOW_OFFSET))(this, P0);
		}

		::System::Void __base_OnUIClose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMAINCITYCHATPLAYWIDGETCONTROLLER___BASE_ONUICLOSE_OFFSET))(this);
		}

		::System::Void __base_OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMAINCITYCHATPLAYWIDGETCONTROLLER___BASE_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void __base_OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMAINCITYCHATPLAYWIDGETCONTROLLER___BASE_ONUIINIT_OFFSET))(this);
		}

		::System::Void __base_OnUIOpen(::MoleMole::UIControllerContextBase* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMAINCITYCHATPLAYWIDGETCONTROLLER___BASE_ONUIOPEN_OFFSET))(this, P0);
		}

		::System::Void __base_StartSkipChat()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMAINCITYCHATPLAYWIDGETCONTROLLER___BASE_STARTSKIPCHAT_OFFSET))(this);
		}

		::System::Void __base_UpdateSkipState(::Class_1_2D5DADE6FF36AA79* P0)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_2D5DADE6FF36AA79*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMAINCITYCHATPLAYWIDGETCONTROLLER___BASE_UPDATESKIPSTATE_OFFSET))(this, P0);
		}
	};
}

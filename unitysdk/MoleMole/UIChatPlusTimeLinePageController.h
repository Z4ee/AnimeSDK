#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_3EDF246633A325B0.h"
#include "unitysdk/Enum_3_8E90989A26BC6232.h"
#include "unitysdk/MoleMole/UIBaseChatPlusController.h"

class Class_1_76E0C108A0F7FA7D;
class Class_1_9465CC52E1CFB15A;
class Class_2_A944C35C433158AC;
class Class_2_CEC585D0736F3660;
class Class_3_A26677E63C832BEF;
namespace DG::Tweening { class Tween; }
namespace MoleMole { class ChatPlusTimeLinePlayContext; }
namespace MoleMole { class UIControlReference; }
namespace MoleMole { class UIControllerContextBase; }
namespace MoleMole { class UIInLevelEavesdropChildWindowController; }
namespace MoleMole::Battle { class Entity; }
namespace System { class Action; }
namespace System { class EventArgs; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }

#define MOLEMOLE_UICHATPLUSTIMELINEPAGECONTROLLER_DESTROYEFFECTENTITY_OFFSET UNITYSDK_OFFSET(0x192B39D0)
#define MOLEMOLE_UICHATPLUSTIMELINEPAGECONTROLLER_DESTROYSPEEDUPEFFECTS_OFFSET UNITYSDK_OFFSET(0x192B3950)
#define MOLEMOLE_UICHATPLUSTIMELINEPAGECONTROLLER_DOSTARTSKIPCHAT_OFFSET UNITYSDK_OFFSET(0x192B22C0)
#define MOLEMOLE_UICHATPLUSTIMELINEPAGECONTROLLER_ENSUREEAVESDROPCTRL_OFFSET UNITYSDK_OFFSET(0x192B3FC0)
#define MOLEMOLE_UICHATPLUSTIMELINEPAGECONTROLLER_GET_EAVESDROPCTRL_OFFSET UNITYSDK_OFFSET(0x192B0940)
#define MOLEMOLE_UICHATPLUSTIMELINEPAGECONTROLLER_GET_HOTSWITCHROOTLAYERSTATE_OFFSET UNITYSDK_OFFSET(0x192B0920)
#define MOLEMOLE_UICHATPLUSTIMELINEPAGECONTROLLER_GET_ISFINISH_OFFSET UNITYSDK_OFFSET(0x192B0930)
#define MOLEMOLE_UICHATPLUSTIMELINEPAGECONTROLLER_GET_WINDOWTYPE_OFFSET UNITYSDK_OFFSET(0x192B0910)
#define MOLEMOLE_UICHATPLUSTIMELINEPAGECONTROLLER_HIDESPEEDUPEFFECTS_OFFSET UNITYSDK_OFFSET(0x192B2110)
#define MOLEMOLE_UICHATPLUSTIMELINEPAGECONTROLLER_INITVIEW_OFFSET UNITYSDK_OFFSET(0x192B1160)
#define MOLEMOLE_UICHATPLUSTIMELINEPAGECONTROLLER_ONCONTINUEBTNDOWN_OFFSET UNITYSDK_OFFSET(0x192B32D0)
#define MOLEMOLE_UICHATPLUSTIMELINEPAGECONTROLLER_ONCONTINUEBTNUP_OFFSET UNITYSDK_OFFSET(0x192B3340)
#define MOLEMOLE_UICHATPLUSTIMELINEPAGECONTROLLER_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x192B0950)
#define MOLEMOLE_UICHATPLUSTIMELINEPAGECONTROLLER_ONEAVESDROPOPEN_OFFSET UNITYSDK_OFFSET(0x192B3D10)
#define MOLEMOLE_UICHATPLUSTIMELINEPAGECONTROLLER_ONNORMALGRAPHEXIT_OFFSET UNITYSDK_OFFSET(0x192B25C0)
#define MOLEMOLE_UICHATPLUSTIMELINEPAGECONTROLLER_ONSPEEDUPBTNCLICK_OFFSET UNITYSDK_OFFSET(0x192B2AB0)
#define MOLEMOLE_UICHATPLUSTIMELINEPAGECONTROLLER_ONUICLOSE_OFFSET UNITYSDK_OFFSET(0x192B1760)
#define MOLEMOLE_UICHATPLUSTIMELINEPAGECONTROLLER_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x192B3A70)
#define MOLEMOLE_UICHATPLUSTIMELINEPAGECONTROLLER_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x192B0A50)
#define MOLEMOLE_UICHATPLUSTIMELINEPAGECONTROLLER_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x192B0F60)
#define MOLEMOLE_UICHATPLUSTIMELINEPAGECONTROLLER_PLAYCHATPLUSDIALOG_OFFSET UNITYSDK_OFFSET(0x192B35C0)
#define MOLEMOLE_UICHATPLUSTIMELINEPAGECONTROLLER_PLAYTIMELINE_OFFSET UNITYSDK_OFFSET(0x192B28C0)
#define MOLEMOLE_UICHATPLUSTIMELINEPAGECONTROLLER_REFRESHSKIPBTNINTERACTABLE_OFFSET UNITYSDK_OFFSET(0x192B2540)
#define MOLEMOLE_UICHATPLUSTIMELINEPAGECONTROLLER_RESTORETIMELINESPEED_OFFSET UNITYSDK_OFFSET(0x192B1BE0)
#define MOLEMOLE_UICHATPLUSTIMELINEPAGECONTROLLER_SETEFFECTVISIBLE_OFFSET UNITYSDK_OFFSET(0x192B3390)
#define MOLEMOLE_UICHATPLUSTIMELINEPAGECONTROLLER_SETUIWINDOWSETTING_OFFSET UNITYSDK_OFFSET(0x192B09E0)
#define MOLEMOLE_UICHATPLUSTIMELINEPAGECONTROLLER_SPEEDUPTIMELINE_OFFSET UNITYSDK_OFFSET(0x192B2B10)
#define MOLEMOLE_UICHATPLUSTIMELINEPAGECONTROLLER_STOPSPEEDUP_OFFSET UNITYSDK_OFFSET(0x192B3570)
#define MOLEMOLE_UICHATPLUSTIMELINEPAGECONTROLLER_STOPTIMELINE_OFFSET UNITYSDK_OFFSET(0x192B2180)
#define MOLEMOLE_UICHATPLUSTIMELINEPAGECONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x192B41D0)
#define MOLEMOLE_UICHATPLUSTIMELINEPAGECONTROLLER__INITVIEW_B__35_0_OFFSET UNITYSDK_OFFSET(0x192B4240)
#define MOLEMOLE_UICHATPLUSTIMELINEPAGECONTROLLER__ONUIINIT_B__31_0_OFFSET UNITYSDK_OFFSET(0x192B4230)
#define MOLEMOLE_UICHATPLUSTIMELINEPAGECONTROLLER__RESTORETIMELINESPEED_B__43_0_OFFSET UNITYSDK_OFFSET(0x192B4250)
#define MOLEMOLE_UICHATPLUSTIMELINEPAGECONTROLLER___BASE_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x192B42B0)
#define MOLEMOLE_UICHATPLUSTIMELINEPAGECONTROLLER___BASE_ONUICLOSE_OFFSET UNITYSDK_OFFSET(0x192B4340)
#define MOLEMOLE_UICHATPLUSTIMELINEPAGECONTROLLER___BASE_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x192B4400)
#define MOLEMOLE_UICHATPLUSTIMELINEPAGECONTROLLER___BASE_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x192B4410)
#define MOLEMOLE_UICHATPLUSTIMELINEPAGECONTROLLER___BASE_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x192B4420)
#define MOLEMOLE_UICHATPLUSTIMELINEPAGECONTROLLER___BASE_SETUIWINDOWSETTING_OFFSET UNITYSDK_OFFSET(0x192B44B0)

namespace MoleMole
{
	inline static constexpr unsigned int UIChatPlusTimeLinePageController_TypeDefinitionIndex = 79162;

	class UIChatPlusTimeLinePageController : public ::MoleMole::UIBaseChatPlusController
	{
	public:
		// static const ::System::String* SpeedUpTipBreathingAni; // 0x0
		// static const ::System::Single SpeedUpTipFadeDuration; // 0x0
		// static const ::System::String* SpeedUpCameraEffect1; // 0x0
		// static const ::System::String* SpeedUpCameraEffect2; // 0x0
		::MoleMole::ChatPlusTimeLinePlayContext* _plusOpenContext; // 0x3D8
		::System::Action_1<::Class_2_CEC585D0736F3660*>* _callback; // 0x3E0
		::System::Int64 _currChatUid; // 0x3E8
		::Class_3_A26677E63C832BEF* _normalGraph; // 0x3F0
		::Class_1_76E0C108A0F7FA7D* _chatSkipBtnItem; // 0x3F8
		::System::Boolean _isFinish; // 0x400
		::System::String* CurrentTimelineKey; // 0x408
		::Class_2_A944C35C433158AC* _currentTask; // 0x410
		::Class_2_CEC585D0736F3660* _chatRecordSyncData; // 0x418
		::System::Int32 _endTransitionID; // 0x420
		::System::Int32 _currentDialogInstanceId; // 0x424
		::System::Boolean _isSpeedUp; // 0x428
		::DG::Tweening::Tween* _speedUpTipFadeTweener; // 0x430
		::System::Boolean _canUseSkip; // 0x438
		::MoleMole::UIInLevelEavesdropChildWindowController* _eavesdropCtrl; // 0x440
		::MoleMole::Battle::Entity* _speedUpEffectEntity1; // 0x448
		::MoleMole::Battle::Entity* _speedUpEffectEntity2; // 0x450

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UICHATPLUSTIMELINEPAGECONTROLLER__CTOR_OFFSET))(this);
		}

		::Enum_3_3EDF246633A325B0 get_windowType()
		{
			return ((::Enum_3_3EDF246633A325B0(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UICHATPLUSTIMELINEPAGECONTROLLER_GET_WINDOWTYPE_OFFSET))(this);
		}

		::Enum_3_8E90989A26BC6232 get_HotSwitchRootLayerState()
		{
			return ((::Enum_3_8E90989A26BC6232(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UICHATPLUSTIMELINEPAGECONTROLLER_GET_HOTSWITCHROOTLAYERSTATE_OFFSET))(this);
		}

		::System::Boolean get_IsFinish()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UICHATPLUSTIMELINEPAGECONTROLLER_GET_ISFINISH_OFFSET))(this);
		}

		::MoleMole::UIInLevelEavesdropChildWindowController* get_EavesdropCtrl()
		{
			return ((::MoleMole::UIInLevelEavesdropChildWindowController*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UICHATPLUSTIMELINEPAGECONTROLLER_GET_EAVESDROPCTRL_OFFSET))(this);
		}

		::System::Void OnCreateView(::MoleMole::UIControlReference* controlReference)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UICHATPLUSTIMELINEPAGECONTROLLER_ONCREATEVIEW_OFFSET))(this, controlReference);
		}

		::System::Void SetUIWindowSetting()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UICHATPLUSTIMELINEPAGECONTROLLER_SETUIWINDOWSETTING_OFFSET))(this);
		}

		::System::Void OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UICHATPLUSTIMELINEPAGECONTROLLER_ONUIINIT_OFFSET))(this);
		}

		::System::Void OnUIOpen(::MoleMole::UIControllerContextBase* openCtrlContext)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UICHATPLUSTIMELINEPAGECONTROLLER_ONUIOPEN_OFFSET))(this, openCtrlContext);
		}

		::System::Void OnUIClose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UICHATPLUSTIMELINEPAGECONTROLLER_ONUICLOSE_OFFSET))(this);
		}

		::System::Void DoStartSkipChat()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UICHATPLUSTIMELINEPAGECONTROLLER_DOSTARTSKIPCHAT_OFFSET))(this);
		}

		::System::Void InitView(::System::Int32 id)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UICHATPLUSTIMELINEPAGECONTROLLER_INITVIEW_OFFSET))(this, id);
		}

		::System::Void OnNormalGraphExit(::Class_1_9465CC52E1CFB15A* obj)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_9465CC52E1CFB15A*))((::PBYTE)hIl2Cpp + MOLEMOLE_UICHATPLUSTIMELINEPAGECONTROLLER_ONNORMALGRAPHEXIT_OFFSET))(this, obj);
		}

		::System::Boolean PlayTimeLine(::System::String* timelineKey, ::System::String* tag, ::System::Action* onFinish)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::String*, ::System::String*, ::System::Action*))((::PBYTE)hIl2Cpp + MOLEMOLE_UICHATPLUSTIMELINEPAGECONTROLLER_PLAYTIMELINE_OFFSET))(this, timelineKey, tag, onFinish);
		}

		::System::Void StopTimeLine(::System::Boolean isDestroy)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UICHATPLUSTIMELINEPAGECONTROLLER_STOPTIMELINE_OFFSET))(this, isDestroy);
		}

		::System::Void OnSpeedUpBtnClick()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UICHATPLUSTIMELINEPAGECONTROLLER_ONSPEEDUPBTNCLICK_OFFSET))(this);
		}

		::System::Void OnContinueBtnDown()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UICHATPLUSTIMELINEPAGECONTROLLER_ONCONTINUEBTNDOWN_OFFSET))(this);
		}

		::System::Void OnContinueBtnUp()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UICHATPLUSTIMELINEPAGECONTROLLER_ONCONTINUEBTNUP_OFFSET))(this);
		}

		::System::Void SpeedUpTimeline()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UICHATPLUSTIMELINEPAGECONTROLLER_SPEEDUPTIMELINE_OFFSET))(this);
		}

		::System::Void RestoreTimelineSpeed()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UICHATPLUSTIMELINEPAGECONTROLLER_RESTORETIMELINESPEED_OFFSET))(this);
		}

		::System::Void RefreshSkipBtnInteractable(::System::Boolean interactable)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UICHATPLUSTIMELINEPAGECONTROLLER_REFRESHSKIPBTNINTERACTABLE_OFFSET))(this, interactable);
		}

		::System::Void StopSpeedUp()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UICHATPLUSTIMELINEPAGECONTROLLER_STOPSPEEDUP_OFFSET))(this);
		}

		::System::Void PlayChatPlusDialog(::System::String* TextMapKey, ::System::String* NpcName, ::System::Boolean isStart, ::System::Int32 InstanceId)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*, ::System::Boolean, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UICHATPLUSTIMELINEPAGECONTROLLER_PLAYCHATPLUSDIALOG_OFFSET))(this, TextMapKey, NpcName, isStart, InstanceId);
		}

		::System::Void HideSpeedUpEffects()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UICHATPLUSTIMELINEPAGECONTROLLER_HIDESPEEDUPEFFECTS_OFFSET))(this);
		}

		::System::Void SetEffectVisible(::MoleMole::Battle::Entity* effect, ::System::Boolean isVisible)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::Battle::Entity*, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UICHATPLUSTIMELINEPAGECONTROLLER_SETEFFECTVISIBLE_OFFSET))(this, effect, isVisible);
		}

		::System::Void DestroySpeedUpEffects()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UICHATPLUSTIMELINEPAGECONTROLLER_DESTROYSPEEDUPEFFECTS_OFFSET))(this);
		}

		::System::Void DestroyEffectEntity(::MoleMole::Battle::Entity* effectEntity)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + MOLEMOLE_UICHATPLUSTIMELINEPAGECONTROLLER_DESTROYEFFECTENTITY_OFFSET))(this, effectEntity);
		}

		::System::Void OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UICHATPLUSTIMELINEPAGECONTROLLER_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void OnEavesdropOpen(::System::EventArgs* args)
		{
			return ((::System::Void(*)(::PVOID, ::System::EventArgs*))((::PBYTE)hIl2Cpp + MOLEMOLE_UICHATPLUSTIMELINEPAGECONTROLLER_ONEAVESDROPOPEN_OFFSET))(this, args);
		}

		::MoleMole::UIInLevelEavesdropChildWindowController* EnsureEavesdropCtrl()
		{
			return ((::MoleMole::UIInLevelEavesdropChildWindowController*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UICHATPLUSTIMELINEPAGECONTROLLER_ENSUREEAVESDROPCTRL_OFFSET))(this);
		}

		::System::Boolean _OnUIInit_b__31_0()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UICHATPLUSTIMELINEPAGECONTROLLER__ONUIINIT_B__31_0_OFFSET))(this);
		}

		::System::Void _InitView_b__35_0(::System::Int64 uid)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int64))((::PBYTE)hIl2Cpp + MOLEMOLE_UICHATPLUSTIMELINEPAGECONTROLLER__INITVIEW_B__35_0_OFFSET))(this, uid);
		}

		::System::Void _RestoreTimelineSpeed_b__43_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UICHATPLUSTIMELINEPAGECONTROLLER__RESTORETIMELINESPEED_B__43_0_OFFSET))(this);
		}

		::System::Void __base_OnCreateView(::MoleMole::UIControlReference* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UICHATPLUSTIMELINEPAGECONTROLLER___BASE_ONCREATEVIEW_OFFSET))(this, P0);
		}

		::System::Void __base_OnUIClose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UICHATPLUSTIMELINEPAGECONTROLLER___BASE_ONUICLOSE_OFFSET))(this);
		}

		::System::Void __base_OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UICHATPLUSTIMELINEPAGECONTROLLER___BASE_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void __base_OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UICHATPLUSTIMELINEPAGECONTROLLER___BASE_ONUIINIT_OFFSET))(this);
		}

		::System::Void __base_OnUIOpen(::MoleMole::UIControllerContextBase* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UICHATPLUSTIMELINEPAGECONTROLLER___BASE_ONUIOPEN_OFFSET))(this, P0);
		}

		::System::Void __base_SetUIWindowSetting()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UICHATPLUSTIMELINEPAGECONTROLLER___BASE_SETUIWINDOWSETTING_OFFSET))(this);
		}
	};
}

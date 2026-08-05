#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_03024D6472FC8F3A.h"
#include "unitysdk/Enum_3_3EDF246633A325B0.h"
#include "unitysdk/Enum_3_8E90989A26BC6232.h"
#include "unitysdk/Enum_3_DBF2701137F18AA6.h"
#include "unitysdk/Foundation/Coroutine/CoroutineHandle.h"
#include "unitysdk/MoleMole/UIAbyssS2RewardDialogPageController_PageType.h"
#include "unitysdk/MoleMole/UIWindowController.h"

class Class_0_16E4307DCC419505_36;
class Class_2_208CC9941471731A_1132;
class Class_2_79F6D62CE30E3F8E_103;
class Class_2_AB2EF02AB0EB9012;
class Class_3_398B7A90ED0C0464_2;
namespace MoleMole { class MonoGamepadModule; }
namespace MoleMole { class ScrollViewItemWidgetController; }
namespace MoleMole { class UIAbyssRewardWidgetController; }
namespace MoleMole { class UIAbyssS2MissionWidgetController; }
namespace MoleMole { class UIAbyssS2RewardDialogContext; }
namespace MoleMole { class UIAbyssTaskCardWidgetController; }
namespace MoleMole { class UIControlReference; }
namespace MoleMole { class UIControllerContextBase; }
namespace MoleMole { class UIItemIconBtnSmallWidgetController; }
namespace System { class Action; }
namespace System { class EventArgs; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System { template <typename T> class Func_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Animation; }
namespace UnityEngine { class AnimationCurve; }
namespace UnityEngine { class Transform; }

#define MOLEMOLE_UIABYSSS2REWARDDIALOGPAGECONTROLLER_CANGETALLREWARD_OFFSET UNITYSDK_OFFSET(0x197C0810)
#define MOLEMOLE_UIABYSSS2REWARDDIALOGPAGECONTROLLER_CREATREWARDITEM_OFFSET UNITYSDK_OFFSET(0x197C16A0)
#define MOLEMOLE_UIABYSSS2REWARDDIALOGPAGECONTROLLER_GETREWARDSELECTINDEX_OFFSET UNITYSDK_OFFSET(0x197C1FF0)
#define MOLEMOLE_UIABYSSS2REWARDDIALOGPAGECONTROLLER_GETSHOWTASKLIST_OFFSET UNITYSDK_OFFSET(0x197C4120)
#define MOLEMOLE_UIABYSSS2REWARDDIALOGPAGECONTROLLER_GET_HASSPECIALTASK_OFFSET UNITYSDK_OFFSET(0x197C0580)
#define MOLEMOLE_UIABYSSS2REWARDDIALOGPAGECONTROLLER_GET_HOTSWITCHROOTLAYERSTATE_OFFSET UNITYSDK_OFFSET(0x197BFF70)
#define MOLEMOLE_UIABYSSS2REWARDDIALOGPAGECONTROLLER_GET_WINDOWTYPE_OFFSET UNITYSDK_OFFSET(0x197BFED0)
#define MOLEMOLE_UIABYSSS2REWARDDIALOGPAGECONTROLLER_INITCURVES_OFFSET UNITYSDK_OFFSET(0x197C36B0)
#define MOLEMOLE_UIABYSSS2REWARDDIALOGPAGECONTROLLER_INITPAGEBYTYPE_OFFSET UNITYSDK_OFFSET(0x197C1E10)
#define MOLEMOLE_UIABYSSS2REWARDDIALOGPAGECONTROLLER_INITTABS_OFFSET UNITYSDK_OFFSET(0x197C0370)
#define MOLEMOLE_UIABYSSS2REWARDDIALOGPAGECONTROLLER_ISALLNORMALTASKNOTFINISHED_OFFSET UNITYSDK_OFFSET(0x197C43E0)
#define MOLEMOLE_UIABYSSS2REWARDDIALOGPAGECONTROLLER_ISCLOSETORESETTIME_OFFSET UNITYSDK_OFFSET(0x197C5030)
#define MOLEMOLE_UIABYSSS2REWARDDIALOGPAGECONTROLLER_MARKPLAYSPECIALTASKANIM_OFFSET UNITYSDK_OFFSET(0x197C4180)
#define MOLEMOLE_UIABYSSS2REWARDDIALOGPAGECONTROLLER_ONCLICKGETALLREWARD_OFFSET UNITYSDK_OFFSET(0x197C0630)
#define MOLEMOLE_UIABYSSS2REWARDDIALOGPAGECONTROLLER_ONCLICKGETREWARD_OFFSET UNITYSDK_OFFSET(0x197C5590)
#define MOLEMOLE_UIABYSSS2REWARDDIALOGPAGECONTROLLER_ONCLOSEPOPUPWINDOW_OFFSET UNITYSDK_OFFSET(0x197C04A0)
#define MOLEMOLE_UIABYSSS2REWARDDIALOGPAGECONTROLLER_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x197BFEE0)
#define MOLEMOLE_UIABYSSS2REWARDDIALOGPAGECONTROLLER_ONGAMEPADMODULESELECTINDEX_OFFSET UNITYSDK_OFFSET(0x197C4760)
#define MOLEMOLE_UIABYSSS2REWARDDIALOGPAGECONTROLLER_ONINFOBTNCLICK_OFFSET UNITYSDK_OFFSET(0x197C45C0)
#define MOLEMOLE_UIABYSSS2REWARDDIALOGPAGECONTROLLER_ONITEMCHANGED_OFFSET UNITYSDK_OFFSET(0x197C46D0)
#define MOLEMOLE_UIABYSSS2REWARDDIALOGPAGECONTROLLER_ONREWARDCHANGEHANDLE_OFFSET UNITYSDK_OFFSET(0x197C4640)
#define MOLEMOLE_UIABYSSS2REWARDDIALOGPAGECONTROLLER_ONREWARDFOCUSCHANGE_OFFSET UNITYSDK_OFFSET(0x197C4A50)
#define MOLEMOLE_UIABYSSS2REWARDDIALOGPAGECONTROLLER_ONRSPGETALLTASKREWARD_OFFSET UNITYSDK_OFFSET(0x197C0BE0)
#define MOLEMOLE_UIABYSSS2REWARDDIALOGPAGECONTROLLER_ONTAKEALLREWARDERRORHANDLE_OFFSET UNITYSDK_OFFSET(0x197C5EC0)
#define MOLEMOLE_UIABYSSS2REWARDDIALOGPAGECONTROLLER_ONTAKEREWARDERRORHANDLE_OFFSET UNITYSDK_OFFSET(0x197C5A10)
#define MOLEMOLE_UIABYSSS2REWARDDIALOGPAGECONTROLLER_ONTAKEREWARDHANDLE_OFFSET UNITYSDK_OFFSET(0x197C5930)
#define MOLEMOLE_UIABYSSS2REWARDDIALOGPAGECONTROLLER_ONTASKFOCUSCHANGE_OFFSET UNITYSDK_OFFSET(0x197C4C40)
#define MOLEMOLE_UIABYSSS2REWARDDIALOGPAGECONTROLLER_ONUICLOSE_OFFSET UNITYSDK_OFFSET(0x197C2DB0)
#define MOLEMOLE_UIABYSSS2REWARDDIALOGPAGECONTROLLER_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x197C61C0)
#define MOLEMOLE_UIABYSSS2REWARDDIALOGPAGECONTROLLER_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x197BFF80)
#define MOLEMOLE_UIABYSSS2REWARDDIALOGPAGECONTROLLER_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x197C17E0)
#define MOLEMOLE_UIABYSSS2REWARDDIALOGPAGECONTROLLER_PLAYANIMCURVE_OFFSET UNITYSDK_OFFSET(0x197C3B30)
#define MOLEMOLE_UIABYSSS2REWARDDIALOGPAGECONTROLLER_PLAYANIM_OFFSET UNITYSDK_OFFSET(0x197C2B70)
#define MOLEMOLE_UIABYSSS2REWARDDIALOGPAGECONTROLLER_PLAYEXPANIM_OFFSET UNITYSDK_OFFSET(0x197C2F70)
#define MOLEMOLE_UIABYSSS2REWARDDIALOGPAGECONTROLLER_REFRESHGETALLBTNSTATE_OFFSET UNITYSDK_OFFSET(0x197C4340)
#define MOLEMOLE_UIABYSSS2REWARDDIALOGPAGECONTROLLER_REFRESHONTASKREFRESH_OFFSET UNITYSDK_OFFSET(0x197C4FD0)
#define MOLEMOLE_UIABYSSS2REWARDDIALOGPAGECONTROLLER_REFRESHREQREWARDINDEXLIST_OFFSET UNITYSDK_OFFSET(0x197C08A0)
#define MOLEMOLE_UIABYSSS2REWARDDIALOGPAGECONTROLLER_REFRESHVIEW_OFFSET UNITYSDK_OFFSET(0x197C2470)
#define MOLEMOLE_UIABYSSS2REWARDDIALOGPAGECONTROLLER_SAVELASTTASKIDANDDELNEW_OFFSET UNITYSDK_OFFSET(0x197C5270)
#define MOLEMOLE_UIABYSSS2REWARDDIALOGPAGECONTROLLER_SETEXPSTRING_OFFSET UNITYSDK_OFFSET(0x197C2BC0)
#define MOLEMOLE_UIABYSSS2REWARDDIALOGPAGECONTROLLER_SETLEVELTEXT_OFFSET UNITYSDK_OFFSET(0x197C3D60)
#define MOLEMOLE_UIABYSSS2REWARDDIALOGPAGECONTROLLER_SETPROGRESSANDEXPNUM_OFFSET UNITYSDK_OFFSET(0x197C3E70)
#define MOLEMOLE_UIABYSSS2REWARDDIALOGPAGECONTROLLER_SETPROGRESSDEC_OFFSET UNITYSDK_OFFSET(0x197C3FC0)
#define MOLEMOLE_UIABYSSS2REWARDDIALOGPAGECONTROLLER_SETPROGRESS_OFFSET UNITYSDK_OFFSET(0x197C4090)
#define MOLEMOLE_UIABYSSS2REWARDDIALOGPAGECONTROLLER_SETSELECTREWARDITEM_OFFSET UNITYSDK_OFFSET(0x197C2390)
#define MOLEMOLE_UIABYSSS2REWARDDIALOGPAGECONTROLLER_SWITCHCONSOLEKEYSTATE_OFFSET UNITYSDK_OFFSET(0x197C2D20)
#define MOLEMOLE_UIABYSSS2REWARDDIALOGPAGECONTROLLER__CCTOR_OFFSET UNITYSDK_OFFSET(0x197C6640)
#define MOLEMOLE_UIABYSSS2REWARDDIALOGPAGECONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x197C6480)
#define MOLEMOLE_UIABYSSS2REWARDDIALOGPAGECONTROLLER__INITTABS_B__68_0_OFFSET UNITYSDK_OFFSET(0x197C6690)
#define MOLEMOLE_UIABYSSS2REWARDDIALOGPAGECONTROLLER__INITTABS_B__68_1_OFFSET UNITYSDK_OFFSET(0x197C6700)
#define MOLEMOLE_UIABYSSS2REWARDDIALOGPAGECONTROLLER__ONTAKEREWARDHANDLE_B__83_0_OFFSET UNITYSDK_OFFSET(0x197C6780)
#define MOLEMOLE_UIABYSSS2REWARDDIALOGPAGECONTROLLER__ONUIINIT_B__6_0_OFFSET UNITYSDK_OFFSET(0x197C6650)
#define MOLEMOLE_UIABYSSS2REWARDDIALOGPAGECONTROLLER___BASE_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x197C67B0)
#define MOLEMOLE_UIABYSSS2REWARDDIALOGPAGECONTROLLER___BASE_ONGAMEPADMODULESELECTINDEX_OFFSET UNITYSDK_OFFSET(0x197C6840)
#define MOLEMOLE_UIABYSSS2REWARDDIALOGPAGECONTROLLER___BASE_ONUICLOSE_OFFSET UNITYSDK_OFFSET(0x197C68F0)
#define MOLEMOLE_UIABYSSS2REWARDDIALOGPAGECONTROLLER___BASE_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x197C69B0)
#define MOLEMOLE_UIABYSSS2REWARDDIALOGPAGECONTROLLER___BASE_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x197C69C0)
#define MOLEMOLE_UIABYSSS2REWARDDIALOGPAGECONTROLLER___BASE_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x197C69D0)

namespace MoleMole
{
	inline static constexpr unsigned int UIAbyssS2RewardDialogPageController_TypeDefinitionIndex = 58812;

	class UIAbyssS2RewardDialogPageController : public ::MoleMole::UIWindowController
	{
	public:
		static ::System::Single* StaticGet_RefreshAnimLen()
		{
			return (::System::Single*)Il2CppClass::FromTypeDefinitionIndex(UIAbyssS2RewardDialogPageController_TypeDefinitionIndex)->GetStaticField(0x12190);
		}
		::Class_2_79F6D62CE30E3F8E_103* _view; // 0x318
		::System::Collections::Generic::List_1<::System::Int32>* reqIndexList; // 0x320
		::System::Collections::Generic::List_1<::MoleMole::UIAbyssTaskCardWidgetController*>* m_normalTaskList; // 0x328
		::System::Single m_playExpAnimDelay; // 0x330
		::System::String* m_animExpPhase1Name; // 0x338
		::System::String* m_animExpPhase2Name; // 0x340
		::System::String* m_animExpPhase3Name; // 0x348
		::System::String* m_animIconAccName; // 0x350
		::UnityEngine::AnimationCurve* m_animExpPhase1; // 0x358
		::UnityEngine::AnimationCurve* m_animExpPhase2; // 0x360
		::UnityEngine::AnimationCurve* m_animExpPhase3; // 0x368
		::MoleMole::UIAbyssS2RewardDialogContext* m_ctx; // 0x370
		::System::Boolean m_hasFakeData; // 0x378
		::System::Boolean m_hasUpgrade; // 0x379
		::System::Boolean m_showTab; // 0x37A
		::System::Single m_coroutineTotalExp; // 0x37C
		::System::Single m_coroutinePrevExp; // 0x380
		::Foundation::Coroutine::CoroutineHandle animHandle; // 0x384
		::System::Int32 _currentAbyssGroup; // 0x388
		::MoleMole::UIAbyssTaskCardWidgetController* m_specialTask; // 0x390
		::MoleMole::UIAbyssRewardWidgetController* selectRewardCtrl; // 0x398
		::MoleMole::UIAbyssTaskCardWidgetController* selectTaskCtrl; // 0x3A0
		::MoleMole::UIItemIconBtnSmallWidgetController* m_iconWidget; // 0x3A8
		::System::Int32 m_oldLevel; // 0x3B0
		::System::Int32 m_oldExp; // 0x3B4
		::MoleMole::UIAbyssS2RewardDialogPageController_PageType _mCurPageType; // 0x3B8
		::UnityEngine::Animation* m_taskAnim; // 0x3C0
		::UnityEngine::Animation* m_rewardAnim; // 0x3C8
		::System::Single m_taskAnimFadeoutLen; // 0x3D0
		::System::Single m_rewardAnimFadeoutLen; // 0x3D4
		::System::String* m_rewardFadeinAnimName; // 0x3D8
		::System::String* m_rewardFadeoutAnimName; // 0x3E0
		::System::String* m_taskFadeinAnimName; // 0x3E8
		::System::String* m_taskFadeoutAnimName; // 0x3F0
		::System::Boolean _isStopRefreshData; // 0x3F8
		::System::Boolean _onceTakeOneReward; // 0x3F9
		::Class_2_AB2EF02AB0EB9012* _abyssModel; // 0x400
		::System::Collections::Generic::List_1<::Class_2_208CC9941471731A_1132*>* rewardList; // 0x408
		::MoleMole::UIAbyssS2MissionWidgetController* missionWidget; // 0x410

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIABYSSS2REWARDDIALOGPAGECONTROLLER__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_UIABYSSS2REWARDDIALOGPAGECONTROLLER__CCTOR_OFFSET))();
		}

		::Enum_3_3EDF246633A325B0 get_windowType()
		{
			return ((::Enum_3_3EDF246633A325B0(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIABYSSS2REWARDDIALOGPAGECONTROLLER_GET_WINDOWTYPE_OFFSET))(this);
		}

		::System::Void OnCreateView(::MoleMole::UIControlReference* controlReference)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIABYSSS2REWARDDIALOGPAGECONTROLLER_ONCREATEVIEW_OFFSET))(this, controlReference);
		}

		::Enum_3_8E90989A26BC6232 get_HotSwitchRootLayerState()
		{
			return ((::Enum_3_8E90989A26BC6232(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIABYSSS2REWARDDIALOGPAGECONTROLLER_GET_HOTSWITCHROOTLAYERSTATE_OFFSET))(this);
		}

		::System::Void OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIABYSSS2REWARDDIALOGPAGECONTROLLER_ONUIINIT_OFFSET))(this);
		}

		::System::Void OnClosePopupWindow(::System::EventArgs* args)
		{
			return ((::System::Void(*)(::PVOID, ::System::EventArgs*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIABYSSS2REWARDDIALOGPAGECONTROLLER_ONCLOSEPOPUPWINDOW_OFFSET))(this, args);
		}

		::System::Boolean get_HasSpecialTask()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIABYSSS2REWARDDIALOGPAGECONTROLLER_GET_HASSPECIALTASK_OFFSET))(this);
		}

		::System::Void OnClickGetAllReward()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIABYSSS2REWARDDIALOGPAGECONTROLLER_ONCLICKGETALLREWARD_OFFSET))(this);
		}

		::System::Void RefreshReqRewardIndexList()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIABYSSS2REWARDDIALOGPAGECONTROLLER_REFRESHREQREWARDINDEXLIST_OFFSET))(this);
		}

		::System::Void OnRspGetAllTaskReward(::Class_0_16E4307DCC419505_36* rcvMessage)
		{
			return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_36*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIABYSSS2REWARDDIALOGPAGECONTROLLER_ONRSPGETALLTASKREWARD_OFFSET))(this, rcvMessage);
		}

		::MoleMole::ScrollViewItemWidgetController* CreatRewardItem(::Enum_3_DBF2701137F18AA6 arg1, ::System::Func_1<::MoleMole::UIControlReference*>* arg2)
		{
			return ((::MoleMole::ScrollViewItemWidgetController*(*)(::PVOID, ::Enum_3_DBF2701137F18AA6, ::System::Func_1<::MoleMole::UIControlReference*>*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIABYSSS2REWARDDIALOGPAGECONTROLLER_CREATREWARDITEM_OFFSET))(this, arg1, arg2);
		}

		::System::Void OnUIOpen(::MoleMole::UIControllerContextBase* openCtrlContext)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIABYSSS2REWARDDIALOGPAGECONTROLLER_ONUIOPEN_OFFSET))(this, openCtrlContext);
		}

		::System::Void OnUIClose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIABYSSS2REWARDDIALOGPAGECONTROLLER_ONUICLOSE_OFFSET))(this);
		}

		::System::Void PlayExpAnim(::MoleMole::UIControllerContextBase* openCtrlContext)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIABYSSS2REWARDDIALOGPAGECONTROLLER_PLAYEXPANIM_OFFSET))(this, openCtrlContext);
		}

		::System::Void SetExpString(::System::Int32 level, ::System::Int32 cur, ::System::Int32 total)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UIABYSSS2REWARDDIALOGPAGECONTROLLER_SETEXPSTRING_OFFSET))(this, level, cur, total);
		}

		::System::Void SetProgressAndExpNum(::System::Single ratio)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_UIABYSSS2REWARDDIALOGPAGECONTROLLER_SETPROGRESSANDEXPNUM_OFFSET))(this, ratio);
		}

		::System::Void SetProgressDec(::System::Single ratio)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_UIABYSSS2REWARDDIALOGPAGECONTROLLER_SETPROGRESSDEC_OFFSET))(this, ratio);
		}

		::System::Void PlayAnimCurve(::UnityEngine::AnimationCurve* curve, ::System::Action_1<::System::Single>* action, ::System::Single start, ::System::Single end, ::System::Action* onDone)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::AnimationCurve*, ::System::Action_1<::System::Single>*, ::System::Single, ::System::Single, ::System::Action*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIABYSSS2REWARDDIALOGPAGECONTROLLER_PLAYANIMCURVE_OFFSET))(this, curve, action, start, end, onDone);
		}

		::System::Void SetProgress(::System::Single progress)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_UIABYSSS2REWARDDIALOGPAGECONTROLLER_SETPROGRESS_OFFSET))(this, progress);
		}

		::System::Void InitCurves()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIABYSSS2REWARDDIALOGPAGECONTROLLER_INITCURVES_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::Class_3_398B7A90ED0C0464_2*>* GetShowTaskList()
		{
			return ((::System::Collections::Generic::List_1<::Class_3_398B7A90ED0C0464_2*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIABYSSS2REWARDDIALOGPAGECONTROLLER_GETSHOWTASKLIST_OFFSET))(this);
		}

		::System::Void MarkPlaySpecialTaskAnim(::System::EventArgs* args)
		{
			return ((::System::Void(*)(::PVOID, ::System::EventArgs*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIABYSSS2REWARDDIALOGPAGECONTROLLER_MARKPLAYSPECIALTASKANIM_OFFSET))(this, args);
		}

		::System::Void RefreshGetAllBtnState()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIABYSSS2REWARDDIALOGPAGECONTROLLER_REFRESHGETALLBTNSTATE_OFFSET))(this);
		}

		::System::Boolean CanGetAllReward()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIABYSSS2REWARDDIALOGPAGECONTROLLER_CANGETALLREWARD_OFFSET))(this);
		}

		::System::Boolean IsAllNormalTaskNotFinished()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIABYSSS2REWARDDIALOGPAGECONTROLLER_ISALLNORMALTASKNOTFINISHED_OFFSET))(this);
		}

		::System::Void OnInfoBtnClick()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIABYSSS2REWARDDIALOGPAGECONTROLLER_ONINFOBTNCLICK_OFFSET))(this);
		}

		::System::Void OnRewardChangeHandle(::System::EventArgs* obj)
		{
			return ((::System::Void(*)(::PVOID, ::System::EventArgs*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIABYSSS2REWARDDIALOGPAGECONTROLLER_ONREWARDCHANGEHANDLE_OFFSET))(this, obj);
		}

		::System::Void OnItemChanged(::System::EventArgs* obj)
		{
			return ((::System::Void(*)(::PVOID, ::System::EventArgs*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIABYSSS2REWARDDIALOGPAGECONTROLLER_ONITEMCHANGED_OFFSET))(this, obj);
		}

		::System::Void OnGamepadModuleSelectIndex(::MoleMole::MonoGamepadModule* gamepadModule, ::System::Int32 index, ::UnityEngine::Transform* trans, ::Enum_3_03024D6472FC8F3A result)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::MonoGamepadModule*, ::System::Int32, ::UnityEngine::Transform*, ::Enum_3_03024D6472FC8F3A))((::PBYTE)hIl2Cpp + MOLEMOLE_UIABYSSS2REWARDDIALOGPAGECONTROLLER_ONGAMEPADMODULESELECTINDEX_OFFSET))(this, gamepadModule, index, trans, result);
		}

		::System::Void OnRewardFocusChange()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIABYSSS2REWARDDIALOGPAGECONTROLLER_ONREWARDFOCUSCHANGE_OFFSET))(this);
		}

		::System::Void OnTaskFocusChange()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIABYSSS2REWARDDIALOGPAGECONTROLLER_ONTASKFOCUSCHANGE_OFFSET))(this);
		}

		::System::Int32 GetRewardSelectIndex()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIABYSSS2REWARDDIALOGPAGECONTROLLER_GETREWARDSELECTINDEX_OFFSET))(this);
		}

		::System::Void SetSelectRewardItem()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIABYSSS2REWARDDIALOGPAGECONTROLLER_SETSELECTREWARDITEM_OFFSET))(this);
		}

		::System::Void RefreshOnTaskRefresh(::System::EventArgs* args)
		{
			return ((::System::Void(*)(::PVOID, ::System::EventArgs*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIABYSSS2REWARDDIALOGPAGECONTROLLER_REFRESHONTASKREFRESH_OFFSET))(this, args);
		}

		::System::Void SetLevelText(::System::Int32 level)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UIABYSSS2REWARDDIALOGPAGECONTROLLER_SETLEVELTEXT_OFFSET))(this, level);
		}

		::System::Void RefreshView(::System::Boolean triggerByUIOpen, ::System::Boolean triggerBySelectTab)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIABYSSS2REWARDDIALOGPAGECONTROLLER_REFRESHVIEW_OFFSET))(this, triggerByUIOpen, triggerBySelectTab);
		}

		::System::Boolean IsCloseToResetTime()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIABYSSS2REWARDDIALOGPAGECONTROLLER_ISCLOSETORESETTIME_OFFSET))(this);
		}

		::System::Void SaveLastTaskIDAndDelNew()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIABYSSS2REWARDDIALOGPAGECONTROLLER_SAVELASTTASKIDANDDELNEW_OFFSET))(this);
		}

		::System::Void InitTabs()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIABYSSS2REWARDDIALOGPAGECONTROLLER_INITTABS_OFFSET))(this);
		}

		::System::Void InitPageByType(::MoleMole::UIAbyssS2RewardDialogPageController_PageType pageType)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIAbyssS2RewardDialogPageController_PageType))((::PBYTE)hIl2Cpp + MOLEMOLE_UIABYSSS2REWARDDIALOGPAGECONTROLLER_INITPAGEBYTYPE_OFFSET))(this, pageType);
		}

		::System::Void SwitchConsoleKeyState(::System::Boolean showReward)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIABYSSS2REWARDDIALOGPAGECONTROLLER_SWITCHCONSOLEKEYSTATE_OFFSET))(this, showReward);
		}

		::System::Void PlayAnim(::MoleMole::UIAbyssS2RewardDialogPageController_PageType from, ::MoleMole::UIAbyssS2RewardDialogPageController_PageType to)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIAbyssS2RewardDialogPageController_PageType, ::MoleMole::UIAbyssS2RewardDialogPageController_PageType))((::PBYTE)hIl2Cpp + MOLEMOLE_UIABYSSS2REWARDDIALOGPAGECONTROLLER_PLAYANIM_OFFSET))(this, from, to);
		}

		::System::Void OnClickGetReward(::MoleMole::UIAbyssRewardWidgetController* obj)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIAbyssRewardWidgetController*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIABYSSS2REWARDDIALOGPAGECONTROLLER_ONCLICKGETREWARD_OFFSET))(this, obj);
		}

		::System::Void OnTakeRewardHandle(::Class_0_16E4307DCC419505_36* rcvMessage)
		{
			return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_36*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIABYSSS2REWARDDIALOGPAGECONTROLLER_ONTAKEREWARDHANDLE_OFFSET))(this, rcvMessage);
		}

		::System::Void OnTakeRewardErrorHandle(::Class_0_16E4307DCC419505_36* rcvMessage)
		{
			return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_36*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIABYSSS2REWARDDIALOGPAGECONTROLLER_ONTAKEREWARDERRORHANDLE_OFFSET))(this, rcvMessage);
		}

		::System::Void OnTakeAllRewardErrorHandle(::Class_0_16E4307DCC419505_36* rcvMessage)
		{
			return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_36*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIABYSSS2REWARDDIALOGPAGECONTROLLER_ONTAKEALLREWARDERRORHANDLE_OFFSET))(this, rcvMessage);
		}

		::System::Void OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIABYSSS2REWARDDIALOGPAGECONTROLLER_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void _OnUIInit_b__6_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIABYSSS2REWARDDIALOGPAGECONTROLLER__ONUIINIT_B__6_0_OFFSET))(this);
		}

		::System::Void _InitTabs_b__68_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIABYSSS2REWARDDIALOGPAGECONTROLLER__INITTABS_B__68_0_OFFSET))(this);
		}

		::System::Void _InitTabs_b__68_1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIABYSSS2REWARDDIALOGPAGECONTROLLER__INITTABS_B__68_1_OFFSET))(this);
		}

		::System::Void _OnTakeRewardHandle_b__83_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIABYSSS2REWARDDIALOGPAGECONTROLLER__ONTAKEREWARDHANDLE_B__83_0_OFFSET))(this);
		}

		::System::Void __base_OnCreateView(::MoleMole::UIControlReference* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIABYSSS2REWARDDIALOGPAGECONTROLLER___BASE_ONCREATEVIEW_OFFSET))(this, P0);
		}

		::System::Void __base_OnGamepadModuleSelectIndex(::MoleMole::MonoGamepadModule* P0, ::System::Int32 P1, ::UnityEngine::Transform* P2, ::Enum_3_03024D6472FC8F3A P3)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::MonoGamepadModule*, ::System::Int32, ::UnityEngine::Transform*, ::Enum_3_03024D6472FC8F3A))((::PBYTE)hIl2Cpp + MOLEMOLE_UIABYSSS2REWARDDIALOGPAGECONTROLLER___BASE_ONGAMEPADMODULESELECTINDEX_OFFSET))(this, P0, P1, P2, P3);
		}

		::System::Void __base_OnUIClose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIABYSSS2REWARDDIALOGPAGECONTROLLER___BASE_ONUICLOSE_OFFSET))(this);
		}

		::System::Void __base_OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIABYSSS2REWARDDIALOGPAGECONTROLLER___BASE_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void __base_OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIABYSSS2REWARDDIALOGPAGECONTROLLER___BASE_ONUIINIT_OFFSET))(this);
		}

		::System::Void __base_OnUIOpen(::MoleMole::UIControllerContextBase* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIABYSSS2REWARDDIALOGPAGECONTROLLER___BASE_ONUIOPEN_OFFSET))(this, P0);
		}
	};
}

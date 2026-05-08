#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTask.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTask_1.h"
#include "unitysdk/Enum_3_3EDF246633A325B0.h"
#include "unitysdk/Enum_3_8E90989A26BC6232.h"
#include "unitysdk/MoleMole/InputActionEvent.h"
#include "unitysdk/MoleMole/UIAbyssS2EntrancePageController_LevelTabStatus.h"
#include "unitysdk/MoleMole/UIWindowController.h"

class Class_2_208CC9941471731A_29;
class Class_2_208CC9941471731A_535;
class Class_2_7B15B3118FE590CD_26;
class Class_2_E621E51D351EB960;
namespace MoleMole { class UIAbyssEntranceContext; }
namespace MoleMole { class UIAbyssLimboWidgetController; }
namespace MoleMole { class UIAbyssS2EventPageController; }
namespace MoleMole { class UIAbyssS2RoleChallengeWidgetController; }
namespace MoleMole { class UIAbyssS3EntranceMainWidgetController; }
namespace MoleMole { class UIControlReference; }
namespace MoleMole { class UIControllerContextBase; }
namespace MoleMole { class UIGeneralNewHintWidgetController; }
namespace MoleMole { class UIYorozuyaAbyssS2WidgetController; }
namespace MoleMole { class UIYorozuyaAbyssS3PageController; }
namespace System { class Action; }
namespace System { class EventArgs; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Animation; }
namespace UnityEngine { class Coroutine; }

#define MOLEMOLE_UIABYSSS2ENTRANCEPAGECONTROLLER_CHECKTABCLICKWITHTIPS_OFFSET UNITYSDK_OFFSET(0x16316230)
#define MOLEMOLE_UIABYSSS2ENTRANCEPAGECONTROLLER_DELTABLEVELNEW_OFFSET UNITYSDK_OFFSET(0x163168C0)
#define MOLEMOLE_UIABYSSS2ENTRANCEPAGECONTROLLER_DOTRIGGERNEWBIE_UNITASK_OFFSET UNITYSDK_OFFSET(0x17078E90)
#define MOLEMOLE_UIABYSSS2ENTRANCEPAGECONTROLLER_GETDUTYNUM_OFFSET UNITYSDK_OFFSET(0x1707B490)
#define MOLEMOLE_UIABYSSS2ENTRANCEPAGECONTROLLER_GETFILLAMOUNTBYEXPRATIO_OFFSET UNITYSDK_OFFSET(0x1707A7C0)
#define MOLEMOLE_UIABYSSS2ENTRANCEPAGECONTROLLER_GETTABANIM_OFFSET UNITYSDK_OFFSET(0x16316F50)
#define MOLEMOLE_UIABYSSS2ENTRANCEPAGECONTROLLER_GETTABINDEX_OFFSET UNITYSDK_OFFSET(0x16316070)
#define MOLEMOLE_UIABYSSS2ENTRANCEPAGECONTROLLER_GETTABTYPE_OFFSET UNITYSDK_OFFSET(0x16316020)
#define MOLEMOLE_UIABYSSS2ENTRANCEPAGECONTROLLER_GET_HOTSWITCHROOTLAYERSTATE_OFFSET UNITYSDK_OFFSET(0x170761D0)
#define MOLEMOLE_UIABYSSS2ENTRANCEPAGECONTROLLER_GET_WINDOWTYPE_OFFSET UNITYSDK_OFFSET(0x170761E0)
#define MOLEMOLE_UIABYSSS2ENTRANCEPAGECONTROLLER_GOTOMAINCITY_OFFSET UNITYSDK_OFFSET(0x16315F00)
#define MOLEMOLE_UIABYSSS2ENTRANCEPAGECONTROLLER_INITENTRANCE_OFFSET UNITYSDK_OFFSET(0x17076B70)
#define MOLEMOLE_UIABYSSS2ENTRANCEPAGECONTROLLER_INITSHOWGROUP_OFFSET UNITYSDK_OFFSET(0x17076D60)
#define MOLEMOLE_UIABYSSS2ENTRANCEPAGECONTROLLER_ISCLOSETORESETTIME_OFFSET UNITYSDK_OFFSET(0x1707A020)
#define MOLEMOLE_UIABYSSS2ENTRANCEPAGECONTROLLER_ONCLICKTAB_OFFSET UNITYSDK_OFFSET(0x163160C0)
#define MOLEMOLE_UIABYSSS2ENTRANCEPAGECONTROLLER_ONCLICKTALENTHANDLE_OFFSET UNITYSDK_OFFSET(0x1707BD70)
#define MOLEMOLE_UIABYSSS2ENTRANCEPAGECONTROLLER_ONCLOSEBTNCLICK_OFFSET UNITYSDK_OFFSET(0x1707BEC0)
#define MOLEMOLE_UIABYSSS2ENTRANCEPAGECONTROLLER_ONCOLLECTBTNCLICK_OFFSET UNITYSDK_OFFSET(0x1707C230)
#define MOLEMOLE_UIABYSSS2ENTRANCEPAGECONTROLLER_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x170761F0)
#define MOLEMOLE_UIABYSSS2ENTRANCEPAGECONTROLLER_ONINFOBTNCLICK_OFFSET UNITYSDK_OFFSET(0x1707BCF0)
#define MOLEMOLE_UIABYSSS2ENTRANCEPAGECONTROLLER_ONINPUTACTION_OFFSET UNITYSDK_OFFSET(0x17078800)
#define MOLEMOLE_UIABYSSS2ENTRANCEPAGECONTROLLER_ONLIMBOENTRANCECLICKHANDLE_OFFSET UNITYSDK_OFFSET(0x170774E0)
#define MOLEMOLE_UIABYSSS2ENTRANCEPAGECONTROLLER_ONLIMBOENTRANCE_OFFSET UNITYSDK_OFFSET(0x17077540)
#define MOLEMOLE_UIABYSSS2ENTRANCEPAGECONTROLLER_ONMAINBTNCLICKHANDLE_OFFSET UNITYSDK_OFFSET(0x1707BF10)
#define MOLEMOLE_UIABYSSS2ENTRANCEPAGECONTROLLER_ONPOSTPAGESHOWED_OFFSET UNITYSDK_OFFSET(0x170789C0)
#define MOLEMOLE_UIABYSSS2ENTRANCEPAGECONTROLLER_ONREWARDBTNCLICK_OFFSET UNITYSDK_OFFSET(0x1707C060)
#define MOLEMOLE_UIABYSSS2ENTRANCEPAGECONTROLLER_ONREWARDCHANGEHANDLE_OFFSET UNITYSDK_OFFSET(0x1707B560)
#define MOLEMOLE_UIABYSSS2ENTRANCEPAGECONTROLLER_ONREWARDMISSIONBTNCLICK_OFFSET UNITYSDK_OFFSET(0x1707BF60)
#define MOLEMOLE_UIABYSSS2ENTRANCEPAGECONTROLLER_ONSHOWPLAYTEXTUREFRAME_OFFSET UNITYSDK_OFFSET(0x17076E40)
#define MOLEMOLE_UIABYSSS2ENTRANCEPAGECONTROLLER_ONSHOW_OFFSET UNITYSDK_OFFSET(0x17077CD0)
#define MOLEMOLE_UIABYSSS2ENTRANCEPAGECONTROLLER_ONSTOREBTNCLICK_OFFSET UNITYSDK_OFFSET(0x1707C190)
#define MOLEMOLE_UIABYSSS2ENTRANCEPAGECONTROLLER_ONTOTALREWARDBTNCLICK_OFFSET UNITYSDK_OFFSET(0x16315E00)
#define MOLEMOLE_UIABYSSS2ENTRANCEPAGECONTROLLER_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x1707BA30)
#define MOLEMOLE_UIABYSSS2ENTRANCEPAGECONTROLLER_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x17076280)
#define MOLEMOLE_UIABYSSS2ENTRANCEPAGECONTROLLER_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x17076EE0)
#define MOLEMOLE_UIABYSSS2ENTRANCEPAGECONTROLLER_PLAYBMFADEOUT_1_OFFSET UNITYSDK_OFFSET(0x1707BBF0)
#define MOLEMOLE_UIABYSSS2ENTRANCEPAGECONTROLLER_PLAYBMFADEOUT_OFFSET UNITYSDK_OFFSET(0x1707BAA0)
#define MOLEMOLE_UIABYSSS2ENTRANCEPAGECONTROLLER_PLAYPOINTSANIM_OFFSET UNITYSDK_OFFSET(0x1707B510)
#define MOLEMOLE_UIABYSSS2ENTRANCEPAGECONTROLLER_PLAYTABFADEINANIM_OFFSET UNITYSDK_OFFSET(0x16317280)
#define MOLEMOLE_UIABYSSS2ENTRANCEPAGECONTROLLER_PLAYTABFADEOUTANIM_OFFSET UNITYSDK_OFFSET(0x163170A0)
#define MOLEMOLE_UIABYSSS2ENTRANCEPAGECONTROLLER_REFRESHENTRANCESTATE_OFFSET UNITYSDK_OFFSET(0x17078720)
#define MOLEMOLE_UIABYSSS2ENTRANCEPAGECONTROLLER_REFRESHENTRANCE_OFFSET UNITYSDK_OFFSET(0x170783E0)
#define MOLEMOLE_UIABYSSS2ENTRANCEPAGECONTROLLER_REFRESHSTORENEW_OFFSET UNITYSDK_OFFSET(0x1707B5B0)
#define MOLEMOLE_UIABYSSS2ENTRANCEPAGECONTROLLER_REFRESHTABANIM_OFFSET UNITYSDK_OFFSET(0x16316910)
#define MOLEMOLE_UIABYSSS2ENTRANCEPAGECONTROLLER_REFRESHVIEW_OFFSET UNITYSDK_OFFSET(0x17077DA0)
#define MOLEMOLE_UIABYSSS2ENTRANCEPAGECONTROLLER_SELECTTAB_OFFSET UNITYSDK_OFFSET(0x16316280)
#define MOLEMOLE_UIABYSSS2ENTRANCEPAGECONTROLLER_SETASLASTTIMEVIEW_OFFSET UNITYSDK_OFFSET(0x1707A3A0)
#define MOLEMOLE_UIABYSSS2ENTRANCEPAGECONTROLLER_SETLASTVIEWANDPLAYANIM_UNITASK_OFFSET UNITYSDK_OFFSET(0x1707A260)
#define MOLEMOLE_UIABYSSS2ENTRANCEPAGECONTROLLER_SETMAINQUESTREAD_OFFSET UNITYSDK_OFFSET(0x1707B950)
#define MOLEMOLE_UIABYSSS2ENTRANCEPAGECONTROLLER_SHOWDOUBLESWITCHTIP_UNITASK_OFFSET UNITYSDK_OFFSET(0x170793D0)
#define MOLEMOLE_UIABYSSS2ENTRANCEPAGECONTROLLER_SHOWENDTIMETIP_UNITASK_OFFSET UNITYSDK_OFFSET(0x170795B0)
#define MOLEMOLE_UIABYSSS2ENTRANCEPAGECONTROLLER_SHOWVERSIONUPDATEREMINDER_WITHUNITASK_OFFSET UNITYSDK_OFFSET(0x17079B10)
#define MOLEMOLE_UIABYSSS2ENTRANCEPAGECONTROLLER_STOPSWITCHANIM_OFFSET UNITYSDK_OFFSET(0x16316E20)
#define MOLEMOLE_UIABYSSS2ENTRANCEPAGECONTROLLER_STOPTABANIM_OFFSET UNITYSDK_OFFSET(0x16317450)
#define MOLEMOLE_UIABYSSS2ENTRANCEPAGECONTROLLER_TRYPLAYANIM_OFFSET UNITYSDK_OFFSET(0x1707A840)
#define MOLEMOLE_UIABYSSS2ENTRANCEPAGECONTROLLER_TRYPLAYEXPANIM_OFFSET UNITYSDK_OFFSET(0x1707AC10)
#define MOLEMOLE_UIABYSSS2ENTRANCEPAGECONTROLLER_TRYPLAYPOINTANIM_OFFSET UNITYSDK_OFFSET(0x1707AF90)
#define MOLEMOLE_UIABYSSS2ENTRANCEPAGECONTROLLER_TRYPLAYPOINTLIMITANIM_OFFSET UNITYSDK_OFFSET(0x1707B1E0)
#define MOLEMOLE_UIABYSSS2ENTRANCEPAGECONTROLLER_TRYSHOWENDANIMSANDEFFECTS_UNITASK_OFFSET UNITYSDK_OFFSET(0x17079D90)
#define MOLEMOLE_UIABYSSS2ENTRANCEPAGECONTROLLER_TRYSHOWTIPSWITHUNITASK_OFFSET UNITYSDK_OFFSET(0x17078DC0)
#define MOLEMOLE_UIABYSSS2ENTRANCEPAGECONTROLLER__CCTOR_OFFSET UNITYSDK_OFFSET(0x16317710)
#define MOLEMOLE_UIABYSSS2ENTRANCEPAGECONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x163175F0)
#define MOLEMOLE_UIABYSSS2ENTRANCEPAGECONTROLLER__ONCOLLECTBTNCLICK_B__58_0_OFFSET UNITYSDK_OFFSET(0x16317B60)
#define MOLEMOLE_UIABYSSS2ENTRANCEPAGECONTROLLER__REFRESHSTORENEW_B__39_0_OFFSET UNITYSDK_OFFSET(0x16317930)
#define MOLEMOLE_UIABYSSS2ENTRANCEPAGECONTROLLER___BASE_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x16317BE0)
#define MOLEMOLE_UIABYSSS2ENTRANCEPAGECONTROLLER___BASE_ONINPUTACTION_OFFSET UNITYSDK_OFFSET(0x16317C70)
#define MOLEMOLE_UIABYSSS2ENTRANCEPAGECONTROLLER___BASE_ONPOSTPAGESHOWED_OFFSET UNITYSDK_OFFSET(0x16317CA0)
#define MOLEMOLE_UIABYSSS2ENTRANCEPAGECONTROLLER___BASE_ONSHOW_OFFSET UNITYSDK_OFFSET(0x16317CB0)
#define MOLEMOLE_UIABYSSS2ENTRANCEPAGECONTROLLER___BASE_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x16317CC0)
#define MOLEMOLE_UIABYSSS2ENTRANCEPAGECONTROLLER___BASE_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x16317CD0)
#define MOLEMOLE_UIABYSSS2ENTRANCEPAGECONTROLLER___BASE_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x16317CE0)

namespace MoleMole
{
	inline static constexpr unsigned int UIAbyssS2EntrancePageController_TypeDefinitionIndex = 75383;

	class UIAbyssS2EntrancePageController : public ::MoleMole::UIWindowController
	{
	public:
		static ::System::Collections::Generic::Dictionary_2<::MoleMole::UIAbyssS2EntrancePageController_LevelTabStatus, ::Il2CppArray<::System::String*>*>** StaticGet__tabAnimNameDict()
		{
			return (::System::Collections::Generic::Dictionary_2<::MoleMole::UIAbyssS2EntrancePageController_LevelTabStatus, ::Il2CppArray<::System::String*>*>**)Il2CppClass::FromTypeDefinitionIndex(UIAbyssS2EntrancePageController_TypeDefinitionIndex)->GetStaticField(0x34CD0);
		}
		// static const ::System::String* pointIconPath; // 0x0
		// static const ::System::Int32 ABYSS_SHOP_TAB_ID = 0x191; // 0x0
		// static const ::System::Int32 DEFAULT_SELECT_INDEX = 0x0; // 0x0
		::Class_2_7B15B3118FE590CD_26* _view; // 0x310
		::MoleMole::UIAbyssEntranceContext* _context; // 0x318
		::System::Boolean TestUniTask; // 0x320
		::System::Int32 TalentNewbieID; // 0x324
		::System::Int32 HobaPrefacNewbieID; // 0x328
		::System::Boolean m_needPlayAnim; // 0x32C
		::System::Single m_beforeLvUpDurationLen; // 0x330
		::System::Single m_afterLvUpDurationLen; // 0x334
		::System::Collections::Generic::Dictionary_2<::MoleMole::UIAbyssS2EntrancePageController_LevelTabStatus, ::MoleMole::UIGeneralNewHintWidgetController*>* _tabNewHintCtrlDict; // 0x338
		::MoleMole::UIAbyssS2EntrancePageController_LevelTabStatus _activityBattleSubType; // 0x340
		::UnityEngine::Coroutine* _switchAnimCoroutineFadeOut; // 0x348
		::UnityEngine::Coroutine* _switchAnimCoroutineFadeIn; // 0x350
		::System::Int32 _switchAnimIndex; // 0x358
		::MoleMole::UIYorozuyaAbyssS2WidgetController* abyssWidget; // 0x360
		::MoleMole::UIYorozuyaAbyssS3PageController* abyssS3Widget; // 0x368
		::MoleMole::UIAbyssS2RoleChallengeWidgetController* roleChallengePage; // 0x370
		::MoleMole::UIAbyssS2EventPageController* eventPage; // 0x378
		::System::Collections::Generic::List_1<::MoleMole::UIAbyssLimboWidgetController*>* entranceList; // 0x380
		::Class_2_E621E51D351EB960* _abyssModel; // 0x388
		::Class_2_208CC9941471731A_29* currentAbyssGroup; // 0x390
		::MoleMole::UIAbyssS3EntranceMainWidgetController* _abyssS3EntranceMainWidget; // 0x398

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIABYSSS2ENTRANCEPAGECONTROLLER__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_UIABYSSS2ENTRANCEPAGECONTROLLER__CCTOR_OFFSET))();
		}

		::Enum_3_8E90989A26BC6232 get_HotSwitchRootLayerState()
		{
			return ((::Enum_3_8E90989A26BC6232(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIABYSSS2ENTRANCEPAGECONTROLLER_GET_HOTSWITCHROOTLAYERSTATE_OFFSET))(this);
		}

		::Enum_3_3EDF246633A325B0 get_windowType()
		{
			return ((::Enum_3_3EDF246633A325B0(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIABYSSS2ENTRANCEPAGECONTROLLER_GET_WINDOWTYPE_OFFSET))(this);
		}

		::System::Void OnCreateView(::MoleMole::UIControlReference* controlReference)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIABYSSS2ENTRANCEPAGECONTROLLER_ONCREATEVIEW_OFFSET))(this, controlReference);
		}

		::System::Void OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIABYSSS2ENTRANCEPAGECONTROLLER_ONUIINIT_OFFSET))(this);
		}

		::System::Void OnShowPlayTextureFrame(::System::EventArgs* args)
		{
			return ((::System::Void(*)(::PVOID, ::System::EventArgs*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIABYSSS2ENTRANCEPAGECONTROLLER_ONSHOWPLAYTEXTUREFRAME_OFFSET))(this, args);
		}

		::System::Void OnUIOpen(::MoleMole::UIControllerContextBase* openCtrlContext)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIABYSSS2ENTRANCEPAGECONTROLLER_ONUIOPEN_OFFSET))(this, openCtrlContext);
		}

		::System::Void OnShow(::MoleMole::UIControllerContextBase* showCtrlContext)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIABYSSS2ENTRANCEPAGECONTROLLER_ONSHOW_OFFSET))(this, showCtrlContext);
		}

		::System::Boolean OnInputAction(::MoleMole::InputActionEvent inputAction)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::InputActionEvent))((::PBYTE)hIl2Cpp + MOLEMOLE_UIABYSSS2ENTRANCEPAGECONTROLLER_ONINPUTACTION_OFFSET))(this, inputAction);
		}

		::System::Void OnPostPageShowed()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIABYSSS2ENTRANCEPAGECONTROLLER_ONPOSTPAGESHOWED_OFFSET))(this);
		}

		::System::Void TryShowTipsWithUniTask(::System::Boolean hasWidget)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIABYSSS2ENTRANCEPAGECONTROLLER_TRYSHOWTIPSWITHUNITASK_OFFSET))(this, hasWidget);
		}

		::Cysharp::Threading::Tasks::UniTask DoTriggerNewbie_UniTask()
		{
			return ((::Cysharp::Threading::Tasks::UniTask(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIABYSSS2ENTRANCEPAGECONTROLLER_DOTRIGGERNEWBIE_UNITASK_OFFSET))(this);
		}

		::Cysharp::Threading::Tasks::UniTask ShowDoubleSwitchTip_UniTask()
		{
			return ((::Cysharp::Threading::Tasks::UniTask(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIABYSSS2ENTRANCEPAGECONTROLLER_SHOWDOUBLESWITCHTIP_UNITASK_OFFSET))(this);
		}

		::Cysharp::Threading::Tasks::UniTask ShowEndTimeTip_UniTask()
		{
			return ((::Cysharp::Threading::Tasks::UniTask(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIABYSSS2ENTRANCEPAGECONTROLLER_SHOWENDTIMETIP_UNITASK_OFFSET))(this);
		}

		::Cysharp::Threading::Tasks::UniTask_1<::System::Int32> ShowVersionUpdateReminder_WithUniTask()
		{
			return ((::Cysharp::Threading::Tasks::UniTask_1<::System::Int32>(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIABYSSS2ENTRANCEPAGECONTROLLER_SHOWVERSIONUPDATEREMINDER_WITHUNITASK_OFFSET))(this);
		}

		::Cysharp::Threading::Tasks::UniTask TryShowEndAnimsAndEffects_UniTask()
		{
			return ((::Cysharp::Threading::Tasks::UniTask(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIABYSSS2ENTRANCEPAGECONTROLLER_TRYSHOWENDANIMSANDEFFECTS_UNITASK_OFFSET))(this);
		}

		::Cysharp::Threading::Tasks::UniTask SetLastViewAndPlayAnim_UniTask(::System::Int32 reminderID)
		{
			return ((::Cysharp::Threading::Tasks::UniTask(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UIABYSSS2ENTRANCEPAGECONTROLLER_SETLASTVIEWANDPLAYANIM_UNITASK_OFFSET))(this, reminderID);
		}

		::System::Void SetAsLastTimeView()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIABYSSS2ENTRANCEPAGECONTROLLER_SETASLASTTIMEVIEW_OFFSET))(this);
		}

		::System::Void TryPlayAnim(::System::Int32 reminderID)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UIABYSSS2ENTRANCEPAGECONTROLLER_TRYPLAYANIM_OFFSET))(this, reminderID);
		}

		::System::Int32 GetDutyNum()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIABYSSS2ENTRANCEPAGECONTROLLER_GETDUTYNUM_OFFSET))(this);
		}

		::System::Void TryPlayExpAnim(::System::Boolean isGettingMaxLevel, ::System::Int32 oldLevel, ::System::Int32 newLevel, ::System::Single oldRatio, ::System::Single newRatio)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean, ::System::Int32, ::System::Int32, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_UIABYSSS2ENTRANCEPAGECONTROLLER_TRYPLAYEXPANIM_OFFSET))(this, isGettingMaxLevel, oldLevel, newLevel, oldRatio, newRatio);
		}

		::System::Single GetFillAmountByExpRatio(::System::Boolean isMaxLevel, ::System::Single progressRate)
		{
			return ((::System::Single(*)(::PVOID, ::System::Boolean, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_UIABYSSS2ENTRANCEPAGECONTROLLER_GETFILLAMOUNTBYEXPRATIO_OFFSET))(this, isMaxLevel, progressRate);
		}

		::System::Void TryPlayPointAnim(::System::Boolean hasUpgrade)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIABYSSS2ENTRANCEPAGECONTROLLER_TRYPLAYPOINTANIM_OFFSET))(this, hasUpgrade);
		}

		::System::Void TryPlayPointLimitAnim()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIABYSSS2ENTRANCEPAGECONTROLLER_TRYPLAYPOINTLIMITANIM_OFFSET))(this);
		}

		::System::Void PlayPointsAnim(::System::Int32 oldpoint, ::System::Int32 newpoint)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UIABYSSS2ENTRANCEPAGECONTROLLER_PLAYPOINTSANIM_OFFSET))(this, oldpoint, newpoint);
		}

		::System::Boolean IsCloseToResetTime()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIABYSSS2ENTRANCEPAGECONTROLLER_ISCLOSETORESETTIME_OFFSET))(this);
		}

		::System::Void OnRewardChangeHandle(::System::EventArgs* obj)
		{
			return ((::System::Void(*)(::PVOID, ::System::EventArgs*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIABYSSS2ENTRANCEPAGECONTROLLER_ONREWARDCHANGEHANDLE_OFFSET))(this, obj);
		}

		::System::Void RefreshView()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIABYSSS2ENTRANCEPAGECONTROLLER_REFRESHVIEW_OFFSET))(this);
		}

		::System::Void RefreshStoreNew()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIABYSSS2ENTRANCEPAGECONTROLLER_REFRESHSTORENEW_OFFSET))(this);
		}

		::System::Void RefreshEntrance()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIABYSSS2ENTRANCEPAGECONTROLLER_REFRESHENTRANCE_OFFSET))(this);
		}

		::System::Void SetMainQuestRead(::System::Single fadeOutLen)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_UIABYSSS2ENTRANCEPAGECONTROLLER_SETMAINQUESTREAD_OFFSET))(this, fadeOutLen);
		}

		::System::Void RefreshEntranceState(::System::Single delay)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_UIABYSSS2ENTRANCEPAGECONTROLLER_REFRESHENTRANCESTATE_OFFSET))(this, delay);
		}

		::System::Void OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIABYSSS2ENTRANCEPAGECONTROLLER_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void InitEntrance()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIABYSSS2ENTRANCEPAGECONTROLLER_INITENTRANCE_OFFSET))(this);
		}

		::System::Void InitShowGroup()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIABYSSS2ENTRANCEPAGECONTROLLER_INITSHOWGROUP_OFFSET))(this);
		}

		::System::Void OnLimboEntranceClickHandle(::Class_2_208CC9941471731A_535* obj)
		{
			return ((::System::Void(*)(::PVOID, ::Class_2_208CC9941471731A_535*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIABYSSS2ENTRANCEPAGECONTROLLER_ONLIMBOENTRANCECLICKHANDLE_OFFSET))(this, obj);
		}

		::System::Void OnLimboEntrance(::Class_2_208CC9941471731A_535* entranceConfig, ::System::Int32 questId)
		{
			return ((::System::Void(*)(::PVOID, ::Class_2_208CC9941471731A_535*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UIABYSSS2ENTRANCEPAGECONTROLLER_ONLIMBOENTRANCE_OFFSET))(this, entranceConfig, questId);
		}

		::System::Void PlayBmFadeOut(::System::Action* callback)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIABYSSS2ENTRANCEPAGECONTROLLER_PLAYBMFADEOUT_OFFSET))(this, callback);
		}

		::System::Single PlayBmFadeOut_1()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIABYSSS2ENTRANCEPAGECONTROLLER_PLAYBMFADEOUT_1_OFFSET))(this);
		}

		::System::Void OnInfoBtnClick()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIABYSSS2ENTRANCEPAGECONTROLLER_ONINFOBTNCLICK_OFFSET))(this);
		}

		::System::Void OnClickTalentHandle()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIABYSSS2ENTRANCEPAGECONTROLLER_ONCLICKTALENTHANDLE_OFFSET))(this);
		}

		::System::Void OnCloseBtnClick()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIABYSSS2ENTRANCEPAGECONTROLLER_ONCLOSEBTNCLICK_OFFSET))(this);
		}

		::System::Void OnMainBtnClickHandle()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIABYSSS2ENTRANCEPAGECONTROLLER_ONMAINBTNCLICKHANDLE_OFFSET))(this);
		}

		::System::Void OnRewardMissionBtnClick()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIABYSSS2ENTRANCEPAGECONTROLLER_ONREWARDMISSIONBTNCLICK_OFFSET))(this);
		}

		::System::Void OnRewardBtnClick()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIABYSSS2ENTRANCEPAGECONTROLLER_ONREWARDBTNCLICK_OFFSET))(this);
		}

		::System::Void OnStoreBtnClick()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIABYSSS2ENTRANCEPAGECONTROLLER_ONSTOREBTNCLICK_OFFSET))(this);
		}

		::System::Void OnCollectBtnClick()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIABYSSS2ENTRANCEPAGECONTROLLER_ONCOLLECTBTNCLICK_OFFSET))(this);
		}

		::System::Void OnTotalRewardBtnClick()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIABYSSS2ENTRANCEPAGECONTROLLER_ONTOTALREWARDBTNCLICK_OFFSET))(this);
		}

		::System::Void GoToMainCity()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIABYSSS2ENTRANCEPAGECONTROLLER_GOTOMAINCITY_OFFSET))(this);
		}

		::MoleMole::UIAbyssS2EntrancePageController_LevelTabStatus GetTabType(::System::Int32 tabIndex)
		{
			return ((::MoleMole::UIAbyssS2EntrancePageController_LevelTabStatus(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UIABYSSS2ENTRANCEPAGECONTROLLER_GETTABTYPE_OFFSET))(this, tabIndex);
		}

		::System::Int32 GetTabIndex(::MoleMole::UIAbyssS2EntrancePageController_LevelTabStatus activityBattleSubType)
		{
			return ((::System::Int32(*)(::PVOID, ::MoleMole::UIAbyssS2EntrancePageController_LevelTabStatus))((::PBYTE)hIl2Cpp + MOLEMOLE_UIABYSSS2ENTRANCEPAGECONTROLLER_GETTABINDEX_OFFSET))(this, activityBattleSubType);
		}

		::System::Void OnClickTab(::MoleMole::UIAbyssS2EntrancePageController_LevelTabStatus activityBattleSubType)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIAbyssS2EntrancePageController_LevelTabStatus))((::PBYTE)hIl2Cpp + MOLEMOLE_UIABYSSS2ENTRANCEPAGECONTROLLER_ONCLICKTAB_OFFSET))(this, activityBattleSubType);
		}

		::System::Boolean CheckTabClickWithTips(::MoleMole::UIAbyssS2EntrancePageController_LevelTabStatus subType)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::UIAbyssS2EntrancePageController_LevelTabStatus))((::PBYTE)hIl2Cpp + MOLEMOLE_UIABYSSS2ENTRANCEPAGECONTROLLER_CHECKTABCLICKWITHTIPS_OFFSET))(this, subType);
		}

		::System::Void SelectTab(::MoleMole::UIAbyssS2EntrancePageController_LevelTabStatus activityBattleSubType, ::System::Boolean withAni, ::System::Int32 questID)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIAbyssS2EntrancePageController_LevelTabStatus, ::System::Boolean, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UIABYSSS2ENTRANCEPAGECONTROLLER_SELECTTAB_OFFSET))(this, activityBattleSubType, withAni, questID);
		}

		::System::Void DelTabLevelNew(::MoleMole::UIAbyssS2EntrancePageController_LevelTabStatus subType)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIAbyssS2EntrancePageController_LevelTabStatus))((::PBYTE)hIl2Cpp + MOLEMOLE_UIABYSSS2ENTRANCEPAGECONTROLLER_DELTABLEVELNEW_OFFSET))(this, subType);
		}

		::System::Void RefreshTabAnim(::MoleMole::UIAbyssS2EntrancePageController_LevelTabStatus oldSubType, ::MoleMole::UIAbyssS2EntrancePageController_LevelTabStatus newSubType, ::System::Boolean withAni, ::System::Action* fadeOutCallBack)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIAbyssS2EntrancePageController_LevelTabStatus, ::MoleMole::UIAbyssS2EntrancePageController_LevelTabStatus, ::System::Boolean, ::System::Action*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIABYSSS2ENTRANCEPAGECONTROLLER_REFRESHTABANIM_OFFSET))(this, oldSubType, newSubType, withAni, fadeOutCallBack);
		}

		::System::Void PlayTabFadeInAnim(::MoleMole::UIAbyssS2EntrancePageController_LevelTabStatus subType, ::System::Action* finishCb)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIAbyssS2EntrancePageController_LevelTabStatus, ::System::Action*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIABYSSS2ENTRANCEPAGECONTROLLER_PLAYTABFADEINANIM_OFFSET))(this, subType, finishCb);
		}

		::System::Void PlayTabFadeOutAnim(::MoleMole::UIAbyssS2EntrancePageController_LevelTabStatus subType, ::System::Action* finishCb)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIAbyssS2EntrancePageController_LevelTabStatus, ::System::Action*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIABYSSS2ENTRANCEPAGECONTROLLER_PLAYTABFADEOUTANIM_OFFSET))(this, subType, finishCb);
		}

		::System::Void StopSwitchAnim()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIABYSSS2ENTRANCEPAGECONTROLLER_STOPSWITCHANIM_OFFSET))(this);
		}

		::System::Void StopTabAnim()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIABYSSS2ENTRANCEPAGECONTROLLER_STOPTABANIM_OFFSET))(this);
		}

		::UnityEngine::Animation* GetTabAnim(::MoleMole::UIAbyssS2EntrancePageController_LevelTabStatus subType)
		{
			return ((::UnityEngine::Animation*(*)(::PVOID, ::MoleMole::UIAbyssS2EntrancePageController_LevelTabStatus))((::PBYTE)hIl2Cpp + MOLEMOLE_UIABYSSS2ENTRANCEPAGECONTROLLER_GETTABANIM_OFFSET))(this, subType);
		}

		::System::Void _RefreshStoreNew_b__39_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIABYSSS2ENTRANCEPAGECONTROLLER__REFRESHSTORENEW_B__39_0_OFFSET))(this);
		}

		::System::Void _OnCollectBtnClick_b__58_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIABYSSS2ENTRANCEPAGECONTROLLER__ONCOLLECTBTNCLICK_B__58_0_OFFSET))(this);
		}

		::System::Void __base_OnCreateView(::MoleMole::UIControlReference* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIABYSSS2ENTRANCEPAGECONTROLLER___BASE_ONCREATEVIEW_OFFSET))(this, P0);
		}

		::System::Boolean __base_OnInputAction(::MoleMole::InputActionEvent P0)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::InputActionEvent))((::PBYTE)hIl2Cpp + MOLEMOLE_UIABYSSS2ENTRANCEPAGECONTROLLER___BASE_ONINPUTACTION_OFFSET))(this, P0);
		}

		::System::Void __base_OnPostPageShowed()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIABYSSS2ENTRANCEPAGECONTROLLER___BASE_ONPOSTPAGESHOWED_OFFSET))(this);
		}

		::System::Void __base_OnShow(::MoleMole::UIControllerContextBase* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIABYSSS2ENTRANCEPAGECONTROLLER___BASE_ONSHOW_OFFSET))(this, P0);
		}

		::System::Void __base_OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIABYSSS2ENTRANCEPAGECONTROLLER___BASE_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void __base_OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIABYSSS2ENTRANCEPAGECONTROLLER___BASE_ONUIINIT_OFFSET))(this);
		}

		::System::Void __base_OnUIOpen(::MoleMole::UIControllerContextBase* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIABYSSS2ENTRANCEPAGECONTROLLER___BASE_ONUIOPEN_OFFSET))(this, P0);
		}
	};
}

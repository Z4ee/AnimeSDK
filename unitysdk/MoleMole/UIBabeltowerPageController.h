#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_FC3A9C07FC781527_Enum_3_6E0E8267CDDC65CF.h"
#include "unitysdk/Enum_3_1B538C1D42F00F85.h"
#include "unitysdk/Enum_3_3EDF246633A325B0.h"
#include "unitysdk/MoleMole/UIWindowController.h"
#include "unitysdk/MonoUITableScrollV2_ScrollParams_SelectAlignType.h"
#include "unitysdk/Struct_2_BF6B29D18B16113B.h"
#include "unitysdk/System/ValueTuple_2.h"

class BabelTowerParam;
class Class_1_451D4E871590D41E;
class Class_1_5DA2E7556103D5A3_344;
class Class_1_C6A4DECEE09618C7;
class Class_1_EFA6AA5AA832852E;
class Class_2_08E43914789BE5F3;
class Class_2_79AE422BA06F6D26_1;
class Class_3_025FF4981524A424_428;
namespace MoleMole { class ScrollViewItemWidgetController; }
namespace MoleMole { class UIBabelTowerRankWidgetController; }
namespace MoleMole { class UIBabeltowerFightingInfoWidgetController; }
namespace MoleMole { class UIBabeltowerMedalWidgetController; }
namespace MoleMole { class UIControlReference; }
namespace MoleMole { class UIControllerContextBase; }
namespace MoleMole { class UIGeneralRewardListBtnWidgetController; }
namespace MoleMole { class UIGeneralRoleCardRowWidgetController; }
namespace MoleMole { class UIHollowResultBossInfoRow02WidgetController; }
namespace MoleMole::Project::Config { class BabelFloorInfoTemplateExt; }
namespace System { class Action; }
namespace System { class EventArgs; }
namespace System { class String; }
namespace System { template <typename T> class Func_1; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_UIBABELTOWERPAGECONTROLLER_AFTERSHOWLEVELUPANIMATION_OFFSET UNITYSDK_OFFSET(0x17E662C0)
#define MOLEMOLE_UIBABELTOWERPAGECONTROLLER_ANIMATIONMOVENEXT_OFFSET UNITYSDK_OFFSET(0x17E6A730)
#define MOLEMOLE_UIBABELTOWERPAGECONTROLLER_CHECKBUFFSELECT_OFFSET UNITYSDK_OFFSET(0x17E69B80)
#define MOLEMOLE_UIBABELTOWERPAGECONTROLLER_CREATEBOTTOM_OFFSET UNITYSDK_OFFSET(0x17E6B980)
#define MOLEMOLE_UIBABELTOWERPAGECONTROLLER_CREATESELECTITEM_OFFSET UNITYSDK_OFFSET(0x17E6BA30)
#define MOLEMOLE_UIBABELTOWERPAGECONTROLLER_CREATETOP_OFFSET UNITYSDK_OFFSET(0x17E6B8D0)
#define MOLEMOLE_UIBABELTOWERPAGECONTROLLER_DOINITMOVEANIMATION_OFFSET UNITYSDK_OFFSET(0x17E6A160)
#define MOLEMOLE_UIBABELTOWERPAGECONTROLLER_GAMEPADSELECTITEM_OFFSET UNITYSDK_OFFSET(0x17E6B400)
#define MOLEMOLE_UIBABELTOWERPAGECONTROLLER_GETCURRENTFLOORINFOTEMPLATE_OFFSET UNITYSDK_OFFSET(0x17E65730)
#define MOLEMOLE_UIBABELTOWERPAGECONTROLLER_GETFIGHTINFOWIDGET_OFFSET UNITYSDK_OFFSET(0x17E69E40)
#define MOLEMOLE_UIBABELTOWERPAGECONTROLLER_GETFLOORTEMPLATEDATA_OFFSET UNITYSDK_OFFSET(0x17E6A050)
#define MOLEMOLE_UIBABELTOWERPAGECONTROLLER_GETMAXFLOORSTR_OFFSET UNITYSDK_OFFSET(0x17E68CA0)
#define MOLEMOLE_UIBABELTOWERPAGECONTROLLER_GETTEMPLATEINDEXFROMDATA_OFFSET UNITYSDK_OFFSET(0x17E6B860)
#define MOLEMOLE_UIBABELTOWERPAGECONTROLLER_GET_CURRENTTOWERID_OFFSET UNITYSDK_OFFSET(0x17E67780)
#define MOLEMOLE_UIBABELTOWERPAGECONTROLLER_GET_DATALOGIC_OFFSET UNITYSDK_OFFSET(0x17E64920)
#define MOLEMOLE_UIBABELTOWERPAGECONTROLLER_GET_WINDOWTYPE_OFFSET UNITYSDK_OFFSET(0x17E64880)
#define MOLEMOLE_UIBABELTOWERPAGECONTROLLER_INITCURFLOOR_OFFSET UNITYSDK_OFFSET(0x17E67B60)
#define MOLEMOLE_UIBABELTOWERPAGECONTROLLER_INITREWARDBTNROW_OFFSET UNITYSDK_OFFSET(0x17E68500)
#define MOLEMOLE_UIBABELTOWERPAGECONTROLLER_INITSCROLL_OFFSET UNITYSDK_OFFSET(0x17E6B6A0)
#define MOLEMOLE_UIBABELTOWERPAGECONTROLLER_ONBABELTOWERREWARDGET_OFFSET UNITYSDK_OFFSET(0x17E6D2E0)
#define MOLEMOLE_UIBABELTOWERPAGECONTROLLER_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x17E64940)
#define MOLEMOLE_UIBABELTOWERPAGECONTROLLER_ONLAYOUTPLATFORMCHANGED_OFFSET UNITYSDK_OFFSET(0x17E6A830)
#define MOLEMOLE_UIBABELTOWERPAGECONTROLLER_ONPOSTREFRESHVIEW_OFFSET UNITYSDK_OFFSET(0x17E6A100)
#define MOLEMOLE_UIBABELTOWERPAGECONTROLLER_ONREWARDBTNCLICK_OFFSET UNITYSDK_OFFSET(0x17E6D330)
#define MOLEMOLE_UIBABELTOWERPAGECONTROLLER_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x17E68940)
#define MOLEMOLE_UIBABELTOWERPAGECONTROLLER_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x17E649D0)
#define MOLEMOLE_UIBABELTOWERPAGECONTROLLER_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x17E67790)
#define MOLEMOLE_UIBABELTOWERPAGECONTROLLER_OPENBABELTOWERFIGHTINGINFOREAL_OFFSET UNITYSDK_OFFSET(0x17E6A000)
#define MOLEMOLE_UIBABELTOWERPAGECONTROLLER_OPENBABELTOWERFIGHTINGINFO_OFFSET UNITYSDK_OFFSET(0x17E69F50)
#define MOLEMOLE_UIBABELTOWERPAGECONTROLLER_OPENDETAILDIALOG_OFFSET UNITYSDK_OFFSET(0x17E689C0)
#define MOLEMOLE_UIBABELTOWERPAGECONTROLLER_OPENFIGHTINGWIDGET_OFFSET UNITYSDK_OFFSET(0x17E69970)
#define MOLEMOLE_UIBABELTOWERPAGECONTROLLER_OPENMONSTER_OFFSET UNITYSDK_OFFSET(0x17E65870)
#define MOLEMOLE_UIBABELTOWERPAGECONTROLLER_OVERRIDEINITSCROLLINDEXANDFLOOR_OFFSET UNITYSDK_OFFSET(0x17E6B640)
#define MOLEMOLE_UIBABELTOWERPAGECONTROLLER_PLAYBABELTOWERFIGHTFADEIN_OFFSET UNITYSDK_OFFSET(0x17E653A0)
#define MOLEMOLE_UIBABELTOWERPAGECONTROLLER_PLAYBABELTOWERFIGHTFADEOUT_OFFSET UNITYSDK_OFFSET(0x17E65580)
#define MOLEMOLE_UIBABELTOWERPAGECONTROLLER_REALFLOORINDEXTOFLOORINDEX_OFFSET UNITYSDK_OFFSET(0x17E65800)
#define MOLEMOLE_UIBABELTOWERPAGECONTROLLER_REFRESHBASEVIEW_OFFSET UNITYSDK_OFFSET(0x17E664A0)
#define MOLEMOLE_UIBABELTOWERPAGECONTROLLER_REFRESHDETAIL_OFFSET UNITYSDK_OFFSET(0x17E6BB60)
#define MOLEMOLE_UIBABELTOWERPAGECONTROLLER_REFRESHFLOORCHANGEANIM_OFFSET UNITYSDK_OFFSET(0x17E65B20)
#define MOLEMOLE_UIBABELTOWERPAGECONTROLLER_REFRESHSTARTBTNTEXT_OFFSET UNITYSDK_OFFSET(0x17E676A0)
#define MOLEMOLE_UIBABELTOWERPAGECONTROLLER_REFRESHVIEW_OFFSET UNITYSDK_OFFSET(0x17E67C60)
#define MOLEMOLE_UIBABELTOWERPAGECONTROLLER_SCROLLTOFLOOR_OFFSET UNITYSDK_OFFSET(0x17E6ACC0)
#define MOLEMOLE_UIBABELTOWERPAGECONTROLLER_SETLEVELUPANIMATION_OFFSET UNITYSDK_OFFSET(0x17E65C90)
#define MOLEMOLE_UIBABELTOWERPAGECONTROLLER_SETREWARDICON_OFFSET UNITYSDK_OFFSET(0x17E6CE30)
#define MOLEMOLE_UIBABELTOWERPAGECONTROLLER_SETUIWINDOWSETTING_OFFSET UNITYSDK_OFFSET(0x17E64890)
#define MOLEMOLE_UIBABELTOWERPAGECONTROLLER_SET_DATALOGIC_OFFSET UNITYSDK_OFFSET(0x17E64930)
#define MOLEMOLE_UIBABELTOWERPAGECONTROLLER_SHOWTUTORIALWINDOW_OFFSET UNITYSDK_OFFSET(0x17E66300)
#define MOLEMOLE_UIBABELTOWERPAGECONTROLLER_TRIGGERNEWBIE_OFFSET UNITYSDK_OFFSET(0x17E68680)
#define MOLEMOLE_UIBABELTOWERPAGECONTROLLER_UPDATEREWARDCOUNT_OFFSET UNITYSDK_OFFSET(0x17E6D050)
#define MOLEMOLE_UIBABELTOWERPAGECONTROLLER_UPDATE_OFFSET UNITYSDK_OFFSET(0x17E6B000)
#define MOLEMOLE_UIBABELTOWERPAGECONTROLLER__CCTOR_OFFSET UNITYSDK_OFFSET(0x17E6D780)
#define MOLEMOLE_UIBABELTOWERPAGECONTROLLER__CREATESELECTITEM_B__60_0_OFFSET UNITYSDK_OFFSET(0x17E6DC40)
#define MOLEMOLE_UIBABELTOWERPAGECONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x17E6D5E0)
#define MOLEMOLE_UIBABELTOWERPAGECONTROLLER__ONUIINIT_B__18_0_OFFSET UNITYSDK_OFFSET(0x17E6D790)
#define MOLEMOLE_UIBABELTOWERPAGECONTROLLER__ONUIINIT_B__18_1_OFFSET UNITYSDK_OFFSET(0x17E6DBE0)
#define MOLEMOLE_UIBABELTOWERPAGECONTROLLER__ONUIINIT_B__18_3_OFFSET UNITYSDK_OFFSET(0x17E6D9C0)
#define MOLEMOLE_UIBABELTOWERPAGECONTROLLER__ONUIINIT_B__18_5_OFFSET UNITYSDK_OFFSET(0x17E6DA90)
#define MOLEMOLE_UIBABELTOWERPAGECONTROLLER__ONUIINIT_B__18_6_OFFSET UNITYSDK_OFFSET(0x17E6DBB0)
#define MOLEMOLE_UIBABELTOWERPAGECONTROLLER__OPENBABELTOWERFIGHTINGINFO_OFFSET UNITYSDK_OFFSET(0x17E68D50)
#define MOLEMOLE_UIBABELTOWERPAGECONTROLLER__REFRESHVIEW_B__45_0_OFFSET UNITYSDK_OFFSET(0x17E6DBF0)
#define MOLEMOLE_UIBABELTOWERPAGECONTROLLER__UPDATEBOSSIMAGE_OFFSET UNITYSDK_OFFSET(0x17E6CDB0)
#define MOLEMOLE_UIBABELTOWERPAGECONTROLLER___BASE_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x17E6DDB0)
#define MOLEMOLE_UIBABELTOWERPAGECONTROLLER___BASE_ONLAYOUTPLATFORMCHANGED_OFFSET UNITYSDK_OFFSET(0x17E6DEE0)
#define MOLEMOLE_UIBABELTOWERPAGECONTROLLER___BASE_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x17E6DF70)
#define MOLEMOLE_UIBABELTOWERPAGECONTROLLER___BASE_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x17E6DED0)
#define MOLEMOLE_UIBABELTOWERPAGECONTROLLER___BASE_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x17E6DE40)
#define MOLEMOLE_UIBABELTOWERPAGECONTROLLER___BASE_SETUIWINDOWSETTING_OFFSET UNITYSDK_OFFSET(0x17E6DF80)

namespace MoleMole
{
	inline static constexpr unsigned int UIBabeltowerPageController_TypeDefinitionIndex = 66050;

	class UIBabeltowerPageController : public ::MoleMole::UIWindowController
	{
	public:
		static ::System::Int32* StaticGet_MAXINDEX()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(UIBabeltowerPageController_TypeDefinitionIndex)->GetStaticField(0xDE30);
		}
		::Class_2_79AE422BA06F6D26_1* _view; // 0x310
		::Enum_3_1B538C1D42F00F85 CurrentState; // 0x318
		::System::Int32 towerid; // 0x31C
		::System::Collections::Generic::List_1<::MoleMole::UIGeneralRoleCardRowWidgetController*>* roles; // 0x320
		::BabelTowerParam* _param; // 0x328
		::System::Boolean isUpAnim; // 0x330
		::MoleMole::UIBabeltowerMedalWidgetController* medalWidget; // 0x338
		::System::Collections::Generic::List_1<::System::UInt32>* initAnimationFloor; // 0x340
		::System::Single initAnimationTimer; // 0x348
		::Class_1_EFA6AA5AA832852E* _DataLogic_k__BackingField; // 0x350
		::System::Boolean isWaitAnimation; // 0x358
		::System::Boolean isDoAnimation; // 0x359
		::System::UInt32 curAnimationFloor; // 0x35C
		::System::Action* checkInitAnim; // 0x360
		::System::Collections::Generic::List_1<::Class_1_451D4E871590D41E*>* curShowFloorData; // 0x368
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::Int32>* _floorIndexToScrollIndex; // 0x370
		::System::Collections::Generic::List_1<::Struct_2_BF6B29D18B16113B>* datas; // 0x378
		::MoleMole::UIBabelTowerRankWidgetController* rankCtrl; // 0x380
		::MoleMole::UIGeneralRewardListBtnWidgetController* _rewardListBtnWidget; // 0x388
		::Class_2_08E43914789BE5F3* babelTowerModel; // 0x390
		::Class_1_C6A4DECEE09618C7* towerData; // 0x398
		::System::UInt32 curFloor; // 0x3A0
		::MoleMole::UIHollowResultBossInfoRow02WidgetController* monster1; // 0x3A8
		::MoleMole::UIHollowResultBossInfoRow02WidgetController* monster2; // 0x3B0
		::MoleMole::UIBabeltowerFightingInfoWidgetController* fightInfoCtrl; // 0x3B8
		::System::Int32 maxNormalEndFloor; // 0x3C0

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBABELTOWERPAGECONTROLLER__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_UIBABELTOWERPAGECONTROLLER__CCTOR_OFFSET))();
		}

		::Enum_3_3EDF246633A325B0 get_windowType()
		{
			return ((::Enum_3_3EDF246633A325B0(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBABELTOWERPAGECONTROLLER_GET_WINDOWTYPE_OFFSET))(this);
		}

		::System::Void SetUIWindowSetting()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBABELTOWERPAGECONTROLLER_SETUIWINDOWSETTING_OFFSET))(this);
		}

		::Class_1_EFA6AA5AA832852E* get_DataLogic()
		{
			return ((::Class_1_EFA6AA5AA832852E*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBABELTOWERPAGECONTROLLER_GET_DATALOGIC_OFFSET))(this);
		}

		::System::Void set_DataLogic(::Class_1_EFA6AA5AA832852E* value)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_EFA6AA5AA832852E*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBABELTOWERPAGECONTROLLER_SET_DATALOGIC_OFFSET))(this, value);
		}

		::System::Void OnCreateView(::MoleMole::UIControlReference* controlReference)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBABELTOWERPAGECONTROLLER_ONCREATEVIEW_OFFSET))(this, controlReference);
		}

		::System::Void OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBABELTOWERPAGECONTROLLER_ONUIINIT_OFFSET))(this);
		}

		::System::Single PlayBabelTowerFightFadeIn()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBABELTOWERPAGECONTROLLER_PLAYBABELTOWERFIGHTFADEIN_OFFSET))(this);
		}

		::System::Void PlayBabelTowerFightFadeOut()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBABELTOWERPAGECONTROLLER_PLAYBABELTOWERFIGHTFADEOUT_OFFSET))(this);
		}

		::MoleMole::Project::Config::BabelFloorInfoTemplateExt* GetCurrentFloorInfoTemplate()
		{
			return ((::MoleMole::Project::Config::BabelFloorInfoTemplateExt*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBABELTOWERPAGECONTROLLER_GETCURRENTFLOORINFOTEMPLATE_OFFSET))(this);
		}

		::System::Void OpenMonster()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBABELTOWERPAGECONTROLLER_OPENMONSTER_OFFSET))(this);
		}

		::System::Void RefreshFloorChangeAnim(::System::Int32 lastReachFloor, ::System::Int32 currentReachFloor)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBABELTOWERPAGECONTROLLER_REFRESHFLOORCHANGEANIM_OFFSET))(this, lastReachFloor, currentReachFloor);
		}

		::System::Void SetLevelUpAnimation(::System::Int32 lastPhase, ::System::Int32 curPhase)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBABELTOWERPAGECONTROLLER_SETLEVELUPANIMATION_OFFSET))(this, lastPhase, curPhase);
		}

		::System::Void AfterShowLevelUpAnimation()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBABELTOWERPAGECONTROLLER_AFTERSHOWLEVELUPANIMATION_OFFSET))(this);
		}

		::System::Void ShowTutorialWindow(::System::Int32 group)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBABELTOWERPAGECONTROLLER_SHOWTUTORIALWINDOW_OFFSET))(this, group);
		}

		::System::Void RefreshBaseView()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBABELTOWERPAGECONTROLLER_REFRESHBASEVIEW_OFFSET))(this);
		}

		::System::Int32 get_CurrentTowerID()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBABELTOWERPAGECONTROLLER_GET_CURRENTTOWERID_OFFSET))(this);
		}

		::System::Void OnUIOpen(::MoleMole::UIControllerContextBase* openCtrlContext)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBABELTOWERPAGECONTROLLER_ONUIOPEN_OFFSET))(this, openCtrlContext);
		}

		::System::Void TriggerNewbie(::System::Int32 id)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBABELTOWERPAGECONTROLLER_TRIGGERNEWBIE_OFFSET))(this, id);
		}

		::System::Void InitCurFloor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBABELTOWERPAGECONTROLLER_INITCURFLOOR_OFFSET))(this);
		}

		::System::Void OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBABELTOWERPAGECONTROLLER_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void OpenDetailDialog()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBABELTOWERPAGECONTROLLER_OPENDETAILDIALOG_OFFSET))(this);
		}

		::System::String* GetMaxFloorStr(::System::UInt32 floor)
		{
			return ((::System::String*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBABELTOWERPAGECONTROLLER_GETMAXFLOORSTR_OFFSET))(this, floor);
		}

		::System::Void _OpenBabeltowerFightingInfo(::System::Boolean directOpen)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBABELTOWERPAGECONTROLLER__OPENBABELTOWERFIGHTINGINFO_OFFSET))(this, directOpen);
		}

		::System::Void OpenFightingWidget(::MoleMole::UIBabeltowerFightingInfoWidgetController* ctrl, ::System::UInt32 floor, ::System::Boolean directOpen)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIBabeltowerFightingInfoWidgetController*, ::System::UInt32, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBABELTOWERPAGECONTROLLER_OPENFIGHTINGWIDGET_OFFSET))(this, ctrl, floor, directOpen);
		}

		::System::Int32 CheckBuffSelect(::System::UInt32 selectFloor)
		{
			return ((::System::Int32(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBABELTOWERPAGECONTROLLER_CHECKBUFFSELECT_OFFSET))(this, selectFloor);
		}

		::MoleMole::UIBabeltowerFightingInfoWidgetController* GetFightInfoWidget()
		{
			return ((::MoleMole::UIBabeltowerFightingInfoWidgetController*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBABELTOWERPAGECONTROLLER_GETFIGHTINFOWIDGET_OFFSET))(this);
		}

		::System::Void OpenBabeltowerFightingInfo()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBABELTOWERPAGECONTROLLER_OPENBABELTOWERFIGHTINGINFO_OFFSET))(this);
		}

		::System::Void OpenBabeltowerFightingInfoReal()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBABELTOWERPAGECONTROLLER_OPENBABELTOWERFIGHTINGINFOREAL_OFFSET))(this);
		}

		::System::UInt32 RealFloorIndexToFloorIndex(::System::UInt32 value)
		{
			return ((::System::UInt32(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBABELTOWERPAGECONTROLLER_REALFLOORINDEXTOFLOORINDEX_OFFSET))(this, value);
		}

		::System::Collections::Generic::List_1<::Class_1_451D4E871590D41E*>* GetFloorTemplateData(::System::Int32 towerid, ::System::UInt32 currentFloor, ::System::UInt32 curBattleFloor, ::System::Boolean isContinue, ::System::Int32 maxEndLoopFloorIndex)
		{
			return ((::System::Collections::Generic::List_1<::Class_1_451D4E871590D41E*>*(*)(::PVOID, ::System::Int32, ::System::UInt32, ::System::UInt32, ::System::Boolean, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBABELTOWERPAGECONTROLLER_GETFLOORTEMPLATEDATA_OFFSET))(this, towerid, currentFloor, curBattleFloor, isContinue, maxEndLoopFloorIndex);
		}

		::System::Void OnPostRefreshView(::System::Int32 initScrollIndex, ::System::UInt32 initFloor, ::System::Boolean isDoAnimation, ::System::Boolean waitAnimation)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::UInt32, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBABELTOWERPAGECONTROLLER_ONPOSTREFRESHVIEW_OFFSET))(this, initScrollIndex, initFloor, isDoAnimation, waitAnimation);
		}

		::System::Void RefreshView(::System::Boolean init)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBABELTOWERPAGECONTROLLER_REFRESHVIEW_OFFSET))(this, init);
		}

		::System::Void DoInitMoveAnimation()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBABELTOWERPAGECONTROLLER_DOINITMOVEANIMATION_OFFSET))(this);
		}

		::System::Void OnLayoutPlatformChanged()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBABELTOWERPAGECONTROLLER_ONLAYOUTPLATFORMCHANGED_OFFSET))(this);
		}

		::System::Void AnimationMoveNext(::System::Boolean animation)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBABELTOWERPAGECONTROLLER_ANIMATIONMOVENEXT_OFFSET))(this, animation);
		}

		::System::Void Update()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBABELTOWERPAGECONTROLLER_UPDATE_OFFSET))(this);
		}

		::System::Void GamePadSelectItem(::System::Int32 targetIndex)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBABELTOWERPAGECONTROLLER_GAMEPADSELECTITEM_OFFSET))(this, targetIndex);
		}

		::System::ValueTuple_2<::System::Int32, ::System::UInt32> OverrideInitScrollIndexAndFloor(::System::Int32 scrollIndex, ::System::UInt32 floor)
		{
			return ((::System::ValueTuple_2<::System::Int32, ::System::UInt32>(*)(::PVOID, ::System::Int32, ::System::UInt32))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBABELTOWERPAGECONTROLLER_OVERRIDEINITSCROLLINDEXANDFLOOR_OFFSET))(this, scrollIndex, floor);
		}

		::System::Void InitScroll()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBABELTOWERPAGECONTROLLER_INITSCROLL_OFFSET))(this);
		}

		::System::Void ScrollToFloor(::System::UInt32 floorIndex, ::System::Boolean anim, ::MonoUITableScrollV2_ScrollParams_SelectAlignType alignType)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::Boolean, ::MonoUITableScrollV2_ScrollParams_SelectAlignType))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBABELTOWERPAGECONTROLLER_SCROLLTOFLOOR_OFFSET))(this, floorIndex, anim, alignType);
		}

		::System::Int32 GetTemplateIndexFromData(::System::Int32 index)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBABELTOWERPAGECONTROLLER_GETTEMPLATEINDEXFROMDATA_OFFSET))(this, index);
		}

		::MoleMole::ScrollViewItemWidgetController* CreateTop(::System::Func_1<::MoleMole::UIControlReference*>* arg)
		{
			return ((::MoleMole::ScrollViewItemWidgetController*(*)(::PVOID, ::System::Func_1<::MoleMole::UIControlReference*>*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBABELTOWERPAGECONTROLLER_CREATETOP_OFFSET))(this, arg);
		}

		::MoleMole::ScrollViewItemWidgetController* CreateBottom(::System::Func_1<::MoleMole::UIControlReference*>* arg)
		{
			return ((::MoleMole::ScrollViewItemWidgetController*(*)(::PVOID, ::System::Func_1<::MoleMole::UIControlReference*>*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBABELTOWERPAGECONTROLLER_CREATEBOTTOM_OFFSET))(this, arg);
		}

		::MoleMole::ScrollViewItemWidgetController* CreateSelectItem(::System::Func_1<::MoleMole::UIControlReference*>* arg)
		{
			return ((::MoleMole::ScrollViewItemWidgetController*(*)(::PVOID, ::System::Func_1<::MoleMole::UIControlReference*>*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBABELTOWERPAGECONTROLLER_CREATESELECTITEM_OFFSET))(this, arg);
		}

		::System::Void RefreshDetail(::System::UInt32 floorIndex, ::System::UInt32 realFloorIndex)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBABELTOWERPAGECONTROLLER_REFRESHDETAIL_OFFSET))(this, floorIndex, realFloorIndex);
		}

		::System::Void RefreshStartBtnText(::System::UInt32 floorIndex, ::System::UInt32 realFloorIndex)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBABELTOWERPAGECONTROLLER_REFRESHSTARTBTNTEXT_OFFSET))(this, floorIndex, realFloorIndex);
		}

		::System::Void InitRewardBtnRow()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBABELTOWERPAGECONTROLLER_INITREWARDBTNROW_OFFSET))(this);
		}

		::System::Void SetRewardIcon()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBABELTOWERPAGECONTROLLER_SETREWARDICON_OFFSET))(this);
		}

		::System::Void OnBabelTowerRewardGet(::System::EventArgs* args)
		{
			return ((::System::Void(*)(::PVOID, ::System::EventArgs*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBABELTOWERPAGECONTROLLER_ONBABELTOWERREWARDGET_OFFSET))(this, args);
		}

		::System::Void UpdateRewardCount()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBABELTOWERPAGECONTROLLER_UPDATEREWARDCOUNT_OFFSET))(this);
		}

		::System::Void OnRewardBtnClick()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBABELTOWERPAGECONTROLLER_ONREWARDBTNCLICK_OFFSET))(this);
		}

		::System::Void _UpdateBossImage(::Class_1_5DA2E7556103D5A3_344* cardConfigTemplate)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_5DA2E7556103D5A3_344*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBABELTOWERPAGECONTROLLER__UPDATEBOSSIMAGE_OFFSET))(this, cardConfigTemplate);
		}

		::System::Void _OnUIInit_b__18_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBABELTOWERPAGECONTROLLER__ONUIINIT_B__18_0_OFFSET))(this);
		}

		::System::Void _OnUIInit_b__18_3()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBABELTOWERPAGECONTROLLER__ONUIINIT_B__18_3_OFFSET))(this);
		}

		::System::Void _OnUIInit_b__18_5(::System::Boolean b, ::Class_3_025FF4981524A424_428* rsp)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean, ::Class_3_025FF4981524A424_428*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBABELTOWERPAGECONTROLLER__ONUIINIT_B__18_5_OFFSET))(this, b, rsp);
		}

		::System::Void _OnUIInit_b__18_6(::Class_1_FC3A9C07FC781527_Enum_3_6E0E8267CDDC65CF res)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_FC3A9C07FC781527_Enum_3_6E0E8267CDDC65CF))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBABELTOWERPAGECONTROLLER__ONUIINIT_B__18_6_OFFSET))(this, res);
		}

		::System::Void _OnUIInit_b__18_1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBABELTOWERPAGECONTROLLER__ONUIINIT_B__18_1_OFFSET))(this);
		}

		::System::Void _RefreshView_b__45_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBABELTOWERPAGECONTROLLER__REFRESHVIEW_B__45_0_OFFSET))(this);
		}

		::System::Void _CreateSelectItem_b__60_0(::System::UInt32 floorIndex, ::System::UInt32 realFloorIndex, ::System::Int32 selectIndex)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::UInt32, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBABELTOWERPAGECONTROLLER__CREATESELECTITEM_B__60_0_OFFSET))(this, floorIndex, realFloorIndex, selectIndex);
		}

		::System::Void __base_OnCreateView(::MoleMole::UIControlReference* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBABELTOWERPAGECONTROLLER___BASE_ONCREATEVIEW_OFFSET))(this, P0);
		}

		::System::Void __base_OnUIOpen(::MoleMole::UIControllerContextBase* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBABELTOWERPAGECONTROLLER___BASE_ONUIOPEN_OFFSET))(this, P0);
		}

		::System::Void __base_OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBABELTOWERPAGECONTROLLER___BASE_ONUIINIT_OFFSET))(this);
		}

		::System::Void __base_OnLayoutPlatformChanged()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBABELTOWERPAGECONTROLLER___BASE_ONLAYOUTPLATFORMCHANGED_OFFSET))(this);
		}

		::System::Void __base_OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBABELTOWERPAGECONTROLLER___BASE_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void __base_SetUIWindowSetting()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBABELTOWERPAGECONTROLLER___BASE_SETUIWINDOWSETTING_OFFSET))(this);
		}
	};
}

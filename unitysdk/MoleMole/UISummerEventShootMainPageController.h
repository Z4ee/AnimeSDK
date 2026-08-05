#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_0277FE49450CA4D5.h"
#include "unitysdk/Enum_3_3EDF246633A325B0.h"
#include "unitysdk/Enum_3_8E90989A26BC6232.h"
#include "unitysdk/Enum_3_A019F766F8C74696.h"
#include "unitysdk/Foundation/AssetPath.h"
#include "unitysdk/MoleMole/EntityHandle.h"
#include "unitysdk/MoleMole/InputActionEvent.h"
#include "unitysdk/MoleMole/UISummerEventMainPageController.h"
#include "unitysdk/UnityEngine/Rect.h"
#include "unitysdk/UnityEngine/Vector2.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_0_16E4307DCC419505_319;
class Class_1_285B51729FE48850;
class Class_1_B3309433BD404061;
class Class_2_60638234271CCDB8_33;
namespace MoleMole { class MonoSummerEventShootWeaponUIItem; }
namespace MoleMole { class SummerWeaponConfig; }
namespace MoleMole { class UIControlReference; }
namespace MoleMole { class UIControllerContextBase; }
namespace MoleMole { class UISummerEventShootSkillButtonExspChildWindowController; }
namespace MoleMole { class UISummerEventShootSkillButtonReloadChildWindowController; }
namespace MoleMole { class UISummerEventShootSkillButtonShootChildWindowController; }
namespace MoleMole { class UISummerEventShootSkillButtonSwitchChildWindowController; }
namespace MoleMole { class UISummerJoyStickChildWindowController; }
namespace MoleMole { class UISummerMissionTipsWidgetController; }
namespace MoleMole { class UISummerShootScoreWidgetController; }
namespace System { class Action; }
namespace System { class EventArgs; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace System::Collections::Generic { template <typename T> class Queue_1; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class Material; }
namespace UnityEngine { class RectTransform; }
namespace UnityEngine::EventSystems { class PointerEventData; }

#define MOLEMOLE_UISUMMEREVENTSHOOTMAINPAGECONTROLLER_BINDEVENTS_OFFSET UNITYSDK_OFFSET(0x140C70B0)
#define MOLEMOLE_UISUMMEREVENTSHOOTMAINPAGECONTROLLER_CHECKCROSSHAIRRANGE_OFFSET UNITYSDK_OFFSET(0x140C6770)
#define MOLEMOLE_UISUMMEREVENTSHOOTMAINPAGECONTROLLER_CORERELOAD_OFFSET UNITYSDK_OFFSET(0x1848FF00)
#define MOLEMOLE_UISUMMEREVENTSHOOTMAINPAGECONTROLLER_CORESKILLRUNNING_OFFSET UNITYSDK_OFFSET(0x140C6390)
#define MOLEMOLE_UISUMMEREVENTSHOOTMAINPAGECONTROLLER_GETCROSSHAIRBASEMOVERATIO_OFFSET UNITYSDK_OFFSET(0x18490B40)
#define MOLEMOLE_UISUMMEREVENTSHOOTMAINPAGECONTROLLER_GETCROSSHAIRMOVESPEEDRATIO_OFFSET UNITYSDK_OFFSET(0x184901A0)
#define MOLEMOLE_UISUMMEREVENTSHOOTMAINPAGECONTROLLER_GETDRAGSENSITIVITY_OFFSET UNITYSDK_OFFSET(0x18490150)
#define MOLEMOLE_UISUMMEREVENTSHOOTMAINPAGECONTROLLER_GETSCORERANKINFO_OFFSET UNITYSDK_OFFSET(0x18492760)
#define MOLEMOLE_UISUMMEREVENTSHOOTMAINPAGECONTROLLER_GETSYSTEMMOVESPEEDXRATIO_OFFSET UNITYSDK_OFFSET(0x18490230)
#define MOLEMOLE_UISUMMEREVENTSHOOTMAINPAGECONTROLLER_GETSYSTEMMOVESPEEDYRATIO_OFFSET UNITYSDK_OFFSET(0x18490560)
#define MOLEMOLE_UISUMMEREVENTSHOOTMAINPAGECONTROLLER_GETWEAPONICONPATHBYCONFIGKEY_OFFSET UNITYSDK_OFFSET(0x18491CF0)
#define MOLEMOLE_UISUMMEREVENTSHOOTMAINPAGECONTROLLER_GETWEAPONINFOBYKEY_OFFSET UNITYSDK_OFFSET(0x140C62B0)
#define MOLEMOLE_UISUMMEREVENTSHOOTMAINPAGECONTROLLER_GETWEAPONINFO_OFFSET UNITYSDK_OFFSET(0x140C4ED0)
#define MOLEMOLE_UISUMMEREVENTSHOOTMAINPAGECONTROLLER_GET_HOTSWITCHROOTLAYERSTATE_OFFSET UNITYSDK_OFFSET(0x1848D3E0)
#define MOLEMOLE_UISUMMEREVENTSHOOTMAINPAGECONTROLLER_GET_ISWEAPONSKILLSTART_OFFSET UNITYSDK_OFFSET(0x140C7880)
#define MOLEMOLE_UISUMMEREVENTSHOOTMAINPAGECONTROLLER_GET_MISSIONTIPS_OFFSET UNITYSDK_OFFSET(0x1848E580)
#define MOLEMOLE_UISUMMEREVENTSHOOTMAINPAGECONTROLLER_GET_ONGOINGCONTROLLER_OFFSET UNITYSDK_OFFSET(0x1848D3F0)
#define MOLEMOLE_UISUMMEREVENTSHOOTMAINPAGECONTROLLER_GET_UICURSORHIDESTATE_OFFSET UNITYSDK_OFFSET(0x1848D3D0)
#define MOLEMOLE_UISUMMEREVENTSHOOTMAINPAGECONTROLLER_GET_WINDOWTYPE_OFFSET UNITYSDK_OFFSET(0x1848D3C0)
#define MOLEMOLE_UISUMMEREVENTSHOOTMAINPAGECONTROLLER_INITDATA_OFFSET UNITYSDK_OFFSET(0x140C6710)
#define MOLEMOLE_UISUMMEREVENTSHOOTMAINPAGECONTROLLER_INITSCORERANK_OFFSET UNITYSDK_OFFSET(0x18492210)
#define MOLEMOLE_UISUMMEREVENTSHOOTMAINPAGECONTROLLER_INITUIDEFAULTSTATE_OFFSET UNITYSDK_OFFSET(0x140C7740)
#define MOLEMOLE_UISUMMEREVENTSHOOTMAINPAGECONTROLLER_INITWEAPONLIST_OFFSET UNITYSDK_OFFSET(0x18490BD0)
#define MOLEMOLE_UISUMMEREVENTSHOOTMAINPAGECONTROLLER_LATEUPDATE_OFFSET UNITYSDK_OFFSET(0x1848F480)
#define MOLEMOLE_UISUMMEREVENTSHOOTMAINPAGECONTROLLER_MOVECROSSHAIR_OFFSET UNITYSDK_OFFSET(0x1848EF10)
#define MOLEMOLE_UISUMMEREVENTSHOOTMAINPAGECONTROLLER_ONAMMOCHANGED_OFFSET UNITYSDK_OFFSET(0x184935D0)
#define MOLEMOLE_UISUMMEREVENTSHOOTMAINPAGECONTROLLER_ONAMMOFULL_OFFSET UNITYSDK_OFFSET(0x18493A30)
#define MOLEMOLE_UISUMMEREVENTSHOOTMAINPAGECONTROLLER_ONBULLETHITTARGET_OFFSET UNITYSDK_OFFSET(0x140C57F0)
#define MOLEMOLE_UISUMMEREVENTSHOOTMAINPAGECONTROLLER_ONCLICKWEAPONTAB_OFFSET UNITYSDK_OFFSET(0x140C7810)
#define MOLEMOLE_UISUMMEREVENTSHOOTMAINPAGECONTROLLER_ONCLICKWEAPON_OFFSET UNITYSDK_OFFSET(0x140C77C0)
#define MOLEMOLE_UISUMMEREVENTSHOOTMAINPAGECONTROLLER_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x1848D4C0)
#define MOLEMOLE_UISUMMEREVENTSHOOTMAINPAGECONTROLLER_ONCROSSHAIREVENT_OFFSET UNITYSDK_OFFSET(0x184933F0)
#define MOLEMOLE_UISUMMEREVENTSHOOTMAINPAGECONTROLLER_ONDESTROY_OFFSET UNITYSDK_OFFSET(0x1848E770)
#define MOLEMOLE_UISUMMEREVENTSHOOTMAINPAGECONTROLLER_ONDRAG_OFFSET UNITYSDK_OFFSET(0x18490A20)
#define MOLEMOLE_UISUMMEREVENTSHOOTMAINPAGECONTROLLER_ONEXITGAME_OFFSET UNITYSDK_OFFSET(0x140C7620)
#define MOLEMOLE_UISUMMEREVENTSHOOTMAINPAGECONTROLLER_ONFREESHOOTSTATECHANGE_OFFSET UNITYSDK_OFFSET(0x18494910)
#define MOLEMOLE_UISUMMEREVENTSHOOTMAINPAGECONTROLLER_ONHIDE_OFFSET UNITYSDK_OFFSET(0x1848E6A0)
#define MOLEMOLE_UISUMMEREVENTSHOOTMAINPAGECONTROLLER_ONINPUTACTION_OFFSET UNITYSDK_OFFSET(0x1848ECE0)
#define MOLEMOLE_UISUMMEREVENTSHOOTMAINPAGECONTROLLER_ONPERFORMNOTIFY_OFFSET UNITYSDK_OFFSET(0x140C7380)
#define MOLEMOLE_UISUMMEREVENTSHOOTMAINPAGECONTROLLER_ONRELOADSTART_OFFSET UNITYSDK_OFFSET(0x18494360)
#define MOLEMOLE_UISUMMEREVENTSHOOTMAINPAGECONTROLLER_ONRELOADSTOP_OFFSET UNITYSDK_OFFSET(0x18494620)
#define MOLEMOLE_UISUMMEREVENTSHOOTMAINPAGECONTROLLER_ONRESTARTGAME_OFFSET UNITYSDK_OFFSET(0x140C76B0)
#define MOLEMOLE_UISUMMEREVENTSHOOTMAINPAGECONTROLLER_ONSHOOTBUTTONPRESSSTART_OFFSET UNITYSDK_OFFSET(0x140C5490)
#define MOLEMOLE_UISUMMEREVENTSHOOTMAINPAGECONTROLLER_ONSHOOTBUTTONPRESSUP_OFFSET UNITYSDK_OFFSET(0x140C5640)
#define MOLEMOLE_UISUMMEREVENTSHOOTMAINPAGECONTROLLER_ONSHOOTSCORECHANGE_OFFSET UNITYSDK_OFFSET(0x18494960)
#define MOLEMOLE_UISUMMEREVENTSHOOTMAINPAGECONTROLLER_ONSHOOTSTART_OFFSET UNITYSDK_OFFSET(0x140C52E0)
#define MOLEMOLE_UISUMMEREVENTSHOOTMAINPAGECONTROLLER_ONSHOW_OFFSET UNITYSDK_OFFSET(0x1848E590)
#define MOLEMOLE_UISUMMEREVENTSHOOTMAINPAGECONTROLLER_ONSYSTEMSENSITIVITYUPDATE_OFFSET UNITYSDK_OFFSET(0x140C6B00)
#define MOLEMOLE_UISUMMEREVENTSHOOTMAINPAGECONTROLLER_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x18490890)
#define MOLEMOLE_UISUMMEREVENTSHOOTMAINPAGECONTROLLER_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x1848D6B0)
#define MOLEMOLE_UISUMMEREVENTSHOOTMAINPAGECONTROLLER_ONWEAPONCHANGE_OFFSET UNITYSDK_OFFSET(0x18493D20)
#define MOLEMOLE_UISUMMEREVENTSHOOTMAINPAGECONTROLLER_ONWEAPONSKILLEND_OFFSET UNITYSDK_OFFSET(0x140C4AC0)
#define MOLEMOLE_UISUMMEREVENTSHOOTMAINPAGECONTROLLER_ONWEAPONSKILLSTART_OFFSET UNITYSDK_OFFSET(0x140C4F80)
#define MOLEMOLE_UISUMMEREVENTSHOOTMAINPAGECONTROLLER_ONWEAPONSWITCHED_OFFSET UNITYSDK_OFFSET(0x18494FD0)
#define MOLEMOLE_UISUMMEREVENTSHOOTMAINPAGECONTROLLER_PAUSEGAME_OFFSET UNITYSDK_OFFSET(0x140C75B0)
#define MOLEMOLE_UISUMMEREVENTSHOOTMAINPAGECONTROLLER_PLAYFINISHTIP_OFFSET UNITYSDK_OFFSET(0x1848D410)
#define MOLEMOLE_UISUMMEREVENTSHOOTMAINPAGECONTROLLER_PLAYSTARTTIPS_OFFSET UNITYSDK_OFFSET(0x1848D550)
#define MOLEMOLE_UISUMMEREVENTSHOOTMAINPAGECONTROLLER_POPSCORE_OFFSET UNITYSDK_OFFSET(0x18494C30)
#define MOLEMOLE_UISUMMEREVENTSHOOTMAINPAGECONTROLLER_REFRESHBASEMOVERATIO_OFFSET UNITYSDK_OFFSET(0x140C6920)
#define MOLEMOLE_UISUMMEREVENTSHOOTMAINPAGECONTROLLER_REFRESHSCORERANKINFO_OFFSET UNITYSDK_OFFSET(0x18492A70)
#define MOLEMOLE_UISUMMEREVENTSHOOTMAINPAGECONTROLLER_REFRESHSELECTWEAPON_OFFSET UNITYSDK_OFFSET(0x18494060)
#define MOLEMOLE_UISUMMEREVENTSHOOTMAINPAGECONTROLLER_REFRESHWEAPONDISPLAYINFO_OFFSET UNITYSDK_OFFSET(0x184910F0)
#define MOLEMOLE_UISUMMEREVENTSHOOTMAINPAGECONTROLLER_REFRESHWEAPONDISPLAYSTATE_OFFSET UNITYSDK_OFFSET(0x140C58C0)
#define MOLEMOLE_UISUMMEREVENTSHOOTMAINPAGECONTROLLER_REFRESHWEAPONSKILLSTATE_OFFSET UNITYSDK_OFFSET(0x140C4E10)
#define MOLEMOLE_UISUMMEREVENTSHOOTMAINPAGECONTROLLER_REGISTEREVENT_OFFSET UNITYSDK_OFFSET(0x1848E0C0)
#define MOLEMOLE_UISUMMEREVENTSHOOTMAINPAGECONTROLLER_SELECTWEAPON_OFFSET UNITYSDK_OFFSET(0x18491820)
#define MOLEMOLE_UISUMMEREVENTSHOOTMAINPAGECONTROLLER_SETAMMOINFO_1_OFFSET UNITYSDK_OFFSET(0x18493C00)
#define MOLEMOLE_UISUMMEREVENTSHOOTMAINPAGECONTROLLER_SETAMMOINFO_OFFSET UNITYSDK_OFFSET(0x18493930)
#define MOLEMOLE_UISUMMEREVENTSHOOTMAINPAGECONTROLLER_SETCOREPROGRESS_OFFSET UNITYSDK_OFFSET(0x18492BD0)
#define MOLEMOLE_UISUMMEREVENTSHOOTMAINPAGECONTROLLER_SETMAXAMMOINFO_1_OFFSET UNITYSDK_OFFSET(0x184947F0)
#define MOLEMOLE_UISUMMEREVENTSHOOTMAINPAGECONTROLLER_SETMAXAMMOINFO_OFFSET UNITYSDK_OFFSET(0x18494260)
#define MOLEMOLE_UISUMMEREVENTSHOOTMAINPAGECONTROLLER_SETRELOADTIMERATIO_OFFSET UNITYSDK_OFFSET(0x184944E0)
#define MOLEMOLE_UISUMMEREVENTSHOOTMAINPAGECONTROLLER_SETTOTALWAVE_OFFSET UNITYSDK_OFFSET(0x1848E490)
#define MOLEMOLE_UISUMMEREVENTSHOOTMAINPAGECONTROLLER_SETWEAPONDISPLAYINFONOWEAPON_OFFSET UNITYSDK_OFFSET(0x184946F0)
#define MOLEMOLE_UISUMMEREVENTSHOOTMAINPAGECONTROLLER_SET_ONGOINGCONTROLLER_OFFSET UNITYSDK_OFFSET(0x1848D400)
#define MOLEMOLE_UISUMMEREVENTSHOOTMAINPAGECONTROLLER_STARTNEXTWAVE_OFFSET UNITYSDK_OFFSET(0x1848E500)
#define MOLEMOLE_UISUMMEREVENTSHOOTMAINPAGECONTROLLER_TICKSCOREWIDGET_OFFSET UNITYSDK_OFFSET(0x1848FB70)
#define MOLEMOLE_UISUMMEREVENTSHOOTMAINPAGECONTROLLER_TRYINITCROSSHAIRRANGE_OFFSET UNITYSDK_OFFSET(0x140C6B50)
#define MOLEMOLE_UISUMMEREVENTSHOOTMAINPAGECONTROLLER_TRYLOADWEAPONCROSSHAIR_OFFSET UNITYSDK_OFFSET(0x18491390)
#define MOLEMOLE_UISUMMEREVENTSHOOTMAINPAGECONTROLLER_TRYLOADWEAPONSKILLCROSSHAIR_OFFSET UNITYSDK_OFFSET(0x18492F60)
#define MOLEMOLE_UISUMMEREVENTSHOOTMAINPAGECONTROLLER_TRYREFRESHCROSSHAIR_OFFSET UNITYSDK_OFFSET(0x184919D0)
#define MOLEMOLE_UISUMMEREVENTSHOOTMAINPAGECONTROLLER__CCTOR_OFFSET UNITYSDK_OFFSET(0x140C7C10)
#define MOLEMOLE_UISUMMEREVENTSHOOTMAINPAGECONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x140C7890)
#define MOLEMOLE_UISUMMEREVENTSHOOTMAINPAGECONTROLLER__PLAYSTARTTIPS_G__STARTGAME_31_0_OFFSET UNITYSDK_OFFSET(0x140C7C50)
#define MOLEMOLE_UISUMMEREVENTSHOOTMAINPAGECONTROLLER___BASE_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x140C7D80)
#define MOLEMOLE_UISUMMEREVENTSHOOTMAINPAGECONTROLLER___BASE_ONDESTROY_OFFSET UNITYSDK_OFFSET(0x140C7E10)
#define MOLEMOLE_UISUMMEREVENTSHOOTMAINPAGECONTROLLER___BASE_ONHIDE_OFFSET UNITYSDK_OFFSET(0x140C7E20)
#define MOLEMOLE_UISUMMEREVENTSHOOTMAINPAGECONTROLLER___BASE_ONINPUTACTION_OFFSET UNITYSDK_OFFSET(0x140C7EB0)
#define MOLEMOLE_UISUMMEREVENTSHOOTMAINPAGECONTROLLER___BASE_ONSHOW_OFFSET UNITYSDK_OFFSET(0x140C7EE0)
#define MOLEMOLE_UISUMMEREVENTSHOOTMAINPAGECONTROLLER___BASE_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x140C7EF0)
#define MOLEMOLE_UISUMMEREVENTSHOOTMAINPAGECONTROLLER___BASE_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x140C7F00)

namespace MoleMole
{
	inline static constexpr unsigned int UISummerEventShootMainPageController_TypeDefinitionIndex = 45042;

	class UISummerEventShootMainPageController : public ::MoleMole::UISummerEventMainPageController
	{
	public:
		static ::System::Int32* StaticGet_ShaderProgressPropertyID()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(UISummerEventShootMainPageController_TypeDefinitionIndex)->GetStaticField(0x11490);
		}
		// static const ::System::String* uiTag; // 0x0
		// static const ::System::String* bulletHitAnimStateName; // 0x0
		// static const ::System::Single ReloadExtraTime; // 0x0
		::Class_2_60638234271CCDB8_33* _view; // 0x328
		::MoleMole::UISummerJoyStickChildWindowController* _joystickCtrl; // 0x330
		::MoleMole::UISummerEventShootSkillButtonShootChildWindowController* _skillButtonCtrlShoot; // 0x338
		::MoleMole::UISummerEventShootSkillButtonSwitchChildWindowController* _skillButtonCtrlSwitch; // 0x340
		::MoleMole::UISummerEventShootSkillButtonReloadChildWindowController* _skillButtonCtrlReload; // 0x348
		::MoleMole::UISummerEventShootSkillButtonExspChildWindowController* _skillButtonCtrlExsp; // 0x350
		::MoleMole::UISummerMissionTipsWidgetController* _missionTips; // 0x358
		::Class_1_285B51729FE48850* _ongoing; // 0x360
		::UnityEngine::Vector3 crosshairDefaultOffset; // 0x368
		::UnityEngine::RectTransform* touchPanelTransform; // 0x378
		::UnityEngine::Rect crossHairRange; // 0x380
		::System::Boolean initCrossHairRange; // 0x390
		::System::Boolean hasCrossHairRangeData; // 0x391
		::System::Boolean _gameStart; // 0x392
		::Enum_3_A019F766F8C74696 _lastInputDevice; // 0x394
		::Enum_3_0277FE49450CA4D5 _cursorHideState; // 0x398
		::Class_1_B3309433BD404061* _OngoingController_k__BackingField; // 0x3A0
		::System::Int32 xMoveSensitivityLevel; // 0x3A8
		::System::Int32 yMoveSensitivityLevel; // 0x3AC
		::System::Int32 weaponSkillStartCount; // 0x3B0
		::System::Collections::Generic::List_1<::System::String*>* weaponList; // 0x3B8
		::System::Collections::Generic::List_1<::MoleMole::MonoSummerEventShootWeaponUIItem*>* weaponInfoDisplayList; // 0x3C0
		::System::Int32 currentSelectWeaponIndex; // 0x3C8
		::System::Collections::Generic::Dictionary_2<::System::String*, ::UnityEngine::GameObject*>* crossHairDict; // 0x3D0
		::System::Collections::Generic::Dictionary_2<::System::String*, ::Class_0_16E4307DCC419505_319*>* crossHairComponentDict; // 0x3D8
		::System::String* currentDisplayCrosshairKey; // 0x3E0
		::System::Collections::Generic::List_1<::MoleMole::UISummerShootScoreWidgetController*>* scoreWidgetList; // 0x3E8
		::System::Collections::Generic::Queue_1<::MoleMole::UISummerShootScoreWidgetController*>* scoreWidgetRecyclePool; // 0x3F0
		::System::Collections::Generic::List_1<::UnityEngine::GameObject*>* scoreRankItemList; // 0x3F8
		::System::Int32 currentRankIndex; // 0x400
		::System::Single currentScoreProgress; // 0x404
		::System::Single scoreProgressDefaultWidth; // 0x408
		::UnityEngine::Vector2 scoreProgressDefaultAnchorMax; // 0x40C
		::System::Collections::Generic::List_1<::System::String*>* scoreRankChangeAnimList; // 0x418
		::System::Boolean isPlayRankAnim; // 0x420
		::System::Boolean bUseSkillButtonWeaponInfo; // 0x421
		::UnityEngine::Material* reloadProgressMat; // 0x428
		::System::Boolean reloadStart; // 0x430
		::System::Single reloadDisplayTimer; // 0x434
		::System::Single reloadMaxTimer; // 0x438

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UISUMMEREVENTSHOOTMAINPAGECONTROLLER__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_UISUMMEREVENTSHOOTMAINPAGECONTROLLER__CCTOR_OFFSET))();
		}

		::Enum_3_3EDF246633A325B0 get_windowType()
		{
			return ((::Enum_3_3EDF246633A325B0(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UISUMMEREVENTSHOOTMAINPAGECONTROLLER_GET_WINDOWTYPE_OFFSET))(this);
		}

		::Enum_3_0277FE49450CA4D5 get_UICursorHideState()
		{
			return ((::Enum_3_0277FE49450CA4D5(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UISUMMEREVENTSHOOTMAINPAGECONTROLLER_GET_UICURSORHIDESTATE_OFFSET))(this);
		}

		::Enum_3_8E90989A26BC6232 get_HotSwitchRootLayerState()
		{
			return ((::Enum_3_8E90989A26BC6232(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UISUMMEREVENTSHOOTMAINPAGECONTROLLER_GET_HOTSWITCHROOTLAYERSTATE_OFFSET))(this);
		}

		::Class_1_B3309433BD404061* get_OngoingController()
		{
			return ((::Class_1_B3309433BD404061*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UISUMMEREVENTSHOOTMAINPAGECONTROLLER_GET_ONGOINGCONTROLLER_OFFSET))(this);
		}

		::System::Void set_OngoingController(::Class_1_B3309433BD404061* value)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_B3309433BD404061*))((::PBYTE)hIl2Cpp + MOLEMOLE_UISUMMEREVENTSHOOTMAINPAGECONTROLLER_SET_ONGOINGCONTROLLER_OFFSET))(this, value);
		}

		::System::Void PlayFinishTip(::System::Action* callback)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + MOLEMOLE_UISUMMEREVENTSHOOTMAINPAGECONTROLLER_PLAYFINISHTIP_OFFSET))(this, callback);
		}

		::System::Void OnCreateView(::MoleMole::UIControlReference* controlReference)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UISUMMEREVENTSHOOTMAINPAGECONTROLLER_ONCREATEVIEW_OFFSET))(this, controlReference);
		}

		::System::Void PlayStartTips(::System::Action* callback)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + MOLEMOLE_UISUMMEREVENTSHOOTMAINPAGECONTROLLER_PLAYSTARTTIPS_OFFSET))(this, callback);
		}

		::System::Void OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UISUMMEREVENTSHOOTMAINPAGECONTROLLER_ONUIINIT_OFFSET))(this);
		}

		::System::Void SetTotalWave(::System::Int32 totalWave)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UISUMMEREVENTSHOOTMAINPAGECONTROLLER_SETTOTALWAVE_OFFSET))(this, totalWave);
		}

		::System::Void StartNextWave(::System::Single time)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_UISUMMEREVENTSHOOTMAINPAGECONTROLLER_STARTNEXTWAVE_OFFSET))(this, time);
		}

		::MoleMole::UISummerMissionTipsWidgetController* get_MissionTips()
		{
			return ((::MoleMole::UISummerMissionTipsWidgetController*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UISUMMEREVENTSHOOTMAINPAGECONTROLLER_GET_MISSIONTIPS_OFFSET))(this);
		}

		::System::Void OnShow(::MoleMole::UIControllerContextBase* showCtrlContext)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UISUMMEREVENTSHOOTMAINPAGECONTROLLER_ONSHOW_OFFSET))(this, showCtrlContext);
		}

		::System::Void OnHide()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UISUMMEREVENTSHOOTMAINPAGECONTROLLER_ONHIDE_OFFSET))(this);
		}

		::System::Void OnDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UISUMMEREVENTSHOOTMAINPAGECONTROLLER_ONDESTROY_OFFSET))(this);
		}

		::System::Boolean OnInputAction(::MoleMole::InputActionEvent inputAction)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::InputActionEvent))((::PBYTE)hIl2Cpp + MOLEMOLE_UISUMMEREVENTSHOOTMAINPAGECONTROLLER_ONINPUTACTION_OFFSET))(this, inputAction);
		}

		::System::Void LateUpdate()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UISUMMEREVENTSHOOTMAINPAGECONTROLLER_LATEUPDATE_OFFSET))(this);
		}

		::System::Void TickScoreWidget()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UISUMMEREVENTSHOOTMAINPAGECONTROLLER_TICKSCOREWIDGET_OFFSET))(this);
		}

		::System::Void MoveCrosshair(::UnityEngine::Vector2 delta)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + MOLEMOLE_UISUMMEREVENTSHOOTMAINPAGECONTROLLER_MOVECROSSHAIR_OFFSET))(this, delta);
		}

		::System::Void OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UISUMMEREVENTSHOOTMAINPAGECONTROLLER_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void OnDrag(::UnityEngine::EventSystems::PointerEventData* eventData, ::UnityEngine::Vector2 localPointDelta)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::EventSystems::PointerEventData*, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + MOLEMOLE_UISUMMEREVENTSHOOTMAINPAGECONTROLLER_ONDRAG_OFFSET))(this, eventData, localPointDelta);
		}

		::System::Single GetDragSensitivity()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UISUMMEREVENTSHOOTMAINPAGECONTROLLER_GETDRAGSENSITIVITY_OFFSET))(this);
		}

		::System::Single GetCrosshairMoveSpeedRatio()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UISUMMEREVENTSHOOTMAINPAGECONTROLLER_GETCROSSHAIRMOVESPEEDRATIO_OFFSET))(this);
		}

		::System::Single GetCrosshairBaseMoveRatio()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UISUMMEREVENTSHOOTMAINPAGECONTROLLER_GETCROSSHAIRBASEMOVERATIO_OFFSET))(this);
		}

		::System::Single GetSystemMoveSpeedXRatio()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UISUMMEREVENTSHOOTMAINPAGECONTROLLER_GETSYSTEMMOVESPEEDXRATIO_OFFSET))(this);
		}

		::System::Single GetSystemMoveSpeedYRatio()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UISUMMEREVENTSHOOTMAINPAGECONTROLLER_GETSYSTEMMOVESPEEDYRATIO_OFFSET))(this);
		}

		::System::Void RegisterEvent()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UISUMMEREVENTSHOOTMAINPAGECONTROLLER_REGISTEREVENT_OFFSET))(this);
		}

		::System::Void InitWeaponList()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UISUMMEREVENTSHOOTMAINPAGECONTROLLER_INITWEAPONLIST_OFFSET))(this);
		}

		::Foundation::AssetPath GetWeaponIconPathByConfigKey(::System::String* weaponConfigKey)
		{
			return ((::Foundation::AssetPath(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_UISUMMEREVENTSHOOTMAINPAGECONTROLLER_GETWEAPONICONPATHBYCONFIGKEY_OFFSET))(this, weaponConfigKey);
		}

		::System::Void InitScoreRank()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UISUMMEREVENTSHOOTMAINPAGECONTROLLER_INITSCORERANK_OFFSET))(this);
		}

		::System::Void RefreshScoreRankInfo(::System::Int32 newRankIndex, ::System::Single progress)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_UISUMMEREVENTSHOOTMAINPAGECONTROLLER_REFRESHSCORERANKINFO_OFFSET))(this, newRankIndex, progress);
		}

		::System::Void SetCoreProgress(::System::Single progress)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_UISUMMEREVENTSHOOTMAINPAGECONTROLLER_SETCOREPROGRESS_OFFSET))(this, progress);
		}

		static ::System::Void GetScoreRankInfo(::System::Int32 score, ::System::Int32& rank, ::System::Single& scoreRatio)
		{
			return ((::System::Void(*)(::System::Int32, ::System::Int32&, ::System::Single&))((::PBYTE)hIl2Cpp + MOLEMOLE_UISUMMEREVENTSHOOTMAINPAGECONTROLLER_GETSCORERANKINFO_OFFSET))(score, rank, scoreRatio);
		}

		::System::Void TryLoadWeaponCrossHair(::System::String* weaponKey)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_UISUMMEREVENTSHOOTMAINPAGECONTROLLER_TRYLOADWEAPONCROSSHAIR_OFFSET))(this, weaponKey);
		}

		::System::Void TryLoadWeaponSkillCrossHair(::System::String* weaponConfigKey, ::MoleMole::SummerWeaponConfig* weaponConfig)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::MoleMole::SummerWeaponConfig*))((::PBYTE)hIl2Cpp + MOLEMOLE_UISUMMEREVENTSHOOTMAINPAGECONTROLLER_TRYLOADWEAPONSKILLCROSSHAIR_OFFSET))(this, weaponConfigKey, weaponConfig);
		}

		::System::Void OnCrossHairEvent(::System::EventArgs* e)
		{
			return ((::System::Void(*)(::PVOID, ::System::EventArgs*))((::PBYTE)hIl2Cpp + MOLEMOLE_UISUMMEREVENTSHOOTMAINPAGECONTROLLER_ONCROSSHAIREVENT_OFFSET))(this, e);
		}

		::System::Void OnAmmoChanged(::System::EventArgs* e)
		{
			return ((::System::Void(*)(::PVOID, ::System::EventArgs*))((::PBYTE)hIl2Cpp + MOLEMOLE_UISUMMEREVENTSHOOTMAINPAGECONTROLLER_ONAMMOCHANGED_OFFSET))(this, e);
		}

		::System::Void OnAmmoFull(::System::EventArgs* e)
		{
			return ((::System::Void(*)(::PVOID, ::System::EventArgs*))((::PBYTE)hIl2Cpp + MOLEMOLE_UISUMMEREVENTSHOOTMAINPAGECONTROLLER_ONAMMOFULL_OFFSET))(this, e);
		}

		::System::Void OnWeaponChange(::System::EventArgs* e)
		{
			return ((::System::Void(*)(::PVOID, ::System::EventArgs*))((::PBYTE)hIl2Cpp + MOLEMOLE_UISUMMEREVENTSHOOTMAINPAGECONTROLLER_ONWEAPONCHANGE_OFFSET))(this, e);
		}

		::System::Void OnReloadStart(::System::EventArgs* e)
		{
			return ((::System::Void(*)(::PVOID, ::System::EventArgs*))((::PBYTE)hIl2Cpp + MOLEMOLE_UISUMMEREVENTSHOOTMAINPAGECONTROLLER_ONRELOADSTART_OFFSET))(this, e);
		}

		::System::Void SetReloadTimeRatio(::System::Single timeRatio)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_UISUMMEREVENTSHOOTMAINPAGECONTROLLER_SETRELOADTIMERATIO_OFFSET))(this, timeRatio);
		}

		::System::Void CoreReload(::System::Single deltaTime)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_UISUMMEREVENTSHOOTMAINPAGECONTROLLER_CORERELOAD_OFFSET))(this, deltaTime);
		}

		::System::Void OnReloadStop(::System::EventArgs* e)
		{
			return ((::System::Void(*)(::PVOID, ::System::EventArgs*))((::PBYTE)hIl2Cpp + MOLEMOLE_UISUMMEREVENTSHOOTMAINPAGECONTROLLER_ONRELOADSTOP_OFFSET))(this, e);
		}

		::System::Void TryRefreshCrosshair()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UISUMMEREVENTSHOOTMAINPAGECONTROLLER_TRYREFRESHCROSSHAIR_OFFSET))(this);
		}

		::System::Void RefreshSelectWeapon()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UISUMMEREVENTSHOOTMAINPAGECONTROLLER_REFRESHSELECTWEAPON_OFFSET))(this);
		}

		::System::Void RefreshWeaponDisplayInfo(::System::Int32 weaponIndex)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UISUMMEREVENTSHOOTMAINPAGECONTROLLER_REFRESHWEAPONDISPLAYINFO_OFFSET))(this, weaponIndex);
		}

		::System::Void SetWeaponDisplayInfoNoWeapon(::System::Int32 weaponIndex)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UISUMMEREVENTSHOOTMAINPAGECONTROLLER_SETWEAPONDISPLAYINFONOWEAPON_OFFSET))(this, weaponIndex);
		}

		::System::Void SelectWeapon(::System::Int32 index, ::System::Boolean forceRefresh)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UISUMMEREVENTSHOOTMAINPAGECONTROLLER_SELECTWEAPON_OFFSET))(this, index, forceRefresh);
		}

		::System::Void SetAmmoInfo(::System::Int32 currentAmmo)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UISUMMEREVENTSHOOTMAINPAGECONTROLLER_SETAMMOINFO_OFFSET))(this, currentAmmo);
		}

		::System::Void SetAmmoInfo_1(::System::Int32 currentAmmo, ::System::Int32 weaponIdx)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UISUMMEREVENTSHOOTMAINPAGECONTROLLER_SETAMMOINFO_1_OFFSET))(this, currentAmmo, weaponIdx);
		}

		::System::Void SetMaxAmmoInfo(::System::Int32 maxAmmo)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UISUMMEREVENTSHOOTMAINPAGECONTROLLER_SETMAXAMMOINFO_OFFSET))(this, maxAmmo);
		}

		::System::Void SetMaxAmmoInfo_1(::System::Int32 maxAmmo, ::System::Int32 weaponIdx)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UISUMMEREVENTSHOOTMAINPAGECONTROLLER_SETMAXAMMOINFO_1_OFFSET))(this, maxAmmo, weaponIdx);
		}

		::System::Void OnFreeShootStateChange(::System::EventArgs* e)
		{
			return ((::System::Void(*)(::PVOID, ::System::EventArgs*))((::PBYTE)hIl2Cpp + MOLEMOLE_UISUMMEREVENTSHOOTMAINPAGECONTROLLER_ONFREESHOOTSTATECHANGE_OFFSET))(this, e);
		}

		::System::Void OnShootScoreChange(::System::EventArgs* e)
		{
			return ((::System::Void(*)(::PVOID, ::System::EventArgs*))((::PBYTE)hIl2Cpp + MOLEMOLE_UISUMMEREVENTSHOOTMAINPAGECONTROLLER_ONSHOOTSCORECHANGE_OFFSET))(this, e);
		}

		::System::Void PopScore(::MoleMole::EntityHandle targetEntityHandle, ::System::Int32 score)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::EntityHandle, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UISUMMEREVENTSHOOTMAINPAGECONTROLLER_POPSCORE_OFFSET))(this, targetEntityHandle, score);
		}

		::System::Void OnWeaponSwitched(::System::EventArgs* e)
		{
			return ((::System::Void(*)(::PVOID, ::System::EventArgs*))((::PBYTE)hIl2Cpp + MOLEMOLE_UISUMMEREVENTSHOOTMAINPAGECONTROLLER_ONWEAPONSWITCHED_OFFSET))(this, e);
		}

		::System::Void OnWeaponSkillEnd(::System::EventArgs* e)
		{
			return ((::System::Void(*)(::PVOID, ::System::EventArgs*))((::PBYTE)hIl2Cpp + MOLEMOLE_UISUMMEREVENTSHOOTMAINPAGECONTROLLER_ONWEAPONSKILLEND_OFFSET))(this, e);
		}

		::System::Void OnWeaponSkillStart(::System::EventArgs* e)
		{
			return ((::System::Void(*)(::PVOID, ::System::EventArgs*))((::PBYTE)hIl2Cpp + MOLEMOLE_UISUMMEREVENTSHOOTMAINPAGECONTROLLER_ONWEAPONSKILLSTART_OFFSET))(this, e);
		}

		::System::Void OnShootStart(::System::EventArgs* e)
		{
			return ((::System::Void(*)(::PVOID, ::System::EventArgs*))((::PBYTE)hIl2Cpp + MOLEMOLE_UISUMMEREVENTSHOOTMAINPAGECONTROLLER_ONSHOOTSTART_OFFSET))(this, e);
		}

		::System::Void OnShootButtonPressStart(::System::EventArgs* e)
		{
			return ((::System::Void(*)(::PVOID, ::System::EventArgs*))((::PBYTE)hIl2Cpp + MOLEMOLE_UISUMMEREVENTSHOOTMAINPAGECONTROLLER_ONSHOOTBUTTONPRESSSTART_OFFSET))(this, e);
		}

		::System::Void OnShootButtonPressUp(::System::EventArgs* e)
		{
			return ((::System::Void(*)(::PVOID, ::System::EventArgs*))((::PBYTE)hIl2Cpp + MOLEMOLE_UISUMMEREVENTSHOOTMAINPAGECONTROLLER_ONSHOOTBUTTONPRESSUP_OFFSET))(this, e);
		}

		::System::Void OnBulletHitTarget(::System::EventArgs* e)
		{
			return ((::System::Void(*)(::PVOID, ::System::EventArgs*))((::PBYTE)hIl2Cpp + MOLEMOLE_UISUMMEREVENTSHOOTMAINPAGECONTROLLER_ONBULLETHITTARGET_OFFSET))(this, e);
		}

		::System::Void RefreshWeaponSkillState()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UISUMMEREVENTSHOOTMAINPAGECONTROLLER_REFRESHWEAPONSKILLSTATE_OFFSET))(this);
		}

		::System::Void RefreshWeaponDisplayState()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UISUMMEREVENTSHOOTMAINPAGECONTROLLER_REFRESHWEAPONDISPLAYSTATE_OFFSET))(this);
		}

		::System::Void CoreSkillRunning()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UISUMMEREVENTSHOOTMAINPAGECONTROLLER_CORESKILLRUNNING_OFFSET))(this);
		}

		::System::Void GetWeaponInfo(::System::Int32& currentAmmo, ::System::Int32& maxAmmo)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32&, ::System::Int32&))((::PBYTE)hIl2Cpp + MOLEMOLE_UISUMMEREVENTSHOOTMAINPAGECONTROLLER_GETWEAPONINFO_OFFSET))(this, currentAmmo, maxAmmo);
		}

		::System::Boolean GetWeaponInfoByKey(::System::String* weaponKey, ::System::Int32& currentAmmo, ::System::Int32& maxAmmo)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::String*, ::System::Int32&, ::System::Int32&))((::PBYTE)hIl2Cpp + MOLEMOLE_UISUMMEREVENTSHOOTMAINPAGECONTROLLER_GETWEAPONINFOBYKEY_OFFSET))(this, weaponKey, currentAmmo, maxAmmo);
		}

		::System::Void InitData()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UISUMMEREVENTSHOOTMAINPAGECONTROLLER_INITDATA_OFFSET))(this);
		}

		::System::Void CheckCrossHairRange()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UISUMMEREVENTSHOOTMAINPAGECONTROLLER_CHECKCROSSHAIRRANGE_OFFSET))(this);
		}

		::System::Void RefreshBaseMoveRatio()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UISUMMEREVENTSHOOTMAINPAGECONTROLLER_REFRESHBASEMOVERATIO_OFFSET))(this);
		}

		::System::Void OnSystemSensitivityUpdate(::System::EventArgs* e)
		{
			return ((::System::Void(*)(::PVOID, ::System::EventArgs*))((::PBYTE)hIl2Cpp + MOLEMOLE_UISUMMEREVENTSHOOTMAINPAGECONTROLLER_ONSYSTEMSENSITIVITYUPDATE_OFFSET))(this, e);
		}

		::System::Void TryInitCrossHairRange()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UISUMMEREVENTSHOOTMAINPAGECONTROLLER_TRYINITCROSSHAIRRANGE_OFFSET))(this);
		}

		::System::Void BindEvents()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UISUMMEREVENTSHOOTMAINPAGECONTROLLER_BINDEVENTS_OFFSET))(this);
		}

		::System::Void OnPerformNotify(::System::EventArgs* args)
		{
			return ((::System::Void(*)(::PVOID, ::System::EventArgs*))((::PBYTE)hIl2Cpp + MOLEMOLE_UISUMMEREVENTSHOOTMAINPAGECONTROLLER_ONPERFORMNOTIFY_OFFSET))(this, args);
		}

		::System::Void PauseGame(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UISUMMEREVENTSHOOTMAINPAGECONTROLLER_PAUSEGAME_OFFSET))(this, value);
		}

		::System::Void OnExitGame()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UISUMMEREVENTSHOOTMAINPAGECONTROLLER_ONEXITGAME_OFFSET))(this);
		}

		::System::Void OnRestartGame()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UISUMMEREVENTSHOOTMAINPAGECONTROLLER_ONRESTARTGAME_OFFSET))(this);
		}

		::System::Void InitUIDefaultState()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UISUMMEREVENTSHOOTMAINPAGECONTROLLER_INITUIDEFAULTSTATE_OFFSET))(this);
		}

		::System::Void OnClickWeapon(::System::Int32 weaponIndex)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UISUMMEREVENTSHOOTMAINPAGECONTROLLER_ONCLICKWEAPON_OFFSET))(this, weaponIndex);
		}

		::System::Void OnClickWeaponTab(::System::Int32 index)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UISUMMEREVENTSHOOTMAINPAGECONTROLLER_ONCLICKWEAPONTAB_OFFSET))(this, index);
		}

		::System::Boolean get_isWeaponSkillStart()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UISUMMEREVENTSHOOTMAINPAGECONTROLLER_GET_ISWEAPONSKILLSTART_OFFSET))(this);
		}

		::System::Void _PlayStartTips_g__StartGame_31_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UISUMMEREVENTSHOOTMAINPAGECONTROLLER__PLAYSTARTTIPS_G__STARTGAME_31_0_OFFSET))(this);
		}

		::System::Void __base_OnCreateView(::MoleMole::UIControlReference* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UISUMMEREVENTSHOOTMAINPAGECONTROLLER___BASE_ONCREATEVIEW_OFFSET))(this, P0);
		}

		::System::Void __base_OnDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UISUMMEREVENTSHOOTMAINPAGECONTROLLER___BASE_ONDESTROY_OFFSET))(this);
		}

		::System::Void __base_OnHide()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UISUMMEREVENTSHOOTMAINPAGECONTROLLER___BASE_ONHIDE_OFFSET))(this);
		}

		::System::Boolean __base_OnInputAction(::MoleMole::InputActionEvent P0)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::InputActionEvent))((::PBYTE)hIl2Cpp + MOLEMOLE_UISUMMEREVENTSHOOTMAINPAGECONTROLLER___BASE_ONINPUTACTION_OFFSET))(this, P0);
		}

		::System::Void __base_OnShow(::MoleMole::UIControllerContextBase* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UISUMMEREVENTSHOOTMAINPAGECONTROLLER___BASE_ONSHOW_OFFSET))(this, P0);
		}

		::System::Void __base_OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UISUMMEREVENTSHOOTMAINPAGECONTROLLER___BASE_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void __base_OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UISUMMEREVENTSHOOTMAINPAGECONTROLLER___BASE_ONUIINIT_OFFSET))(this);
		}
	};
}

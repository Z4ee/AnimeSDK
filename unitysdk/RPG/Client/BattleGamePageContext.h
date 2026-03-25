#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/UIController.h"
#include "unitysdk/RPG/GameCore/BattleUIPanelType.h"
#include "unitysdk/Struct_2_6E6428D512391F71.h"

class Class_0_16E4307DCC419505_375;
class Class_1_02D30900317D93FD;
class Class_1_CA217ABF4E3B4F3F;
class Class_1_CF11EFE40187AFC2;
class Class_2_098DE510031D8543;
class Class_2_0CDD7D7511940409;
class Class_2_24222339AD802068;
class Class_2_2B7BD8F617A0307D;
class Class_2_2BF8F9B72A775F6A;
class Class_2_42EA9C9474E11A06;
class Class_2_5EC7E6F4AADA2E6D;
class Class_2_61CF05950692DE56;
class Class_2_72D254AD950863C9;
class Class_2_7AC5CDC6676C412B;
class Class_2_86C083B9882784F7;
class Class_2_B4DB9A5A774AA67E;
class Class_2_BEC921A59CE42D4E;
class Class_2_BEE584E046532101;
class Class_2_C18BF69A8AD47CB4;
class Class_2_CB2DDEA2A18986B6;
class Class_2_CFEDE77CE6B2789D;
class Class_2_D21179058EF3134D;
class Class_2_D8A9B7E75FE2A68B_1;
class Class_2_D9812445A4D54117;
class Class_2_E893C2FAB3F7DDEB;
class Class_2_F7F95FDF7FB8639D;
namespace RPG::Client { class ShowBossInfoParam; }
namespace RPG::Client { class UIMeta; }
namespace RPG::GameCore { class BattleInstance; }
namespace RPG::GameCore { class EntityManager; }
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class GameEntityList; }
namespace RPG::GameCore { class LevelCharacterCreate; }
namespace RPG::GameCore { class LevelEntityStageStateChange; }
namespace RPG::GameCore { class LevelUIComponent; }
namespace RPG::GameCore { class ShowBonusUIEffect; }
namespace RPG::UINavigation { class UINavigationZoneManager; }
namespace System { class Object; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Animation; }
namespace UnityEngine { class RectTransform; }
namespace UnityEngine { class Transform; }
namespace UnityEngine::UI { class Button; }

#define RPG_CLIENT_BATTLEGAMEPAGECONTEXT_AUTOBINDCALLBACK_OFFSET UNITYSDK_OFFSET(0x91A0A00)
#define RPG_CLIENT_BATTLEGAMEPAGECONTEXT_AUTOREMOVECALLBACK_OFFSET UNITYSDK_OFFSET(0x91A0E40)
#define RPG_CLIENT_BATTLEGAMEPAGECONTEXT_GET_ACTIONBARPANEL_OFFSET UNITYSDK_OFFSET(0x91A02F0)
#define RPG_CLIENT_BATTLEGAMEPAGECONTEXT_GET_BATTLESHOWUIPAGEMANAGER_OFFSET UNITYSDK_OFFSET(0x919A920)
#define RPG_CLIENT_BATTLEGAMEPAGECONTEXT_GET_ISULTRATRIGGERPRESSED_OFFSET UNITYSDK_OFFSET(0x91A0310)
#define RPG_CLIENT_BATTLEGAMEPAGECONTEXT_GET_NAVIGATIONZONEMANAGER_OFFSET UNITYSDK_OFFSET(0x919A930)
#define RPG_CLIENT_BATTLEGAMEPAGECONTEXT_GET_PCSHORTCUTPANEL_OFFSET UNITYSDK_OFFSET(0x91A0300)
#define RPG_CLIENT_BATTLEGAMEPAGECONTEXT_GET_SKILLPANEL_OFFSET UNITYSDK_OFFSET(0x91A02E0)
#define RPG_CLIENT_BATTLEGAMEPAGECONTEXT_GET__ISINDELAYINTERACTION_OFFSET UNITYSDK_OFFSET(0x919E0E0)
#define RPG_CLIENT_BATTLEGAMEPAGECONTEXT_GET__ISINTIMELINEDISABLEINTERACTION_OFFSET UNITYSDK_OFFSET(0x919E100)
#define RPG_CLIENT_BATTLEGAMEPAGECONTEXT_MANUALBINDPANEL_OFFSET UNITYSDK_OFFSET(0x919A8B0)
#define RPG_CLIENT_BATTLEGAMEPAGECONTEXT_ONGOTFOCUS_OFFSET UNITYSDK_OFFSET(0x919C630)
#define RPG_CLIENT_BATTLEGAMEPAGECONTEXT_ONLOSTFOCUS_OFFSET UNITYSDK_OFFSET(0x919C690)
#define RPG_CLIENT_BATTLEGAMEPAGECONTEXT_ONRETURNTOTOP_OFFSET UNITYSDK_OFFSET(0x919C5D0)
#define RPG_CLIENT_BATTLEGAMEPAGECONTEXT_REVERTBATTLEPANELACTIVEREASON_OFFSET UNITYSDK_OFFSET(0x919A660)
#define RPG_CLIENT_BATTLEGAMEPAGECONTEXT_SETBATTLEPANELLIGHTWEIGHTACTIVE_OFFSET UNITYSDK_OFFSET(0x919A5E0)
#define RPG_CLIENT_BATTLEGAMEPAGECONTEXT_SETBOSSINFOPANEL_OFFSET UNITYSDK_OFFSET(0x919A7D0)
#define RPG_CLIENT_BATTLEGAMEPAGECONTEXT_SETTIMELINEDISABLEINTERACTIONTIME_OFFSET UNITYSDK_OFFSET(0x919A6C0)
#define RPG_CLIENT_BATTLEGAMEPAGECONTEXT_VIEWPREFABPATH_OFFSET UNITYSDK_OFFSET(0x919A590)
#define RPG_CLIENT_BATTLEGAMEPAGECONTEXT__ADDHANDLERS_OFFSET UNITYSDK_OFFSET(0x919B2B0)
#define RPG_CLIENT_BATTLEGAMEPAGECONTEXT__CALCULATEHUDVIEWRECT_OFFSET UNITYSDK_OFFSET(0x919BB50)
#define RPG_CLIENT_BATTLEGAMEPAGECONTEXT__CANENTITYSHOWAVATARPANEL_OFFSET UNITYSDK_OFFSET(0x919FDB0)
#define RPG_CLIENT_BATTLEGAMEPAGECONTEXT__CHECKNEEDPAUSEBYTIMELINEDETAILINFOPANEL_OFFSET UNITYSDK_OFFSET(0x919F0C0)
#define RPG_CLIENT_BATTLEGAMEPAGECONTEXT__CHECKNEEDPAUSEBYULTRATRIGGER_OFFSET UNITYSDK_OFFSET(0x919C470)
#define RPG_CLIENT_BATTLEGAMEPAGECONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0x919A2E0)
#define RPG_CLIENT_BATTLEGAMEPAGECONTEXT__CUSTOMBINDVIEW_OFFSET UNITYSDK_OFFSET(0x919A940)
#define RPG_CLIENT_BATTLEGAMEPAGECONTEXT__INITAFTERLEVELSETUP_OFFSET UNITYSDK_OFFSET(0x919DA90)
#define RPG_CLIENT_BATTLEGAMEPAGECONTEXT__INITBEFORELEVELSETUP_OFFSET UNITYSDK_OFFSET(0x919D700)
#define RPG_CLIENT_BATTLEGAMEPAGECONTEXT__ONACTIVECHANGE_OFFSET UNITYSDK_OFFSET(0x919C000)
#define RPG_CLIENT_BATTLEGAMEPAGECONTEXT__ONBATTLECLOSETIMELINEDETAILINFOPANEL_OFFSET UNITYSDK_OFFSET(0x919F5C0)
#define RPG_CLIENT_BATTLEGAMEPAGECONTEXT__ONBATTLECLOSETIMELINEDETAILINFOPANEL_WRAP_OFFSET UNITYSDK_OFFSET(0x91A09A0)
#define RPG_CLIENT_BATTLEGAMEPAGECONTEXT__ONBATTLEGAMEPAGEEXIT_OFFSET UNITYSDK_OFFSET(0x919D4B0)
#define RPG_CLIENT_BATTLEGAMEPAGECONTEXT__ONBATTLEGAMEPAGEINITAFTERLEVELSETUP_OFFSET UNITYSDK_OFFSET(0x919DA10)
#define RPG_CLIENT_BATTLEGAMEPAGECONTEXT__ONBATTLEGAMEPAGEINITBEFORELEVELSETUP_OFFSET UNITYSDK_OFFSET(0x919D680)
#define RPG_CLIENT_BATTLEGAMEPAGECONTEXT__ONBATTLEGAMEPAGESHOWWHITEBOXCONTENT_OFFSET UNITYSDK_OFFSET(0x919DAE0)
#define RPG_CLIENT_BATTLEGAMEPAGECONTEXT__ONBATTLEGAMEPAGESILENTEXIT_OFFSET UNITYSDK_OFFSET(0x919D530)
#define RPG_CLIENT_BATTLEGAMEPAGECONTEXT__ONBATTLEGAMEPHASELEAVE_OFFSET UNITYSDK_OFFSET(0x919E380)
#define RPG_CLIENT_BATTLEGAMEPAGECONTEXT__ONBATTLEONABILITYDYING_OFFSET UNITYSDK_OFFSET(0x919D330)
#define RPG_CLIENT_BATTLEGAMEPAGECONTEXT__ONBATTLEONABILITYDYING_WRAP_OFFSET UNITYSDK_OFFSET(0x91A07A0)
#define RPG_CLIENT_BATTLEGAMEPAGECONTEXT__ONBATTLEOPENTIMELINEDETAILINFOPANEL_OFFSET UNITYSDK_OFFSET(0x919F180)
#define RPG_CLIENT_BATTLEGAMEPAGECONTEXT__ONBATTLEOPENTIMELINEDETAILINFOPANEL_WRAP_OFFSET UNITYSDK_OFFSET(0x91A0900)
#define RPG_CLIENT_BATTLEGAMEPAGECONTEXT__ONBATTLESHOWBATTLEBROKENDIALOG_OFFSET UNITYSDK_OFFSET(0x919E720)
#define RPG_CLIENT_BATTLEGAMEPAGECONTEXT__ONBATTLESHOWBATTLESTARTDIALOG_OFFSET UNITYSDK_OFFSET(0x919E6C0)
#define RPG_CLIENT_BATTLEGAMEPAGECONTEXT__ONBATTLESHOWNEXTWAVEDIALOG_OFFSET UNITYSDK_OFFSET(0x919E7A0)
#define RPG_CLIENT_BATTLEGAMEPAGECONTEXT__ONBATTLETIMELINESKILLCLOSEUI_OFFSET UNITYSDK_OFFSET(0x919E570)
#define RPG_CLIENT_BATTLEGAMEPAGECONTEXT__ONBATTLETIMELINESKILLSHOWUI_OFFSET UNITYSDK_OFFSET(0x919E4B0)
#define RPG_CLIENT_BATTLEGAMEPAGECONTEXT__ONBATTLETRIGGERONEMORE_OFFSET UNITYSDK_OFFSET(0x919E660)
#define RPG_CLIENT_BATTLEGAMEPAGECONTEXT__ONBATTLEULTRATRIGGERBUTTONSTATECHANGE_OFFSET UNITYSDK_OFFSET(0x919E880)
#define RPG_CLIENT_BATTLEGAMEPAGECONTEXT__ONBTNSCREENMASK_OFFSET UNITYSDK_OFFSET(0x919E800)
#define RPG_CLIENT_BATTLEGAMEPAGECONTEXT__ONCHARACTERCREATE_OFFSET UNITYSDK_OFFSET(0x919D230)
#define RPG_CLIENT_BATTLEGAMEPAGECONTEXT__ONCHARACTERCREATE_WRAP_OFFSET UNITYSDK_OFFSET(0x91A0320)
#define RPG_CLIENT_BATTLEGAMEPAGECONTEXT__ONCHARACTERSTAGESTATECHANGE_OFFSET UNITYSDK_OFFSET(0x919D2B0)
#define RPG_CLIENT_BATTLEGAMEPAGECONTEXT__ONCHARACTERSTAGESTATECHANGE_WRAP_OFFSET UNITYSDK_OFFSET(0x91A0400)
#define RPG_CLIENT_BATTLEGAMEPAGECONTEXT__ONCREATEPLAYERTEAMFINISH_OFFSET UNITYSDK_OFFSET(0x919D190)
#define RPG_CLIENT_BATTLEGAMEPAGECONTEXT__ONLEVELGAMEMODESTATECHANGEDEVENT_OFFSET UNITYSDK_OFFSET(0x919C7C0)
#define RPG_CLIENT_BATTLEGAMEPAGECONTEXT__ONLOCKBATTLEOPERATION_OFFSET UNITYSDK_OFFSET(0x919EC50)
#define RPG_CLIENT_BATTLEGAMEPAGECONTEXT__ONMAZETOBATTLETRANSITFADEOUTEND_OFFSET UNITYSDK_OFFSET(0x919C6E0)
#define RPG_CLIENT_BATTLEGAMEPAGECONTEXT__ONMAZETOBATTLETRANSITFADEOUTEND_WRAP_OFFSET UNITYSDK_OFFSET(0x91A0510)
#define RPG_CLIENT_BATTLEGAMEPAGECONTEXT__ONPLAYROLETRIALZOOMINFADEOUT_OFFSET UNITYSDK_OFFSET(0x919EF10)
#define RPG_CLIENT_BATTLEGAMEPAGECONTEXT__ONREFRESHBATTLEAVATARPANEL_OFFSET UNITYSDK_OFFSET(0x919D1E0)
#define RPG_CLIENT_BATTLEGAMEPAGECONTEXT__ONREFRESHBATTLEAVATARPANEL_WRAP_OFFSET UNITYSDK_OFFSET(0x91A0710)
#define RPG_CLIENT_BATTLEGAMEPAGECONTEXT__ONSETUPFULLSCREENBLOCK_OFFSET UNITYSDK_OFFSET(0x919EDA0)
#define RPG_CLIENT_BATTLEGAMEPAGECONTEXT__ONSHOWBOSSINFOBAR_OFFSET UNITYSDK_OFFSET(0x919D0B0)
#define RPG_CLIENT_BATTLEGAMEPAGECONTEXT__ONSHOWBOSSINFOBAR_WRAP_OFFSET UNITYSDK_OFFSET(0x91A0660)
#define RPG_CLIENT_BATTLEGAMEPAGECONTEXT__ONTEAMFORMATIONLISTCHANGE_OFFSET UNITYSDK_OFFSET(0x919D410)
#define RPG_CLIENT_BATTLEGAMEPAGECONTEXT__ONTICK_OFFSET UNITYSDK_OFFSET(0x919C080)
#define RPG_CLIENT_BATTLEGAMEPAGECONTEXT__ONUIBATTLEANYKEYDOWNNTF_OFFSET UNITYSDK_OFFSET(0x919E050)
#define RPG_CLIENT_BATTLEGAMEPAGECONTEXT__ONUIBONUSEFFECT_OFFSET UNITYSDK_OFFSET(0x919E2A0)
#define RPG_CLIENT_BATTLEGAMEPAGECONTEXT__ONUIBONUSEFFECT_WRAP_OFFSET UNITYSDK_OFFSET(0x91A0860)
#define RPG_CLIENT_BATTLEGAMEPAGECONTEXT__PLAYALLUIFADEANIM_OFFSET UNITYSDK_OFFSET(0x919CD90)
#define RPG_CLIENT_BATTLEGAMEPAGECONTEXT__PLAYAVATARPANELFADEANIM_OFFSET UNITYSDK_OFFSET(0x919FF50)
#define RPG_CLIENT_BATTLEGAMEPAGECONTEXT__PLAYULTRAFADE_OFFSET UNITYSDK_OFFSET(0x919EAC0)
#define RPG_CLIENT_BATTLEGAMEPAGECONTEXT__RESETUISTATE_OFFSET UNITYSDK_OFFSET(0x919B8C0)
#define RPG_CLIENT_BATTLEGAMEPAGECONTEXT__SETACTIVEBYPOSITION_OFFSET UNITYSDK_OFFSET(0x919CFA0)
#define RPG_CLIENT_BATTLEGAMEPAGECONTEXT__SETLIGHTENTITIES_OFFSET UNITYSDK_OFFSET(0x919FBD0)
#define RPG_CLIENT_BATTLEGAMEPAGECONTEXT__SETPAUSEBYULTRASKILLTRIGGER_OFFSET UNITYSDK_OFFSET(0x919BE30)
#define RPG_CLIENT_BATTLEGAMEPAGECONTEXT__SETUPACTIONBARSAFEZONE_OFFSET UNITYSDK_OFFSET(0x919BCA0)
#define RPG_CLIENT_BATTLEGAMEPAGECONTEXT__SETUPLIGHTTEAMMEMBER_OFFSET UNITYSDK_OFFSET(0x919C3F0)
#define RPG_CLIENT_BATTLEGAMEPAGECONTEXT__SETUPLIGHTTEAMUI_OFFSET UNITYSDK_OFFSET(0x919F8D0)
#define RPG_CLIENT_BATTLEGAMEPAGECONTEXT__SETUPREPLAYMODE_OFFSET UNITYSDK_OFFSET(0x919CAD0)
#define RPG_CLIENT_BATTLEGAMEPAGECONTEXT__SETUPTRIALOBJETIVE_OFFSET UNITYSDK_OFFSET(0x919FA00)
#define RPG_CLIENT_BATTLEGAMEPAGECONTEXT__SETUPVIEW_OFFSET UNITYSDK_OFFSET(0x919B810)
#define RPG_CLIENT_BATTLEGAMEPAGECONTEXT__SETVIGNETTE_OFFSET UNITYSDK_OFFSET(0x919C9B0)
#define RPG_CLIENT_BATTLEGAMEPAGECONTEXT__SHOWBEGINBATTLEBLOCK_OFFSET UNITYSDK_OFFSET(0x919B950)
#define RPG_CLIENT_BATTLEGAMEPAGECONTEXT__TICKDELAYINTERACTION_OFFSET UNITYSDK_OFFSET(0x919C310)
#define RPG_CLIENT_BATTLEGAMEPAGECONTEXT__TICKTIMELINEDISABLEINTERACTION_OFFSET UNITYSDK_OFFSET(0x919C380)
#define RPG_CLIENT_BATTLEGAMEPAGECONTEXT__TOGGLEAVATARPANELBLACKMASK_OFFSET UNITYSDK_OFFSET(0x919F110)
#define RPG_CLIENT_BATTLEGAMEPAGECONTEXT__TOGGLEAVATARPANEL_OFFSET UNITYSDK_OFFSET(0x919E120)
#define RPG_CLIENT_BATTLEGAMEPAGECONTEXT__UNBINDVIEW_OFFSET UNITYSDK_OFFSET(0x919BD10)
#define RPG_CLIENT_BATTLEGAMEPAGECONTEXT___IFIXBASEPROXY_AUTOBINDCALLBACK_OFFSET UNITYSDK_OFFSET(0x91A1570)
#define RPG_CLIENT_BATTLEGAMEPAGECONTEXT___IFIXBASEPROXY_AUTOREMOVECALLBACK_OFFSET UNITYSDK_OFFSET(0x91A15D0)
#define RPG_CLIENT_BATTLEGAMEPAGECONTEXT___IFIXBASEPROXY_ONGOTFOCUS_OFFSET UNITYSDK_OFFSET(0x91A1550)
#define RPG_CLIENT_BATTLEGAMEPAGECONTEXT___IFIXBASEPROXY_ONLOSTFOCUS_OFFSET UNITYSDK_OFFSET(0x91A1560)
#define RPG_CLIENT_BATTLEGAMEPAGECONTEXT___IFIXBASEPROXY_ONRETURNTOTOP_OFFSET UNITYSDK_OFFSET(0x91A1540)
#define RPG_CLIENT_BATTLEGAMEPAGECONTEXT___IFIXBASEPROXY_VIEWPREFABPATH_OFFSET UNITYSDK_OFFSET(0x91A1250)
#define RPG_CLIENT_BATTLEGAMEPAGECONTEXT___IFIXBASEPROXY__ADDHANDLERS_OFFSET UNITYSDK_OFFSET(0x91A1340)
#define RPG_CLIENT_BATTLEGAMEPAGECONTEXT___IFIXBASEPROXY__CUSTOMBINDVIEW_OFFSET UNITYSDK_OFFSET(0x91A12E0)
#define RPG_CLIENT_BATTLEGAMEPAGECONTEXT___IFIXBASEPROXY__ONACTIVECHANGE_OFFSET UNITYSDK_OFFSET(0x91A1460)
#define RPG_CLIENT_BATTLEGAMEPAGECONTEXT___IFIXBASEPROXY__ONTICK_OFFSET UNITYSDK_OFFSET(0x91A14D0)
#define RPG_CLIENT_BATTLEGAMEPAGECONTEXT___IFIXBASEPROXY__SETUPVIEW_OFFSET UNITYSDK_OFFSET(0x91A13A0)
#define RPG_CLIENT_BATTLEGAMEPAGECONTEXT___IFIXBASEPROXY__UNBINDVIEW_OFFSET UNITYSDK_OFFSET(0x91A1400)
#define RPG_CLIENT_BATTLEGAMEPAGECONTEXT___ONLEVELGAMEMODESTATECHANGEDEVENT_B__21_0_OFFSET UNITYSDK_OFFSET(0x91A1240)

namespace RPG::Client
{
	inline static constexpr unsigned int BattleGamePageContext_TypeDefinitionIndex = 58719;

	class BattleGamePageContext : public ::RPG::Client::UIController
	{
	public:
		// static const ::System::String* _RESET_ANIM_NAME; // 0x0
		// static const ::System::String* _AVATAR_PANEL_FADE_OUT_ANIM_NAME; // 0x0
		// static const ::System::String* _ULTRA_TRIGGER_FADE_IN; // 0x0
		// static const ::System::String* _ULTRA_TRIGGER_FADE_OUT; // 0x0
		// static const ::System::String* _LUA_ONE_MORE_EFFECT; // 0x0
		// static const ::System::String* _LUA_BATTLE_BROKEN_DIALOG; // 0x0
		// static const ::System::String* _LUA_BONUS_ACTION_DIALOG; // 0x0
		// static const ::System::String* _LUA_NEXT_WAVE_DIALOG; // 0x0
		// static const ::System::String* _ANIM_VIGNETTE_FADE_IN; // 0x0
		// static const ::System::String* _ANIM_VIGNETTE_FADE_OUT; // 0x0
		// static const ::System::Single _WAIT_FOR_FADE_IN; // 0x0
		// static const ::System::Single _FADE_OUT_VIGNETTE_INTENSITY; // 0x0
		// static const ::System::UInt64 _VIGNETTE_CHANGE_TIME = 0xFA; // 0x0
		::Class_1_CF11EFE40187AFC2* _BattleGamePanelsActiveManager; // 0x180
		::Class_2_42EA9C9474E11A06* _RightDownPointPanel; // 0x188
		::Class_2_C18BF69A8AD47CB4* _ActionBarPanel; // 0x190
		::UnityEngine::Transform* _ActionBarMask; // 0x198
		::Class_2_E893C2FAB3F7DDEB* _BattleToastPanel; // 0x1A0
		::Class_2_CB2DDEA2A18986B6* _BattleMaskPage; // 0x1A8
		::Class_2_2BF8F9B72A775F6A* _BattleShowUIPageManager; // 0x1B0
		::Class_2_61CF05950692DE56* _TeamInfoPanel; // 0x1B8
		::Class_2_D21179058EF3134D* _PCShortCutPanel; // 0x1C0
		::Class_2_2B7BD8F617A0307D* _SkillPanel; // 0x1C8
		::UnityEngine::Transform* _TeamRoot; // 0x1D0
		::System::Collections::Generic::List_1<::System::String*>* _WhiteboxImgPaths; // 0x1D8
		::Class_2_F7F95FDF7FB8639D* _BattleTopPanel; // 0x1E0
		::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>* _LightTeamEntities; // 0x1E8
		::UnityEngine::UI::Button* _BtnScreenMask; // 0x1F0
		::Class_2_BEC921A59CE42D4E* _BossInfoPanel; // 0x1F8
		::Class_2_24222339AD802068* _Follow3dContext; // 0x200
		::Class_2_B4DB9A5A774AA67E* _BattleEventButtonSpecialPanel; // 0x208
		::UnityEngine::Animation* _RootAnim; // 0x210
		::RPG::GameCore::EntityManager* _EntityManager; // 0x218
		::Il2CppArray<::System::String*>* _ReplayModeWhiteList; // 0x220
		::Class_2_D8A9B7E75FE2A68B_1* _BattleBPTopPanel; // 0x228
		::Class_2_CFEDE77CE6B2789D* _BattleFunctionBarPanel; // 0x230
		::Class_2_86C083B9882784F7* _BattleChangeAvatarPanel; // 0x238
		::Class_2_5EC7E6F4AADA2E6D* _BattleScreenEffectPanelContainer; // 0x240
		::RPG::GameCore::LevelUIComponent* _LevelUICmpt; // 0x248
		::Class_2_0CDD7D7511940409* _BattleBottomInfoPanel; // 0x250
		::UnityEngine::RectTransform* _ActionBarSafeZone; // 0x258
		::Class_2_098DE510031D8543* _BattleTeamDetailButtonPanel; // 0x260
		::UnityEngine::Transform* _AvatarPanelBlackMask; // 0x268
		::Il2CppArray<::System::String*>* _UltraTriggerWhiteList; // 0x270
		::RPG::UINavigation::UINavigationZoneManager* _UINavigationZoneManager; // 0x278
		::Class_2_BEE584E046532101* _BattleRightInfoPanel; // 0x280
		::UnityEngine::Transform* _WhiteboxWidget; // 0x288
		::UnityEngine::RectTransform* _HudSafeZone; // 0x290
		::Class_2_7AC5CDC6676C412B* _BattleEventSkillPanel; // 0x298
		::Class_2_72D254AD950863C9* _BattleRoleTrialPanel; // 0x2A0
		::Class_2_D9812445A4D54117* _TurnHintPanel; // 0x2A8
		::RPG::Client::UIMeta* _UIMeta; // 0x2B0
		::RPG::GameCore::BattleInstance* _BattleInstanceRef; // 0x2B8
		::System::Single _DelayInteractionTimeStamp; // 0x2C0
		::System::Single _TimeLineDisableInteractionTimeStamp; // 0x2C4
		::System::Single _VignetteTarget; // 0x2C8
		::System::Boolean _LightTeamEntitiesDirty; // 0x2CC
		::System::Boolean _InVignetteChange; // 0x2CD
		::System::Boolean _ShouldResumeBeginBattleBlock; // 0x2CE
		::System::Boolean _IsBattleTimelinePlaying; // 0x2CF
		::System::Single _VignetteBegin; // 0x2D0
		::System::UInt32 _BeginBattleBlockID; // 0x2D4
		::System::Int32 _IsPausedByTimeLineDetailInfoPanelTimeScaleIndex; // 0x2D8
		::System::UInt64 _VignetteChangeBeginTime; // 0x2E0
		::System::Boolean _IsUltraTriggerPressed; // 0x2E8
		::System::Boolean _IsPausedByUltraSkillTrigger; // 0x2E9
		::System::Boolean _VignetteFadeIn; // 0x2EA
		::System::Int32 _IsPausedByUltraSkillTriggerTimeScaleIndex; // 0x2EC

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLEGAMEPAGECONTEXT__CTOR_OFFSET))(this);
		}

		::System::String* ViewPrefabPath()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLEGAMEPAGECONTEXT_VIEWPREFABPATH_OFFSET))(this);
		}

		::System::Void SetBattlePanelLightWeightActive(::RPG::GameCore::BattleUIPanelType panelType, ::System::Boolean active, ::System::String* reason)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::BattleUIPanelType, ::System::Boolean, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLEGAMEPAGECONTEXT_SETBATTLEPANELLIGHTWEIGHTACTIVE_OFFSET))(this, panelType, active, reason);
		}

		::System::Void RevertBattlePanelActiveReason(::System::String* reason)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLEGAMEPAGECONTEXT_REVERTBATTLEPANELACTIVEREASON_OFFSET))(this, reason);
		}

		::System::Void SetTimeLineDisableInteractionTime(::Struct_2_6E6428D512391F71 config)
		{
			return ((::System::Void(*)(::PVOID, ::Struct_2_6E6428D512391F71))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLEGAMEPAGECONTEXT_SETTIMELINEDISABLEINTERACTIONTIME_OFFSET))(this, config);
		}

		::System::Void SetBossInfoPanel(::Class_2_BEC921A59CE42D4E* bossInfoPanel)
		{
			return ((::System::Void(*)(::PVOID, ::Class_2_BEC921A59CE42D4E*))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLEGAMEPAGECONTEXT_SETBOSSINFOPANEL_OFFSET))(this, bossInfoPanel);
		}

		::System::Void ManualBindPanel(::RPG::GameCore::BattleUIPanelType panelType, ::Class_1_CA217ABF4E3B4F3F* panel)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::BattleUIPanelType, ::Class_1_CA217ABF4E3B4F3F*))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLEGAMEPAGECONTEXT_MANUALBINDPANEL_OFFSET))(this, panelType, panel);
		}

		::Class_2_2BF8F9B72A775F6A* get_BattleShowUIPageManager()
		{
			return ((::Class_2_2BF8F9B72A775F6A*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLEGAMEPAGECONTEXT_GET_BATTLESHOWUIPAGEMANAGER_OFFSET))(this);
		}

		::RPG::UINavigation::UINavigationZoneManager* get_NavigationZoneManager()
		{
			return ((::RPG::UINavigation::UINavigationZoneManager*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLEGAMEPAGECONTEXT_GET_NAVIGATIONZONEMANAGER_OFFSET))(this);
		}

		::System::Void _CustomBindView()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLEGAMEPAGECONTEXT__CUSTOMBINDVIEW_OFFSET))(this);
		}

		::System::Void _AddHandlers()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLEGAMEPAGECONTEXT__ADDHANDLERS_OFFSET))(this);
		}

		::System::Void _SetupView()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLEGAMEPAGECONTEXT__SETUPVIEW_OFFSET))(this);
		}

		::System::Void _UnBindView()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLEGAMEPAGECONTEXT__UNBINDVIEW_OFFSET))(this);
		}

		::System::Void _OnActiveChange(::System::Boolean active)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLEGAMEPAGECONTEXT__ONACTIVECHANGE_OFFSET))(this, active);
		}

		::System::Void _OnTick(::System::Single deltaSecond)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLEGAMEPAGECONTEXT__ONTICK_OFFSET))(this, deltaSecond);
		}

		::System::Void OnReturnToTop()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLEGAMEPAGECONTEXT_ONRETURNTOTOP_OFFSET))(this);
		}

		::System::Void OnGotFocus()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLEGAMEPAGECONTEXT_ONGOTFOCUS_OFFSET))(this);
		}

		::System::Void OnLostFocus()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLEGAMEPAGECONTEXT_ONLOSTFOCUS_OFFSET))(this);
		}

		::System::Void _OnMazeToBattleTransitFadeOutEnd()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLEGAMEPAGECONTEXT__ONMAZETOBATTLETRANSITFADEOUTEND_OFFSET))(this);
		}

		::System::Void _OnLevelGameModeStateChangedEvent(::Class_0_16E4307DCC419505_375* e)
		{
			return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_375*))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLEGAMEPAGECONTEXT__ONLEVELGAMEMODESTATECHANGEDEVENT_OFFSET))(this, e);
		}

		::System::Void _SetActiveByPosition(::System::Object* arg)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLEGAMEPAGECONTEXT__SETACTIVEBYPOSITION_OFFSET))(this, arg);
		}

		::System::Void _CalculateHUDViewRect()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLEGAMEPAGECONTEXT__CALCULATEHUDVIEWRECT_OFFSET))(this);
		}

		::System::Void _SetupActionBarSafeZone()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLEGAMEPAGECONTEXT__SETUPACTIONBARSAFEZONE_OFFSET))(this);
		}

		::System::Void _OnShowBossInfoBar(::RPG::Client::ShowBossInfoParam* config)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::ShowBossInfoParam*))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLEGAMEPAGECONTEXT__ONSHOWBOSSINFOBAR_OFFSET))(this, config);
		}

		::System::Void _OnCreatePlayerTeamFinish(::System::Object* arg)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLEGAMEPAGECONTEXT__ONCREATEPLAYERTEAMFINISH_OFFSET))(this, arg);
		}

		::System::Void _OnRefreshBattleAvatarPanel()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLEGAMEPAGECONTEXT__ONREFRESHBATTLEAVATARPANEL_OFFSET))(this);
		}

		::System::Void _OnCharacterCreate(::RPG::GameCore::LevelCharacterCreate* evt)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::LevelCharacterCreate*))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLEGAMEPAGECONTEXT__ONCHARACTERCREATE_OFFSET))(this, evt);
		}

		::System::Void _OnCharacterStageStateChange(::RPG::GameCore::LevelEntityStageStateChange* evt)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::LevelEntityStageStateChange*))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLEGAMEPAGECONTEXT__ONCHARACTERSTAGESTATECHANGE_OFFSET))(this, evt);
		}

		::System::Void _OnBattleOnAbilityDying(::RPG::GameCore::GameEntity* deadEntity)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLEGAMEPAGECONTEXT__ONBATTLEONABILITYDYING_OFFSET))(this, deadEntity);
		}

		::System::Void _OnTeamFormationListChange(::System::Object* arg)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLEGAMEPAGECONTEXT__ONTEAMFORMATIONLISTCHANGE_OFFSET))(this, arg);
		}

		::System::Void _OnBattleGamePageExit(::System::Object* arg)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLEGAMEPAGECONTEXT__ONBATTLEGAMEPAGEEXIT_OFFSET))(this, arg);
		}

		::System::Void _OnBattleGamePageSilentExit(::System::Object* arg)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLEGAMEPAGECONTEXT__ONBATTLEGAMEPAGESILENTEXIT_OFFSET))(this, arg);
		}

		::System::Void _OnBattleGamePageInitBeforeLevelSetup(::System::Object* arg)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLEGAMEPAGECONTEXT__ONBATTLEGAMEPAGEINITBEFORELEVELSETUP_OFFSET))(this, arg);
		}

		::System::Void _OnBattleGamePageInitAfterLevelSetup(::System::Object* arg)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLEGAMEPAGECONTEXT__ONBATTLEGAMEPAGEINITAFTERLEVELSETUP_OFFSET))(this, arg);
		}

		::System::Void _OnBattleGamePageShowWhiteboxContent(::System::Object* arg)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLEGAMEPAGECONTEXT__ONBATTLEGAMEPAGESHOWWHITEBOXCONTENT_OFFSET))(this, arg);
		}

		::System::Void _OnUIBattleAnyKeyDownNtf(::System::Object* arg)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLEGAMEPAGECONTEXT__ONUIBATTLEANYKEYDOWNNTF_OFFSET))(this, arg);
		}

		::System::Void _OnUIBonusEffect(::RPG::GameCore::ShowBonusUIEffect* effectData)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::ShowBonusUIEffect*))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLEGAMEPAGECONTEXT__ONUIBONUSEFFECT_OFFSET))(this, effectData);
		}

		::System::Void _OnBattleGamePhaseLeave(::System::Object* arg)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLEGAMEPAGECONTEXT__ONBATTLEGAMEPHASELEAVE_OFFSET))(this, arg);
		}

		::System::Void _OnBattleTimeLineSkillShowUI(::System::Object* arg)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLEGAMEPAGECONTEXT__ONBATTLETIMELINESKILLSHOWUI_OFFSET))(this, arg);
		}

		::System::Void _OnBattleTimeLineSkillCloseUI(::System::Object* arg)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLEGAMEPAGECONTEXT__ONBATTLETIMELINESKILLCLOSEUI_OFFSET))(this, arg);
		}

		::System::Void _OnBattleTriggerOneMore(::System::Object* arg)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLEGAMEPAGECONTEXT__ONBATTLETRIGGERONEMORE_OFFSET))(this, arg);
		}

		::System::Void _OnBattleShowBattleStartDialog(::System::Object* arg)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLEGAMEPAGECONTEXT__ONBATTLESHOWBATTLESTARTDIALOG_OFFSET))(this, arg);
		}

		::System::Void _OnBattleShowBattleBrokenDialog(::System::Object* arg)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLEGAMEPAGECONTEXT__ONBATTLESHOWBATTLEBROKENDIALOG_OFFSET))(this, arg);
		}

		::System::Void _OnBattleShowNextWaveDialog(::System::Object* arg)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLEGAMEPAGECONTEXT__ONBATTLESHOWNEXTWAVEDIALOG_OFFSET))(this, arg);
		}

		::System::Void _OnBtnScreenMask(::System::Object* param)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLEGAMEPAGECONTEXT__ONBTNSCREENMASK_OFFSET))(this, param);
		}

		::System::Void _OnBattleUltraTriggerButtonStateChange(::System::Object* arg)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLEGAMEPAGECONTEXT__ONBATTLEULTRATRIGGERBUTTONSTATECHANGE_OFFSET))(this, arg);
		}

		::System::Void _OnLockBattleOperation(::System::Object* arg)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLEGAMEPAGECONTEXT__ONLOCKBATTLEOPERATION_OFFSET))(this, arg);
		}

		::System::Void _OnSetupFullScreenBlock(::System::Object* arg)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLEGAMEPAGECONTEXT__ONSETUPFULLSCREENBLOCK_OFFSET))(this, arg);
		}

		::System::Void _OnPlayRoleTrialZoomInFadeOut(::System::Object* arg)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLEGAMEPAGECONTEXT__ONPLAYROLETRIALZOOMINFADEOUT_OFFSET))(this, arg);
		}

		::System::Boolean _CheckNeedPauseByUltraTrigger()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLEGAMEPAGECONTEXT__CHECKNEEDPAUSEBYULTRATRIGGER_OFFSET))(this);
		}

		::System::Boolean _CheckNeedPauseByTimeLineDetailInfoPanel()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLEGAMEPAGECONTEXT__CHECKNEEDPAUSEBYTIMELINEDETAILINFOPANEL_OFFSET))(this);
		}

		::System::Void _ResetUIState()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLEGAMEPAGECONTEXT__RESETUISTATE_OFFSET))(this);
		}

		::System::Void _SetPauseByUltraSkillTrigger(::System::Boolean pause)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLEGAMEPAGECONTEXT__SETPAUSEBYULTRASKILLTRIGGER_OFFSET))(this, pause);
		}

		::System::Void _OnBattleOpenTimeLineDetailInfoPanel(::Class_1_02D30900317D93FD* itemData)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_02D30900317D93FD*))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLEGAMEPAGECONTEXT__ONBATTLEOPENTIMELINEDETAILINFOPANEL_OFFSET))(this, itemData);
		}

		::System::Void _OnBattleCloseTimeLineDetailInfoPanel()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLEGAMEPAGECONTEXT__ONBATTLECLOSETIMELINEDETAILINFOPANEL_OFFSET))(this);
		}

		::System::Void _TickDelayInteraction()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLEGAMEPAGECONTEXT__TICKDELAYINTERACTION_OFFSET))(this);
		}

		::System::Void _TickTimeLineDisableInteraction()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLEGAMEPAGECONTEXT__TICKTIMELINEDISABLEINTERACTION_OFFSET))(this);
		}

		::System::Void _InitBeforeLevelSetup(::RPG::GameCore::BattleInstance* pBattleInstance)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::BattleInstance*))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLEGAMEPAGECONTEXT__INITBEFORELEVELSETUP_OFFSET))(this, pBattleInstance);
		}

		::System::Void _InitAfterLevelSetup()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLEGAMEPAGECONTEXT__INITAFTERLEVELSETUP_OFFSET))(this);
		}

		::System::Void _SetupLightTeamMember()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLEGAMEPAGECONTEXT__SETUPLIGHTTEAMMEMBER_OFFSET))(this);
		}

		::System::Void _SetupLightTeamUI()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLEGAMEPAGECONTEXT__SETUPLIGHTTEAMUI_OFFSET))(this);
		}

		::System::Void _SetupTrialObjetive()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLEGAMEPAGECONTEXT__SETUPTRIALOBJETIVE_OFFSET))(this);
		}

		::System::Void _SetLightEntities()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLEGAMEPAGECONTEXT__SETLIGHTENTITIES_OFFSET))(this);
		}

		::System::Boolean _CanEntityShowAvatarPanel(::RPG::GameCore::GameEntity* entity, ::RPG::GameCore::GameEntityList* entities)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::RPG::GameCore::GameEntityList*))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLEGAMEPAGECONTEXT__CANENTITYSHOWAVATARPANEL_OFFSET))(this, entity, entities);
		}

		::System::Void _ToggleAvatarPanel()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLEGAMEPAGECONTEXT__TOGGLEAVATARPANEL_OFFSET))(this);
		}

		::System::Void _ToggleAvatarPanelBlackMask()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLEGAMEPAGECONTEXT__TOGGLEAVATARPANELBLACKMASK_OFFSET))(this);
		}

		::System::Void _PlayAllUIFadeAnim(::System::Boolean fadeIn)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLEGAMEPAGECONTEXT__PLAYALLUIFADEANIM_OFFSET))(this, fadeIn);
		}

		::System::Void _PlayAvatarPanelFadeAnim(::System::Boolean fadeIn)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLEGAMEPAGECONTEXT__PLAYAVATARPANELFADEANIM_OFFSET))(this, fadeIn);
		}

		::System::Void _SetVignette(::System::Boolean fadein)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLEGAMEPAGECONTEXT__SETVIGNETTE_OFFSET))(this, fadein);
		}

		::System::Void _PlayUltraFade(::System::Boolean fadeIn)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLEGAMEPAGECONTEXT__PLAYULTRAFADE_OFFSET))(this, fadeIn);
		}

		::System::Void _ShowBeginBattleBlock(::System::Boolean isShow)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLEGAMEPAGECONTEXT__SHOWBEGINBATTLEBLOCK_OFFSET))(this, isShow);
		}

		::System::Void _SetupReplayMode()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLEGAMEPAGECONTEXT__SETUPREPLAYMODE_OFFSET))(this);
		}

		::Class_2_2B7BD8F617A0307D* get_SkillPanel()
		{
			return ((::Class_2_2B7BD8F617A0307D*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLEGAMEPAGECONTEXT_GET_SKILLPANEL_OFFSET))(this);
		}

		::Class_2_C18BF69A8AD47CB4* get_ActionBarPanel()
		{
			return ((::Class_2_C18BF69A8AD47CB4*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLEGAMEPAGECONTEXT_GET_ACTIONBARPANEL_OFFSET))(this);
		}

		::Class_2_D21179058EF3134D* get_PCShortCutPanel()
		{
			return ((::Class_2_D21179058EF3134D*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLEGAMEPAGECONTEXT_GET_PCSHORTCUTPANEL_OFFSET))(this);
		}

		::System::Boolean get_IsUltraTriggerPressed()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLEGAMEPAGECONTEXT_GET_ISULTRATRIGGERPRESSED_OFFSET))(this);
		}

		::System::Boolean get__IsInDelayInteraction()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLEGAMEPAGECONTEXT_GET__ISINDELAYINTERACTION_OFFSET))(this);
		}

		::System::Boolean get__IsInTimeLineDisableInteraction()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLEGAMEPAGECONTEXT_GET__ISINTIMELINEDISABLEINTERACTION_OFFSET))(this);
		}

		::System::Void _OnCharacterCreate_Wrap(::System::Object* arg)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLEGAMEPAGECONTEXT__ONCHARACTERCREATE_WRAP_OFFSET))(this, arg);
		}

		::System::Void _OnCharacterStageStateChange_Wrap(::System::Object* arg)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLEGAMEPAGECONTEXT__ONCHARACTERSTAGESTATECHANGE_WRAP_OFFSET))(this, arg);
		}

		::System::Void _OnMazeToBattleTransitFadeOutEnd_Wrap(::System::Object* _)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLEGAMEPAGECONTEXT__ONMAZETOBATTLETRANSITFADEOUTEND_WRAP_OFFSET))(this, _);
		}

		::System::Void _OnShowBossInfoBar_Wrap(::System::Object* arg)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLEGAMEPAGECONTEXT__ONSHOWBOSSINFOBAR_WRAP_OFFSET))(this, arg);
		}

		::System::Void _OnRefreshBattleAvatarPanel_Wrap(::System::Object* _)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLEGAMEPAGECONTEXT__ONREFRESHBATTLEAVATARPANEL_WRAP_OFFSET))(this, _);
		}

		::System::Void _OnBattleOnAbilityDying_Wrap(::System::Object* arg)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLEGAMEPAGECONTEXT__ONBATTLEONABILITYDYING_WRAP_OFFSET))(this, arg);
		}

		::System::Void _OnUIBonusEffect_Wrap(::System::Object* arg)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLEGAMEPAGECONTEXT__ONUIBONUSEFFECT_WRAP_OFFSET))(this, arg);
		}

		::System::Void _OnBattleOpenTimeLineDetailInfoPanel_Wrap(::System::Object* arg)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLEGAMEPAGECONTEXT__ONBATTLEOPENTIMELINEDETAILINFOPANEL_WRAP_OFFSET))(this, arg);
		}

		::System::Void _OnBattleCloseTimeLineDetailInfoPanel_Wrap(::System::Object* _)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLEGAMEPAGECONTEXT__ONBATTLECLOSETIMELINEDETAILINFOPANEL_WRAP_OFFSET))(this, _);
		}

		::System::Void AutoBindCallback()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLEGAMEPAGECONTEXT_AUTOBINDCALLBACK_OFFSET))(this);
		}

		::System::Void AutoRemoveCallback()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLEGAMEPAGECONTEXT_AUTOREMOVECALLBACK_OFFSET))(this);
		}

		::System::Void __OnLevelGameModeStateChangedEvent_b__21_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLEGAMEPAGECONTEXT___ONLEVELGAMEMODESTATECHANGEDEVENT_B__21_0_OFFSET))(this);
		}

		::System::String* __iFixBaseProxy_ViewPrefabPath()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLEGAMEPAGECONTEXT___IFIXBASEPROXY_VIEWPREFABPATH_OFFSET))(this);
		}

		::System::Void __iFixBaseProxy__CustomBindView()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLEGAMEPAGECONTEXT___IFIXBASEPROXY__CUSTOMBINDVIEW_OFFSET))(this);
		}

		::System::Void __iFixBaseProxy__AddHandlers()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLEGAMEPAGECONTEXT___IFIXBASEPROXY__ADDHANDLERS_OFFSET))(this);
		}

		::System::Void __iFixBaseProxy__SetupView()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLEGAMEPAGECONTEXT___IFIXBASEPROXY__SETUPVIEW_OFFSET))(this);
		}

		::System::Void __iFixBaseProxy__UnBindView()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLEGAMEPAGECONTEXT___IFIXBASEPROXY__UNBINDVIEW_OFFSET))(this);
		}

		::System::Void __iFixBaseProxy__OnActiveChange(::System::Boolean P0)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLEGAMEPAGECONTEXT___IFIXBASEPROXY__ONACTIVECHANGE_OFFSET))(this, P0);
		}

		::System::Void __iFixBaseProxy__OnTick(::System::Single P0)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLEGAMEPAGECONTEXT___IFIXBASEPROXY__ONTICK_OFFSET))(this, P0);
		}

		::System::Void __iFixBaseProxy_OnReturnToTop()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLEGAMEPAGECONTEXT___IFIXBASEPROXY_ONRETURNTOTOP_OFFSET))(this);
		}

		::System::Void __iFixBaseProxy_OnGotFocus()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLEGAMEPAGECONTEXT___IFIXBASEPROXY_ONGOTFOCUS_OFFSET))(this);
		}

		::System::Void __iFixBaseProxy_OnLostFocus()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLEGAMEPAGECONTEXT___IFIXBASEPROXY_ONLOSTFOCUS_OFFSET))(this);
		}

		::System::Void __iFixBaseProxy_AutoBindCallback()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLEGAMEPAGECONTEXT___IFIXBASEPROXY_AUTOBINDCALLBACK_OFFSET))(this);
		}

		::System::Void __iFixBaseProxy_AutoRemoveCallback()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLEGAMEPAGECONTEXT___IFIXBASEPROXY_AUTOREMOVECALLBACK_OFFSET))(this);
		}
	};
}

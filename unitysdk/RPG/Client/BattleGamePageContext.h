#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/UIController.h"
#include "unitysdk/RPG/GameCore/BattleUIPanelType.h"
#include "unitysdk/Struct_2_6E6428D512391F71.h"

class Class_0_16E4307DCC419505_382;
class Class_1_CA217ABF4E3B4F3F;
class Class_1_CF11EFE40187AFC2;
class Class_1_DDDB57AA67C3A9EA;
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
class Class_2_9885B9F5AA089289;
class Class_2_B4DB9A5A774AA67E;
class Class_2_BEC921A59CE42D4E;
class Class_2_BEE584E046532101;
class Class_2_CB2DDEA2A18986B6;
class Class_2_CFEDE77CE6B2789D;
class Class_2_D21179058EF3134D;
class Class_2_D6B8E187309362A3;
class Class_2_D8A9B7E75FE2A68B_1;
class Class_2_D9812445A4D54117;
class Class_2_E893C2FAB3F7DDEB;
class Class_2_F5B29424F69AFD27;
namespace RPG::Client { class ShowBossInfoParam; }
namespace RPG::Client { class UIMeta; }
namespace RPG::GameCore { class BattleInstance; }
namespace RPG::GameCore { class EntityManager; }
namespace RPG::GameCore { class GameEntity; }
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

#define RPG_CLIENT_BATTLEGAMEPAGECONTEXT_AUTOBINDCALLBACK_OFFSET UNITYSDK_OFFSET(0x9E07920)
#define RPG_CLIENT_BATTLEGAMEPAGECONTEXT_AUTOREMOVECALLBACK_OFFSET UNITYSDK_OFFSET(0x9E07D70)
#define RPG_CLIENT_BATTLEGAMEPAGECONTEXT_GET_ACTIONBARPANEL_OFFSET UNITYSDK_OFFSET(0x9E07240)
#define RPG_CLIENT_BATTLEGAMEPAGECONTEXT_GET_BATTLESHOWUIPAGEMANAGER_OFFSET UNITYSDK_OFFSET(0x9E01CE0)
#define RPG_CLIENT_BATTLEGAMEPAGECONTEXT_GET_ISULTRATRIGGERPRESSED_OFFSET UNITYSDK_OFFSET(0x9E07260)
#define RPG_CLIENT_BATTLEGAMEPAGECONTEXT_GET_NAVIGATIONZONEMANAGER_OFFSET UNITYSDK_OFFSET(0x9E01CF0)
#define RPG_CLIENT_BATTLEGAMEPAGECONTEXT_GET_PCSHORTCUTPANEL_OFFSET UNITYSDK_OFFSET(0x9E07250)
#define RPG_CLIENT_BATTLEGAMEPAGECONTEXT_GET_SKILLPANEL_OFFSET UNITYSDK_OFFSET(0x9E07230)
#define RPG_CLIENT_BATTLEGAMEPAGECONTEXT_GET__ISINDELAYINTERACTION_OFFSET UNITYSDK_OFFSET(0x9E053D0)
#define RPG_CLIENT_BATTLEGAMEPAGECONTEXT_GET__ISINTIMELINEDISABLEINTERACTION_OFFSET UNITYSDK_OFFSET(0x9E053F0)
#define RPG_CLIENT_BATTLEGAMEPAGECONTEXT_MANUALBINDPANEL_OFFSET UNITYSDK_OFFSET(0x9E01C70)
#define RPG_CLIENT_BATTLEGAMEPAGECONTEXT_ONGOTFOCUS_OFFSET UNITYSDK_OFFSET(0x9E03A30)
#define RPG_CLIENT_BATTLEGAMEPAGECONTEXT_ONLOSTFOCUS_OFFSET UNITYSDK_OFFSET(0x9E03A90)
#define RPG_CLIENT_BATTLEGAMEPAGECONTEXT_ONRETURNTOTOP_OFFSET UNITYSDK_OFFSET(0x9E039D0)
#define RPG_CLIENT_BATTLEGAMEPAGECONTEXT_REVERTBATTLEPANELACTIVEREASON_OFFSET UNITYSDK_OFFSET(0x9E01A20)
#define RPG_CLIENT_BATTLEGAMEPAGECONTEXT_SETBATTLEPANELLIGHTWEIGHTACTIVE_OFFSET UNITYSDK_OFFSET(0x9E019A0)
#define RPG_CLIENT_BATTLEGAMEPAGECONTEXT_SETBOSSINFOPANEL_OFFSET UNITYSDK_OFFSET(0x9E01B90)
#define RPG_CLIENT_BATTLEGAMEPAGECONTEXT_SETTIMELINEDISABLEINTERACTIONTIME_OFFSET UNITYSDK_OFFSET(0x9E01A80)
#define RPG_CLIENT_BATTLEGAMEPAGECONTEXT_VIEWPREFABPATH_OFFSET UNITYSDK_OFFSET(0x9E01950)
#define RPG_CLIENT_BATTLEGAMEPAGECONTEXT__ADDHANDLERS_OFFSET UNITYSDK_OFFSET(0x9E02640)
#define RPG_CLIENT_BATTLEGAMEPAGECONTEXT__CALCULATEHUDVIEWRECT_OFFSET UNITYSDK_OFFSET(0x9E02EE0)
#define RPG_CLIENT_BATTLEGAMEPAGECONTEXT__CHECKNEEDPAUSEBYTIMELINEDETAILINFOPANEL_OFFSET UNITYSDK_OFFSET(0x9E06350)
#define RPG_CLIENT_BATTLEGAMEPAGECONTEXT__CHECKNEEDPAUSEBYULTRATRIGGER_OFFSET UNITYSDK_OFFSET(0x9E03870)
#define RPG_CLIENT_BATTLEGAMEPAGECONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0x9E016A0)
#define RPG_CLIENT_BATTLEGAMEPAGECONTEXT__CUSTOMBINDVIEW_OFFSET UNITYSDK_OFFSET(0x9E01D00)
#define RPG_CLIENT_BATTLEGAMEPAGECONTEXT__INITAFTERLEVELSETUP_OFFSET UNITYSDK_OFFSET(0x9E04D80)
#define RPG_CLIENT_BATTLEGAMEPAGECONTEXT__INITBEFORELEVELSETUP_OFFSET UNITYSDK_OFFSET(0x9E049F0)
#define RPG_CLIENT_BATTLEGAMEPAGECONTEXT__ONACTIVECHANGE_OFFSET UNITYSDK_OFFSET(0x9E03390)
#define RPG_CLIENT_BATTLEGAMEPAGECONTEXT__ONBATTLECLOSETIMELINEDETAILINFOPANEL_OFFSET UNITYSDK_OFFSET(0x9E06850)
#define RPG_CLIENT_BATTLEGAMEPAGECONTEXT__ONBATTLECLOSETIMELINEDETAILINFOPANEL_WRAP_OFFSET UNITYSDK_OFFSET(0x9E078C0)
#define RPG_CLIENT_BATTLEGAMEPAGECONTEXT__ONBATTLEGAMEPAGEEXIT_OFFSET UNITYSDK_OFFSET(0x9E047A0)
#define RPG_CLIENT_BATTLEGAMEPAGECONTEXT__ONBATTLEGAMEPAGEINITAFTERLEVELSETUP_OFFSET UNITYSDK_OFFSET(0x9E04D00)
#define RPG_CLIENT_BATTLEGAMEPAGECONTEXT__ONBATTLEGAMEPAGEINITBEFORELEVELSETUP_OFFSET UNITYSDK_OFFSET(0x9E04970)
#define RPG_CLIENT_BATTLEGAMEPAGECONTEXT__ONBATTLEGAMEPAGESHOWWHITEBOXCONTENT_OFFSET UNITYSDK_OFFSET(0x9E04DD0)
#define RPG_CLIENT_BATTLEGAMEPAGECONTEXT__ONBATTLEGAMEPAGESILENTEXIT_OFFSET UNITYSDK_OFFSET(0x9E04820)
#define RPG_CLIENT_BATTLEGAMEPAGECONTEXT__ONBATTLEGAMEPHASELEAVE_OFFSET UNITYSDK_OFFSET(0x9E05670)
#define RPG_CLIENT_BATTLEGAMEPAGECONTEXT__ONBATTLEONABILITYDYING_OFFSET UNITYSDK_OFFSET(0x9E04620)
#define RPG_CLIENT_BATTLEGAMEPAGECONTEXT__ONBATTLEONABILITYDYING_WRAP_OFFSET UNITYSDK_OFFSET(0x9E076C0)
#define RPG_CLIENT_BATTLEGAMEPAGECONTEXT__ONBATTLEOPENTIMELINEDETAILINFOPANEL_OFFSET UNITYSDK_OFFSET(0x9E06410)
#define RPG_CLIENT_BATTLEGAMEPAGECONTEXT__ONBATTLEOPENTIMELINEDETAILINFOPANEL_WRAP_OFFSET UNITYSDK_OFFSET(0x9E07820)
#define RPG_CLIENT_BATTLEGAMEPAGECONTEXT__ONBATTLESHOWBATTLEBROKENDIALOG_OFFSET UNITYSDK_OFFSET(0x9E059C0)
#define RPG_CLIENT_BATTLEGAMEPAGECONTEXT__ONBATTLESHOWBATTLESTARTDIALOG_OFFSET UNITYSDK_OFFSET(0x9E05960)
#define RPG_CLIENT_BATTLEGAMEPAGECONTEXT__ONBATTLESHOWNEXTWAVEDIALOG_OFFSET UNITYSDK_OFFSET(0x9E05A40)
#define RPG_CLIENT_BATTLEGAMEPAGECONTEXT__ONBATTLETIMELINESKILLCLOSEUI_OFFSET UNITYSDK_OFFSET(0x9E05810)
#define RPG_CLIENT_BATTLEGAMEPAGECONTEXT__ONBATTLETIMELINESKILLSHOWUI_OFFSET UNITYSDK_OFFSET(0x9E057A0)
#define RPG_CLIENT_BATTLEGAMEPAGECONTEXT__ONBATTLETRIGGERONEMORE_OFFSET UNITYSDK_OFFSET(0x9E05900)
#define RPG_CLIENT_BATTLEGAMEPAGECONTEXT__ONBATTLEULTRATRIGGERBUTTONSTATECHANGE_OFFSET UNITYSDK_OFFSET(0x9E05B20)
#define RPG_CLIENT_BATTLEGAMEPAGECONTEXT__ONBTNSCREENMASK_OFFSET UNITYSDK_OFFSET(0x9E05AA0)
#define RPG_CLIENT_BATTLEGAMEPAGECONTEXT__ONCHARACTERCREATE_OFFSET UNITYSDK_OFFSET(0x9E04520)
#define RPG_CLIENT_BATTLEGAMEPAGECONTEXT__ONCHARACTERCREATE_WRAP_OFFSET UNITYSDK_OFFSET(0x9E07270)
#define RPG_CLIENT_BATTLEGAMEPAGECONTEXT__ONCHARACTERSTAGESTATECHANGE_OFFSET UNITYSDK_OFFSET(0x9E045A0)
#define RPG_CLIENT_BATTLEGAMEPAGECONTEXT__ONCHARACTERSTAGESTATECHANGE_WRAP_OFFSET UNITYSDK_OFFSET(0x9E07350)
#define RPG_CLIENT_BATTLEGAMEPAGECONTEXT__ONCREATEPLAYERTEAMFINISH_OFFSET UNITYSDK_OFFSET(0x9E04480)
#define RPG_CLIENT_BATTLEGAMEPAGECONTEXT__ONLEVELGAMEMODESTATECHANGEDEVENT_OFFSET UNITYSDK_OFFSET(0x9E03BC0)
#define RPG_CLIENT_BATTLEGAMEPAGECONTEXT__ONLOCKBATTLEOPERATION_OFFSET UNITYSDK_OFFSET(0x9E05EE0)
#define RPG_CLIENT_BATTLEGAMEPAGECONTEXT__ONMAZETOBATTLETRANSITFADEOUTEND_OFFSET UNITYSDK_OFFSET(0x9E03AE0)
#define RPG_CLIENT_BATTLEGAMEPAGECONTEXT__ONMAZETOBATTLETRANSITFADEOUTEND_WRAP_OFFSET UNITYSDK_OFFSET(0x9E07430)
#define RPG_CLIENT_BATTLEGAMEPAGECONTEXT__ONPLAYROLETRIALZOOMINFADEOUT_OFFSET UNITYSDK_OFFSET(0x9E061A0)
#define RPG_CLIENT_BATTLEGAMEPAGECONTEXT__ONREFRESHBATTLEAVATARPANEL_OFFSET UNITYSDK_OFFSET(0x9E044D0)
#define RPG_CLIENT_BATTLEGAMEPAGECONTEXT__ONREFRESHBATTLEAVATARPANEL_WRAP_OFFSET UNITYSDK_OFFSET(0x9E07630)
#define RPG_CLIENT_BATTLEGAMEPAGECONTEXT__ONSETUPFULLSCREENBLOCK_OFFSET UNITYSDK_OFFSET(0x9E06030)
#define RPG_CLIENT_BATTLEGAMEPAGECONTEXT__ONSHOWBOSSINFOBAR_OFFSET UNITYSDK_OFFSET(0x9E043A0)
#define RPG_CLIENT_BATTLEGAMEPAGECONTEXT__ONSHOWBOSSINFOBAR_WRAP_OFFSET UNITYSDK_OFFSET(0x9E07580)
#define RPG_CLIENT_BATTLEGAMEPAGECONTEXT__ONTEAMFORMATIONLISTCHANGE_OFFSET UNITYSDK_OFFSET(0x9E04700)
#define RPG_CLIENT_BATTLEGAMEPAGECONTEXT__ONTICK_OFFSET UNITYSDK_OFFSET(0x9E03410)
#define RPG_CLIENT_BATTLEGAMEPAGECONTEXT__ONUIBATTLEANYKEYDOWNNTF_OFFSET UNITYSDK_OFFSET(0x9E05340)
#define RPG_CLIENT_BATTLEGAMEPAGECONTEXT__ONUIBONUSEFFECT_OFFSET UNITYSDK_OFFSET(0x9E05590)
#define RPG_CLIENT_BATTLEGAMEPAGECONTEXT__ONUIBONUSEFFECT_WRAP_OFFSET UNITYSDK_OFFSET(0x9E07780)
#define RPG_CLIENT_BATTLEGAMEPAGECONTEXT__PLAYALLUIFADEANIM_OFFSET UNITYSDK_OFFSET(0x9E04080)
#define RPG_CLIENT_BATTLEGAMEPAGECONTEXT__PLAYAVATARPANELFADEANIM_OFFSET UNITYSDK_OFFSET(0x9E06EA0)
#define RPG_CLIENT_BATTLEGAMEPAGECONTEXT__PLAYULTRAFADE_OFFSET UNITYSDK_OFFSET(0x9E05D60)
#define RPG_CLIENT_BATTLEGAMEPAGECONTEXT__RESETUISTATE_OFFSET UNITYSDK_OFFSET(0x9E02C50)
#define RPG_CLIENT_BATTLEGAMEPAGECONTEXT__SETACTIVEBYPOSITION_OFFSET UNITYSDK_OFFSET(0x9E04290)
#define RPG_CLIENT_BATTLEGAMEPAGECONTEXT__SETLIGHTENTITIES_OFFSET UNITYSDK_OFFSET(0x9E06E30)
#define RPG_CLIENT_BATTLEGAMEPAGECONTEXT__SETPAUSEBYULTRASKILLTRIGGER_OFFSET UNITYSDK_OFFSET(0x9E031C0)
#define RPG_CLIENT_BATTLEGAMEPAGECONTEXT__SETUPACTIONBARSAFEZONE_OFFSET UNITYSDK_OFFSET(0x9E03030)
#define RPG_CLIENT_BATTLEGAMEPAGECONTEXT__SETUPLIGHTTEAMMEMBER_OFFSET UNITYSDK_OFFSET(0x9E03780)
#define RPG_CLIENT_BATTLEGAMEPAGECONTEXT__SETUPLIGHTTEAMUI_OFFSET UNITYSDK_OFFSET(0x9E06B40)
#define RPG_CLIENT_BATTLEGAMEPAGECONTEXT__SETUPREPLAYMODE_OFFSET UNITYSDK_OFFSET(0x9E03ED0)
#define RPG_CLIENT_BATTLEGAMEPAGECONTEXT__SETUPTRIALOBJETIVE_OFFSET UNITYSDK_OFFSET(0x9E06C70)
#define RPG_CLIENT_BATTLEGAMEPAGECONTEXT__SETUPVIEW_OFFSET UNITYSDK_OFFSET(0x9E02BA0)
#define RPG_CLIENT_BATTLEGAMEPAGECONTEXT__SETVIGNETTE_OFFSET UNITYSDK_OFFSET(0x9E03DB0)
#define RPG_CLIENT_BATTLEGAMEPAGECONTEXT__SHOWBEGINBATTLEBLOCK_OFFSET UNITYSDK_OFFSET(0x9E02CE0)
#define RPG_CLIENT_BATTLEGAMEPAGECONTEXT__TICKDELAYINTERACTION_OFFSET UNITYSDK_OFFSET(0x9E036A0)
#define RPG_CLIENT_BATTLEGAMEPAGECONTEXT__TICKTIMELINEDISABLEINTERACTION_OFFSET UNITYSDK_OFFSET(0x9E03710)
#define RPG_CLIENT_BATTLEGAMEPAGECONTEXT__TOGGLEAVATARPANELBLACKMASK_OFFSET UNITYSDK_OFFSET(0x9E063A0)
#define RPG_CLIENT_BATTLEGAMEPAGECONTEXT__TOGGLEAVATARPANEL_OFFSET UNITYSDK_OFFSET(0x9E05410)
#define RPG_CLIENT_BATTLEGAMEPAGECONTEXT__UNBINDVIEW_OFFSET UNITYSDK_OFFSET(0x9E030A0)
#define RPG_CLIENT_BATTLEGAMEPAGECONTEXT___IFIXBASEPROXY_AUTOBINDCALLBACK_OFFSET UNITYSDK_OFFSET(0x9E08440)
#define RPG_CLIENT_BATTLEGAMEPAGECONTEXT___IFIXBASEPROXY_AUTOREMOVECALLBACK_OFFSET UNITYSDK_OFFSET(0x9E084A0)
#define RPG_CLIENT_BATTLEGAMEPAGECONTEXT___IFIXBASEPROXY_ONGOTFOCUS_OFFSET UNITYSDK_OFFSET(0x9E08420)
#define RPG_CLIENT_BATTLEGAMEPAGECONTEXT___IFIXBASEPROXY_ONLOSTFOCUS_OFFSET UNITYSDK_OFFSET(0x9E08430)
#define RPG_CLIENT_BATTLEGAMEPAGECONTEXT___IFIXBASEPROXY_ONRETURNTOTOP_OFFSET UNITYSDK_OFFSET(0x9E08410)
#define RPG_CLIENT_BATTLEGAMEPAGECONTEXT___IFIXBASEPROXY_VIEWPREFABPATH_OFFSET UNITYSDK_OFFSET(0x9E08130)
#define RPG_CLIENT_BATTLEGAMEPAGECONTEXT___IFIXBASEPROXY__ADDHANDLERS_OFFSET UNITYSDK_OFFSET(0x9E08210)
#define RPG_CLIENT_BATTLEGAMEPAGECONTEXT___IFIXBASEPROXY__CUSTOMBINDVIEW_OFFSET UNITYSDK_OFFSET(0x9E081B0)
#define RPG_CLIENT_BATTLEGAMEPAGECONTEXT___IFIXBASEPROXY__ONACTIVECHANGE_OFFSET UNITYSDK_OFFSET(0x9E08330)
#define RPG_CLIENT_BATTLEGAMEPAGECONTEXT___IFIXBASEPROXY__ONTICK_OFFSET UNITYSDK_OFFSET(0x9E083A0)
#define RPG_CLIENT_BATTLEGAMEPAGECONTEXT___IFIXBASEPROXY__SETUPVIEW_OFFSET UNITYSDK_OFFSET(0x9E08270)
#define RPG_CLIENT_BATTLEGAMEPAGECONTEXT___IFIXBASEPROXY__UNBINDVIEW_OFFSET UNITYSDK_OFFSET(0x9E082D0)
#define RPG_CLIENT_BATTLEGAMEPAGECONTEXT___ONLEVELGAMEMODESTATECHANGEDEVENT_B__21_0_OFFSET UNITYSDK_OFFSET(0x9E08120)

namespace RPG::Client
{
	inline static constexpr unsigned int BattleGamePageContext_TypeDefinitionIndex = 66043;

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
		::Class_2_BEE584E046532101* _BattleRightInfoPanel; // 0x180
		::UnityEngine::RectTransform* _ActionBarSafeZone; // 0x188
		::Class_2_42EA9C9474E11A06* _RightDownPointPanel; // 0x190
		::UnityEngine::Animation* _RootAnim; // 0x198
		::Class_2_D8A9B7E75FE2A68B_1* _BattleBPTopPanel; // 0x1A0
		::Class_2_CFEDE77CE6B2789D* _BattleFunctionBarPanel; // 0x1A8
		::RPG::GameCore::LevelUIComponent* _LevelUICmpt; // 0x1B0
		::Class_2_B4DB9A5A774AA67E* _BattleEventButtonSpecialPanel; // 0x1B8
		::UnityEngine::Transform* _AvatarPanelBlackMask; // 0x1C0
		::UnityEngine::Transform* _WhiteboxWidget; // 0x1C8
		::UnityEngine::Transform* _ActionBarMask; // 0x1D0
		::Il2CppArray<::System::String*>* _ReplayModeWhiteList; // 0x1D8
		::Class_2_5EC7E6F4AADA2E6D* _BattleScreenEffectPanelContainer; // 0x1E0
		::Class_2_0CDD7D7511940409* _BattleBottomInfoPanel; // 0x1E8
		::Class_2_F5B29424F69AFD27* _BattleTopPanel; // 0x1F0
		::RPG::GameCore::BattleInstance* _BattleInstanceRef; // 0x1F8
		::RPG::Client::UIMeta* _UIMeta; // 0x200
		::Class_2_BEC921A59CE42D4E* _BossInfoPanel; // 0x208
		::Class_2_2B7BD8F617A0307D* _SkillPanel; // 0x210
		::Class_2_61CF05950692DE56* _TeamInfoPanel; // 0x218
		::Il2CppArray<::System::String*>* _UltraTriggerWhiteList; // 0x220
		::RPG::GameCore::EntityManager* _EntityManager; // 0x228
		::Class_2_E893C2FAB3F7DDEB* _BattleToastPanel; // 0x230
		::Class_2_D9812445A4D54117* _TurnHintPanel; // 0x238
		::Class_2_2BF8F9B72A775F6A* _BattleShowUIPageManager; // 0x240
		::Class_1_CF11EFE40187AFC2* _BattleGamePanelsActiveManager; // 0x248
		::UnityEngine::Transform* _TeamRoot; // 0x250
		::UnityEngine::RectTransform* _HudSafeZone; // 0x258
		::Class_2_098DE510031D8543* _BattleTeamDetailButtonPanel; // 0x260
		::System::Collections::Generic::List_1<::System::String*>* _WhiteboxImgPaths; // 0x268
		::Class_2_9885B9F5AA089289* _ActionBarPanel; // 0x270
		::Class_2_72D254AD950863C9* _BattleRoleTrialPanel; // 0x278
		::Class_2_CB2DDEA2A18986B6* _BattleMaskPage; // 0x280
		::UnityEngine::UI::Button* _BtnScreenMask; // 0x288
		::RPG::UINavigation::UINavigationZoneManager* _UINavigationZoneManager; // 0x290
		::Class_2_7AC5CDC6676C412B* _BattleEventSkillPanel; // 0x298
		::Class_2_D6B8E187309362A3* _BattleChangeAvatarPanel; // 0x2A0
		::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>* _LightTeamEntities; // 0x2A8
		::Class_2_24222339AD802068* _Follow3dContext; // 0x2B0
		::Class_2_D21179058EF3134D* _PCShortCutPanel; // 0x2B8
		::System::UInt64 _VignetteChangeBeginTime; // 0x2C0
		::System::Int32 _IsPausedByTimeLineDetailInfoPanelTimeScaleIndex; // 0x2C8
		::System::Single _TimeLineDisableInteractionTimeStamp; // 0x2CC
		::System::Single _VignetteBegin; // 0x2D0
		::System::Boolean _VignetteFadeIn; // 0x2D4
		::System::Boolean _IsBattleTimelinePlaying; // 0x2D5
		::System::Boolean _InVignetteChange; // 0x2D6
		::System::Single _VignetteTarget; // 0x2D8
		::System::Single _DelayInteractionTimeStamp; // 0x2DC
		::System::UInt32 _BeginBattleBlockID; // 0x2E0
		::System::Boolean _IsPausedByUltraSkillTrigger; // 0x2E4
		::System::Boolean _LightTeamEntitiesDirty; // 0x2E5
		::System::Boolean _ShouldResumeBeginBattleBlock; // 0x2E6
		::System::Boolean _IsUltraTriggerPressed; // 0x2E7
		::System::Int32 _IsPausedByUltraSkillTriggerTimeScaleIndex; // 0x2E8

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

		::System::Void _OnLevelGameModeStateChangedEvent(::Class_0_16E4307DCC419505_382* e)
		{
			return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_382*))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLEGAMEPAGECONTEXT__ONLEVELGAMEMODESTATECHANGEDEVENT_OFFSET))(this, e);
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

		::System::Void _OnBattleOpenTimeLineDetailInfoPanel(::Class_1_DDDB57AA67C3A9EA* itemData)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_DDDB57AA67C3A9EA*))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLEGAMEPAGECONTEXT__ONBATTLEOPENTIMELINEDETAILINFOPANEL_OFFSET))(this, itemData);
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

		::Class_2_9885B9F5AA089289* get_ActionBarPanel()
		{
			return ((::Class_2_9885B9F5AA089289*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLEGAMEPAGECONTEXT_GET_ACTIONBARPANEL_OFFSET))(this);
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

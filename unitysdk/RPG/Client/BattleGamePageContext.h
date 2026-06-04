#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/UIController.h"
#include "unitysdk/RPG/GameCore/BattleUIPanelType.h"
#include "unitysdk/Struct_2_6E6428D512391F71.h"

class Class_0_16E4307DCC419505_401;
class Class_1_56F79B35BC444FE2;
class Class_1_CA217ABF4E3B4F3F;
class Class_1_DDDB57AA67C3A9EA;
class Class_2_1ECF8DDE3CFBB4AC;
class Class_2_24222339AD802068;
class Class_2_2B7BD8F617A0307D;
class Class_2_2BF8F9B72A775F6A;
class Class_2_2D60E65D8F22F34B;
class Class_2_5EC7E6F4AADA2E6D;
class Class_2_7C8F60EA95FA2B02;
class Class_2_7E3538A12F3E2A1D;
class Class_2_831E473E028F1284;
class Class_2_8A9B104C117716D5_1;
class Class_2_97E58BBA90464D2F;
class Class_2_9885B9F5AA089289;
class Class_2_A480E856C699B4C6;
class Class_2_B4DB9A5A774AA67E;
class Class_2_C33602C0D64FA524;
class Class_2_CB2DDEA2A18986B6;
class Class_2_CE9BE15B1FB0D645;
class Class_2_CFEDE77CE6B2789D;
class Class_2_D8A9B7E75FE2A68B_1;
class Class_2_D9812445A4D54117;
class Class_2_DD03352C45497223;
class Class_2_E3625122CE82016E;
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

#define RPG_CLIENT_BATTLEGAMEPAGECONTEXT_AUTOBINDCALLBACK_OFFSET UNITYSDK_OFFSET(0xB3DF8F0)
#define RPG_CLIENT_BATTLEGAMEPAGECONTEXT_AUTOREMOVECALLBACK_OFFSET UNITYSDK_OFFSET(0xB3DFDF0)
#define RPG_CLIENT_BATTLEGAMEPAGECONTEXT_GET_ACTIONBARPANEL_OFFSET UNITYSDK_OFFSET(0xB3DF320)
#define RPG_CLIENT_BATTLEGAMEPAGECONTEXT_GET_BATTLESHOWUIPAGEMANAGER_OFFSET UNITYSDK_OFFSET(0xB3D9800)
#define RPG_CLIENT_BATTLEGAMEPAGECONTEXT_GET_ISULTRATRIGGERPRESSED_OFFSET UNITYSDK_OFFSET(0xB3DF340)
#define RPG_CLIENT_BATTLEGAMEPAGECONTEXT_GET_NAVIGATIONZONEMANAGER_OFFSET UNITYSDK_OFFSET(0xB3D9810)
#define RPG_CLIENT_BATTLEGAMEPAGECONTEXT_GET_PCSHORTCUTPANEL_OFFSET UNITYSDK_OFFSET(0xB3DF330)
#define RPG_CLIENT_BATTLEGAMEPAGECONTEXT_GET_SKILLPANEL_OFFSET UNITYSDK_OFFSET(0xB3DF310)
#define RPG_CLIENT_BATTLEGAMEPAGECONTEXT_GET__ISINDELAYINTERACTION_OFFSET UNITYSDK_OFFSET(0xB3DD230)
#define RPG_CLIENT_BATTLEGAMEPAGECONTEXT_GET__ISINTIMELINEDISABLEINTERACTION_OFFSET UNITYSDK_OFFSET(0xB3DD250)
#define RPG_CLIENT_BATTLEGAMEPAGECONTEXT_MANUALBINDPANEL_OFFSET UNITYSDK_OFFSET(0xB3D9790)
#define RPG_CLIENT_BATTLEGAMEPAGECONTEXT_ONGOTFOCUS_OFFSET UNITYSDK_OFFSET(0xB3DB700)
#define RPG_CLIENT_BATTLEGAMEPAGECONTEXT_ONLOSTFOCUS_OFFSET UNITYSDK_OFFSET(0xB3DB760)
#define RPG_CLIENT_BATTLEGAMEPAGECONTEXT_ONRETURNTOTOP_OFFSET UNITYSDK_OFFSET(0xB3DB6A0)
#define RPG_CLIENT_BATTLEGAMEPAGECONTEXT_REVERTBATTLEPANELACTIVEREASON_OFFSET UNITYSDK_OFFSET(0xB3D9560)
#define RPG_CLIENT_BATTLEGAMEPAGECONTEXT_SETBATTLEPANELLIGHTWEIGHTACTIVE_OFFSET UNITYSDK_OFFSET(0xB3D94E0)
#define RPG_CLIENT_BATTLEGAMEPAGECONTEXT_SETBOSSINFOPANEL_OFFSET UNITYSDK_OFFSET(0xB3D96C0)
#define RPG_CLIENT_BATTLEGAMEPAGECONTEXT_SETTIMELINEDISABLEINTERACTIONTIME_OFFSET UNITYSDK_OFFSET(0xB3D95C0)
#define RPG_CLIENT_BATTLEGAMEPAGECONTEXT_VIEWPREFABPATH_OFFSET UNITYSDK_OFFSET(0xB3D9490)
#define RPG_CLIENT_BATTLEGAMEPAGECONTEXT__ADDHANDLERS_OFFSET UNITYSDK_OFFSET(0xB3DA200)
#define RPG_CLIENT_BATTLEGAMEPAGECONTEXT__CALCULATEHUDVIEWRECT_OFFSET UNITYSDK_OFFSET(0xB3DABD0)
#define RPG_CLIENT_BATTLEGAMEPAGECONTEXT__CHECKNEEDPAUSEBYTIMELINEDETAILINFOPANEL_OFFSET UNITYSDK_OFFSET(0xB3DE230)
#define RPG_CLIENT_BATTLEGAMEPAGECONTEXT__CHECKNEEDPAUSEBYULTRATRIGGER_OFFSET UNITYSDK_OFFSET(0xB3DB550)
#define RPG_CLIENT_BATTLEGAMEPAGECONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0xB3D9260)
#define RPG_CLIENT_BATTLEGAMEPAGECONTEXT__CUSTOMBINDVIEW_OFFSET UNITYSDK_OFFSET(0xB3D9820)
#define RPG_CLIENT_BATTLEGAMEPAGECONTEXT__INITAFTERLEVELSETUP_OFFSET UNITYSDK_OFFSET(0xB3DCB30)
#define RPG_CLIENT_BATTLEGAMEPAGECONTEXT__INITBEFORELEVELSETUP_OFFSET UNITYSDK_OFFSET(0xB3DC720)
#define RPG_CLIENT_BATTLEGAMEPAGECONTEXT__ONACTIVECHANGE_OFFSET UNITYSDK_OFFSET(0xB3DB070)
#define RPG_CLIENT_BATTLEGAMEPAGECONTEXT__ONBATTLECLOSETIMELINEDETAILINFOPANEL_OFFSET UNITYSDK_OFFSET(0xB3DE710)
#define RPG_CLIENT_BATTLEGAMEPAGECONTEXT__ONBATTLECLOSETIMELINEDETAILINFOPANEL_WRAP_OFFSET UNITYSDK_OFFSET(0xB3DF890)
#define RPG_CLIENT_BATTLEGAMEPAGECONTEXT__ONBATTLEGAMEPAGEEXIT_OFFSET UNITYSDK_OFFSET(0xB3DC4C0)
#define RPG_CLIENT_BATTLEGAMEPAGECONTEXT__ONBATTLEGAMEPAGEINITAFTERLEVELSETUP_OFFSET UNITYSDK_OFFSET(0xB3DCA50)
#define RPG_CLIENT_BATTLEGAMEPAGECONTEXT__ONBATTLEGAMEPAGEINITBEFORELEVELSETUP_OFFSET UNITYSDK_OFFSET(0xB3DC690)
#define RPG_CLIENT_BATTLEGAMEPAGECONTEXT__ONBATTLEGAMEPAGESHOWWHITEBOXCONTENT_OFFSET UNITYSDK_OFFSET(0xB3DCBD0)
#define RPG_CLIENT_BATTLEGAMEPAGECONTEXT__ONBATTLEGAMEPAGESILENTEXIT_OFFSET UNITYSDK_OFFSET(0xB3DC540)
#define RPG_CLIENT_BATTLEGAMEPAGECONTEXT__ONBATTLEGAMEPHASELEAVE_OFFSET UNITYSDK_OFFSET(0xB3DD4E0)
#define RPG_CLIENT_BATTLEGAMEPAGECONTEXT__ONBATTLEONABILITYDYING_OFFSET UNITYSDK_OFFSET(0xB3DC330)
#define RPG_CLIENT_BATTLEGAMEPAGECONTEXT__ONBATTLEONABILITYDYING_WRAP_OFFSET UNITYSDK_OFFSET(0xB3DF6B0)
#define RPG_CLIENT_BATTLEGAMEPAGECONTEXT__ONBATTLEOPENTIMELINEDETAILINFOPANEL_OFFSET UNITYSDK_OFFSET(0xB3DE2F0)
#define RPG_CLIENT_BATTLEGAMEPAGECONTEXT__ONBATTLEOPENTIMELINEDETAILINFOPANEL_WRAP_OFFSET UNITYSDK_OFFSET(0xB3DF7F0)
#define RPG_CLIENT_BATTLEGAMEPAGECONTEXT__ONBATTLESHOWBATTLEBROKENDIALOG_OFFSET UNITYSDK_OFFSET(0xB3DD830)
#define RPG_CLIENT_BATTLEGAMEPAGECONTEXT__ONBATTLESHOWBATTLESTARTDIALOG_OFFSET UNITYSDK_OFFSET(0xB3DD7D0)
#define RPG_CLIENT_BATTLEGAMEPAGECONTEXT__ONBATTLESHOWNEXTWAVEDIALOG_OFFSET UNITYSDK_OFFSET(0xB3DD8B0)
#define RPG_CLIENT_BATTLEGAMEPAGECONTEXT__ONBATTLETIMELINESKILLCLOSEUI_OFFSET UNITYSDK_OFFSET(0xB3DD680)
#define RPG_CLIENT_BATTLEGAMEPAGECONTEXT__ONBATTLETIMELINESKILLSHOWUI_OFFSET UNITYSDK_OFFSET(0xB3DD610)
#define RPG_CLIENT_BATTLEGAMEPAGECONTEXT__ONBATTLETRIGGERONEMORE_OFFSET UNITYSDK_OFFSET(0xB3DD770)
#define RPG_CLIENT_BATTLEGAMEPAGECONTEXT__ONBATTLEULTRATRIGGERBUTTONSTATECHANGE_OFFSET UNITYSDK_OFFSET(0xB3DD990)
#define RPG_CLIENT_BATTLEGAMEPAGECONTEXT__ONBTNSCREENMASK_OFFSET UNITYSDK_OFFSET(0xB3DD910)
#define RPG_CLIENT_BATTLEGAMEPAGECONTEXT__ONCHARACTERCREATE_OFFSET UNITYSDK_OFFSET(0xB3DC230)
#define RPG_CLIENT_BATTLEGAMEPAGECONTEXT__ONCHARACTERCREATE_WRAP_OFFSET UNITYSDK_OFFSET(0xB3DF350)
#define RPG_CLIENT_BATTLEGAMEPAGECONTEXT__ONCHARACTERSTAGESTATECHANGE_OFFSET UNITYSDK_OFFSET(0xB3DC2B0)
#define RPG_CLIENT_BATTLEGAMEPAGECONTEXT__ONCHARACTERSTAGESTATECHANGE_WRAP_OFFSET UNITYSDK_OFFSET(0xB3DF430)
#define RPG_CLIENT_BATTLEGAMEPAGECONTEXT__ONCREATEPLAYERTEAMFINISH_OFFSET UNITYSDK_OFFSET(0xB3DC190)
#define RPG_CLIENT_BATTLEGAMEPAGECONTEXT__ONLEVELGAMEMODESTATECHANGEDEVENT_OFFSET UNITYSDK_OFFSET(0xB3DB8A0)
#define RPG_CLIENT_BATTLEGAMEPAGECONTEXT__ONLOCKBATTLEOPERATION_OFFSET UNITYSDK_OFFSET(0xB3DDD60)
#define RPG_CLIENT_BATTLEGAMEPAGECONTEXT__ONMAZETOBATTLETRANSITFADEOUTEND_OFFSET UNITYSDK_OFFSET(0xB3DB7C0)
#define RPG_CLIENT_BATTLEGAMEPAGECONTEXT__ONMAZETOBATTLETRANSITFADEOUTEND_WRAP_OFFSET UNITYSDK_OFFSET(0xB3DF510)
#define RPG_CLIENT_BATTLEGAMEPAGECONTEXT__ONPLAYROLETRIALZOOMINFADEOUT_OFFSET UNITYSDK_OFFSET(0xB3DE080)
#define RPG_CLIENT_BATTLEGAMEPAGECONTEXT__ONREFRESHBATTLEAVATARPANEL_OFFSET UNITYSDK_OFFSET(0xB3DC1E0)
#define RPG_CLIENT_BATTLEGAMEPAGECONTEXT__ONREFRESHBATTLEAVATARPANEL_WRAP_OFFSET UNITYSDK_OFFSET(0xB3DF620)
#define RPG_CLIENT_BATTLEGAMEPAGECONTEXT__ONSETUPFULLSCREENBLOCK_OFFSET UNITYSDK_OFFSET(0xB3DDF10)
#define RPG_CLIENT_BATTLEGAMEPAGECONTEXT__ONSHOWBOSSINFOBAR_OFFSET UNITYSDK_OFFSET(0xB3DC0B0)
#define RPG_CLIENT_BATTLEGAMEPAGECONTEXT__ONSHOWBOSSINFOBAR_WRAP_OFFSET UNITYSDK_OFFSET(0xB3DF570)
#define RPG_CLIENT_BATTLEGAMEPAGECONTEXT__ONTEAMFORMATIONLISTCHANGE_OFFSET UNITYSDK_OFFSET(0xB3DC410)
#define RPG_CLIENT_BATTLEGAMEPAGECONTEXT__ONTICK_OFFSET UNITYSDK_OFFSET(0xB3DB0F0)
#define RPG_CLIENT_BATTLEGAMEPAGECONTEXT__ONUIBATTLEANYKEYDOWNNTF_OFFSET UNITYSDK_OFFSET(0xB3DD1A0)
#define RPG_CLIENT_BATTLEGAMEPAGECONTEXT__ONUIBONUSEFFECT_OFFSET UNITYSDK_OFFSET(0xB3DD410)
#define RPG_CLIENT_BATTLEGAMEPAGECONTEXT__ONUIBONUSEFFECT_WRAP_OFFSET UNITYSDK_OFFSET(0xB3DF750)
#define RPG_CLIENT_BATTLEGAMEPAGECONTEXT__PLAYALLUIFADEANIM_OFFSET UNITYSDK_OFFSET(0xB3DBDA0)
#define RPG_CLIENT_BATTLEGAMEPAGECONTEXT__PLAYAVATARPANELFADEANIM_OFFSET UNITYSDK_OFFSET(0xB3DEE20)
#define RPG_CLIENT_BATTLEGAMEPAGECONTEXT__PLAYULTRAFADE_OFFSET UNITYSDK_OFFSET(0xB3DDBD0)
#define RPG_CLIENT_BATTLEGAMEPAGECONTEXT__RESETUISTATE_OFFSET UNITYSDK_OFFSET(0xB3DA940)
#define RPG_CLIENT_BATTLEGAMEPAGECONTEXT__SETACTIVEBYPOSITION_OFFSET UNITYSDK_OFFSET(0xB3DBFA0)
#define RPG_CLIENT_BATTLEGAMEPAGECONTEXT__SETLIGHTENTITIES_OFFSET UNITYSDK_OFFSET(0xB3DEDB0)
#define RPG_CLIENT_BATTLEGAMEPAGECONTEXT__SETPAUSEBYULTRASKILLTRIGGER_OFFSET UNITYSDK_OFFSET(0xB3DAEA0)
#define RPG_CLIENT_BATTLEGAMEPAGECONTEXT__SETUPACTIONBARSAFEZONE_OFFSET UNITYSDK_OFFSET(0xB3DAD10)
#define RPG_CLIENT_BATTLEGAMEPAGECONTEXT__SETUPLIGHTTEAMMEMBER_OFFSET UNITYSDK_OFFSET(0xB3DB460)
#define RPG_CLIENT_BATTLEGAMEPAGECONTEXT__SETUPLIGHTTEAMUI_OFFSET UNITYSDK_OFFSET(0xB3DEA20)
#define RPG_CLIENT_BATTLEGAMEPAGECONTEXT__SETUPREPLAYMODE_OFFSET UNITYSDK_OFFSET(0xB3DBBF0)
#define RPG_CLIENT_BATTLEGAMEPAGECONTEXT__SETUPTRIALOBJETIVE_OFFSET UNITYSDK_OFFSET(0xB3DEB50)
#define RPG_CLIENT_BATTLEGAMEPAGECONTEXT__SETUPVIEW_OFFSET UNITYSDK_OFFSET(0xB3DA880)
#define RPG_CLIENT_BATTLEGAMEPAGECONTEXT__SETVIGNETTE_OFFSET UNITYSDK_OFFSET(0xB3DBAD0)
#define RPG_CLIENT_BATTLEGAMEPAGECONTEXT__SHOWBEGINBATTLEBLOCK_OFFSET UNITYSDK_OFFSET(0xB3DA9D0)
#define RPG_CLIENT_BATTLEGAMEPAGECONTEXT__TICKDELAYINTERACTION_OFFSET UNITYSDK_OFFSET(0xB3DB380)
#define RPG_CLIENT_BATTLEGAMEPAGECONTEXT__TICKTIMELINEDISABLEINTERACTION_OFFSET UNITYSDK_OFFSET(0xB3DB3F0)
#define RPG_CLIENT_BATTLEGAMEPAGECONTEXT__TOGGLEAVATARPANELBLACKMASK_OFFSET UNITYSDK_OFFSET(0xB3DE280)
#define RPG_CLIENT_BATTLEGAMEPAGECONTEXT__TOGGLEAVATARPANEL_OFFSET UNITYSDK_OFFSET(0xB3DD270)
#define RPG_CLIENT_BATTLEGAMEPAGECONTEXT__TRYRESETULTRATRIGGERFADEANIM_OFFSET UNITYSDK_OFFSET(0xB3DF260)
#define RPG_CLIENT_BATTLEGAMEPAGECONTEXT__UNBINDVIEW_OFFSET UNITYSDK_OFFSET(0xB3DAD80)
#define RPG_CLIENT_BATTLEGAMEPAGECONTEXT___IFIXBASEPROXY_AUTOBINDCALLBACK_OFFSET UNITYSDK_OFFSET(0xB3E0550)
#define RPG_CLIENT_BATTLEGAMEPAGECONTEXT___IFIXBASEPROXY_AUTOREMOVECALLBACK_OFFSET UNITYSDK_OFFSET(0xB3E05B0)
#define RPG_CLIENT_BATTLEGAMEPAGECONTEXT___IFIXBASEPROXY_ONGOTFOCUS_OFFSET UNITYSDK_OFFSET(0xB3E0530)
#define RPG_CLIENT_BATTLEGAMEPAGECONTEXT___IFIXBASEPROXY_ONLOSTFOCUS_OFFSET UNITYSDK_OFFSET(0xB3E0540)
#define RPG_CLIENT_BATTLEGAMEPAGECONTEXT___IFIXBASEPROXY_ONRETURNTOTOP_OFFSET UNITYSDK_OFFSET(0xB3E0520)
#define RPG_CLIENT_BATTLEGAMEPAGECONTEXT___IFIXBASEPROXY_VIEWPREFABPATH_OFFSET UNITYSDK_OFFSET(0xB3E0260)
#define RPG_CLIENT_BATTLEGAMEPAGECONTEXT___IFIXBASEPROXY__ADDHANDLERS_OFFSET UNITYSDK_OFFSET(0xB3E0340)
#define RPG_CLIENT_BATTLEGAMEPAGECONTEXT___IFIXBASEPROXY__CUSTOMBINDVIEW_OFFSET UNITYSDK_OFFSET(0xB3E02E0)
#define RPG_CLIENT_BATTLEGAMEPAGECONTEXT___IFIXBASEPROXY__ONACTIVECHANGE_OFFSET UNITYSDK_OFFSET(0xB3E0460)
#define RPG_CLIENT_BATTLEGAMEPAGECONTEXT___IFIXBASEPROXY__ONTICK_OFFSET UNITYSDK_OFFSET(0xB3E04C0)
#define RPG_CLIENT_BATTLEGAMEPAGECONTEXT___IFIXBASEPROXY__SETUPVIEW_OFFSET UNITYSDK_OFFSET(0xB3E03A0)
#define RPG_CLIENT_BATTLEGAMEPAGECONTEXT___IFIXBASEPROXY__UNBINDVIEW_OFFSET UNITYSDK_OFFSET(0xB3E0400)
#define RPG_CLIENT_BATTLEGAMEPAGECONTEXT___ONLEVELGAMEMODESTATECHANGEDEVENT_B__21_0_OFFSET UNITYSDK_OFFSET(0xB3E0250)

namespace RPG::Client
{
	inline static constexpr unsigned int BattleGamePageContext_TypeDefinitionIndex = 66976;

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
		::RPG::GameCore::EntityManager* _EntityManager; // 0x180
		::UnityEngine::RectTransform* _ActionBarSafeZone; // 0x188
		::UnityEngine::Transform* _ActionBarMask; // 0x190
		::Class_2_831E473E028F1284* _BattleEventSkillPanel; // 0x198
		::Class_2_2BF8F9B72A775F6A* _BattleShowUIPageManager; // 0x1A0
		::Class_1_56F79B35BC444FE2* _BattleGamePanelsActiveManager; // 0x1A8
		::Class_2_9885B9F5AA089289* _ActionBarPanel; // 0x1B0
		::Class_2_A480E856C699B4C6* _RightDownPointPanel; // 0x1B8
		::Class_2_8A9B104C117716D5_1* _BattleToastPanel; // 0x1C0
		::Class_2_CB2DDEA2A18986B6* _BattleMaskPage; // 0x1C8
		::UnityEngine::Transform* _WhiteboxWidget; // 0x1D0
		::Class_2_CE9BE15B1FB0D645* _BattleTeamDetailButtonPanel; // 0x1D8
		::UnityEngine::Animation* _RootAnim; // 0x1E0
		::Class_2_5EC7E6F4AADA2E6D* _BattleScreenEffectPanelContainer; // 0x1E8
		::Class_2_2B7BD8F617A0307D* _SkillPanel; // 0x1F0
		::UnityEngine::RectTransform* _HudSafeZone; // 0x1F8
		::Class_2_D8A9B7E75FE2A68B_1* _BattleBPTopPanel; // 0x200
		::RPG::UINavigation::UINavigationZoneManager* _UINavigationZoneManager; // 0x208
		::RPG::Client::UIMeta* _UIMeta; // 0x210
		::Class_2_24222339AD802068* _Follow3dContext; // 0x218
		::Il2CppArray<::System::String*>* _UltraTriggerWhiteList; // 0x220
		::Class_2_E3625122CE82016E* _PCShortCutPanel; // 0x228
		::System::Collections::Generic::List_1<::System::String*>* _WhiteboxImgPaths; // 0x230
		::UnityEngine::UI::Button* _BtnScreenMask; // 0x238
		::RPG::GameCore::LevelUIComponent* _LevelUICmpt; // 0x240
		::Class_2_C33602C0D64FA524* _BossInfoPanel; // 0x248
		::Class_2_B4DB9A5A774AA67E* _BattleEventButtonSpecialPanel; // 0x250
		::Class_2_97E58BBA90464D2F* _TeamInfoPanel; // 0x258
		::Il2CppArray<::System::String*>* _ReplayModeWhiteList; // 0x260
		::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>* _LightTeamEntities; // 0x268
		::Class_2_D9812445A4D54117* _TurnHintPanel; // 0x270
		::UnityEngine::Transform* _AvatarPanelBlackMask; // 0x278
		::Class_2_7C8F60EA95FA2B02* _BattleChangeAvatarPanel; // 0x280
		::Class_2_1ECF8DDE3CFBB4AC* _BattleTopPanel; // 0x288
		::UnityEngine::Transform* _TeamRoot; // 0x290
		::Class_2_CFEDE77CE6B2789D* _BattleFunctionBarPanel; // 0x298
		::Class_2_7E3538A12F3E2A1D* _BattleRoleTrialPanel; // 0x2A0
		::Class_2_DD03352C45497223* _BattleBottomInfoPanel; // 0x2A8
		::Class_2_2D60E65D8F22F34B* _BattleRightInfoPanel; // 0x2B0
		::RPG::GameCore::BattleInstance* _BattleInstanceRef; // 0x2B8
		::System::Single _VignetteBegin; // 0x2C0
		::System::Int32 _IsPausedByTimeLineDetailInfoPanelTimeScaleIndex; // 0x2C4
		::System::Int32 _IsPausedByUltraSkillTriggerTimeScaleIndex; // 0x2C8
		::System::Single _DelayInteractionTimeStamp; // 0x2CC
		::System::Single _VignetteTarget; // 0x2D0
		::System::Boolean _NeedResetUltraTriggerFadeAnim; // 0x2D4
		::System::Boolean _VignetteFadeIn; // 0x2D5
		::System::Boolean _IsBattleTimelinePlaying; // 0x2D6
		::System::Boolean _IsPausedByUltraSkillTrigger; // 0x2D7
		::System::UInt32 _BeginBattleBlockID; // 0x2D8
		::System::Single _TimeLineDisableInteractionTimeStamp; // 0x2DC
		::System::UInt64 _VignetteChangeBeginTime; // 0x2E0
		::System::Boolean _ShouldResumeBeginBattleBlock; // 0x2E8
		::System::Boolean _IsUltraTriggerPressed; // 0x2E9
		::System::Boolean _InVignetteChange; // 0x2EA
		::System::Boolean _LightTeamEntitiesDirty; // 0x2EB

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLEGAMEPAGECONTEXT__CTOR_OFFSET))(this);
		}

		::System::String* ViewPrefabPath()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLEGAMEPAGECONTEXT_VIEWPREFABPATH_OFFSET))(this);
		}

		::System::Void SetBattlePanelLightWeightActive(::RPG::GameCore::BattleUIPanelType a1, ::System::Boolean a2, ::System::String* a3)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::BattleUIPanelType, ::System::Boolean, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLEGAMEPAGECONTEXT_SETBATTLEPANELLIGHTWEIGHTACTIVE_OFFSET))(this, a1, a2, a3);
		}

		::System::Void RevertBattlePanelActiveReason(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLEGAMEPAGECONTEXT_REVERTBATTLEPANELACTIVEREASON_OFFSET))(this, a1);
		}

		::System::Void SetTimeLineDisableInteractionTime(::Struct_2_6E6428D512391F71 a1)
		{
			return ((::System::Void(*)(::PVOID, ::Struct_2_6E6428D512391F71))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLEGAMEPAGECONTEXT_SETTIMELINEDISABLEINTERACTIONTIME_OFFSET))(this, a1);
		}

		::System::Void SetBossInfoPanel(::Class_2_C33602C0D64FA524* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_2_C33602C0D64FA524*))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLEGAMEPAGECONTEXT_SETBOSSINFOPANEL_OFFSET))(this, a1);
		}

		::System::Void ManualBindPanel(::RPG::GameCore::BattleUIPanelType a1, ::Class_1_CA217ABF4E3B4F3F* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::BattleUIPanelType, ::Class_1_CA217ABF4E3B4F3F*))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLEGAMEPAGECONTEXT_MANUALBINDPANEL_OFFSET))(this, a1, a2);
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

		::System::Void _OnActiveChange(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLEGAMEPAGECONTEXT__ONACTIVECHANGE_OFFSET))(this, a1);
		}

		::System::Void _OnTick(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLEGAMEPAGECONTEXT__ONTICK_OFFSET))(this, a1);
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

		::System::Void _OnLevelGameModeStateChangedEvent(::Class_0_16E4307DCC419505_401* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_401*))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLEGAMEPAGECONTEXT__ONLEVELGAMEMODESTATECHANGEDEVENT_OFFSET))(this, a1);
		}

		::System::Void _SetActiveByPosition(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLEGAMEPAGECONTEXT__SETACTIVEBYPOSITION_OFFSET))(this, a1);
		}

		::System::Void _CalculateHUDViewRect()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLEGAMEPAGECONTEXT__CALCULATEHUDVIEWRECT_OFFSET))(this);
		}

		::System::Void _SetupActionBarSafeZone()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLEGAMEPAGECONTEXT__SETUPACTIONBARSAFEZONE_OFFSET))(this);
		}

		::System::Void _OnShowBossInfoBar(::RPG::Client::ShowBossInfoParam* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::ShowBossInfoParam*))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLEGAMEPAGECONTEXT__ONSHOWBOSSINFOBAR_OFFSET))(this, a1);
		}

		::System::Void _OnCreatePlayerTeamFinish(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLEGAMEPAGECONTEXT__ONCREATEPLAYERTEAMFINISH_OFFSET))(this, a1);
		}

		::System::Void _OnRefreshBattleAvatarPanel()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLEGAMEPAGECONTEXT__ONREFRESHBATTLEAVATARPANEL_OFFSET))(this);
		}

		::System::Void _OnCharacterCreate(::RPG::GameCore::LevelCharacterCreate* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::LevelCharacterCreate*))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLEGAMEPAGECONTEXT__ONCHARACTERCREATE_OFFSET))(this, a1);
		}

		::System::Void _OnCharacterStageStateChange(::RPG::GameCore::LevelEntityStageStateChange* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::LevelEntityStageStateChange*))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLEGAMEPAGECONTEXT__ONCHARACTERSTAGESTATECHANGE_OFFSET))(this, a1);
		}

		::System::Void _OnBattleOnAbilityDying(::RPG::GameCore::GameEntity* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLEGAMEPAGECONTEXT__ONBATTLEONABILITYDYING_OFFSET))(this, a1);
		}

		::System::Void _OnTeamFormationListChange(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLEGAMEPAGECONTEXT__ONTEAMFORMATIONLISTCHANGE_OFFSET))(this, a1);
		}

		::System::Void _OnBattleGamePageExit(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLEGAMEPAGECONTEXT__ONBATTLEGAMEPAGEEXIT_OFFSET))(this, a1);
		}

		::System::Void _OnBattleGamePageSilentExit(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLEGAMEPAGECONTEXT__ONBATTLEGAMEPAGESILENTEXIT_OFFSET))(this, a1);
		}

		::System::Void _OnBattleGamePageInitBeforeLevelSetup(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLEGAMEPAGECONTEXT__ONBATTLEGAMEPAGEINITBEFORELEVELSETUP_OFFSET))(this, a1);
		}

		::System::Void _OnBattleGamePageInitAfterLevelSetup(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLEGAMEPAGECONTEXT__ONBATTLEGAMEPAGEINITAFTERLEVELSETUP_OFFSET))(this, a1);
		}

		::System::Void _OnBattleGamePageShowWhiteboxContent(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLEGAMEPAGECONTEXT__ONBATTLEGAMEPAGESHOWWHITEBOXCONTENT_OFFSET))(this, a1);
		}

		::System::Void _OnUIBattleAnyKeyDownNtf(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLEGAMEPAGECONTEXT__ONUIBATTLEANYKEYDOWNNTF_OFFSET))(this, a1);
		}

		::System::Void _OnUIBonusEffect(::RPG::GameCore::ShowBonusUIEffect* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::ShowBonusUIEffect*))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLEGAMEPAGECONTEXT__ONUIBONUSEFFECT_OFFSET))(this, a1);
		}

		::System::Void _OnBattleGamePhaseLeave(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLEGAMEPAGECONTEXT__ONBATTLEGAMEPHASELEAVE_OFFSET))(this, a1);
		}

		::System::Void _OnBattleTimeLineSkillShowUI(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLEGAMEPAGECONTEXT__ONBATTLETIMELINESKILLSHOWUI_OFFSET))(this, a1);
		}

		::System::Void _OnBattleTimeLineSkillCloseUI(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLEGAMEPAGECONTEXT__ONBATTLETIMELINESKILLCLOSEUI_OFFSET))(this, a1);
		}

		::System::Void _OnBattleTriggerOneMore(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLEGAMEPAGECONTEXT__ONBATTLETRIGGERONEMORE_OFFSET))(this, a1);
		}

		::System::Void _OnBattleShowBattleStartDialog(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLEGAMEPAGECONTEXT__ONBATTLESHOWBATTLESTARTDIALOG_OFFSET))(this, a1);
		}

		::System::Void _OnBattleShowBattleBrokenDialog(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLEGAMEPAGECONTEXT__ONBATTLESHOWBATTLEBROKENDIALOG_OFFSET))(this, a1);
		}

		::System::Void _OnBattleShowNextWaveDialog(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLEGAMEPAGECONTEXT__ONBATTLESHOWNEXTWAVEDIALOG_OFFSET))(this, a1);
		}

		::System::Void _OnBtnScreenMask(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLEGAMEPAGECONTEXT__ONBTNSCREENMASK_OFFSET))(this, a1);
		}

		::System::Void _OnBattleUltraTriggerButtonStateChange(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLEGAMEPAGECONTEXT__ONBATTLEULTRATRIGGERBUTTONSTATECHANGE_OFFSET))(this, a1);
		}

		::System::Void _OnLockBattleOperation(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLEGAMEPAGECONTEXT__ONLOCKBATTLEOPERATION_OFFSET))(this, a1);
		}

		::System::Void _OnSetupFullScreenBlock(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLEGAMEPAGECONTEXT__ONSETUPFULLSCREENBLOCK_OFFSET))(this, a1);
		}

		::System::Void _OnPlayRoleTrialZoomInFadeOut(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLEGAMEPAGECONTEXT__ONPLAYROLETRIALZOOMINFADEOUT_OFFSET))(this, a1);
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

		::System::Void _SetPauseByUltraSkillTrigger(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLEGAMEPAGECONTEXT__SETPAUSEBYULTRASKILLTRIGGER_OFFSET))(this, a1);
		}

		::System::Void _OnBattleOpenTimeLineDetailInfoPanel(::Class_1_DDDB57AA67C3A9EA* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_DDDB57AA67C3A9EA*))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLEGAMEPAGECONTEXT__ONBATTLEOPENTIMELINEDETAILINFOPANEL_OFFSET))(this, a1);
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

		::System::Void _InitBeforeLevelSetup(::RPG::GameCore::BattleInstance* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::BattleInstance*))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLEGAMEPAGECONTEXT__INITBEFORELEVELSETUP_OFFSET))(this, a1);
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

		::System::Void _PlayAllUIFadeAnim(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLEGAMEPAGECONTEXT__PLAYALLUIFADEANIM_OFFSET))(this, a1);
		}

		::System::Void _PlayAvatarPanelFadeAnim(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLEGAMEPAGECONTEXT__PLAYAVATARPANELFADEANIM_OFFSET))(this, a1);
		}

		::System::Void _TryResetUltraTriggerFadeAnim()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLEGAMEPAGECONTEXT__TRYRESETULTRATRIGGERFADEANIM_OFFSET))(this);
		}

		::System::Void _SetVignette(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLEGAMEPAGECONTEXT__SETVIGNETTE_OFFSET))(this, a1);
		}

		::System::Void _PlayUltraFade(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLEGAMEPAGECONTEXT__PLAYULTRAFADE_OFFSET))(this, a1);
		}

		::System::Void _ShowBeginBattleBlock(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLEGAMEPAGECONTEXT__SHOWBEGINBATTLEBLOCK_OFFSET))(this, a1);
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

		::Class_2_E3625122CE82016E* get_PCShortCutPanel()
		{
			return ((::Class_2_E3625122CE82016E*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLEGAMEPAGECONTEXT_GET_PCSHORTCUTPANEL_OFFSET))(this);
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

		::System::Void _OnCharacterCreate_Wrap(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLEGAMEPAGECONTEXT__ONCHARACTERCREATE_WRAP_OFFSET))(this, a1);
		}

		::System::Void _OnCharacterStageStateChange_Wrap(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLEGAMEPAGECONTEXT__ONCHARACTERSTAGESTATECHANGE_WRAP_OFFSET))(this, a1);
		}

		::System::Void _OnMazeToBattleTransitFadeOutEnd_Wrap(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLEGAMEPAGECONTEXT__ONMAZETOBATTLETRANSITFADEOUTEND_WRAP_OFFSET))(this, a1);
		}

		::System::Void _OnShowBossInfoBar_Wrap(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLEGAMEPAGECONTEXT__ONSHOWBOSSINFOBAR_WRAP_OFFSET))(this, a1);
		}

		::System::Void _OnRefreshBattleAvatarPanel_Wrap(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLEGAMEPAGECONTEXT__ONREFRESHBATTLEAVATARPANEL_WRAP_OFFSET))(this, a1);
		}

		::System::Void _OnBattleOnAbilityDying_Wrap(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLEGAMEPAGECONTEXT__ONBATTLEONABILITYDYING_WRAP_OFFSET))(this, a1);
		}

		::System::Void _OnUIBonusEffect_Wrap(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLEGAMEPAGECONTEXT__ONUIBONUSEFFECT_WRAP_OFFSET))(this, a1);
		}

		::System::Void _OnBattleOpenTimeLineDetailInfoPanel_Wrap(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLEGAMEPAGECONTEXT__ONBATTLEOPENTIMELINEDETAILINFOPANEL_WRAP_OFFSET))(this, a1);
		}

		::System::Void _OnBattleCloseTimeLineDetailInfoPanel_Wrap(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLEGAMEPAGECONTEXT__ONBATTLECLOSETIMELINEDETAILINFOPANEL_WRAP_OFFSET))(this, a1);
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

		::System::Void __iFixBaseProxy__OnActiveChange(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLEGAMEPAGECONTEXT___IFIXBASEPROXY__ONACTIVECHANGE_OFFSET))(this, a1);
		}

		::System::Void __iFixBaseProxy__OnTick(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLEGAMEPAGECONTEXT___IFIXBASEPROXY__ONTICK_OFFSET))(this, a1);
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

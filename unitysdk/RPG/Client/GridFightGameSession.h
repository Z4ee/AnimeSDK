#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_718;
class Class_0_16E4307DCC419505_719;
class Class_0_16E4307DCC419505_720;
class Class_1_03D6D30E62EFB374;
class Class_1_075C34D03AFA1215_35;
class Class_1_14E02E1F6D70E487_4;
class Class_1_16A5F3BE522C8CC5;
class Class_1_2E57B88467AF63C8_8;
class Class_1_7BF8FDF00F218876_18;
class Class_1_97C12F8E672C3153;
class Class_1_A16A135FC5A0DDB9_2;
class Class_1_A6B0B39A319DDDE2;
class Class_1_B94DDCD70CFEC484_1;
class Class_1_D1AFAAA92B4C7CB7;
class Class_1_D40936EF3BF54118_35;
class Class_1_D40936EF3BF54118_36;
class Class_1_D40936EF3BF54118_43;
class Class_1_D7F3D169C3137F53_1;
class Class_1_D9306091D159D56B_2;
class Class_1_E7028611E9315E2C;
class Class_1_EB91F58AEEF3F578_1;
class Class_1_F0A446EC7AE7E87D;
class Class_1_F95E70757E85280D;
class Class_1_F9EFCB63E481ADB7_1;
class Class_1_FB0633E85BD6CF8E_7;
class Class_1_FE6CD7C4A65B646F_2;
class Class_1_FE6CD7C4A65B646F_3;
namespace RPG::Client { class GridFightAssistant; }
namespace RPG::Client { class GridFightAugmentInfo; }
namespace RPG::Client { class GridFightBattleGameContext; }
namespace RPG::Client { class GridFightBattleResultInfo; }
namespace RPG::Client { class GridFightBattleSttInfo; }
namespace RPG::Client { class GridFightBonusServerData; }
namespace RPG::Client { class GridFightDraftServerData; }
namespace RPG::Client { class GridFightGameEventData; }
namespace RPG::Client { class GridFightGameTrait; }
namespace RPG::Client { class GridFightGameTutorialData; }
namespace RPG::Client { class GridFightItemInfo; }
namespace RPG::Client { class GridFightModifierInfo; }
namespace RPG::Client { class GridFightOrbServerData; }
namespace RPG::Client { class GridFightPendingSelection; }
namespace RPG::Client { class GridFightPlayer; }
namespace RPG::Client { class GridFightPortalServerData; }
namespace RPG::Client { class GridFightRole; }
namespace RPG::Client { class GridFightRoleShop; }
namespace RPG::Client { class GridFightSettleResultInfo; }
namespace RPG::Client { class GridFightStage; }
namespace RPG::Client { class GridFightTeam; }
namespace RPG::Client { class GridFightTeamChangeEvent; }
namespace RPG::Client { class GridFightTrack; }
namespace RPG::Client { class GridFightTutorialManager; }
namespace System { template <typename T1, typename T2> class Func_2; }
namespace System::Collections::Generic { template <typename T> class IList_1; }

#define RPG_CLIENT_GRIDFIGHTGAMESESSION_CLEARBATTLEGAMECONTEXT_OFFSET UNITYSDK_OFFSET(0xA4DD1B0)
#define RPG_CLIENT_GRIDFIGHTGAMESESSION_CLEARBATTLERESULT_OFFSET UNITYSDK_OFFSET(0xA4DDF00)
#define RPG_CLIENT_GRIDFIGHTGAMESESSION_COMPAREWITHCURTEAM_OFFSET UNITYSDK_OFFSET(0xA4DF870)
#define RPG_CLIENT_GRIDFIGHTGAMESESSION_DISPOSE_OFFSET UNITYSDK_OFFSET(0xA4DD100)
#define RPG_CLIENT_GRIDFIGHTGAMESESSION_GET_ASSISTANT_OFFSET UNITYSDK_OFFSET(0xA4E1540)
#define RPG_CLIENT_GRIDFIGHTGAMESESSION_GET_AUGMENT_OFFSET UNITYSDK_OFFSET(0xA4E14B0)
#define RPG_CLIENT_GRIDFIGHTGAMESESSION_GET_BATTLEGAMECONTEXT_OFFSET UNITYSDK_OFFSET(0xA4E15B0)
#define RPG_CLIENT_GRIDFIGHTGAMESESSION_GET_BATTLERESULT_OFFSET UNITYSDK_OFFSET(0xA4E1550)
#define RPG_CLIENT_GRIDFIGHTGAMESESSION_GET_BATTLESTT_OFFSET UNITYSDK_OFFSET(0xA4E14E0)
#define RPG_CLIENT_GRIDFIGHTGAMESESSION_GET_BONUS_OFFSET UNITYSDK_OFFSET(0xA4E14A0)
#define RPG_CLIENT_GRIDFIGHTGAMESESSION_GET_CONTEXTDATA_OFFSET UNITYSDK_OFFSET(0xA4E1270)
#define RPG_CLIENT_GRIDFIGHTGAMESESSION_GET_CONTEXTVALUE_OFFSET UNITYSDK_OFFSET(0xA4E14F0)
#define RPG_CLIENT_GRIDFIGHTGAMESESSION_GET_DIVISIONID_OFFSET UNITYSDK_OFFSET(0xA4E0FF0)
#define RPG_CLIENT_GRIDFIGHTGAMESESSION_GET_DIVISIONLEVEL_OFFSET UNITYSDK_OFFSET(0xA4E1010)
#define RPG_CLIENT_GRIDFIGHTGAMESESSION_GET_DRAFT_OFFSET UNITYSDK_OFFSET(0xA4E14C0)
#define RPG_CLIENT_GRIDFIGHTGAMESESSION_GET_GAMETRAIT_OFFSET UNITYSDK_OFFSET(0xA4E1460)
#define RPG_CLIENT_GRIDFIGHTGAMESESSION_GET_ISOVERCHARGEMODE_OFFSET UNITYSDK_OFFSET(0xA4E1250)
#define RPG_CLIENT_GRIDFIGHTGAMESESSION_GET_ISPROMOTION_OFFSET UNITYSDK_OFFSET(0xA4E10B0)
#define RPG_CLIENT_GRIDFIGHTGAMESESSION_GET_ISTUTORIAL_OFFSET UNITYSDK_OFFSET(0xA4E1290)
#define RPG_CLIENT_GRIDFIGHTGAMESESSION_GET_ITEMINFO_OFFSET UNITYSDK_OFFSET(0xA4E1430)
#define RPG_CLIENT_GRIDFIGHTGAMESESSION_GET_ITEMREPOSITORY_OFFSET UNITYSDK_OFFSET(0xA4DAD60)
#define RPG_CLIENT_GRIDFIGHTGAMESESSION_GET_MODIFIER_OFFSET UNITYSDK_OFFSET(0xA4E1400)
#define RPG_CLIENT_GRIDFIGHTGAMESESSION_GET_ORB_OFFSET UNITYSDK_OFFSET(0xA4E14D0)
#define RPG_CLIENT_GRIDFIGHTGAMESESSION_GET_PENDINGSELECTION_OFFSET UNITYSDK_OFFSET(0xA4E1420)
#define RPG_CLIENT_GRIDFIGHTGAMESESSION_GET_PLAYER_OFFSET UNITYSDK_OFFSET(0xA4E1440)
#define RPG_CLIENT_GRIDFIGHTGAMESESSION_GET_PORTAL_OFFSET UNITYSDK_OFFSET(0xA4E1490)
#define RPG_CLIENT_GRIDFIGHTGAMESESSION_GET_ROLESHOP_OFFSET UNITYSDK_OFFSET(0xA4E1450)
#define RPG_CLIENT_GRIDFIGHTGAMESESSION_GET_SEASONID_OFFSET UNITYSDK_OFFSET(0xA4E0FD0)
#define RPG_CLIENT_GRIDFIGHTGAMESESSION_GET_SESSIONUID_OFFSET UNITYSDK_OFFSET(0xA4E1230)
#define RPG_CLIENT_GRIDFIGHTGAMESESSION_GET_SETTLERESULT_OFFSET UNITYSDK_OFFSET(0xA4E1570)
#define RPG_CLIENT_GRIDFIGHTGAMESESSION_GET_STAGE_OFFSET UNITYSDK_OFFSET(0xA4E1480)
#define RPG_CLIENT_GRIDFIGHTGAMESESSION_GET_TEAMREPOSITORY_OFFSET UNITYSDK_OFFSET(0xA4DAD50)
#define RPG_CLIENT_GRIDFIGHTGAMESESSION_GET_TEAM_OFFSET UNITYSDK_OFFSET(0xA4E1470)
#define RPG_CLIENT_GRIDFIGHTGAMESESSION_GET_TRACK_OFFSET UNITYSDK_OFFSET(0xA4E1500)
#define RPG_CLIENT_GRIDFIGHTGAMESESSION_GET_TRAITREPOSITORY_OFFSET UNITYSDK_OFFSET(0xA4DAD70)
#define RPG_CLIENT_GRIDFIGHTGAMESESSION_GET_TUTORIALDATA_OFFSET UNITYSDK_OFFSET(0xA4E1520)
#define RPG_CLIENT_GRIDFIGHTGAMESESSION_GET_TUTORIALMANAGER_OFFSET UNITYSDK_OFFSET(0xA4E1510)
#define RPG_CLIENT_GRIDFIGHTGAMESESSION_GET_TUTORIALUNLOCKDATA_OFFSET UNITYSDK_OFFSET(0xA4E1410)
#define RPG_CLIENT_GRIDFIGHTGAMESESSION_GET_WAITMANUALQUITESETTLE_OFFSET UNITYSDK_OFFSET(0xA4E1590)
#define RPG_CLIENT_GRIDFIGHTGAMESESSION_INIT_OFFSET UNITYSDK_OFFSET(0xA4D9C60)
#define RPG_CLIENT_GRIDFIGHTGAMESESSION_ONAVATARDATACHANGED_OFFSET UNITYSDK_OFFSET(0xA4DE0F0)
#define RPG_CLIENT_GRIDFIGHTGAMESESSION_ONBATTLEFINISH_OFFSET UNITYSDK_OFFSET(0xA4DDF60)
#define RPG_CLIENT_GRIDFIGHTGAMESESSION_ONSETTLEFINISH_OFFSET UNITYSDK_OFFSET(0xA4DE000)
#define RPG_CLIENT_GRIDFIGHTGAMESESSION_SET_BATTLERESULT_OFFSET UNITYSDK_OFFSET(0xA4E1560)
#define RPG_CLIENT_GRIDFIGHTGAMESESSION_SET_CONTEXTDATA_OFFSET UNITYSDK_OFFSET(0xA4E1280)
#define RPG_CLIENT_GRIDFIGHTGAMESESSION_SET_DIVISIONID_OFFSET UNITYSDK_OFFSET(0xA4E1000)
#define RPG_CLIENT_GRIDFIGHTGAMESESSION_SET_ISOVERCHARGEMODE_OFFSET UNITYSDK_OFFSET(0xA4E1260)
#define RPG_CLIENT_GRIDFIGHTGAMESESSION_SET_SEASONID_OFFSET UNITYSDK_OFFSET(0xA4E0FE0)
#define RPG_CLIENT_GRIDFIGHTGAMESESSION_SET_SESSIONUID_OFFSET UNITYSDK_OFFSET(0xA4E1240)
#define RPG_CLIENT_GRIDFIGHTGAMESESSION_SET_SETTLERESULT_OFFSET UNITYSDK_OFFSET(0xA4E1580)
#define RPG_CLIENT_GRIDFIGHTGAMESESSION_SET_WAITMANUALQUITESETTLE_OFFSET UNITYSDK_OFFSET(0xA4E15A0)
#define RPG_CLIENT_GRIDFIGHTGAMESESSION_STARTBATTLE_OFFSET UNITYSDK_OFFSET(0xA4DDC20)
#define RPG_CLIENT_GRIDFIGHTGAMESESSION_SYNC_OFFSET UNITYSDK_OFFSET(0xA4DAD80)
#define RPG_CLIENT_GRIDFIGHTGAMESESSION_UPDATE_OFFSET UNITYSDK_OFFSET(0xA4DD210)
#define RPG_CLIENT_GRIDFIGHTGAMESESSION__ADDEQUIPTOBATTLECHANGEEVENT_OFFSET UNITYSDK_OFFSET(0xA4E0660)
#define RPG_CLIENT_GRIDFIGHTGAMESESSION__ADDROLEIDCHANGEDROLETOBATTLECHANGEEVENT_OFFSET UNITYSDK_OFFSET(0xA4E0C10)
#define RPG_CLIENT_GRIDFIGHTGAMESESSION__ADDSTARCHANGEDROLETOBATTLECHANGEEVENT_OFFSET UNITYSDK_OFFSET(0xA4E02F0)
#define RPG_CLIENT_GRIDFIGHTGAMESESSION__CTOR_OFFSET UNITYSDK_OFFSET(0xA4D9720)
#define RPG_CLIENT_GRIDFIGHTGAMESESSION__INITROLEEFFECT_OFFSET UNITYSDK_OFFSET(0xA4DD0A0)
#define RPG_CLIENT_GRIDFIGHTGAMESESSION__PROCESSUPDATEINFO_OFFSET UNITYSDK_OFFSET(0xA4DE180)
#define RPG_CLIENT_GRIDFIGHTGAMESESSION__SYNCAUGMENTINFO_OFFSET UNITYSDK_OFFSET(0xA4DC2C0)
#define RPG_CLIENT_GRIDFIGHTGAMESESSION__SYNCBOUNUSINFO_OFFSET UNITYSDK_OFFSET(0xA4DC330)
#define RPG_CLIENT_GRIDFIGHTGAMESESSION__SYNCCONTEXTVALUE_OFFSET UNITYSDK_OFFSET(0xA4DCF70)
#define RPG_CLIENT_GRIDFIGHTGAMESESSION__SYNCDRAFTINFO_OFFSET UNITYSDK_OFFSET(0xA4DC1F0)
#define RPG_CLIENT_GRIDFIGHTGAMESESSION__SYNCGRIDINFO_OFFSET UNITYSDK_OFFSET(0xA4DC060)
#define RPG_CLIENT_GRIDFIGHTGAMESESSION__SYNCITEMINFO_OFFSET UNITYSDK_OFFSET(0xA4DBE30)
#define RPG_CLIENT_GRIDFIGHTGAMESESSION__SYNCMODIFIERINFO_OFFSET UNITYSDK_OFFSET(0xA4DCFD0)
#define RPG_CLIENT_GRIDFIGHTGAMESESSION__SYNCPENDINGACTION_OFFSET UNITYSDK_OFFSET(0xA4DC3A0)
#define RPG_CLIENT_GRIDFIGHTGAMESESSION__SYNCPLAYERINFO_OFFSET UNITYSDK_OFFSET(0xA4DBEA0)
#define RPG_CLIENT_GRIDFIGHTGAMESESSION__SYNCPORTALINFO_OFFSET UNITYSDK_OFFSET(0xA4DC180)
#define RPG_CLIENT_GRIDFIGHTGAMESESSION__SYNCROLESHOPINFO_OFFSET UNITYSDK_OFFSET(0xA4DBF60)
#define RPG_CLIENT_GRIDFIGHTGAMESESSION__SYNCSTAGEINFO_OFFSET UNITYSDK_OFFSET(0xA4DC0D0)
#define RPG_CLIENT_GRIDFIGHTGAMESESSION__SYNCSTTINFO_OFFSET UNITYSDK_OFFSET(0xA4DC240)
#define RPG_CLIENT_GRIDFIGHTGAMESESSION__SYNCTRAITINFO_OFFSET UNITYSDK_OFFSET(0xA4DBFE0)
#define RPG_CLIENT_GRIDFIGHTGAMESESSION__SYNCTUTORIALUNLOCKINFO_OFFSET UNITYSDK_OFFSET(0xA4DCEA0)
#define RPG_CLIENT_GRIDFIGHTGAMESESSION__UPDATEBYSOURCE_OFFSET UNITYSDK_OFFSET(0xA4DD7B0)
#define RPG_CLIENT_GRIDFIGHTGAMESESSION__UPDATEGRIDEFFECT_OFFSET UNITYSDK_OFFSET(0xA4DD040)
#define RPG_CLIENT_GRIDFIGHTGAMESESSION__UPDATEMODIFIER_OFFSET UNITYSDK_OFFSET(0xA4DEE70)
#define RPG_CLIENT_GRIDFIGHTGAMESESSION__UPDATEROLEEFFECT_OFFSET UNITYSDK_OFFSET(0xA4DDAF0)
#define RPG_CLIENT_GRIDFIGHTGAMESESSION__UPDATEROLEPROPERTYMODIFIER_OFFSET UNITYSDK_OFFSET(0xA4DDB50)

namespace RPG::Client
{
	inline static constexpr unsigned int GridFightGameSession_TypeDefinitionIndex = 59711;

	class GridFightGameSession : public ::System::Object
	{
	public:
		::RPG::Client::GridFightBattleGameContext* _GridFightBattleGameContext; // 0x10
		::RPG::Client::GridFightTeam* _Team_k__BackingField; // 0x18
		::Class_1_D1AFAAA92B4C7CB7* _TutorialUnlockData_k__BackingField; // 0x20
		::RPG::Client::GridFightRoleShop* _RoleShop_k__BackingField; // 0x28
		::RPG::Client::GridFightBattleSttInfo* _BattleStt_k__BackingField; // 0x30
		::RPG::Client::GridFightBonusServerData* _Bonus_k__BackingField; // 0x38
		::Class_1_075C34D03AFA1215_35* _ContextData_k__BackingField; // 0x40
		::RPG::Client::GridFightTutorialManager* _TutorialManager_k__BackingField; // 0x48
		::RPG::Client::GridFightPortalServerData* _Portal_k__BackingField; // 0x50
		::RPG::Client::GridFightGameTrait* _GameTrait_k__BackingField; // 0x58
		::RPG::Client::GridFightPlayer* _Player_k__BackingField; // 0x60
		::RPG::Client::GridFightDraftServerData* _Draft_k__BackingField; // 0x68
		::Class_1_03D6D30E62EFB374* _UpdateSummary; // 0x70
		::RPG::Client::GridFightAssistant* _Assistant_k__BackingField; // 0x78
		::RPG::Client::GridFightGameEventData* _GameEventData; // 0x80
		::RPG::Client::GridFightPendingSelection* _PendingSelection_k__BackingField; // 0x88
		::RPG::Client::GridFightAugmentInfo* _Augment_k__BackingField; // 0x90
		::RPG::Client::GridFightStage* _Stage_k__BackingField; // 0x98
		::Class_1_97C12F8E672C3153* _ContextValue_k__BackingField; // 0xA0
		::RPG::Client::GridFightItemInfo* _ItemInfo_k__BackingField; // 0xA8
		::RPG::Client::GridFightSettleResultInfo* _SettleResult_k__BackingField; // 0xB0
		::RPG::Client::GridFightModifierInfo* _Modifier_k__BackingField; // 0xB8
		::RPG::Client::GridFightBattleResultInfo* _BattleResult_k__BackingField; // 0xC0
		::RPG::Client::GridFightOrbServerData* _Orb_k__BackingField; // 0xC8
		::RPG::Client::GridFightTrack* _Track_k__BackingField; // 0xD0
		::System::UInt32 _SessionUID_k__BackingField; // 0xD8
		::System::UInt32 _DivisionID_k__BackingField; // 0xDC
		::System::Boolean _IsOverChargeMode_k__BackingField; // 0xE0
		::System::Boolean _WaitManualQuiteSettle_k__BackingField; // 0xE1
		::System::UInt32 _SeasonID_k__BackingField; // 0xE4

		::System::Void _ctor(::System::UInt32 seasonID)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGAMESESSION__CTOR_OFFSET))(this, seasonID);
		}

		::System::Void Init()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGAMESESSION_INIT_OFFSET))(this);
		}

		::Class_0_16E4307DCC419505_718* get_TeamRepository()
		{
			return ((::Class_0_16E4307DCC419505_718*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGAMESESSION_GET_TEAMREPOSITORY_OFFSET))(this);
		}

		::Class_0_16E4307DCC419505_719* get_ItemRepository()
		{
			return ((::Class_0_16E4307DCC419505_719*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGAMESESSION_GET_ITEMREPOSITORY_OFFSET))(this);
		}

		::Class_0_16E4307DCC419505_720* get_TraitRepository()
		{
			return ((::Class_0_16E4307DCC419505_720*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGAMESESSION_GET_TRAITREPOSITORY_OFFSET))(this);
		}

		::System::Void Sync(::Class_1_14E02E1F6D70E487_4* gamePlayInfo)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_14E02E1F6D70E487_4*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGAMESESSION_SYNC_OFFSET))(this, gamePlayInfo);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGAMESESSION_DISPOSE_OFFSET))(this);
		}

		::System::Void Update(::Class_1_D40936EF3BF54118_43* data)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_D40936EF3BF54118_43*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGAMESESSION_UPDATE_OFFSET))(this, data);
		}

		::System::Void StartBattle()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGAMESESSION_STARTBATTLE_OFFSET))(this);
		}

		::System::Void OnBattleFinish(::Class_1_B94DDCD70CFEC484_1* ntf)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_B94DDCD70CFEC484_1*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGAMESESSION_ONBATTLEFINISH_OFFSET))(this, ntf);
		}

		::System::Void ClearBattleResult()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGAMESESSION_CLEARBATTLERESULT_OFFSET))(this);
		}

		::System::Void ClearBattleGameContext()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGAMESESSION_CLEARBATTLEGAMECONTEXT_OFFSET))(this);
		}

		::System::Void OnSettleFinish(::Class_1_A16A135FC5A0DDB9_2* ntf)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_A16A135FC5A0DDB9_2*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGAMESESSION_ONSETTLEFINISH_OFFSET))(this, ntf);
		}

		::System::Void OnAvatarDataChanged(::System::UInt32 avatarRealID)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGAMESESSION_ONAVATARDATACHANGED_OFFSET))(this, avatarRealID);
		}

		::System::Void _UpdateBySource(::Class_1_EB91F58AEEF3F578_1* data)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_EB91F58AEEF3F578_1*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGAMESESSION__UPDATEBYSOURCE_OFFSET))(this, data);
		}

		::System::Void _UpdateModifier(::Class_1_F95E70757E85280D* data)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_F95E70757E85280D*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGAMESESSION__UPDATEMODIFIER_OFFSET))(this, data);
		}

		::System::Void _ProcessUpdateInfo(::Class_1_F95E70757E85280D* update)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_F95E70757E85280D*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGAMESESSION__PROCESSUPDATEINFO_OFFSET))(this, update);
		}

		::System::Void _SyncItemInfo(::Class_1_F9EFCB63E481ADB7_1* itemInfo)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_F9EFCB63E481ADB7_1*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGAMESESSION__SYNCITEMINFO_OFFSET))(this, itemInfo);
		}

		::System::Void _SyncPlayerInfo(::Class_1_FB0633E85BD6CF8E_7* basicInfo)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_FB0633E85BD6CF8E_7*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGAMESESSION__SYNCPLAYERINFO_OFFSET))(this, basicInfo);
		}

		::System::Void _SyncRoleShopInfo(::Class_1_2E57B88467AF63C8_8* shopInfo)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_2E57B88467AF63C8_8*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGAMESESSION__SYNCROLESHOPINFO_OFFSET))(this, shopInfo);
		}

		::System::Void _SyncGridInfo(::Class_1_16A5F3BE522C8CC5* gridInfo)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_16A5F3BE522C8CC5*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGAMESESSION__SYNCGRIDINFO_OFFSET))(this, gridInfo);
		}

		::System::Void _SyncTraitInfo(::Class_1_FE6CD7C4A65B646F_3* traitInfo)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_FE6CD7C4A65B646F_3*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGAMESESSION__SYNCTRAITINFO_OFFSET))(this, traitInfo);
		}

		::System::Void _SyncStageInfo(::Class_1_D7F3D169C3137F53_1* gameLevelInfo)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_D7F3D169C3137F53_1*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGAMESESSION__SYNCSTAGEINFO_OFFSET))(this, gameLevelInfo);
		}

		::System::Void _SyncTutorialUnlockInfo(::Class_1_FB0633E85BD6CF8E_7* basicInfo)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_FB0633E85BD6CF8E_7*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGAMESESSION__SYNCTUTORIALUNLOCKINFO_OFFSET))(this, basicInfo);
		}

		::System::Void _SyncContextValue(::Class_1_E7028611E9315E2C* sttInfo)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_E7028611E9315E2C*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGAMESESSION__SYNCCONTEXTVALUE_OFFSET))(this, sttInfo);
		}

		::System::Void _SyncPendingAction(::Class_1_F0A446EC7AE7E87D* action)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_F0A446EC7AE7E87D*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGAMESESSION__SYNCPENDINGACTION_OFFSET))(this, action);
		}

		::System::Void _SyncPortalInfo(::Class_1_D7F3D169C3137F53_1* gameLevelInfo)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_D7F3D169C3137F53_1*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGAMESESSION__SYNCPORTALINFO_OFFSET))(this, gameLevelInfo);
		}

		::System::Void _SyncAugmentInfo(::Class_1_D40936EF3BF54118_35* augmentInfo)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_D40936EF3BF54118_35*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGAMESESSION__SYNCAUGMENTINFO_OFFSET))(this, augmentInfo);
		}

		::System::Void _SyncBounusInfo(::Class_1_FE6CD7C4A65B646F_2* bonusInfo)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_FE6CD7C4A65B646F_2*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGAMESESSION__SYNCBOUNUSINFO_OFFSET))(this, bonusInfo);
		}

		::System::Void _SyncDraftInfo(::Class_1_D7F3D169C3137F53_1* gameLevelInfo)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_D7F3D169C3137F53_1*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGAMESESSION__SYNCDRAFTINFO_OFFSET))(this, gameLevelInfo);
		}

		::System::Void _SyncSttInfo(::Class_1_D7F3D169C3137F53_1* gameLevelInfo)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_D7F3D169C3137F53_1*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGAMESESSION__SYNCSTTINFO_OFFSET))(this, gameLevelInfo);
		}

		::System::Void _SyncModifierInfo(::Class_1_D40936EF3BF54118_36* modifierInfo)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_D40936EF3BF54118_36*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGAMESESSION__SYNCMODIFIERINFO_OFFSET))(this, modifierInfo);
		}

		::System::Void _InitRoleEffect()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGAMESESSION__INITROLEEFFECT_OFFSET))(this);
		}

		::System::Void _UpdateGridEffect()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGAMESESSION__UPDATEGRIDEFFECT_OFFSET))(this);
		}

		::System::Void _UpdateRoleEffect()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGAMESESSION__UPDATEROLEEFFECT_OFFSET))(this);
		}

		::System::Void _UpdateRolePropertyModifier()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGAMESESSION__UPDATEROLEPROPERTYMODIFIER_OFFSET))(this);
		}

		::System::Boolean CompareWithCurTeam(::Class_1_7BF8FDF00F218876_18* rsp, ::RPG::Client::GridFightTeamChangeEvent*& event)
		{
			return ((::System::Boolean(*)(::PVOID, ::Class_1_7BF8FDF00F218876_18*, ::RPG::Client::GridFightTeamChangeEvent*&))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGAMESESSION_COMPAREWITHCURTEAM_OFFSET))(this, rsp, event);
		}

		::System::Void _AddStarChangedRoleToBattleChangeEvent(::RPG::Client::GridFightTeamChangeEvent* event, ::Class_1_A6B0B39A319DDDE2* role)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::GridFightTeamChangeEvent*, ::Class_1_A6B0B39A319DDDE2*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGAMESESSION__ADDSTARCHANGEDROLETOBATTLECHANGEEVENT_OFFSET))(this, event, role);
		}

		::System::Void _AddRoleIDChangedRoleToBattleChangeEvent(::RPG::Client::GridFightTeamChangeEvent* event, ::RPG::Client::GridFightRole* role, ::System::UInt32 roleID)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::GridFightTeamChangeEvent*, ::RPG::Client::GridFightRole*, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGAMESESSION__ADDROLEIDCHANGEDROLETOBATTLECHANGEEVENT_OFFSET))(this, event, role, roleID);
		}

		::System::Void _AddEquipToBattleChangeEvent(::RPG::Client::GridFightTeamChangeEvent* event, ::Class_1_A6B0B39A319DDDE2* role, ::System::UInt32 equipUID)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::GridFightTeamChangeEvent*, ::Class_1_A6B0B39A319DDDE2*, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGAMESESSION__ADDEQUIPTOBATTLECHANGEEVENT_OFFSET))(this, event, role, equipUID);
		}

		::System::UInt32 get_SeasonID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGAMESESSION_GET_SEASONID_OFFSET))(this);
		}

		::System::Void set_SeasonID(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGAMESESSION_SET_SEASONID_OFFSET))(this, value);
		}

		::System::UInt32 get_DivisionID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGAMESESSION_GET_DIVISIONID_OFFSET))(this);
		}

		::System::Void set_DivisionID(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGAMESESSION_SET_DIVISIONID_OFFSET))(this, value);
		}

		::System::UInt32 get_DivisionLevel()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGAMESESSION_GET_DIVISIONLEVEL_OFFSET))(this);
		}

		::System::Boolean get_IsPromotion()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGAMESESSION_GET_ISPROMOTION_OFFSET))(this);
		}

		::System::UInt32 get_SessionUID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGAMESESSION_GET_SESSIONUID_OFFSET))(this);
		}

		::System::Void set_SessionUID(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGAMESESSION_SET_SESSIONUID_OFFSET))(this, value);
		}

		::System::Boolean get_IsOverChargeMode()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGAMESESSION_GET_ISOVERCHARGEMODE_OFFSET))(this);
		}

		::System::Void set_IsOverChargeMode(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGAMESESSION_SET_ISOVERCHARGEMODE_OFFSET))(this, value);
		}

		::Class_1_075C34D03AFA1215_35* get_ContextData()
		{
			return ((::Class_1_075C34D03AFA1215_35*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGAMESESSION_GET_CONTEXTDATA_OFFSET))(this);
		}

		::System::Void set_ContextData(::Class_1_075C34D03AFA1215_35* value)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_075C34D03AFA1215_35*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGAMESESSION_SET_CONTEXTDATA_OFFSET))(this, value);
		}

		::System::Boolean get_IsTutorial()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGAMESESSION_GET_ISTUTORIAL_OFFSET))(this);
		}

		::RPG::Client::GridFightModifierInfo* get_Modifier()
		{
			return ((::RPG::Client::GridFightModifierInfo*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGAMESESSION_GET_MODIFIER_OFFSET))(this);
		}

		::Class_1_D1AFAAA92B4C7CB7* get_TutorialUnlockData()
		{
			return ((::Class_1_D1AFAAA92B4C7CB7*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGAMESESSION_GET_TUTORIALUNLOCKDATA_OFFSET))(this);
		}

		::RPG::Client::GridFightPendingSelection* get_PendingSelection()
		{
			return ((::RPG::Client::GridFightPendingSelection*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGAMESESSION_GET_PENDINGSELECTION_OFFSET))(this);
		}

		::RPG::Client::GridFightItemInfo* get_ItemInfo()
		{
			return ((::RPG::Client::GridFightItemInfo*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGAMESESSION_GET_ITEMINFO_OFFSET))(this);
		}

		::RPG::Client::GridFightPlayer* get_Player()
		{
			return ((::RPG::Client::GridFightPlayer*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGAMESESSION_GET_PLAYER_OFFSET))(this);
		}

		::RPG::Client::GridFightRoleShop* get_RoleShop()
		{
			return ((::RPG::Client::GridFightRoleShop*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGAMESESSION_GET_ROLESHOP_OFFSET))(this);
		}

		::RPG::Client::GridFightGameTrait* get_GameTrait()
		{
			return ((::RPG::Client::GridFightGameTrait*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGAMESESSION_GET_GAMETRAIT_OFFSET))(this);
		}

		::RPG::Client::GridFightTeam* get_Team()
		{
			return ((::RPG::Client::GridFightTeam*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGAMESESSION_GET_TEAM_OFFSET))(this);
		}

		::RPG::Client::GridFightStage* get_Stage()
		{
			return ((::RPG::Client::GridFightStage*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGAMESESSION_GET_STAGE_OFFSET))(this);
		}

		::RPG::Client::GridFightPortalServerData* get_Portal()
		{
			return ((::RPG::Client::GridFightPortalServerData*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGAMESESSION_GET_PORTAL_OFFSET))(this);
		}

		::RPG::Client::GridFightBonusServerData* get_Bonus()
		{
			return ((::RPG::Client::GridFightBonusServerData*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGAMESESSION_GET_BONUS_OFFSET))(this);
		}

		::RPG::Client::GridFightAugmentInfo* get_Augment()
		{
			return ((::RPG::Client::GridFightAugmentInfo*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGAMESESSION_GET_AUGMENT_OFFSET))(this);
		}

		::RPG::Client::GridFightDraftServerData* get_Draft()
		{
			return ((::RPG::Client::GridFightDraftServerData*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGAMESESSION_GET_DRAFT_OFFSET))(this);
		}

		::RPG::Client::GridFightOrbServerData* get_Orb()
		{
			return ((::RPG::Client::GridFightOrbServerData*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGAMESESSION_GET_ORB_OFFSET))(this);
		}

		::RPG::Client::GridFightBattleSttInfo* get_BattleStt()
		{
			return ((::RPG::Client::GridFightBattleSttInfo*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGAMESESSION_GET_BATTLESTT_OFFSET))(this);
		}

		::Class_1_97C12F8E672C3153* get_ContextValue()
		{
			return ((::Class_1_97C12F8E672C3153*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGAMESESSION_GET_CONTEXTVALUE_OFFSET))(this);
		}

		::RPG::Client::GridFightTrack* get_Track()
		{
			return ((::RPG::Client::GridFightTrack*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGAMESESSION_GET_TRACK_OFFSET))(this);
		}

		::RPG::Client::GridFightTutorialManager* get_TutorialManager()
		{
			return ((::RPG::Client::GridFightTutorialManager*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGAMESESSION_GET_TUTORIALMANAGER_OFFSET))(this);
		}

		::RPG::Client::GridFightGameTutorialData* get_TutorialData()
		{
			return ((::RPG::Client::GridFightGameTutorialData*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGAMESESSION_GET_TUTORIALDATA_OFFSET))(this);
		}

		::RPG::Client::GridFightAssistant* get_Assistant()
		{
			return ((::RPG::Client::GridFightAssistant*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGAMESESSION_GET_ASSISTANT_OFFSET))(this);
		}

		::RPG::Client::GridFightBattleResultInfo* get_BattleResult()
		{
			return ((::RPG::Client::GridFightBattleResultInfo*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGAMESESSION_GET_BATTLERESULT_OFFSET))(this);
		}

		::System::Void set_BattleResult(::RPG::Client::GridFightBattleResultInfo* value)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::GridFightBattleResultInfo*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGAMESESSION_SET_BATTLERESULT_OFFSET))(this, value);
		}

		::RPG::Client::GridFightSettleResultInfo* get_SettleResult()
		{
			return ((::RPG::Client::GridFightSettleResultInfo*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGAMESESSION_GET_SETTLERESULT_OFFSET))(this);
		}

		::System::Void set_SettleResult(::RPG::Client::GridFightSettleResultInfo* value)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::GridFightSettleResultInfo*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGAMESESSION_SET_SETTLERESULT_OFFSET))(this, value);
		}

		::System::Boolean get_WaitManualQuiteSettle()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGAMESESSION_GET_WAITMANUALQUITESETTLE_OFFSET))(this);
		}

		::System::Void set_WaitManualQuiteSettle(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGAMESESSION_SET_WAITMANUALQUITESETTLE_OFFSET))(this, value);
		}

		::RPG::Client::GridFightBattleGameContext* get_BattleGameContext()
		{
			return ((::RPG::Client::GridFightBattleGameContext*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGAMESESSION_GET_BATTLEGAMECONTEXT_OFFSET))(this);
		}
	};
}

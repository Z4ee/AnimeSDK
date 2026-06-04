#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_769;
class Class_0_16E4307DCC419505_770;
class Class_0_16E4307DCC419505_771;
class Class_1_075C34D03AFA1215_35;
class Class_1_08093FBB447FB7BD_12;
class Class_1_16A5F3BE522C8CC5;
class Class_1_21DCD4640D389503_27;
class Class_1_2E02BC1C49B0B2C5;
class Class_1_8844A4E6AE686D5C_2;
class Class_1_8844A4E6AE686D5C_3;
class Class_1_97C12F8E672C3153;
class Class_1_A16A135FC5A0DDB9_4;
class Class_1_A16A135FC5A0DDB9_5;
class Class_1_A6B0B39A319DDDE2;
class Class_1_B94DDCD70CFEC484_1;
class Class_1_D1AFAAA92B4C7CB7;
class Class_1_D2C0A39018B2EAE4;
class Class_1_D40936EF3BF54118_38;
class Class_1_D40936EF3BF54118_39;
class Class_1_D40936EF3BF54118_46;
class Class_1_D9306091D159D56B_2;
class Class_1_E577B5580A99D425_6;
class Class_1_E7028611E9315E2C;
class Class_1_EB91F58AEEF3F578_2;
class Class_1_F0A446EC7AE7E87D;
class Class_1_F9EFCB63E481ADB7_1;
class Class_1_FB0633E85BD6CF8E_4;
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

#define RPG_CLIENT_GRIDFIGHTGAMESESSION_CLEARBATTLEGAMECONTEXT_OFFSET UNITYSDK_OFFSET(0xBB824E0)
#define RPG_CLIENT_GRIDFIGHTGAMESESSION_CLEARBATTLERESULT_OFFSET UNITYSDK_OFFSET(0xBB83250)
#define RPG_CLIENT_GRIDFIGHTGAMESESSION_COMPAREWITHCURTEAM_OFFSET UNITYSDK_OFFSET(0xBB85810)
#define RPG_CLIENT_GRIDFIGHTGAMESESSION_DISPOSE_OFFSET UNITYSDK_OFFSET(0xBB82420)
#define RPG_CLIENT_GRIDFIGHTGAMESESSION_GET_ASSISTANT_OFFSET UNITYSDK_OFFSET(0xBB87880)
#define RPG_CLIENT_GRIDFIGHTGAMESESSION_GET_AUGMENT_OFFSET UNITYSDK_OFFSET(0xBB877F0)
#define RPG_CLIENT_GRIDFIGHTGAMESESSION_GET_BATTLEGAMECONTEXT_OFFSET UNITYSDK_OFFSET(0xBB878F0)
#define RPG_CLIENT_GRIDFIGHTGAMESESSION_GET_BATTLERESULT_OFFSET UNITYSDK_OFFSET(0xBB87890)
#define RPG_CLIENT_GRIDFIGHTGAMESESSION_GET_BATTLESTT_OFFSET UNITYSDK_OFFSET(0xBB87820)
#define RPG_CLIENT_GRIDFIGHTGAMESESSION_GET_BONUS_OFFSET UNITYSDK_OFFSET(0xBB877E0)
#define RPG_CLIENT_GRIDFIGHTGAMESESSION_GET_CONTEXTDATA_OFFSET UNITYSDK_OFFSET(0xBB875B0)
#define RPG_CLIENT_GRIDFIGHTGAMESESSION_GET_CONTEXTVALUE_OFFSET UNITYSDK_OFFSET(0xBB87830)
#define RPG_CLIENT_GRIDFIGHTGAMESESSION_GET_DIVISIONID_OFFSET UNITYSDK_OFFSET(0xBB87330)
#define RPG_CLIENT_GRIDFIGHTGAMESESSION_GET_DIVISIONLEVEL_OFFSET UNITYSDK_OFFSET(0xBB87350)
#define RPG_CLIENT_GRIDFIGHTGAMESESSION_GET_DRAFT_OFFSET UNITYSDK_OFFSET(0xBB87800)
#define RPG_CLIENT_GRIDFIGHTGAMESESSION_GET_GAMETRAIT_OFFSET UNITYSDK_OFFSET(0xBB877A0)
#define RPG_CLIENT_GRIDFIGHTGAMESESSION_GET_ISOVERCHARGEMODE_OFFSET UNITYSDK_OFFSET(0xBB87590)
#define RPG_CLIENT_GRIDFIGHTGAMESESSION_GET_ISPROMOTION_OFFSET UNITYSDK_OFFSET(0xBB873F0)
#define RPG_CLIENT_GRIDFIGHTGAMESESSION_GET_ISTUTORIAL_OFFSET UNITYSDK_OFFSET(0xBB875D0)
#define RPG_CLIENT_GRIDFIGHTGAMESESSION_GET_ITEMINFO_OFFSET UNITYSDK_OFFSET(0xBB87770)
#define RPG_CLIENT_GRIDFIGHTGAMESESSION_GET_ITEMREPOSITORY_OFFSET UNITYSDK_OFFSET(0xBB7FF30)
#define RPG_CLIENT_GRIDFIGHTGAMESESSION_GET_MODIFIER_OFFSET UNITYSDK_OFFSET(0xBB87740)
#define RPG_CLIENT_GRIDFIGHTGAMESESSION_GET_ORB_OFFSET UNITYSDK_OFFSET(0xBB87810)
#define RPG_CLIENT_GRIDFIGHTGAMESESSION_GET_PENDINGSELECTION_OFFSET UNITYSDK_OFFSET(0xBB87760)
#define RPG_CLIENT_GRIDFIGHTGAMESESSION_GET_PLAYER_OFFSET UNITYSDK_OFFSET(0xBB87780)
#define RPG_CLIENT_GRIDFIGHTGAMESESSION_GET_PORTAL_OFFSET UNITYSDK_OFFSET(0xBB877D0)
#define RPG_CLIENT_GRIDFIGHTGAMESESSION_GET_ROLESHOP_OFFSET UNITYSDK_OFFSET(0xBB87790)
#define RPG_CLIENT_GRIDFIGHTGAMESESSION_GET_SEASONID_OFFSET UNITYSDK_OFFSET(0xBB87310)
#define RPG_CLIENT_GRIDFIGHTGAMESESSION_GET_SESSIONUID_OFFSET UNITYSDK_OFFSET(0xBB87570)
#define RPG_CLIENT_GRIDFIGHTGAMESESSION_GET_SETTLERESULT_OFFSET UNITYSDK_OFFSET(0xBB878B0)
#define RPG_CLIENT_GRIDFIGHTGAMESESSION_GET_STAGE_OFFSET UNITYSDK_OFFSET(0xBB877C0)
#define RPG_CLIENT_GRIDFIGHTGAMESESSION_GET_TEAMREPOSITORY_OFFSET UNITYSDK_OFFSET(0xBB7FF20)
#define RPG_CLIENT_GRIDFIGHTGAMESESSION_GET_TEAM_OFFSET UNITYSDK_OFFSET(0xBB877B0)
#define RPG_CLIENT_GRIDFIGHTGAMESESSION_GET_TRACK_OFFSET UNITYSDK_OFFSET(0xBB87840)
#define RPG_CLIENT_GRIDFIGHTGAMESESSION_GET_TRAITREPOSITORY_OFFSET UNITYSDK_OFFSET(0xBB7FF40)
#define RPG_CLIENT_GRIDFIGHTGAMESESSION_GET_TUTORIALDATA_OFFSET UNITYSDK_OFFSET(0xBB87860)
#define RPG_CLIENT_GRIDFIGHTGAMESESSION_GET_TUTORIALMANAGER_OFFSET UNITYSDK_OFFSET(0xBB87850)
#define RPG_CLIENT_GRIDFIGHTGAMESESSION_GET_TUTORIALUNLOCKDATA_OFFSET UNITYSDK_OFFSET(0xBB87750)
#define RPG_CLIENT_GRIDFIGHTGAMESESSION_GET_WAITMANUALQUITESETTLE_OFFSET UNITYSDK_OFFSET(0xBB878D0)
#define RPG_CLIENT_GRIDFIGHTGAMESESSION_INIT_OFFSET UNITYSDK_OFFSET(0xBB7ED80)
#define RPG_CLIENT_GRIDFIGHTGAMESESSION_ONAVATARDATACHANGED_OFFSET UNITYSDK_OFFSET(0xBB83440)
#define RPG_CLIENT_GRIDFIGHTGAMESESSION_ONBATTLEFINISH_OFFSET UNITYSDK_OFFSET(0xBB832B0)
#define RPG_CLIENT_GRIDFIGHTGAMESESSION_ONSETTLEFINISH_OFFSET UNITYSDK_OFFSET(0xBB83350)
#define RPG_CLIENT_GRIDFIGHTGAMESESSION_SET_BATTLERESULT_OFFSET UNITYSDK_OFFSET(0xBB878A0)
#define RPG_CLIENT_GRIDFIGHTGAMESESSION_SET_CONTEXTDATA_OFFSET UNITYSDK_OFFSET(0xBB875C0)
#define RPG_CLIENT_GRIDFIGHTGAMESESSION_SET_DIVISIONID_OFFSET UNITYSDK_OFFSET(0xBB87340)
#define RPG_CLIENT_GRIDFIGHTGAMESESSION_SET_ISOVERCHARGEMODE_OFFSET UNITYSDK_OFFSET(0xBB875A0)
#define RPG_CLIENT_GRIDFIGHTGAMESESSION_SET_SEASONID_OFFSET UNITYSDK_OFFSET(0xBB87320)
#define RPG_CLIENT_GRIDFIGHTGAMESESSION_SET_SESSIONUID_OFFSET UNITYSDK_OFFSET(0xBB87580)
#define RPG_CLIENT_GRIDFIGHTGAMESESSION_SET_SETTLERESULT_OFFSET UNITYSDK_OFFSET(0xBB878C0)
#define RPG_CLIENT_GRIDFIGHTGAMESESSION_SET_WAITMANUALQUITESETTLE_OFFSET UNITYSDK_OFFSET(0xBB878E0)
#define RPG_CLIENT_GRIDFIGHTGAMESESSION_STARTBATTLE_OFFSET UNITYSDK_OFFSET(0xBB82F60)
#define RPG_CLIENT_GRIDFIGHTGAMESESSION_SYNC_OFFSET UNITYSDK_OFFSET(0xBB7FF50)
#define RPG_CLIENT_GRIDFIGHTGAMESESSION_UPDATE_OFFSET UNITYSDK_OFFSET(0xBB82540)
#define RPG_CLIENT_GRIDFIGHTGAMESESSION__ADDEQUIPTOBATTLECHANGEEVENT_OFFSET UNITYSDK_OFFSET(0xBB867E0)
#define RPG_CLIENT_GRIDFIGHTGAMESESSION__ADDROLEIDCHANGEDROLETOBATTLECHANGEEVENT_OFFSET UNITYSDK_OFFSET(0xBB86EC0)
#define RPG_CLIENT_GRIDFIGHTGAMESESSION__ADDSTARCHANGEDROLETOBATTLECHANGEEVENT_OFFSET UNITYSDK_OFFSET(0xBB86370)
#define RPG_CLIENT_GRIDFIGHTGAMESESSION__CTOR_OFFSET UNITYSDK_OFFSET(0xBB7E770)
#define RPG_CLIENT_GRIDFIGHTGAMESESSION__INITROLEEFFECT_OFFSET UNITYSDK_OFFSET(0xBB823C0)
#define RPG_CLIENT_GRIDFIGHTGAMESESSION__PROCESSUPDATEINFO_OFFSET UNITYSDK_OFFSET(0xBB834D0)
#define RPG_CLIENT_GRIDFIGHTGAMESESSION__SYNCAUGMENTINFO_OFFSET UNITYSDK_OFFSET(0xBB81630)
#define RPG_CLIENT_GRIDFIGHTGAMESESSION__SYNCBOUNUSINFO_OFFSET UNITYSDK_OFFSET(0xBB816A0)
#define RPG_CLIENT_GRIDFIGHTGAMESESSION__SYNCCONTEXTVALUE_OFFSET UNITYSDK_OFFSET(0xBB82290)
#define RPG_CLIENT_GRIDFIGHTGAMESESSION__SYNCDRAFTINFO_OFFSET UNITYSDK_OFFSET(0xBB81560)
#define RPG_CLIENT_GRIDFIGHTGAMESESSION__SYNCGRIDINFO_OFFSET UNITYSDK_OFFSET(0xBB813C0)
#define RPG_CLIENT_GRIDFIGHTGAMESESSION__SYNCITEMINFO_OFFSET UNITYSDK_OFFSET(0xBB81180)
#define RPG_CLIENT_GRIDFIGHTGAMESESSION__SYNCMODIFIERINFO_OFFSET UNITYSDK_OFFSET(0xBB822F0)
#define RPG_CLIENT_GRIDFIGHTGAMESESSION__SYNCPENDINGACTION_OFFSET UNITYSDK_OFFSET(0xBB81710)
#define RPG_CLIENT_GRIDFIGHTGAMESESSION__SYNCPLAYERINFO_OFFSET UNITYSDK_OFFSET(0xBB811F0)
#define RPG_CLIENT_GRIDFIGHTGAMESESSION__SYNCPORTALINFO_OFFSET UNITYSDK_OFFSET(0xBB814F0)
#define RPG_CLIENT_GRIDFIGHTGAMESESSION__SYNCROLESHOPINFO_OFFSET UNITYSDK_OFFSET(0xBB812B0)
#define RPG_CLIENT_GRIDFIGHTGAMESESSION__SYNCSTAGEINFO_OFFSET UNITYSDK_OFFSET(0xBB81430)
#define RPG_CLIENT_GRIDFIGHTGAMESESSION__SYNCSTTINFO_OFFSET UNITYSDK_OFFSET(0xBB815B0)
#define RPG_CLIENT_GRIDFIGHTGAMESESSION__SYNCTRAITINFO_OFFSET UNITYSDK_OFFSET(0xBB81330)
#define RPG_CLIENT_GRIDFIGHTGAMESESSION__SYNCTUTORIALUNLOCKINFO_OFFSET UNITYSDK_OFFSET(0xBB821C0)
#define RPG_CLIENT_GRIDFIGHTGAMESESSION__UPDATEBYSOURCE_OFFSET UNITYSDK_OFFSET(0xBB82AE0)
#define RPG_CLIENT_GRIDFIGHTGAMESESSION__UPDATEGRIDEFFECT_OFFSET UNITYSDK_OFFSET(0xBB82360)
#define RPG_CLIENT_GRIDFIGHTGAMESESSION__UPDATEMODIFIER_OFFSET UNITYSDK_OFFSET(0xBB844E0)
#define RPG_CLIENT_GRIDFIGHTGAMESESSION__UPDATEROLEEFFECT_OFFSET UNITYSDK_OFFSET(0xBB82E30)
#define RPG_CLIENT_GRIDFIGHTGAMESESSION__UPDATEROLEPROPERTYMODIFIER_OFFSET UNITYSDK_OFFSET(0xBB82E90)

namespace RPG::Client
{
	inline static constexpr unsigned int GridFightGameSession_TypeDefinitionIndex = 60646;

	class GridFightGameSession : public ::System::Object
	{
	public:
		::RPG::Client::GridFightTeam* _Team_k__BackingField; // 0x10
		::RPG::Client::GridFightTrack* _Track_k__BackingField; // 0x18
		::RPG::Client::GridFightRoleShop* _RoleShop_k__BackingField; // 0x20
		::RPG::Client::GridFightPendingSelection* _PendingSelection_k__BackingField; // 0x28
		::RPG::Client::GridFightAugmentInfo* _Augment_k__BackingField; // 0x30
		::RPG::Client::GridFightGameEventData* _GameEventData; // 0x38
		::RPG::Client::GridFightPlayer* _Player_k__BackingField; // 0x40
		::RPG::Client::GridFightBonusServerData* _Bonus_k__BackingField; // 0x48
		::RPG::Client::GridFightModifierInfo* _Modifier_k__BackingField; // 0x50
		::Class_1_97C12F8E672C3153* _ContextValue_k__BackingField; // 0x58
		::RPG::Client::GridFightOrbServerData* _Orb_k__BackingField; // 0x60
		::Class_1_2E02BC1C49B0B2C5* _UpdateSummary; // 0x68
		::Class_1_075C34D03AFA1215_35* _ContextData_k__BackingField; // 0x70
		::RPG::Client::GridFightBattleResultInfo* _BattleResult_k__BackingField; // 0x78
		::Class_1_D1AFAAA92B4C7CB7* _TutorialUnlockData_k__BackingField; // 0x80
		::RPG::Client::GridFightStage* _Stage_k__BackingField; // 0x88
		::RPG::Client::GridFightDraftServerData* _Draft_k__BackingField; // 0x90
		::RPG::Client::GridFightBattleSttInfo* _BattleStt_k__BackingField; // 0x98
		::RPG::Client::GridFightPortalServerData* _Portal_k__BackingField; // 0xA0
		::RPG::Client::GridFightBattleGameContext* _GridFightBattleGameContext; // 0xA8
		::RPG::Client::GridFightTutorialManager* _TutorialManager_k__BackingField; // 0xB0
		::RPG::Client::GridFightAssistant* _Assistant_k__BackingField; // 0xB8
		::RPG::Client::GridFightSettleResultInfo* _SettleResult_k__BackingField; // 0xC0
		::RPG::Client::GridFightGameTrait* _GameTrait_k__BackingField; // 0xC8
		::RPG::Client::GridFightItemInfo* _ItemInfo_k__BackingField; // 0xD0
		::System::UInt32 _SeasonID_k__BackingField; // 0xD8
		::System::UInt32 _DivisionID_k__BackingField; // 0xDC
		::System::Boolean _WaitManualQuiteSettle_k__BackingField; // 0xE0
		::System::Boolean _IsOverChargeMode_k__BackingField; // 0xE1
		::System::UInt32 _SessionUID_k__BackingField; // 0xE4

		::System::Void _ctor(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGAMESESSION__CTOR_OFFSET))(this, a1);
		}

		::System::Void Init()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGAMESESSION_INIT_OFFSET))(this);
		}

		::Class_0_16E4307DCC419505_769* get_TeamRepository()
		{
			return ((::Class_0_16E4307DCC419505_769*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGAMESESSION_GET_TEAMREPOSITORY_OFFSET))(this);
		}

		::Class_0_16E4307DCC419505_770* get_ItemRepository()
		{
			return ((::Class_0_16E4307DCC419505_770*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGAMESESSION_GET_ITEMREPOSITORY_OFFSET))(this);
		}

		::Class_0_16E4307DCC419505_771* get_TraitRepository()
		{
			return ((::Class_0_16E4307DCC419505_771*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGAMESESSION_GET_TRAITREPOSITORY_OFFSET))(this);
		}

		::System::Void Sync(::Class_1_A16A135FC5A0DDB9_4* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_A16A135FC5A0DDB9_4*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGAMESESSION_SYNC_OFFSET))(this, a1);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGAMESESSION_DISPOSE_OFFSET))(this);
		}

		::System::Void Update(::Class_1_D40936EF3BF54118_46* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_D40936EF3BF54118_46*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGAMESESSION_UPDATE_OFFSET))(this, a1);
		}

		::System::Void StartBattle()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGAMESESSION_STARTBATTLE_OFFSET))(this);
		}

		::System::Void OnBattleFinish(::Class_1_B94DDCD70CFEC484_1* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_B94DDCD70CFEC484_1*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGAMESESSION_ONBATTLEFINISH_OFFSET))(this, a1);
		}

		::System::Void ClearBattleResult()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGAMESESSION_CLEARBATTLERESULT_OFFSET))(this);
		}

		::System::Void ClearBattleGameContext()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGAMESESSION_CLEARBATTLEGAMECONTEXT_OFFSET))(this);
		}

		::System::Void OnSettleFinish(::Class_1_A16A135FC5A0DDB9_5* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_A16A135FC5A0DDB9_5*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGAMESESSION_ONSETTLEFINISH_OFFSET))(this, a1);
		}

		::System::Void OnAvatarDataChanged(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGAMESESSION_ONAVATARDATACHANGED_OFFSET))(this, a1);
		}

		::System::Void _UpdateBySource(::Class_1_EB91F58AEEF3F578_2* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_EB91F58AEEF3F578_2*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGAMESESSION__UPDATEBYSOURCE_OFFSET))(this, a1);
		}

		::System::Void _UpdateModifier(::Class_1_D2C0A39018B2EAE4* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_D2C0A39018B2EAE4*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGAMESESSION__UPDATEMODIFIER_OFFSET))(this, a1);
		}

		::System::Void _ProcessUpdateInfo(::Class_1_D2C0A39018B2EAE4* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_D2C0A39018B2EAE4*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGAMESESSION__PROCESSUPDATEINFO_OFFSET))(this, a1);
		}

		::System::Void _SyncItemInfo(::Class_1_F9EFCB63E481ADB7_1* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_F9EFCB63E481ADB7_1*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGAMESESSION__SYNCITEMINFO_OFFSET))(this, a1);
		}

		::System::Void _SyncPlayerInfo(::Class_1_21DCD4640D389503_27* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_21DCD4640D389503_27*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGAMESESSION__SYNCPLAYERINFO_OFFSET))(this, a1);
		}

		::System::Void _SyncRoleShopInfo(::Class_1_E577B5580A99D425_6* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_E577B5580A99D425_6*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGAMESESSION__SYNCROLESHOPINFO_OFFSET))(this, a1);
		}

		::System::Void _SyncGridInfo(::Class_1_16A5F3BE522C8CC5* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_16A5F3BE522C8CC5*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGAMESESSION__SYNCGRIDINFO_OFFSET))(this, a1);
		}

		::System::Void _SyncTraitInfo(::Class_1_8844A4E6AE686D5C_3* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_8844A4E6AE686D5C_3*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGAMESESSION__SYNCTRAITINFO_OFFSET))(this, a1);
		}

		::System::Void _SyncStageInfo(::Class_1_FB0633E85BD6CF8E_4* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_FB0633E85BD6CF8E_4*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGAMESESSION__SYNCSTAGEINFO_OFFSET))(this, a1);
		}

		::System::Void _SyncTutorialUnlockInfo(::Class_1_21DCD4640D389503_27* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_21DCD4640D389503_27*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGAMESESSION__SYNCTUTORIALUNLOCKINFO_OFFSET))(this, a1);
		}

		::System::Void _SyncContextValue(::Class_1_E7028611E9315E2C* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_E7028611E9315E2C*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGAMESESSION__SYNCCONTEXTVALUE_OFFSET))(this, a1);
		}

		::System::Void _SyncPendingAction(::Class_1_F0A446EC7AE7E87D* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_F0A446EC7AE7E87D*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGAMESESSION__SYNCPENDINGACTION_OFFSET))(this, a1);
		}

		::System::Void _SyncPortalInfo(::Class_1_FB0633E85BD6CF8E_4* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_FB0633E85BD6CF8E_4*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGAMESESSION__SYNCPORTALINFO_OFFSET))(this, a1);
		}

		::System::Void _SyncAugmentInfo(::Class_1_D40936EF3BF54118_38* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_D40936EF3BF54118_38*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGAMESESSION__SYNCAUGMENTINFO_OFFSET))(this, a1);
		}

		::System::Void _SyncBounusInfo(::Class_1_8844A4E6AE686D5C_2* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_8844A4E6AE686D5C_2*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGAMESESSION__SYNCBOUNUSINFO_OFFSET))(this, a1);
		}

		::System::Void _SyncDraftInfo(::Class_1_FB0633E85BD6CF8E_4* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_FB0633E85BD6CF8E_4*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGAMESESSION__SYNCDRAFTINFO_OFFSET))(this, a1);
		}

		::System::Void _SyncSttInfo(::Class_1_FB0633E85BD6CF8E_4* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_FB0633E85BD6CF8E_4*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGAMESESSION__SYNCSTTINFO_OFFSET))(this, a1);
		}

		::System::Void _SyncModifierInfo(::Class_1_D40936EF3BF54118_39* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_D40936EF3BF54118_39*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGAMESESSION__SYNCMODIFIERINFO_OFFSET))(this, a1);
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

		::System::Boolean CompareWithCurTeam(::Class_1_08093FBB447FB7BD_12* a1, ::RPG::Client::GridFightTeamChangeEvent*& a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::Class_1_08093FBB447FB7BD_12*, ::RPG::Client::GridFightTeamChangeEvent*&))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGAMESESSION_COMPAREWITHCURTEAM_OFFSET))(this, a1, a2);
		}

		::System::Void _AddStarChangedRoleToBattleChangeEvent(::RPG::Client::GridFightTeamChangeEvent* a1, ::Class_1_A6B0B39A319DDDE2* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::GridFightTeamChangeEvent*, ::Class_1_A6B0B39A319DDDE2*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGAMESESSION__ADDSTARCHANGEDROLETOBATTLECHANGEEVENT_OFFSET))(this, a1, a2);
		}

		::System::Void _AddRoleIDChangedRoleToBattleChangeEvent(::RPG::Client::GridFightTeamChangeEvent* a1, ::RPG::Client::GridFightRole* a2, ::System::UInt32 a3)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::GridFightTeamChangeEvent*, ::RPG::Client::GridFightRole*, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGAMESESSION__ADDROLEIDCHANGEDROLETOBATTLECHANGEEVENT_OFFSET))(this, a1, a2, a3);
		}

		::System::Void _AddEquipToBattleChangeEvent(::RPG::Client::GridFightTeamChangeEvent* a1, ::Class_1_A6B0B39A319DDDE2* a2, ::System::UInt32 a3)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::GridFightTeamChangeEvent*, ::Class_1_A6B0B39A319DDDE2*, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGAMESESSION__ADDEQUIPTOBATTLECHANGEEVENT_OFFSET))(this, a1, a2, a3);
		}

		::System::UInt32 get_SeasonID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGAMESESSION_GET_SEASONID_OFFSET))(this);
		}

		::System::Void set_SeasonID(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGAMESESSION_SET_SEASONID_OFFSET))(this, a1);
		}

		::System::UInt32 get_DivisionID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGAMESESSION_GET_DIVISIONID_OFFSET))(this);
		}

		::System::Void set_DivisionID(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGAMESESSION_SET_DIVISIONID_OFFSET))(this, a1);
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

		::System::Void set_SessionUID(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGAMESESSION_SET_SESSIONUID_OFFSET))(this, a1);
		}

		::System::Boolean get_IsOverChargeMode()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGAMESESSION_GET_ISOVERCHARGEMODE_OFFSET))(this);
		}

		::System::Void set_IsOverChargeMode(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGAMESESSION_SET_ISOVERCHARGEMODE_OFFSET))(this, a1);
		}

		::Class_1_075C34D03AFA1215_35* get_ContextData()
		{
			return ((::Class_1_075C34D03AFA1215_35*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGAMESESSION_GET_CONTEXTDATA_OFFSET))(this);
		}

		::System::Void set_ContextData(::Class_1_075C34D03AFA1215_35* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_075C34D03AFA1215_35*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGAMESESSION_SET_CONTEXTDATA_OFFSET))(this, a1);
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

		::System::Void set_BattleResult(::RPG::Client::GridFightBattleResultInfo* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::GridFightBattleResultInfo*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGAMESESSION_SET_BATTLERESULT_OFFSET))(this, a1);
		}

		::RPG::Client::GridFightSettleResultInfo* get_SettleResult()
		{
			return ((::RPG::Client::GridFightSettleResultInfo*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGAMESESSION_GET_SETTLERESULT_OFFSET))(this);
		}

		::System::Void set_SettleResult(::RPG::Client::GridFightSettleResultInfo* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::GridFightSettleResultInfo*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGAMESESSION_SET_SETTLERESULT_OFFSET))(this, a1);
		}

		::System::Boolean get_WaitManualQuiteSettle()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGAMESESSION_GET_WAITMANUALQUITESETTLE_OFFSET))(this);
		}

		::System::Void set_WaitManualQuiteSettle(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGAMESESSION_SET_WAITMANUALQUITESETTLE_OFFSET))(this, a1);
		}

		::RPG::Client::GridFightBattleGameContext* get_BattleGameContext()
		{
			return ((::RPG::Client::GridFightBattleGameContext*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGAMESESSION_GET_BATTLEGAMECONTEXT_OFFSET))(this);
		}
	};
}

#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_627;
class Class_0_16E4307DCC419505_628;
class Class_0_16E4307DCC419505_629;
class Class_1_03D6D30E62EFB374;
class Class_1_0CE138302AEB5621_1;
class Class_1_1800579EB201F674;
class Class_1_2137A492927FD693_1;
class Class_1_443A92A86A85B606_2;
class Class_1_6E708EAB438EC183_31;
class Class_1_789872D6523A4E58;
class Class_1_7908F22893896A73;
class Class_1_7A26D3FC0FA90BCA;
class Class_1_7C11C261870F1926_5;
class Class_1_9D5608F598A30CAC_18;
class Class_1_A16A135FC5A0DDB9_2;
class Class_1_B292FE068586E4C9_2;
class Class_1_B94DDCD70CFEC484_1;
class Class_1_D1AFAAA92B4C7CB7;
class Class_1_D2C0A39018B2EAE4;
class Class_1_E7C4009BCC22497A_30;
class Class_1_E7C4009BCC22497A_31;
class Class_1_E7C4009BCC22497A_32;
class Class_1_E7C4009BCC22497A_37;
class Class_1_E7EDAB23D97798C5_1;
class Class_1_F0A446EC7AE7E87D;
class Class_1_FB0633E85BD6CF8E_5;
class Class_1_FB0633E85BD6CF8E_6;
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
namespace RPG::Client { class GridFightOrbServerData; }
namespace RPG::Client { class GridFightPendingSelection; }
namespace RPG::Client { class GridFightPlayer; }
namespace RPG::Client { class GridFightPortalServerData; }
namespace RPG::Client { class GridFightRoleShop; }
namespace RPG::Client { class GridFightSettleResultInfo; }
namespace RPG::Client { class GridFightStage; }
namespace RPG::Client { class GridFightTeam; }
namespace RPG::Client { class GridFightTeamChangeEvent; }
namespace RPG::Client { class GridFightTrack; }
namespace RPG::Client { class GridFightTutorialManager; }
namespace System { template <typename T1, typename T2> class Func_2; }
namespace System::Collections::Generic { template <typename T> class IList_1; }

#define RPG_CLIENT_GRIDFIGHTGAMESESSION_CLEARBATTLEGAMECONTEXT_OFFSET UNITYSDK_OFFSET(0x983F4A0)
#define RPG_CLIENT_GRIDFIGHTGAMESESSION_CLEARBATTLERESULT_OFFSET UNITYSDK_OFFSET(0x9840200)
#define RPG_CLIENT_GRIDFIGHTGAMESESSION_COMPAREWITHCURTEAM_OFFSET UNITYSDK_OFFSET(0x9841140)
#define RPG_CLIENT_GRIDFIGHTGAMESESSION_DISPOSE_OFFSET UNITYSDK_OFFSET(0x983F380)
#define RPG_CLIENT_GRIDFIGHTGAMESESSION_GET_ASSISTANT_OFFSET UNITYSDK_OFFSET(0x9843240)
#define RPG_CLIENT_GRIDFIGHTGAMESESSION_GET_AUGMENT_OFFSET UNITYSDK_OFFSET(0x98431D0)
#define RPG_CLIENT_GRIDFIGHTGAMESESSION_GET_BATTLEGAMECONTEXT_OFFSET UNITYSDK_OFFSET(0x98432B0)
#define RPG_CLIENT_GRIDFIGHTGAMESESSION_GET_BATTLERESULT_OFFSET UNITYSDK_OFFSET(0x9843250)
#define RPG_CLIENT_GRIDFIGHTGAMESESSION_GET_BATTLESTT_OFFSET UNITYSDK_OFFSET(0x9843200)
#define RPG_CLIENT_GRIDFIGHTGAMESESSION_GET_BONUS_OFFSET UNITYSDK_OFFSET(0x98431C0)
#define RPG_CLIENT_GRIDFIGHTGAMESESSION_GET_CONTEXTDATA_OFFSET UNITYSDK_OFFSET(0x9842F90)
#define RPG_CLIENT_GRIDFIGHTGAMESESSION_GET_CONTEXTVALUE_OFFSET UNITYSDK_OFFSET(0x9843210)
#define RPG_CLIENT_GRIDFIGHTGAMESESSION_GET_DIVISIONID_OFFSET UNITYSDK_OFFSET(0x9842D40)
#define RPG_CLIENT_GRIDFIGHTGAMESESSION_GET_DIVISIONLEVEL_OFFSET UNITYSDK_OFFSET(0x9842D60)
#define RPG_CLIENT_GRIDFIGHTGAMESESSION_GET_DRAFT_OFFSET UNITYSDK_OFFSET(0x98431E0)
#define RPG_CLIENT_GRIDFIGHTGAMESESSION_GET_GAMETRAIT_OFFSET UNITYSDK_OFFSET(0x9843180)
#define RPG_CLIENT_GRIDFIGHTGAMESESSION_GET_ISOVERCHARGEMODE_OFFSET UNITYSDK_OFFSET(0x9842F70)
#define RPG_CLIENT_GRIDFIGHTGAMESESSION_GET_ISPROMOTION_OFFSET UNITYSDK_OFFSET(0x9842E00)
#define RPG_CLIENT_GRIDFIGHTGAMESESSION_GET_ISTUTORIAL_OFFSET UNITYSDK_OFFSET(0x9842FB0)
#define RPG_CLIENT_GRIDFIGHTGAMESESSION_GET_ITEMINFO_OFFSET UNITYSDK_OFFSET(0x9843150)
#define RPG_CLIENT_GRIDFIGHTGAMESESSION_GET_ITEMREPOSITORY_OFFSET UNITYSDK_OFFSET(0x983CF20)
#define RPG_CLIENT_GRIDFIGHTGAMESESSION_GET_MODIFIER_OFFSET UNITYSDK_OFFSET(0x9843120)
#define RPG_CLIENT_GRIDFIGHTGAMESESSION_GET_ORB_OFFSET UNITYSDK_OFFSET(0x98431F0)
#define RPG_CLIENT_GRIDFIGHTGAMESESSION_GET_PENDINGSELECTION_OFFSET UNITYSDK_OFFSET(0x9843140)
#define RPG_CLIENT_GRIDFIGHTGAMESESSION_GET_PLAYER_OFFSET UNITYSDK_OFFSET(0x9843160)
#define RPG_CLIENT_GRIDFIGHTGAMESESSION_GET_PORTAL_OFFSET UNITYSDK_OFFSET(0x98431B0)
#define RPG_CLIENT_GRIDFIGHTGAMESESSION_GET_ROLESHOP_OFFSET UNITYSDK_OFFSET(0x9843170)
#define RPG_CLIENT_GRIDFIGHTGAMESESSION_GET_SEASONID_OFFSET UNITYSDK_OFFSET(0x9842D20)
#define RPG_CLIENT_GRIDFIGHTGAMESESSION_GET_SESSIONUID_OFFSET UNITYSDK_OFFSET(0x9842F50)
#define RPG_CLIENT_GRIDFIGHTGAMESESSION_GET_SETTLERESULT_OFFSET UNITYSDK_OFFSET(0x9843270)
#define RPG_CLIENT_GRIDFIGHTGAMESESSION_GET_STAGE_OFFSET UNITYSDK_OFFSET(0x98431A0)
#define RPG_CLIENT_GRIDFIGHTGAMESESSION_GET_TEAMREPOSITORY_OFFSET UNITYSDK_OFFSET(0x983CF10)
#define RPG_CLIENT_GRIDFIGHTGAMESESSION_GET_TEAM_OFFSET UNITYSDK_OFFSET(0x9843190)
#define RPG_CLIENT_GRIDFIGHTGAMESESSION_GET_TRACK_OFFSET UNITYSDK_OFFSET(0x9843220)
#define RPG_CLIENT_GRIDFIGHTGAMESESSION_GET_TRAITREPOSITORY_OFFSET UNITYSDK_OFFSET(0x983CF30)
#define RPG_CLIENT_GRIDFIGHTGAMESESSION_GET_TUTORIALDATA_OFFSET UNITYSDK_OFFSET(0x9817BD0)
#define RPG_CLIENT_GRIDFIGHTGAMESESSION_GET_TUTORIALMANAGER_OFFSET UNITYSDK_OFFSET(0x9843230)
#define RPG_CLIENT_GRIDFIGHTGAMESESSION_GET_TUTORIALUNLOCKDATA_OFFSET UNITYSDK_OFFSET(0x9843130)
#define RPG_CLIENT_GRIDFIGHTGAMESESSION_GET_WAITMANUALQUITESETTLE_OFFSET UNITYSDK_OFFSET(0x9843290)
#define RPG_CLIENT_GRIDFIGHTGAMESESSION_INIT_OFFSET UNITYSDK_OFFSET(0x983BEA0)
#define RPG_CLIENT_GRIDFIGHTGAMESESSION_ONAVATARDATACHANGED_OFFSET UNITYSDK_OFFSET(0x98403F0)
#define RPG_CLIENT_GRIDFIGHTGAMESESSION_ONBATTLEFINISH_OFFSET UNITYSDK_OFFSET(0x9840260)
#define RPG_CLIENT_GRIDFIGHTGAMESESSION_ONSETTLEFINISH_OFFSET UNITYSDK_OFFSET(0x9840300)
#define RPG_CLIENT_GRIDFIGHTGAMESESSION_SET_BATTLERESULT_OFFSET UNITYSDK_OFFSET(0x9843260)
#define RPG_CLIENT_GRIDFIGHTGAMESESSION_SET_CONTEXTDATA_OFFSET UNITYSDK_OFFSET(0x9842FA0)
#define RPG_CLIENT_GRIDFIGHTGAMESESSION_SET_DIVISIONID_OFFSET UNITYSDK_OFFSET(0x9842D50)
#define RPG_CLIENT_GRIDFIGHTGAMESESSION_SET_ISOVERCHARGEMODE_OFFSET UNITYSDK_OFFSET(0x9842F80)
#define RPG_CLIENT_GRIDFIGHTGAMESESSION_SET_SEASONID_OFFSET UNITYSDK_OFFSET(0x9842D30)
#define RPG_CLIENT_GRIDFIGHTGAMESESSION_SET_SESSIONUID_OFFSET UNITYSDK_OFFSET(0x9842F60)
#define RPG_CLIENT_GRIDFIGHTGAMESESSION_SET_SETTLERESULT_OFFSET UNITYSDK_OFFSET(0x9843280)
#define RPG_CLIENT_GRIDFIGHTGAMESESSION_SET_WAITMANUALQUITESETTLE_OFFSET UNITYSDK_OFFSET(0x98432A0)
#define RPG_CLIENT_GRIDFIGHTGAMESESSION_STARTBATTLE_OFFSET UNITYSDK_OFFSET(0x983FF10)
#define RPG_CLIENT_GRIDFIGHTGAMESESSION_SYNC_OFFSET UNITYSDK_OFFSET(0x983CF40)
#define RPG_CLIENT_GRIDFIGHTGAMESESSION_UPDATE_OFFSET UNITYSDK_OFFSET(0x983F500)
#define RPG_CLIENT_GRIDFIGHTGAMESESSION__CTOR_OFFSET UNITYSDK_OFFSET(0x983B980)
#define RPG_CLIENT_GRIDFIGHTGAMESESSION__INITROLEEFFECT_OFFSET UNITYSDK_OFFSET(0x983F320)
#define RPG_CLIENT_GRIDFIGHTGAMESESSION__PROCESSUPDATEINFO_OFFSET UNITYSDK_OFFSET(0x9840480)
#define RPG_CLIENT_GRIDFIGHTGAMESESSION__SYNCAUGMENTINFO_OFFSET UNITYSDK_OFFSET(0x983E540)
#define RPG_CLIENT_GRIDFIGHTGAMESESSION__SYNCBOUNUSINFO_OFFSET UNITYSDK_OFFSET(0x983E5B0)
#define RPG_CLIENT_GRIDFIGHTGAMESESSION__SYNCCONTEXTVALUE_OFFSET UNITYSDK_OFFSET(0x983F1F0)
#define RPG_CLIENT_GRIDFIGHTGAMESESSION__SYNCDRAFTINFO_OFFSET UNITYSDK_OFFSET(0x983E470)
#define RPG_CLIENT_GRIDFIGHTGAMESESSION__SYNCGRIDINFO_OFFSET UNITYSDK_OFFSET(0x983E2D0)
#define RPG_CLIENT_GRIDFIGHTGAMESESSION__SYNCITEMINFO_OFFSET UNITYSDK_OFFSET(0x983E0C0)
#define RPG_CLIENT_GRIDFIGHTGAMESESSION__SYNCMODIFIERINFO_OFFSET UNITYSDK_OFFSET(0x983F250)
#define RPG_CLIENT_GRIDFIGHTGAMESESSION__SYNCPENDINGACTION_OFFSET UNITYSDK_OFFSET(0x983E620)
#define RPG_CLIENT_GRIDFIGHTGAMESESSION__SYNCPLAYERINFO_OFFSET UNITYSDK_OFFSET(0x983E130)
#define RPG_CLIENT_GRIDFIGHTGAMESESSION__SYNCPORTALINFO_OFFSET UNITYSDK_OFFSET(0x983E400)
#define RPG_CLIENT_GRIDFIGHTGAMESESSION__SYNCROLESHOPINFO_OFFSET UNITYSDK_OFFSET(0x983E1F0)
#define RPG_CLIENT_GRIDFIGHTGAMESESSION__SYNCSTAGEINFO_OFFSET UNITYSDK_OFFSET(0x983E340)
#define RPG_CLIENT_GRIDFIGHTGAMESESSION__SYNCSTTINFO_OFFSET UNITYSDK_OFFSET(0x983E4C0)
#define RPG_CLIENT_GRIDFIGHTGAMESESSION__SYNCTRAITINFO_OFFSET UNITYSDK_OFFSET(0x983E260)
#define RPG_CLIENT_GRIDFIGHTGAMESESSION__SYNCTUTORIALUNLOCKINFO_OFFSET UNITYSDK_OFFSET(0x983F120)
#define RPG_CLIENT_GRIDFIGHTGAMESESSION__UPDATEBYSOURCE_OFFSET UNITYSDK_OFFSET(0x983FAA0)
#define RPG_CLIENT_GRIDFIGHTGAMESESSION__UPDATEGRIDEFFECT_OFFSET UNITYSDK_OFFSET(0x983F2C0)
#define RPG_CLIENT_GRIDFIGHTGAMESESSION__UPDATEMODIFIER_OFFSET UNITYSDK_OFFSET(0x9841070)
#define RPG_CLIENT_GRIDFIGHTGAMESESSION__UPDATEROLEEFFECT_OFFSET UNITYSDK_OFFSET(0x983FDE0)
#define RPG_CLIENT_GRIDFIGHTGAMESESSION__UPDATEROLEPROPERTYMODIFIER_OFFSET UNITYSDK_OFFSET(0x983FE40)

namespace RPG::Client
{
	inline static constexpr unsigned int GridFightGameSession_TypeDefinitionIndex = 52660;

	class GridFightGameSession : public ::System::Object
	{
	public:
		::RPG::Client::GridFightPendingSelection* _PendingSelection_k__BackingField; // 0x10
		::RPG::Client::GridFightPortalServerData* _Portal_k__BackingField; // 0x18
		::RPG::Client::GridFightBonusServerData* _Bonus_k__BackingField; // 0x20
		::RPG::Client::GridFightTutorialManager* _TutorialManager_k__BackingField; // 0x28
		::RPG::Client::GridFightTeam* _Team_k__BackingField; // 0x30
		::RPG::Client::GridFightSettleResultInfo* _SettleResult_k__BackingField; // 0x38
		::RPG::Client::GridFightPlayer* _Player_k__BackingField; // 0x40
		::RPG::Client::GridFightItemInfo* _ItemInfo_k__BackingField; // 0x48
		::RPG::Client::GridFightGameEventData* _GameEventData; // 0x50
		::RPG::Client::GridFightAugmentInfo* _Augment_k__BackingField; // 0x58
		::Class_1_789872D6523A4E58* _Modifier_k__BackingField; // 0x60
		::Class_1_1800579EB201F674* _ContextValue_k__BackingField; // 0x68
		::RPG::Client::GridFightTrack* _Track_k__BackingField; // 0x70
		::RPG::Client::GridFightBattleSttInfo* _BattleStt_k__BackingField; // 0x78
		::RPG::Client::GridFightGameTrait* _GameTrait_k__BackingField; // 0x80
		::RPG::Client::GridFightAssistant* _Assistant_k__BackingField; // 0x88
		::RPG::Client::GridFightDraftServerData* _Draft_k__BackingField; // 0x90
		::Class_1_6E708EAB438EC183_31* _ContextData_k__BackingField; // 0x98
		::RPG::Client::GridFightStage* _Stage_k__BackingField; // 0xA0
		::RPG::Client::GridFightBattleResultInfo* _BattleResult_k__BackingField; // 0xA8
		::Class_1_D1AFAAA92B4C7CB7* _TutorialUnlockData_k__BackingField; // 0xB0
		::RPG::Client::GridFightBattleGameContext* _GridFightBattleGameContext; // 0xB8
		::RPG::Client::GridFightOrbServerData* _Orb_k__BackingField; // 0xC0
		::Class_1_03D6D30E62EFB374* _UpdateSummary; // 0xC8
		::RPG::Client::GridFightRoleShop* _RoleShop_k__BackingField; // 0xD0
		::System::Boolean _IsOverChargeMode_k__BackingField; // 0xD8
		::System::Boolean _WaitManualQuiteSettle_k__BackingField; // 0xD9
		::System::UInt32 _SeasonID_k__BackingField; // 0xDC
		::System::UInt32 _SessionUID_k__BackingField; // 0xE0
		::System::UInt32 _DivisionID_k__BackingField; // 0xE4

		::System::Void _ctor(::System::UInt32 seasonID)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGAMESESSION__CTOR_OFFSET))(this, seasonID);
		}

		::System::Void Init()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGAMESESSION_INIT_OFFSET))(this);
		}

		::Class_0_16E4307DCC419505_627* get_TeamRepository()
		{
			return ((::Class_0_16E4307DCC419505_627*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGAMESESSION_GET_TEAMREPOSITORY_OFFSET))(this);
		}

		::Class_0_16E4307DCC419505_628* get_ItemRepository()
		{
			return ((::Class_0_16E4307DCC419505_628*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGAMESESSION_GET_ITEMREPOSITORY_OFFSET))(this);
		}

		::Class_0_16E4307DCC419505_629* get_TraitRepository()
		{
			return ((::Class_0_16E4307DCC419505_629*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGAMESESSION_GET_TRAITREPOSITORY_OFFSET))(this);
		}

		::System::Void Sync(::Class_1_FB0633E85BD6CF8E_6* gamePlayInfo)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_FB0633E85BD6CF8E_6*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGAMESESSION_SYNC_OFFSET))(this, gamePlayInfo);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGAMESESSION_DISPOSE_OFFSET))(this);
		}

		::System::Void Update(::Class_1_E7C4009BCC22497A_37* data)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_E7C4009BCC22497A_37*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGAMESESSION_UPDATE_OFFSET))(this, data);
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

		::System::Void _UpdateBySource(::Class_1_443A92A86A85B606_2* data)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_443A92A86A85B606_2*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGAMESESSION__UPDATEBYSOURCE_OFFSET))(this, data);
		}

		::System::Void _UpdateModifier(::Class_1_D2C0A39018B2EAE4* data)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_D2C0A39018B2EAE4*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGAMESESSION__UPDATEMODIFIER_OFFSET))(this, data);
		}

		::System::Void _ProcessUpdateInfo(::Class_1_D2C0A39018B2EAE4* update)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_D2C0A39018B2EAE4*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGAMESESSION__PROCESSUPDATEINFO_OFFSET))(this, update);
		}

		::System::Void _SyncItemInfo(::Class_1_0CE138302AEB5621_1* itemInfo)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_0CE138302AEB5621_1*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGAMESESSION__SYNCITEMINFO_OFFSET))(this, itemInfo);
		}

		::System::Void _SyncPlayerInfo(::Class_1_7C11C261870F1926_5* basicInfo)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_7C11C261870F1926_5*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGAMESESSION__SYNCPLAYERINFO_OFFSET))(this, basicInfo);
		}

		::System::Void _SyncRoleShopInfo(::Class_1_7A26D3FC0FA90BCA* shopInfo)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_7A26D3FC0FA90BCA*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGAMESESSION__SYNCROLESHOPINFO_OFFSET))(this, shopInfo);
		}

		::System::Void _SyncGridInfo(::Class_1_E7EDAB23D97798C5_1* gridInfo)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_E7EDAB23D97798C5_1*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGAMESESSION__SYNCGRIDINFO_OFFSET))(this, gridInfo);
		}

		::System::Void _SyncTraitInfo(::Class_1_E7C4009BCC22497A_31* traitInfo)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_E7C4009BCC22497A_31*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGAMESESSION__SYNCTRAITINFO_OFFSET))(this, traitInfo);
		}

		::System::Void _SyncStageInfo(::Class_1_FB0633E85BD6CF8E_5* gameLevelInfo)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_FB0633E85BD6CF8E_5*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGAMESESSION__SYNCSTAGEINFO_OFFSET))(this, gameLevelInfo);
		}

		::System::Void _SyncTutorialUnlockInfo(::Class_1_7C11C261870F1926_5* basicInfo)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_7C11C261870F1926_5*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGAMESESSION__SYNCTUTORIALUNLOCKINFO_OFFSET))(this, basicInfo);
		}

		::System::Void _SyncContextValue(::Class_1_7908F22893896A73* sttInfo)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_7908F22893896A73*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGAMESESSION__SYNCCONTEXTVALUE_OFFSET))(this, sttInfo);
		}

		::System::Void _SyncPendingAction(::Class_1_F0A446EC7AE7E87D* action)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_F0A446EC7AE7E87D*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGAMESESSION__SYNCPENDINGACTION_OFFSET))(this, action);
		}

		::System::Void _SyncPortalInfo(::Class_1_FB0633E85BD6CF8E_5* gameLevelInfo)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_FB0633E85BD6CF8E_5*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGAMESESSION__SYNCPORTALINFO_OFFSET))(this, gameLevelInfo);
		}

		::System::Void _SyncAugmentInfo(::Class_1_E7C4009BCC22497A_30* augmentInfo)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_E7C4009BCC22497A_30*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGAMESESSION__SYNCAUGMENTINFO_OFFSET))(this, augmentInfo);
		}

		::System::Void _SyncBounusInfo(::Class_1_B292FE068586E4C9_2* bonusInfo)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_B292FE068586E4C9_2*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGAMESESSION__SYNCBOUNUSINFO_OFFSET))(this, bonusInfo);
		}

		::System::Void _SyncDraftInfo(::Class_1_FB0633E85BD6CF8E_5* gameLevelInfo)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_FB0633E85BD6CF8E_5*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGAMESESSION__SYNCDRAFTINFO_OFFSET))(this, gameLevelInfo);
		}

		::System::Void _SyncSttInfo(::Class_1_FB0633E85BD6CF8E_5* gameLevelInfo)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_FB0633E85BD6CF8E_5*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGAMESESSION__SYNCSTTINFO_OFFSET))(this, gameLevelInfo);
		}

		::System::Void _SyncModifierInfo(::Class_1_E7C4009BCC22497A_32* modifierInfo)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_E7C4009BCC22497A_32*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGAMESESSION__SYNCMODIFIERINFO_OFFSET))(this, modifierInfo);
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

		::System::Boolean CompareWithCurTeam(::Class_1_9D5608F598A30CAC_18* rsp, ::RPG::Client::GridFightTeamChangeEvent*& event)
		{
			return ((::System::Boolean(*)(::PVOID, ::Class_1_9D5608F598A30CAC_18*, ::RPG::Client::GridFightTeamChangeEvent*&))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGAMESESSION_COMPAREWITHCURTEAM_OFFSET))(this, rsp, event);
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

		::Class_1_6E708EAB438EC183_31* get_ContextData()
		{
			return ((::Class_1_6E708EAB438EC183_31*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGAMESESSION_GET_CONTEXTDATA_OFFSET))(this);
		}

		::System::Void set_ContextData(::Class_1_6E708EAB438EC183_31* value)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_6E708EAB438EC183_31*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGAMESESSION_SET_CONTEXTDATA_OFFSET))(this, value);
		}

		::System::Boolean get_IsTutorial()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGAMESESSION_GET_ISTUTORIAL_OFFSET))(this);
		}

		::Class_1_789872D6523A4E58* get_Modifier()
		{
			return ((::Class_1_789872D6523A4E58*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGAMESESSION_GET_MODIFIER_OFFSET))(this);
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

		::Class_1_1800579EB201F674* get_ContextValue()
		{
			return ((::Class_1_1800579EB201F674*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGAMESESSION_GET_CONTEXTVALUE_OFFSET))(this);
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

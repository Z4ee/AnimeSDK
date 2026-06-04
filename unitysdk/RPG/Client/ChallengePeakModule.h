#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/BaseModule.h"
#include "unitysdk/System/Nullable_1.h"

class Class_1_013F7EA9B96EBD65;
class Class_1_45BB92167AED63A0_14;
namespace Google::Protobuf::Collections { template <typename T> class RepeatedField_1; }
namespace Proto { class Item; }
namespace RPG::Client { class ChallengePeak; }
namespace RPG::Client { class ChallengePeakBoss; }
namespace RPG::Client { class ChallengePeakGroup; }
namespace RPG::Client { class ChallengePeakRewardGroup; }
namespace RPG::Client { class ItemDisplayData; }
namespace RPG::Client { class QuestData; }
namespace RPG::Client::Promises { class IPromise; }
namespace RPG::GameCore { class ChallengePeakRewardRow; }
namespace System { class Object; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class IReadOnlyList_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_CHALLENGEPEAKMODULE_CHECKCURRENTGROUPHASENTERED_OFFSET UNITYSDK_OFFSET(0xB56B3C0)
#define RPG_CLIENT_CHALLENGEPEAKMODULE_CHECKGROUPISFORCEHARDBOSSHASCONFIRMED_OFFSET UNITYSDK_OFFSET(0xB56AD30)
#define RPG_CLIENT_CHALLENGEPEAKMODULE_CHECKUNLOCK_OFFSET UNITYSDK_OFFSET(0xB56AE40)
#define RPG_CLIENT_CHALLENGEPEAKMODULE_CONFIRMCHALLENGEPEAKSETTLE_OFFSET UNITYSDK_OFFSET(0xB56AB70)
#define RPG_CLIENT_CHALLENGEPEAKMODULE_GETCHALLENGEPEAKBOSS_OFFSET UNITYSDK_OFFSET(0xB567D10)
#define RPG_CLIENT_CHALLENGEPEAKMODULE_GETCHALLENGEPEAKGROUP_OFFSET UNITYSDK_OFFSET(0xB56A930)
#define RPG_CLIENT_CHALLENGEPEAKMODULE_GETCHALLENGEPEAK_OFFSET UNITYSDK_OFFSET(0xB567A60)
#define RPG_CLIENT_CHALLENGEPEAKMODULE_GETCURRENTPEAKGROUP_OFFSET UNITYSDK_OFFSET(0xB55E7E0)
#define RPG_CLIENT_CHALLENGEPEAKMODULE_GETPREQUESTS_OFFSET UNITYSDK_OFFSET(0xB56AF00)
#define RPG_CLIENT_CHALLENGEPEAKMODULE_GET_ABOUTTOEXPIRETHRESHOLDDAYS_OFFSET UNITYSDK_OFFSET(0xB569350)
#define RPG_CLIENT_CHALLENGEPEAKMODULE_GET_CANENTERFROMHANDBOOKQUESTID_OFFSET UNITYSDK_OFFSET(0xB56A150)
#define RPG_CLIENT_CHALLENGEPEAKMODULE_GET_CHALLENGEPEAKUNLOCKQUESTID_OFFSET UNITYSDK_OFFSET(0xB56A080)
#define RPG_CLIENT_CHALLENGEPEAKMODULE_GET_CURRENTPEAKGROUPID_OFFSET UNITYSDK_OFFSET(0xB55E6C0)
#define RPG_CLIENT_CHALLENGEPEAKMODULE_GET_ENTRANCEID_OFFSET UNITYSDK_OFFSET(0xB56A620)
#define RPG_CLIENT_CHALLENGEPEAKMODULE_GET_HANDBOOKEASYBOSSBANNERPATH_OFFSET UNITYSDK_OFFSET(0xB56A6B0)
#define RPG_CLIENT_CHALLENGEPEAKMODULE_GET_HANDBOOKHARDBOSSBANNERPATH_OFFSET UNITYSDK_OFFSET(0xB56A7A0)
#define RPG_CLIENT_CHALLENGEPEAKMODULE_GET_MAPINFOID_OFFSET UNITYSDK_OFFSET(0xB56A520)
#define RPG_CLIENT_CHALLENGEPEAKMODULE_GET_PREQUESTIDS_OFFSET UNITYSDK_OFFSET(0xB56A250)
#define RPG_CLIENT_CHALLENGEPEAKMODULE_GET_SHOPID_OFFSET UNITYSDK_OFFSET(0xB566DC0)
#define RPG_CLIENT_CHALLENGEPEAKMODULE_GET_TUTORIALMAINMISSIONID_OFFSET UNITYSDK_OFFSET(0xB565310)
#define RPG_CLIENT_CHALLENGEPEAKMODULE_INIT_OFFSET UNITYSDK_OFFSET(0xB56B650)
#define RPG_CLIENT_CHALLENGEPEAKMODULE_ISCANENTERFROMHANDBOOK_OFFSET UNITYSDK_OFFSET(0xB56B300)
#define RPG_CLIENT_CHALLENGEPEAKMODULE_LEAVECHALLENGEPEAK_OFFSET UNITYSDK_OFFSET(0xB5652C0)
#define RPG_CLIENT_CHALLENGEPEAKMODULE_MARKCURRENTGROUPHASENTERED_OFFSET UNITYSDK_OFFSET(0xB56B4E0)
#define RPG_CLIENT_CHALLENGEPEAKMODULE_MARKGROUPFORCEHARDBOSSHASCONFIRMED_OFFSET UNITYSDK_OFFSET(0xB56ABE0)
#define RPG_CLIENT_CHALLENGEPEAKMODULE_ONRECONNECT_OFFSET UNITYSDK_OFFSET(0xB56BE60)
#define RPG_CLIENT_CHALLENGEPEAKMODULE_RESTARTCHALLENGEPEAK_OFFSET UNITYSDK_OFFSET(0xB565260)
#define RPG_CLIENT_CHALLENGEPEAKMODULE_SENDGETCHALLENGEPEAKDATAREQUEST_OFFSET UNITYSDK_OFFSET(0xB56A890)
#define RPG_CLIENT_CHALLENGEPEAKMODULE_SENDMODULEINITREQUEST_OFFSET UNITYSDK_OFFSET(0xB56A8E0)
#define RPG_CLIENT_CHALLENGEPEAKMODULE_SETBOSSHARDMODE_OFFSET UNITYSDK_OFFSET(0xB56AB00)
#define RPG_CLIENT_CHALLENGEPEAKMODULE_SETCHALLENGEPEAKMONSTERLINEUPS_OFFSET UNITYSDK_OFFSET(0xB56A9C0)
#define RPG_CLIENT_CHALLENGEPEAKMODULE_STARTCHALLENGEPEAK_OFFSET UNITYSDK_OFFSET(0xB5651D0)
#define RPG_CLIENT_CHALLENGEPEAKMODULE_TAKEREWARD_OFFSET UNITYSDK_OFFSET(0xB56AA30)
#define RPG_CLIENT_CHALLENGEPEAKMODULE__ADDDISPLAYITEMDATASBYREWARDS_OFFSET UNITYSDK_OFFSET(0xB56C740)
#define RPG_CLIENT_CHALLENGEPEAKMODULE__ADDNOTIFYHANDLERS_OFFSET UNITYSDK_OFFSET(0xB56BE20)
#define RPG_CLIENT_CHALLENGEPEAKMODULE__ADDPACKETHANDLERS_OFFSET UNITYSDK_OFFSET(0xB56B760)
#define RPG_CLIENT_CHALLENGEPEAKMODULE__BUILDREWARDGROUPMAPPING_OFFSET UNITYSDK_OFFSET(0xB56CC10)
#define RPG_CLIENT_CHALLENGEPEAKMODULE__CREATEALLGROUPS_OFFSET UNITYSDK_OFFSET(0xB56CF30)
#define RPG_CLIENT_CHALLENGEPEAKMODULE__CREATECHALLENGEPEAKBOSS_OFFSET UNITYSDK_OFFSET(0xB56DC00)
#define RPG_CLIENT_CHALLENGEPEAKMODULE__CREATECHALLENGEPEAK_OFFSET UNITYSDK_OFFSET(0xB56DB30)
#define RPG_CLIENT_CHALLENGEPEAKMODULE__CREATEREWARDGROUP_OFFSET UNITYSDK_OFFSET(0xB56D870)
#define RPG_CLIENT_CHALLENGEPEAKMODULE__CTOR_OFFSET UNITYSDK_OFFSET(0xB56DE60)
#define RPG_CLIENT_CHALLENGEPEAKMODULE__INITDATA_OFFSET UNITYSDK_OFFSET(0xB56B710)
#define RPG_CLIENT_CHALLENGEPEAKMODULE__ONCHALLENGEPEAKGROUPDATAUPDATESCNOTIFY_OFFSET UNITYSDK_OFFSET(0xB56C010)
#define RPG_CLIENT_CHALLENGEPEAKMODULE__ONCHALLENGEPEAKSETTLESCNOTIFY_OFFSET UNITYSDK_OFFSET(0xB56C0D0)
#define RPG_CLIENT_CHALLENGEPEAKMODULE__ONGETCHALLENGEPEAKDATASCRSP_OFFSET UNITYSDK_OFFSET(0xB56BEB0)
#define RPG_CLIENT_CHALLENGEPEAKMODULE__ONGETCURCHALLENGEPEAKSCRSP_OFFSET UNITYSDK_OFFSET(0xB56BF50)
#define RPG_CLIENT_CHALLENGEPEAKMODULE__ONRECEIVERESPONSE_OFFSET UNITYSDK_OFFSET(0xB56CAF0)
#define RPG_CLIENT_CHALLENGEPEAKMODULE__ONSETCHALLENGEPEAKBOSSHARDMODESCRSP_OFFSET UNITYSDK_OFFSET(0xB56CB60)
#define RPG_CLIENT_CHALLENGEPEAKMODULE__ONTAKECHALLENGEPEAKREWARDSCRSP_OFFSET UNITYSDK_OFFSET(0xB56C3A0)
#define RPG_CLIENT_CHALLENGEPEAKMODULE___IFIXBASEPROXY_INIT_OFFSET UNITYSDK_OFFSET(0xB56E000)
#define RPG_CLIENT_CHALLENGEPEAKMODULE___IFIXBASEPROXY_ONRECONNECT_OFFSET UNITYSDK_OFFSET(0xB56E140)
#define RPG_CLIENT_CHALLENGEPEAKMODULE___IFIXBASEPROXY__ADDNOTIFYHANDLERS_OFFSET UNITYSDK_OFFSET(0xB56E0E0)
#define RPG_CLIENT_CHALLENGEPEAKMODULE___IFIXBASEPROXY__ADDPACKETHANDLERS_OFFSET UNITYSDK_OFFSET(0xB56E080)

namespace RPG::Client
{
	inline static constexpr unsigned int ChallengePeakModule_TypeDefinitionIndex = 59124;

	class ChallengePeakModule : public ::RPG::Client::BaseModule
	{
	public:
		::System::String* _HandbookEasyBossBannerPath; // 0x10
		::System::Collections::Generic::IReadOnlyList_1<::System::UInt32>* _PreQuestIDs; // 0x18
		::System::String* _HandbookHardBossBannerPath; // 0x20
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::Client::ChallengePeak*>* _ChallengePeaks; // 0x28
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::Client::ChallengePeakGroup*>* _ChallengePeakGroups; // 0x30
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::Client::ChallengePeakBoss*>* _ChallengePeakBosses; // 0x38
		::Class_1_013F7EA9B96EBD65* _ServerAgent; // 0x40
		::System::Nullable_1<::System::UInt32> _ChallengePeakUnlockQuestID; // 0x48
		::System::Nullable_1<::System::UInt32> _AboutToExpireThresholdDays; // 0x50
		::System::Nullable_1<::System::UInt32> _TutorialMainMissionID; // 0x58
		::System::Nullable_1<::System::UInt32> _EntranceID; // 0x60
		::System::Nullable_1<::System::UInt32> _MapInfoID; // 0x68
		::System::Nullable_1<::System::Int32> _ShopID; // 0x70
		::System::Nullable_1<::System::UInt32> _CanEnterFromHandbookQuestID; // 0x78

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEPEAKMODULE__CTOR_OFFSET))(this);
		}

		::System::UInt32 get_ChallengePeakUnlockQuestID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEPEAKMODULE_GET_CHALLENGEPEAKUNLOCKQUESTID_OFFSET))(this);
		}

		::System::UInt32 get_CanEnterFromHandbookQuestID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEPEAKMODULE_GET_CANENTERFROMHANDBOOKQUESTID_OFFSET))(this);
		}

		::System::Int32 get_ShopID()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEPEAKMODULE_GET_SHOPID_OFFSET))(this);
		}

		::System::Collections::Generic::IReadOnlyList_1<::System::UInt32>* get_PreQuestIDs()
		{
			return ((::System::Collections::Generic::IReadOnlyList_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEPEAKMODULE_GET_PREQUESTIDS_OFFSET))(this);
		}

		::System::UInt32 get_MapInfoID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEPEAKMODULE_GET_MAPINFOID_OFFSET))(this);
		}

		::System::UInt32 get_EntranceID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEPEAKMODULE_GET_ENTRANCEID_OFFSET))(this);
		}

		::System::UInt32 get_AboutToExpireThresholdDays()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEPEAKMODULE_GET_ABOUTTOEXPIRETHRESHOLDDAYS_OFFSET))(this);
		}

		::System::UInt32 get_TutorialMainMissionID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEPEAKMODULE_GET_TUTORIALMAINMISSIONID_OFFSET))(this);
		}

		::System::String* get_HandbookEasyBossBannerPath()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEPEAKMODULE_GET_HANDBOOKEASYBOSSBANNERPATH_OFFSET))(this);
		}

		::System::String* get_HandbookHardBossBannerPath()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEPEAKMODULE_GET_HANDBOOKHARDBOSSBANNERPATH_OFFSET))(this);
		}

		::System::UInt32 get_CurrentPeakGroupID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEPEAKMODULE_GET_CURRENTPEAKGROUPID_OFFSET))(this);
		}

		::System::Void SendGetChallengePeakDataRequest()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEPEAKMODULE_SENDGETCHALLENGEPEAKDATAREQUEST_OFFSET))(this);
		}

		::System::Void SendModuleInitRequest()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEPEAKMODULE_SENDMODULEINITREQUEST_OFFSET))(this);
		}

		::RPG::Client::ChallengePeakGroup* GetCurrentPeakGroup()
		{
			return ((::RPG::Client::ChallengePeakGroup*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEPEAKMODULE_GETCURRENTPEAKGROUP_OFFSET))(this);
		}

		::RPG::Client::ChallengePeakGroup* GetChallengePeakGroup(::System::UInt32 a1)
		{
			return ((::RPG::Client::ChallengePeakGroup*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEPEAKMODULE_GETCHALLENGEPEAKGROUP_OFFSET))(this, a1);
		}

		::RPG::Client::ChallengePeak* GetChallengePeak(::System::UInt32 a1)
		{
			return ((::RPG::Client::ChallengePeak*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEPEAKMODULE_GETCHALLENGEPEAK_OFFSET))(this, a1);
		}

		::RPG::Client::ChallengePeakBoss* GetChallengePeakBoss(::System::UInt32 a1)
		{
			return ((::RPG::Client::ChallengePeakBoss*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEPEAKMODULE_GETCHALLENGEPEAKBOSS_OFFSET))(this, a1);
		}

		::RPG::Client::Promises::IPromise* SetChallengePeakMonsterLineups(::System::UInt32 a1, ::System::Collections::Generic::List_1<::Class_1_45BB92167AED63A0_14*>* a2)
		{
			return ((::RPG::Client::Promises::IPromise*(*)(::PVOID, ::System::UInt32, ::System::Collections::Generic::List_1<::Class_1_45BB92167AED63A0_14*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEPEAKMODULE_SETCHALLENGEPEAKMONSTERLINEUPS_OFFSET))(this, a1, a2);
		}

		::RPG::Client::Promises::IPromise* StartChallengePeak(::System::UInt32 a1, ::System::UInt32 a2, ::System::Collections::Generic::List_1<::System::UInt32>* a3)
		{
			return ((::RPG::Client::Promises::IPromise*(*)(::PVOID, ::System::UInt32, ::System::UInt32, ::System::Collections::Generic::List_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEPEAKMODULE_STARTCHALLENGEPEAK_OFFSET))(this, a1, a2, a3);
		}

		::RPG::Client::Promises::IPromise* LeaveChallengePeak()
		{
			return ((::RPG::Client::Promises::IPromise*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEPEAKMODULE_LEAVECHALLENGEPEAK_OFFSET))(this);
		}

		::RPG::Client::Promises::IPromise* RestartChallengePeak()
		{
			return ((::RPG::Client::Promises::IPromise*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEPEAKMODULE_RESTARTCHALLENGEPEAK_OFFSET))(this);
		}

		::System::Void TakeReward(::System::UInt32 a1, ::System::Collections::Generic::List_1<::System::UInt32>* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::Collections::Generic::List_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEPEAKMODULE_TAKEREWARD_OFFSET))(this, a1, a2);
		}

		::System::Void SetBossHardMode(::System::UInt32 a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEPEAKMODULE_SETBOSSHARDMODE_OFFSET))(this, a1, a2);
		}

		::RPG::Client::Promises::IPromise* ConfirmChallengePeakSettle(::System::UInt32 a1, ::System::Boolean a2)
		{
			return ((::RPG::Client::Promises::IPromise*(*)(::PVOID, ::System::UInt32, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEPEAKMODULE_CONFIRMCHALLENGEPEAKSETTLE_OFFSET))(this, a1, a2);
		}

		::System::Void MarkGroupForceHardBossHasConfirmed(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEPEAKMODULE_MARKGROUPFORCEHARDBOSSHASCONFIRMED_OFFSET))(this, a1);
		}

		::System::Boolean CheckGroupIsForceHardBossHasConfirmed(::System::UInt32 a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEPEAKMODULE_CHECKGROUPISFORCEHARDBOSSHASCONFIRMED_OFFSET))(this, a1);
		}

		::System::Boolean CheckUnlock()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEPEAKMODULE_CHECKUNLOCK_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::RPG::Client::QuestData*>* GetPreQuests()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::QuestData*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEPEAKMODULE_GETPREQUESTS_OFFSET))(this);
		}

		::System::Boolean IsCanEnterFromHandbook()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEPEAKMODULE_ISCANENTERFROMHANDBOOK_OFFSET))(this);
		}

		::System::Boolean CheckCurrentGroupHasEntered()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEPEAKMODULE_CHECKCURRENTGROUPHASENTERED_OFFSET))(this);
		}

		::System::Void MarkCurrentGroupHasEntered()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEPEAKMODULE_MARKCURRENTGROUPHASENTERED_OFFSET))(this);
		}

		::System::Void Init()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEPEAKMODULE_INIT_OFFSET))(this);
		}

		::System::Void _AddPacketHandlers()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEPEAKMODULE__ADDPACKETHANDLERS_OFFSET))(this);
		}

		::System::Void _AddNotifyHandlers()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEPEAKMODULE__ADDNOTIFYHANDLERS_OFFSET))(this);
		}

		::System::Void OnReconnect()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEPEAKMODULE_ONRECONNECT_OFFSET))(this);
		}

		::System::Void _OnGetChallengePeakDataScRsp(::System::UInt16 a1, ::System::Object* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEPEAKMODULE__ONGETCHALLENGEPEAKDATASCRSP_OFFSET))(this, a1, a2);
		}

		::System::Void _OnGetCurChallengePeakScRsp(::System::UInt16 a1, ::System::Object* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEPEAKMODULE__ONGETCURCHALLENGEPEAKSCRSP_OFFSET))(this, a1, a2);
		}

		::System::Void _OnChallengePeakGroupDataUpdateScNotify(::System::UInt16 a1, ::System::Object* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEPEAKMODULE__ONCHALLENGEPEAKGROUPDATAUPDATESCNOTIFY_OFFSET))(this, a1, a2);
		}

		::System::Void _OnChallengePeakSettleScNotify(::System::UInt16 a1, ::System::Object* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEPEAKMODULE__ONCHALLENGEPEAKSETTLESCNOTIFY_OFFSET))(this, a1, a2);
		}

		::System::Void _OnTakeChallengePeakRewardScRsp(::System::UInt16 a1, ::System::Object* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEPEAKMODULE__ONTAKECHALLENGEPEAKREWARDSCRSP_OFFSET))(this, a1, a2);
		}

		::System::Void _OnReceiveResponse(::System::UInt16 a1, ::System::Object* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEPEAKMODULE__ONRECEIVERESPONSE_OFFSET))(this, a1, a2);
		}

		::System::Void _OnSetChallengePeakBossHardModeScRsp(::System::UInt16 a1, ::System::Object* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEPEAKMODULE__ONSETCHALLENGEPEAKBOSSHARDMODESCRSP_OFFSET))(this, a1, a2);
		}

		::System::Void _InitData()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEPEAKMODULE__INITDATA_OFFSET))(this);
		}

		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::Collections::Generic::List_1<::RPG::GameCore::ChallengePeakRewardRow*>*>* _BuildRewardGroupMapping()
		{
			return ((::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::Collections::Generic::List_1<::RPG::GameCore::ChallengePeakRewardRow*>*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEPEAKMODULE__BUILDREWARDGROUPMAPPING_OFFSET))(this);
		}

		::System::Void _CreateAllGroups(::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::Collections::Generic::List_1<::RPG::GameCore::ChallengePeakRewardRow*>*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::Collections::Generic::List_1<::RPG::GameCore::ChallengePeakRewardRow*>*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEPEAKMODULE__CREATEALLGROUPS_OFFSET))(this, a1);
		}

		::RPG::Client::ChallengePeak* _CreateChallengePeak(::System::UInt32 a1, ::RPG::Client::ChallengePeakGroup* a2)
		{
			return ((::RPG::Client::ChallengePeak*(*)(::PVOID, ::System::UInt32, ::RPG::Client::ChallengePeakGroup*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEPEAKMODULE__CREATECHALLENGEPEAK_OFFSET))(this, a1, a2);
		}

		::RPG::Client::ChallengePeakBoss* _CreateChallengePeakBoss(::System::UInt32 a1, ::RPG::Client::ChallengePeakGroup* a2)
		{
			return ((::RPG::Client::ChallengePeakBoss*(*)(::PVOID, ::System::UInt32, ::RPG::Client::ChallengePeakGroup*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEPEAKMODULE__CREATECHALLENGEPEAKBOSS_OFFSET))(this, a1, a2);
		}

		::RPG::Client::ChallengePeakRewardGroup* _CreateRewardGroup(::System::UInt32 a1, ::System::UInt32 a2, ::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::Collections::Generic::List_1<::RPG::GameCore::ChallengePeakRewardRow*>*>* a3)
		{
			return ((::RPG::Client::ChallengePeakRewardGroup*(*)(::PVOID, ::System::UInt32, ::System::UInt32, ::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::Collections::Generic::List_1<::RPG::GameCore::ChallengePeakRewardRow*>*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEPEAKMODULE__CREATEREWARDGROUP_OFFSET))(this, a1, a2, a3);
		}

		::System::Void _AddDisplayItemDatasByRewards(::Google::Protobuf::Collections::RepeatedField_1<::Proto::Item*>* a1, ::System::Collections::Generic::List_1<::RPG::Client::ItemDisplayData*>* a2)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::Collections::RepeatedField_1<::Proto::Item*>*, ::System::Collections::Generic::List_1<::RPG::Client::ItemDisplayData*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEPEAKMODULE__ADDDISPLAYITEMDATASBYREWARDS_OFFSET))(this, a1, a2);
		}

		::System::Void __iFixBaseProxy_Init()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEPEAKMODULE___IFIXBASEPROXY_INIT_OFFSET))(this);
		}

		::System::Void __iFixBaseProxy__AddPacketHandlers()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEPEAKMODULE___IFIXBASEPROXY__ADDPACKETHANDLERS_OFFSET))(this);
		}

		::System::Void __iFixBaseProxy__AddNotifyHandlers()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEPEAKMODULE___IFIXBASEPROXY__ADDNOTIFYHANDLERS_OFFSET))(this);
		}

		::System::Void __iFixBaseProxy_OnReconnect()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEPEAKMODULE___IFIXBASEPROXY_ONRECONNECT_OFFSET))(this);
		}
	};
}

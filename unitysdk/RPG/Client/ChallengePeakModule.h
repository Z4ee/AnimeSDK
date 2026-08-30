#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/BaseModule.h"
#include "unitysdk/System/Nullable_1.h"

class Class_1_45BB92167AED63A0_16;
class Class_1_8C4E79BC7701523D;
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

#define RPG_CLIENT_CHALLENGEPEAKMODULE_CHECKCURRENTGROUPHASENTERED_OFFSET UNITYSDK_OFFSET(0x1AD5D940)
#define RPG_CLIENT_CHALLENGEPEAKMODULE_CHECKGROUPISFORCEHARDBOSSHASCONFIRMED_OFFSET UNITYSDK_OFFSET(0x1AD5D110)
#define RPG_CLIENT_CHALLENGEPEAKMODULE_CHECKUNLOCK_OFFSET UNITYSDK_OFFSET(0x1AD5D220)
#define RPG_CLIENT_CHALLENGEPEAKMODULE_CONFIRMCHALLENGEPEAKSETTLE_OFFSET UNITYSDK_OFFSET(0x1AD5CF50)
#define RPG_CLIENT_CHALLENGEPEAKMODULE_GETCHALLENGEPEAKBOSS_OFFSET UNITYSDK_OFFSET(0x1AD59F80)
#define RPG_CLIENT_CHALLENGEPEAKMODULE_GETCHALLENGEPEAKGROUP_OFFSET UNITYSDK_OFFSET(0x1AD5CD10)
#define RPG_CLIENT_CHALLENGEPEAKMODULE_GETCHALLENGEPEAK_OFFSET UNITYSDK_OFFSET(0x1AD59C40)
#define RPG_CLIENT_CHALLENGEPEAKMODULE_GETCURRENTPEAKGROUP_OFFSET UNITYSDK_OFFSET(0x1AD4FB00)
#define RPG_CLIENT_CHALLENGEPEAKMODULE_GETPREQUESTS_OFFSET UNITYSDK_OFFSET(0x1AD5D2E0)
#define RPG_CLIENT_CHALLENGEPEAKMODULE_GET_ABOUTTOEXPIRETHRESHOLDDAYS_OFFSET UNITYSDK_OFFSET(0x1AD5B680)
#define RPG_CLIENT_CHALLENGEPEAKMODULE_GET_CANENTERFROMHANDBOOKQUESTID_OFFSET UNITYSDK_OFFSET(0x1AD5C530)
#define RPG_CLIENT_CHALLENGEPEAKMODULE_GET_CHALLENGEPEAKUNLOCKQUESTID_OFFSET UNITYSDK_OFFSET(0x1AD5C460)
#define RPG_CLIENT_CHALLENGEPEAKMODULE_GET_CURRENTPEAKGROUPID_OFFSET UNITYSDK_OFFSET(0x1AD4F9B0)
#define RPG_CLIENT_CHALLENGEPEAKMODULE_GET_ENTRANCEID_OFFSET UNITYSDK_OFFSET(0x1AD5CA00)
#define RPG_CLIENT_CHALLENGEPEAKMODULE_GET_HANDBOOKEASYBOSSBANNERPATH_OFFSET UNITYSDK_OFFSET(0x1AD5CA90)
#define RPG_CLIENT_CHALLENGEPEAKMODULE_GET_HANDBOOKHARDBOSSBANNERPATH_OFFSET UNITYSDK_OFFSET(0x1AD5CB80)
#define RPG_CLIENT_CHALLENGEPEAKMODULE_GET_MAPINFOID_OFFSET UNITYSDK_OFFSET(0x1AD5C900)
#define RPG_CLIENT_CHALLENGEPEAKMODULE_GET_PREQUESTIDS_OFFSET UNITYSDK_OFFSET(0x1AD5C630)
#define RPG_CLIENT_CHALLENGEPEAKMODULE_GET_SHOPID_OFFSET UNITYSDK_OFFSET(0x1AD58F20)
#define RPG_CLIENT_CHALLENGEPEAKMODULE_GET_TUTORIALMAINMISSIONID_OFFSET UNITYSDK_OFFSET(0x1AD57420)
#define RPG_CLIENT_CHALLENGEPEAKMODULE_INIT_OFFSET UNITYSDK_OFFSET(0x1AD5DBE0)
#define RPG_CLIENT_CHALLENGEPEAKMODULE_ISCANENTERFROMHANDBOOK_OFFSET UNITYSDK_OFFSET(0x1AD5D880)
#define RPG_CLIENT_CHALLENGEPEAKMODULE_LEAVECHALLENGEPEAK_OFFSET UNITYSDK_OFFSET(0x1AD573D0)
#define RPG_CLIENT_CHALLENGEPEAKMODULE_MARKCURRENTGROUPHASENTERED_OFFSET UNITYSDK_OFFSET(0x1AD5DA70)
#define RPG_CLIENT_CHALLENGEPEAKMODULE_MARKGROUPFORCEHARDBOSSHASCONFIRMED_OFFSET UNITYSDK_OFFSET(0x1AD5CFC0)
#define RPG_CLIENT_CHALLENGEPEAKMODULE_ONRECONNECT_OFFSET UNITYSDK_OFFSET(0x1AD5E3B0)
#define RPG_CLIENT_CHALLENGEPEAKMODULE_RESTARTCHALLENGEPEAK_OFFSET UNITYSDK_OFFSET(0x1AD57370)
#define RPG_CLIENT_CHALLENGEPEAKMODULE_SENDGETCHALLENGEPEAKDATAREQUEST_OFFSET UNITYSDK_OFFSET(0x1AD5CC70)
#define RPG_CLIENT_CHALLENGEPEAKMODULE_SENDMODULEINITREQUEST_OFFSET UNITYSDK_OFFSET(0x1AD5CCC0)
#define RPG_CLIENT_CHALLENGEPEAKMODULE_SETBOSSHARDMODE_OFFSET UNITYSDK_OFFSET(0x1AD5CEE0)
#define RPG_CLIENT_CHALLENGEPEAKMODULE_SETCHALLENGEPEAKMONSTERLINEUPS_OFFSET UNITYSDK_OFFSET(0x1AD5CDA0)
#define RPG_CLIENT_CHALLENGEPEAKMODULE_STARTCHALLENGEPEAK_OFFSET UNITYSDK_OFFSET(0x1AD572E0)
#define RPG_CLIENT_CHALLENGEPEAKMODULE_TAKEREWARD_OFFSET UNITYSDK_OFFSET(0x1AD5CE10)
#define RPG_CLIENT_CHALLENGEPEAKMODULE__ADDDISPLAYITEMDATASBYREWARDS_OFFSET UNITYSDK_OFFSET(0x1AD5EDE0)
#define RPG_CLIENT_CHALLENGEPEAKMODULE__ADDNOTIFYHANDLERS_OFFSET UNITYSDK_OFFSET(0x1AD5E370)
#define RPG_CLIENT_CHALLENGEPEAKMODULE__ADDPACKETHANDLERS_OFFSET UNITYSDK_OFFSET(0x1AD5DCB0)
#define RPG_CLIENT_CHALLENGEPEAKMODULE__BUILDREWARDGROUPMAPPING_OFFSET UNITYSDK_OFFSET(0x1AD5F2E0)
#define RPG_CLIENT_CHALLENGEPEAKMODULE__CREATEALLGROUPS_OFFSET UNITYSDK_OFFSET(0x1AD5F600)
#define RPG_CLIENT_CHALLENGEPEAKMODULE__CREATECHALLENGEPEAKBOSS_OFFSET UNITYSDK_OFFSET(0x1AD603B0)
#define RPG_CLIENT_CHALLENGEPEAKMODULE__CREATECHALLENGEPEAK_OFFSET UNITYSDK_OFFSET(0x1AD602A0)
#define RPG_CLIENT_CHALLENGEPEAKMODULE__CREATEREWARDGROUP_OFFSET UNITYSDK_OFFSET(0x1AD5FFE0)
#define RPG_CLIENT_CHALLENGEPEAKMODULE__CTOR_OFFSET UNITYSDK_OFFSET(0x1AD60650)
#define RPG_CLIENT_CHALLENGEPEAKMODULE__INITDATA_OFFSET UNITYSDK_OFFSET(0x1AD5DC60)
#define RPG_CLIENT_CHALLENGEPEAKMODULE__ONCHALLENGEPEAKGROUPDATAUPDATESCNOTIFY_OFFSET UNITYSDK_OFFSET(0x1AD5E560)
#define RPG_CLIENT_CHALLENGEPEAKMODULE__ONCHALLENGEPEAKSETTLESCNOTIFY_OFFSET UNITYSDK_OFFSET(0x1AD5E620)
#define RPG_CLIENT_CHALLENGEPEAKMODULE__ONGETCHALLENGEPEAKDATASCRSP_OFFSET UNITYSDK_OFFSET(0x1AD5E400)
#define RPG_CLIENT_CHALLENGEPEAKMODULE__ONGETCURCHALLENGEPEAKSCRSP_OFFSET UNITYSDK_OFFSET(0x1AD5E4A0)
#define RPG_CLIENT_CHALLENGEPEAKMODULE__ONRECEIVERESPONSE_OFFSET UNITYSDK_OFFSET(0x1AD5F1C0)
#define RPG_CLIENT_CHALLENGEPEAKMODULE__ONSETCHALLENGEPEAKBOSSHARDMODESCRSP_OFFSET UNITYSDK_OFFSET(0x1AD5F230)
#define RPG_CLIENT_CHALLENGEPEAKMODULE__ONTAKECHALLENGEPEAKREWARDSCRSP_OFFSET UNITYSDK_OFFSET(0x1AD5E8F0)

namespace RPG::Client
{
	inline static constexpr unsigned int ChallengePeakModule_TypeDefinitionIndex = 63247;

	class ChallengePeakModule : public ::RPG::Client::BaseModule
	{
	public:
		::Class_1_8C4E79BC7701523D* _ServerAgent; // 0x10
		::System::String* _HandbookHardBossBannerPath; // 0x18
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::Client::ChallengePeak*>* _ChallengePeaks; // 0x20
		::System::Collections::Generic::IReadOnlyList_1<::System::UInt32>* _PreQuestIDs; // 0x28
		::System::String* _HandbookEasyBossBannerPath; // 0x30
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::Client::ChallengePeakGroup*>* _ChallengePeakGroups; // 0x38
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::Client::ChallengePeakBoss*>* _ChallengePeakBosses; // 0x40
		::System::Nullable_1<::System::UInt32> _EntranceID; // 0x48
		::System::Nullable_1<::System::UInt32> _CanEnterFromHandbookQuestID; // 0x50
		::System::Nullable_1<::System::UInt32> _MapInfoID; // 0x58
		::System::Nullable_1<::System::UInt32> _ChallengePeakUnlockQuestID; // 0x60
		::System::Nullable_1<::System::UInt32> _TutorialMainMissionID; // 0x68
		::System::Nullable_1<::System::UInt32> _AboutToExpireThresholdDays; // 0x70
		::System::Nullable_1<::System::Int32> _ShopID; // 0x78

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

		::RPG::Client::Promises::IPromise* SetChallengePeakMonsterLineups(::System::UInt32 a1, ::System::Collections::Generic::List_1<::Class_1_45BB92167AED63A0_16*>* a2)
		{
			return ((::RPG::Client::Promises::IPromise*(*)(::PVOID, ::System::UInt32, ::System::Collections::Generic::List_1<::Class_1_45BB92167AED63A0_16*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEPEAKMODULE_SETCHALLENGEPEAKMONSTERLINEUPS_OFFSET))(this, a1, a2);
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
	};
}

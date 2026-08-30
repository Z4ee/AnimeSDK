#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/ChallengeGroupType.h"
#include "unitysdk/System/Object.h"

class Class_1_06E38C65842C3B24;
namespace RPG::Client { class ChallengeData; }
namespace RPG::Client { class CheckItemFinishMainMission; }
namespace RPG::Client { class ScheduleData; }
namespace RPG::Client::Challenge::Tierce { class ChallengeTierceEntranceViewModel; }
namespace RPG::Client::Challenge::Tierce { class ChallengeTierceRewardViewModel; }
namespace RPG::GameCore { class ChallengeGeneralConfigRow; }
namespace RPG::GameCore { class ChallengeGroupConfigRow; }
namespace RPG::GameCore { class ChallengeMazeRewardLineRow; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_CHALLENGEGROUPDATA_ADDCHALLENGE_OFFSET UNITYSDK_OFFSET(0x18C192B0)
#define RPG_CLIENT_CHALLENGEGROUPDATA_DISPOSE_OFFSET UNITYSDK_OFFSET(0x18C1A1B0)
#define RPG_CLIENT_CHALLENGEGROUPDATA_GETAUTOSETTLEMAXLEVEL_OFFSET UNITYSDK_OFFSET(0x18C14280)
#define RPG_CLIENT_CHALLENGEGROUPDATA_GETCHALLENGEINDEX_OFFSET UNITYSDK_OFFSET(0x18C19460)
#define RPG_CLIENT_CHALLENGEGROUPDATA_GETCOMPLETETARGETSTARSCOUNT_OFFSET UNITYSDK_OFFSET(0x18C18B80)
#define RPG_CLIENT_CHALLENGEGROUPDATA_GETCUMULATIVEREWARDINFOS_OFFSET UNITYSDK_OFFSET(0x18C197B0)
#define RPG_CLIENT_CHALLENGEGROUPDATA_GETMAXFINISHLEVEL_OFFSET UNITYSDK_OFFSET(0x18C19E30)
#define RPG_CLIENT_CHALLENGEGROUPDATA_GETNEXTCHALLENGEDATA_OFFSET UNITYSDK_OFFSET(0x18C19640)
#define RPG_CLIENT_CHALLENGEGROUPDATA_GETSHOWMAXLEVEL_OFFSET UNITYSDK_OFFSET(0x18C19F00)
#define RPG_CLIENT_CHALLENGEGROUPDATA_GETTOTALTARGETSTARSCOUNT_OFFSET UNITYSDK_OFFSET(0x18C1A150)
#define RPG_CLIENT_CHALLENGEGROUPDATA_GET_BEGINTIMESTAMP_OFFSET UNITYSDK_OFFSET(0x18C18D20)
#define RPG_CLIENT_CHALLENGEGROUPDATA_GET_CHALLENGEDATAS_OFFSET UNITYSDK_OFFSET(0x18C0A330)
#define RPG_CLIENT_CHALLENGEGROUPDATA_GET_CURRENTSTARCOUNT_OFFSET UNITYSDK_OFFSET(0x18C18950)
#define RPG_CLIENT_CHALLENGEGROUPDATA_GET_EARLYACCESSCONTENTID_OFFSET UNITYSDK_OFFSET(0x18C19210)
#define RPG_CLIENT_CHALLENGEGROUPDATA_GET_ENDTIMESTAMP_OFFSET UNITYSDK_OFFSET(0x18C18DA0)
#define RPG_CLIENT_CHALLENGEGROUPDATA_GET_GROUPNAME_OFFSET UNITYSDK_OFFSET(0x18C18A20)
#define RPG_CLIENT_CHALLENGEGROUPDATA_GET_HASOBTAINEDBADGE_OFFSET UNITYSDK_OFFSET(0x18C18E20)
#define RPG_CLIENT_CHALLENGEGROUPDATA_GET_HASTAKENSPECIALREWARD_OFFSET UNITYSDK_OFFSET(0x18C18E80)
#define RPG_CLIENT_CHALLENGEGROUPDATA_GET_ISCOMPLETE_OFFSET UNITYSDK_OFFSET(0x18C188B0)
#define RPG_CLIENT_CHALLENGEGROUPDATA_GET_ISEARLYACCESSAVAILABLE_OFFSET UNITYSDK_OFFSET(0x18C19190)
#define RPG_CLIENT_CHALLENGEGROUPDATA_GET_ISSCHEDULECHALLENGE_OFFSET UNITYSDK_OFFSET(0x18C09440)
#define RPG_CLIENT_CHALLENGEGROUPDATA_GET_LASTAUTOUNLOCKPROGRESS_OFFSET UNITYSDK_OFFSET(0x18C18EE0)
#define RPG_CLIENT_CHALLENGEGROUPDATA_GET_MAPENTRANCEID_OFFSET UNITYSDK_OFFSET(0x18C18AE0)
#define RPG_CLIENT_CHALLENGEGROUPDATA_GET_MAPPINGINFOID_OFFSET UNITYSDK_OFFSET(0x18C18B30)
#define RPG_CLIENT_CHALLENGEGROUPDATA_GET_PREMISSIONID_OFFSET UNITYSDK_OFFSET(0x18C108E0)
#define RPG_CLIENT_CHALLENGEGROUPDATA_GET_SCHEDULEDATAID_OFFSET UNITYSDK_OFFSET(0x18C18A90)
#define RPG_CLIENT_CHALLENGEGROUPDATA_GET_SCHEDULEDATA_OFFSET UNITYSDK_OFFSET(0x18C094A0)
#define RPG_CLIENT_CHALLENGEGROUPDATA_GET_THEMEPICPATH_OFFSET UNITYSDK_OFFSET(0x18C19140)
#define RPG_CLIENT_CHALLENGEGROUPDATA_GET_TIERCEENTRANCE_OFFSET UNITYSDK_OFFSET(0x18C19270)
#define RPG_CLIENT_CHALLENGEGROUPDATA_GET_TIERCEID_OFFSET UNITYSDK_OFFSET(0x18BFBB00)
#define RPG_CLIENT_CHALLENGEGROUPDATA_GET_TIERCEREWARD_OFFSET UNITYSDK_OFFSET(0x18C19290)
#define RPG_CLIENT_CHALLENGEGROUPDATA_GET_TIERCE_OFFSET UNITYSDK_OFFSET(0x18C19260)
#define RPG_CLIENT_CHALLENGEGROUPDATA_GET_TOTALSTARCOUNT_OFFSET UNITYSDK_OFFSET(0x18C189A0)
#define RPG_CLIENT_CHALLENGEGROUPDATA_GET_TYPE_OFFSET UNITYSDK_OFFSET(0x18C001B0)
#define RPG_CLIENT_CHALLENGEGROUPDATA_HASCHALLENGEFINISH_OFFSET UNITYSDK_OFFSET(0x18C161A0)
#define RPG_CLIENT_CHALLENGEGROUPDATA_HASSTARREWARDNOTTAKEN_OFFSET UNITYSDK_OFFSET(0x18C15C60)
#define RPG_CLIENT_CHALLENGEGROUPDATA_ISAVAILABLE_OFFSET UNITYSDK_OFFSET(0x18C160E0)
#define RPG_CLIENT_CHALLENGEGROUPDATA_ISCUMULATIVEREWARDREACHED_OFFSET UNITYSDK_OFFSET(0x18C199F0)
#define RPG_CLIENT_CHALLENGEGROUPDATA_ISCUMULATIVEREWARDTAKEN_OFFSET UNITYSDK_OFFSET(0x18C19A70)
#define RPG_CLIENT_CHALLENGEGROUPDATA_ISFIRSTCHALLENGEUNLOCK_OFFSET UNITYSDK_OFFSET(0x18C19C30)
#define RPG_CLIENT_CHALLENGEGROUPDATA_ISINSCHEDULE_OFFSET UNITYSDK_OFFSET(0x18C15BC0)
#define RPG_CLIENT_CHALLENGEGROUPDATA_SETTAKENREWARDFLAGS_OFFSET UNITYSDK_OFFSET(0x18C1A060)
#define RPG_CLIENT_CHALLENGEGROUPDATA_SETTAKENREWARDFLAG_OFFSET UNITYSDK_OFFSET(0x18C1A0D0)
#define RPG_CLIENT_CHALLENGEGROUPDATA_SET_LASTAUTOUNLOCKPROGRESS_OFFSET UNITYSDK_OFFSET(0x18C18FE0)
#define RPG_CLIENT_CHALLENGEGROUPDATA_SET_TIERCEENTRANCE_OFFSET UNITYSDK_OFFSET(0x18C19280)
#define RPG_CLIENT_CHALLENGEGROUPDATA_SET_TIERCEREWARD_OFFSET UNITYSDK_OFFSET(0x18C192A0)
#define RPG_CLIENT_CHALLENGEGROUPDATA__CHECKCHALLENGEDATAS_OFFSET UNITYSDK_OFFSET(0x18C19510)
#define RPG_CLIENT_CHALLENGEGROUPDATA__CTOR_OFFSET UNITYSDK_OFFSET(0x18C0CC90)
#define RPG_CLIENT_CHALLENGEGROUPDATA__ISFINISHPREMISSION_OFFSET UNITYSDK_OFFSET(0x18C19AC0)

namespace RPG::Client
{
	inline static constexpr unsigned int ChallengeGroupData_TypeDefinitionIndex = 63155;

	class ChallengeGroupData : public ::System::Object
	{
	public:
		// static const ::System::Int32 MAX_CHALLENGE_STAR = 0x3; // 0x0
		::RPG::Client::Challenge::Tierce::ChallengeTierceEntranceViewModel* _TierceEntrance_k__BackingField; // 0x10
		::System::Collections::Generic::List_1<::RPG::Client::ChallengeData*>* _ChallengeDatas; // 0x18
		::RPG::Client::Challenge::Tierce::ChallengeTierceRewardViewModel* _TierceReward_k__BackingField; // 0x20
		::RPG::GameCore::ChallengeGroupConfigRow* Row; // 0x28
		::Class_1_06E38C65842C3B24* _Tierce_k__BackingField; // 0x30
		::RPG::GameCore::ChallengeGeneralConfigRow* _GeneralConfigRow; // 0x38
		::RPG::Client::CheckItemFinishMainMission* _FinishMainMissionCheckItem; // 0x40
		::System::UInt32 ID; // 0x48
		::System::UInt64 _TakenRewardBits; // 0x50

		::System::Void _ctor(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEGROUPDATA__CTOR_OFFSET))(this, a1);
		}

		::System::Boolean get_IsScheduleChallenge()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEGROUPDATA_GET_ISSCHEDULECHALLENGE_OFFSET))(this);
		}

		::System::Boolean get_IsComplete()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEGROUPDATA_GET_ISCOMPLETE_OFFSET))(this);
		}

		::RPG::Client::TextID get_GroupName()
		{
			return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEGROUPDATA_GET_GROUPNAME_OFFSET))(this);
		}

		::System::UInt32 get_PreMissionID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEGROUPDATA_GET_PREMISSIONID_OFFSET))(this);
		}

		::System::UInt32 get_ScheduleDataID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEGROUPDATA_GET_SCHEDULEDATAID_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::RPG::Client::ChallengeData*>* get_ChallengeDatas()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::ChallengeData*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEGROUPDATA_GET_CHALLENGEDATAS_OFFSET))(this);
		}

		::RPG::GameCore::ChallengeGroupType get_Type()
		{
			return ((::RPG::GameCore::ChallengeGroupType(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEGROUPDATA_GET_TYPE_OFFSET))(this);
		}

		::System::UInt32 get_MapEntranceID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEGROUPDATA_GET_MAPENTRANCEID_OFFSET))(this);
		}

		::System::UInt32 get_MappingInfoID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEGROUPDATA_GET_MAPPINGINFOID_OFFSET))(this);
		}

		::System::Int32 get_TotalStarCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEGROUPDATA_GET_TOTALSTARCOUNT_OFFSET))(this);
		}

		::System::Int32 get_CurrentStarCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEGROUPDATA_GET_CURRENTSTARCOUNT_OFFSET))(this);
		}

		::RPG::Client::ScheduleData* get_ScheduleData()
		{
			return ((::RPG::Client::ScheduleData*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEGROUPDATA_GET_SCHEDULEDATA_OFFSET))(this);
		}

		::System::UInt32 get_BeginTimeStamp()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEGROUPDATA_GET_BEGINTIMESTAMP_OFFSET))(this);
		}

		::System::UInt32 get_EndTimeStamp()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEGROUPDATA_GET_ENDTIMESTAMP_OFFSET))(this);
		}

		::System::Boolean get_HasObtainedBadge()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEGROUPDATA_GET_HASOBTAINEDBADGE_OFFSET))(this);
		}

		::System::Boolean get_HasTakenSpecialReward()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEGROUPDATA_GET_HASTAKENSPECIALREWARD_OFFSET))(this);
		}

		::System::UInt32 get_LastAutoUnlockProgress()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEGROUPDATA_GET_LASTAUTOUNLOCKPROGRESS_OFFSET))(this);
		}

		::System::Void set_LastAutoUnlockProgress(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEGROUPDATA_SET_LASTAUTOUNLOCKPROGRESS_OFFSET))(this, a1);
		}

		::System::String* get_ThemePicPath()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEGROUPDATA_GET_THEMEPICPATH_OFFSET))(this);
		}

		::System::Boolean get_IsEarlyAccessAvailable()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEGROUPDATA_GET_ISEARLYACCESSAVAILABLE_OFFSET))(this);
		}

		::System::UInt32 get_EarlyAccessContentID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEGROUPDATA_GET_EARLYACCESSCONTENTID_OFFSET))(this);
		}

		::System::UInt32 get_TierceID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEGROUPDATA_GET_TIERCEID_OFFSET))(this);
		}

		::Class_1_06E38C65842C3B24* get_Tierce()
		{
			return ((::Class_1_06E38C65842C3B24*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEGROUPDATA_GET_TIERCE_OFFSET))(this);
		}

		::RPG::Client::Challenge::Tierce::ChallengeTierceEntranceViewModel* get_TierceEntrance()
		{
			return ((::RPG::Client::Challenge::Tierce::ChallengeTierceEntranceViewModel*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEGROUPDATA_GET_TIERCEENTRANCE_OFFSET))(this);
		}

		::System::Void set_TierceEntrance(::RPG::Client::Challenge::Tierce::ChallengeTierceEntranceViewModel* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::Challenge::Tierce::ChallengeTierceEntranceViewModel*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEGROUPDATA_SET_TIERCEENTRANCE_OFFSET))(this, a1);
		}

		::RPG::Client::Challenge::Tierce::ChallengeTierceRewardViewModel* get_TierceReward()
		{
			return ((::RPG::Client::Challenge::Tierce::ChallengeTierceRewardViewModel*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEGROUPDATA_GET_TIERCEREWARD_OFFSET))(this);
		}

		::System::Void set_TierceReward(::RPG::Client::Challenge::Tierce::ChallengeTierceRewardViewModel* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::Challenge::Tierce::ChallengeTierceRewardViewModel*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEGROUPDATA_SET_TIERCEREWARD_OFFSET))(this, a1);
		}

		::System::Boolean AddChallenge(::RPG::Client::ChallengeData* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::ChallengeData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEGROUPDATA_ADDCHALLENGE_OFFSET))(this, a1);
		}

		::System::Int32 GetChallengeIndex(::System::UInt32 a1)
		{
			return ((::System::Int32(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEGROUPDATA_GETCHALLENGEINDEX_OFFSET))(this, a1);
		}

		::RPG::Client::ChallengeData* GetNextChallengeData(::System::UInt32 a1)
		{
			return ((::RPG::Client::ChallengeData*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEGROUPDATA_GETNEXTCHALLENGEDATA_OFFSET))(this, a1);
		}

		::System::Boolean HasStarRewardNotTaken()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEGROUPDATA_HASSTARREWARDNOTTAKEN_OFFSET))(this);
		}

		::System::Boolean IsAvailable()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEGROUPDATA_ISAVAILABLE_OFFSET))(this);
		}

		::System::Boolean IsInSchedule()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEGROUPDATA_ISINSCHEDULE_OFFSET))(this);
		}

		::System::Boolean IsFirstChallengeUnlock()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEGROUPDATA_ISFIRSTCHALLENGEUNLOCK_OFFSET))(this);
		}

		::System::UInt32 GetMaxFinishLevel()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEGROUPDATA_GETMAXFINISHLEVEL_OFFSET))(this);
		}

		::System::UInt32 GetShowMaxLevel()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEGROUPDATA_GETSHOWMAXLEVEL_OFFSET))(this);
		}

		::System::Int32 GetAutoSettleMaxLevel()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEGROUPDATA_GETAUTOSETTLEMAXLEVEL_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::RPG::GameCore::ChallengeMazeRewardLineRow*>* GetCumulativeRewardInfos()
		{
			return ((::System::Collections::Generic::List_1<::RPG::GameCore::ChallengeMazeRewardLineRow*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEGROUPDATA_GETCUMULATIVEREWARDINFOS_OFFSET))(this);
		}

		::System::Void SetTakenRewardFlags(::System::UInt64 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt64))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEGROUPDATA_SETTAKENREWARDFLAGS_OFFSET))(this, a1);
		}

		::System::Void SetTakenRewardFlag(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEGROUPDATA_SETTAKENREWARDFLAG_OFFSET))(this, a1);
		}

		::System::Boolean IsCumulativeRewardReached(::System::Int32 a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEGROUPDATA_ISCUMULATIVEREWARDREACHED_OFFSET))(this, a1);
		}

		::System::Boolean IsCumulativeRewardTaken(::System::Int32 a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEGROUPDATA_ISCUMULATIVEREWARDTAKEN_OFFSET))(this, a1);
		}

		::System::UInt32 GetCompleteTargetStarsCount()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEGROUPDATA_GETCOMPLETETARGETSTARSCOUNT_OFFSET))(this);
		}

		::System::UInt32 GetTotalTargetStarsCount()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEGROUPDATA_GETTOTALTARGETSTARSCOUNT_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEGROUPDATA_DISPOSE_OFFSET))(this);
		}

		::System::Boolean HasChallengeFinish()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEGROUPDATA_HASCHALLENGEFINISH_OFFSET))(this);
		}

		::System::Void _CheckChallengeDatas()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEGROUPDATA__CHECKCHALLENGEDATAS_OFFSET))(this);
		}

		::System::Boolean _IsFinishPreMission()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEGROUPDATA__ISFINISHPREMISSION_OFFSET))(this);
		}
	};
}

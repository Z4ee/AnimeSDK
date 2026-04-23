#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/ChallengeGroupType.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class ChallengeData; }
namespace RPG::Client { class CheckItemFinishMainMission; }
namespace RPG::Client { class ScheduleData; }
namespace RPG::GameCore { class ChallengeGeneralConfigRow; }
namespace RPG::GameCore { class ChallengeGroupConfigRow; }
namespace RPG::GameCore { class ChallengeMazeRewardLineRow; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_CHALLENGEGROUPDATA_ADDCHALLENGE_OFFSET UNITYSDK_OFFSET(0x9F2D7C0)
#define RPG_CLIENT_CHALLENGEGROUPDATA_DISPOSE_OFFSET UNITYSDK_OFFSET(0x9F2E4D0)
#define RPG_CLIENT_CHALLENGEGROUPDATA_GETCHALLENGEINDEX_OFFSET UNITYSDK_OFFSET(0x9F2D850)
#define RPG_CLIENT_CHALLENGEGROUPDATA_GETCOMPLETETARGETSTARSCOUNT_OFFSET UNITYSDK_OFFSET(0x9F2E3C0)
#define RPG_CLIENT_CHALLENGEGROUPDATA_GETCUMULATIVEREWARDINFOS_OFFSET UNITYSDK_OFFSET(0x9F2DBE0)
#define RPG_CLIENT_CHALLENGEGROUPDATA_GETMAXFINISHLEVEL_OFFSET UNITYSDK_OFFSET(0x9F2E0D0)
#define RPG_CLIENT_CHALLENGEGROUPDATA_GETNEXTCHALLENGEDATA_OFFSET UNITYSDK_OFFSET(0x9F2D9A0)
#define RPG_CLIENT_CHALLENGEGROUPDATA_GETSHOWMAXLEVEL_OFFSET UNITYSDK_OFFSET(0x9F2E170)
#define RPG_CLIENT_CHALLENGEGROUPDATA_GETTOTALTARGETSTARSCOUNT_OFFSET UNITYSDK_OFFSET(0x9F2E470)
#define RPG_CLIENT_CHALLENGEGROUPDATA_GET_BEGINTIMESTAMP_OFFSET UNITYSDK_OFFSET(0x9F2E740)
#define RPG_CLIENT_CHALLENGEGROUPDATA_GET_CHALLENGEDATAS_OFFSET UNITYSDK_OFFSET(0x9F2E6F0)
#define RPG_CLIENT_CHALLENGEGROUPDATA_GET_CURRENTSTARCOUNT_OFFSET UNITYSDK_OFFSET(0x9F2E320)
#define RPG_CLIENT_CHALLENGEGROUPDATA_GET_EARLYACCESSCONTENTID_OFFSET UNITYSDK_OFFSET(0x9F2EAF0)
#define RPG_CLIENT_CHALLENGEGROUPDATA_GET_ENDTIMESTAMP_OFFSET UNITYSDK_OFFSET(0x9F2E7A0)
#define RPG_CLIENT_CHALLENGEGROUPDATA_GET_GROUPNAME_OFFSET UNITYSDK_OFFSET(0x9F2E6A0)
#define RPG_CLIENT_CHALLENGEGROUPDATA_GET_ISCOMPLETE_OFFSET UNITYSDK_OFFSET(0x9F2E5F0)
#define RPG_CLIENT_CHALLENGEGROUPDATA_GET_ISEARLYACCESSAVAILABLE_OFFSET UNITYSDK_OFFSET(0x9F2EAA0)
#define RPG_CLIENT_CHALLENGEGROUPDATA_GET_ISSCHEDULECHALLENGE_OFFSET UNITYSDK_OFFSET(0x9F27CF0)
#define RPG_CLIENT_CHALLENGEGROUPDATA_GET_LASTAUTOUNLOCKPROGRESS_OFFSET UNITYSDK_OFFSET(0x9F2E800)
#define RPG_CLIENT_CHALLENGEGROUPDATA_GET_MAPENTRANCEID_OFFSET UNITYSDK_OFFSET(0x9F2E700)
#define RPG_CLIENT_CHALLENGEGROUPDATA_GET_MAPPINGINFOID_OFFSET UNITYSDK_OFFSET(0x9F2E720)
#define RPG_CLIENT_CHALLENGEGROUPDATA_GET_PREMISSIONID_OFFSET UNITYSDK_OFFSET(0x9F29860)
#define RPG_CLIENT_CHALLENGEGROUPDATA_GET_SCHEDULEDATAID_OFFSET UNITYSDK_OFFSET(0x9F2E6D0)
#define RPG_CLIENT_CHALLENGEGROUPDATA_GET_SCHEDULEDATA_OFFSET UNITYSDK_OFFSET(0x9F2DFA0)
#define RPG_CLIENT_CHALLENGEGROUPDATA_GET_THEMEPICPATH_OFFSET UNITYSDK_OFFSET(0x9F2EA80)
#define RPG_CLIENT_CHALLENGEGROUPDATA_GET_TOTALSTARCOUNT_OFFSET UNITYSDK_OFFSET(0x9F2E650)
#define RPG_CLIENT_CHALLENGEGROUPDATA_GET_TYPE_OFFSET UNITYSDK_OFFSET(0x9F2D7A0)
#define RPG_CLIENT_CHALLENGEGROUPDATA_HASCHALLENGEFINISH_OFFSET UNITYSDK_OFFSET(0x9F2B220)
#define RPG_CLIENT_CHALLENGEGROUPDATA_HASCHALLENGEREWARDNOTTAKEN_OFFSET UNITYSDK_OFFSET(0x9F2DAE0)
#define RPG_CLIENT_CHALLENGEGROUPDATA_HASSTARREWARDNOTTAKEN_OFFSET UNITYSDK_OFFSET(0x9F2ADC0)
#define RPG_CLIENT_CHALLENGEGROUPDATA_ISAVAILABLE_OFFSET UNITYSDK_OFFSET(0x9F2B140)
#define RPG_CLIENT_CHALLENGEGROUPDATA_ISCUMULATIVEREWARDREACHED_OFFSET UNITYSDK_OFFSET(0x9F2DD60)
#define RPG_CLIENT_CHALLENGEGROUPDATA_ISCUMULATIVEREWARDTAKEN_OFFSET UNITYSDK_OFFSET(0x9F2DDC0)
#define RPG_CLIENT_CHALLENGEGROUPDATA_ISFIRSTCHALLENGEUNLOCK_OFFSET UNITYSDK_OFFSET(0x9F2DF20)
#define RPG_CLIENT_CHALLENGEGROUPDATA_ISINSCHEDULE_OFFSET UNITYSDK_OFFSET(0x9F2AD40)
#define RPG_CLIENT_CHALLENGEGROUPDATA_SETTAKENREWARDFLAGS_OFFSET UNITYSDK_OFFSET(0x9F2E220)
#define RPG_CLIENT_CHALLENGEGROUPDATA_SETTAKENREWARDFLAG_OFFSET UNITYSDK_OFFSET(0x9F2E2A0)
#define RPG_CLIENT_CHALLENGEGROUPDATA_SET_LASTAUTOUNLOCKPROGRESS_OFFSET UNITYSDK_OFFSET(0x9F2E920)
#define RPG_CLIENT_CHALLENGEGROUPDATA__CHECKCHALLENGEDATAS_OFFSET UNITYSDK_OFFSET(0x9F2D8F0)
#define RPG_CLIENT_CHALLENGEGROUPDATA__CTOR_OFFSET UNITYSDK_OFFSET(0x9F2D6C0)
#define RPG_CLIENT_CHALLENGEGROUPDATA__HASOPENEDCHALLENGEDATA_OFFSET UNITYSDK_OFFSET(0x9F2E540)
#define RPG_CLIENT_CHALLENGEGROUPDATA__ISFINISHPREMISSION_OFFSET UNITYSDK_OFFSET(0x9F2DE10)

namespace RPG::Client
{
	inline static constexpr unsigned int ChallengeGroupData_TypeDefinitionIndex = 58113;

	class ChallengeGroupData : public ::System::Object
	{
	public:
		// static const ::System::Int32 MAX_CHALLENGE_STAR = 0x3; // 0x0
		::RPG::GameCore::ChallengeGeneralConfigRow* _GeneralConfigRow; // 0x10
		::System::Collections::Generic::List_1<::RPG::Client::ChallengeData*>* _ChallengeDatas; // 0x18
		::RPG::Client::CheckItemFinishMainMission* _FinishMainMissionCheckItem; // 0x20
		::RPG::GameCore::ChallengeGroupConfigRow* Row; // 0x28
		::RPG::Client::ScheduleData* _ScheduleData; // 0x30
		::System::UInt32 ID; // 0x38
		::System::UInt64 _TakenRewardBits; // 0x40

		::System::Void _ctor(::System::UInt32 groupConfigID)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEGROUPDATA__CTOR_OFFSET))(this, groupConfigID);
		}

		::System::Boolean AddChallenge(::RPG::Client::ChallengeData* challengeData)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::ChallengeData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEGROUPDATA_ADDCHALLENGE_OFFSET))(this, challengeData);
		}

		::System::Int32 GetChallengeIndex(::System::UInt32 challengeID)
		{
			return ((::System::Int32(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEGROUPDATA_GETCHALLENGEINDEX_OFFSET))(this, challengeID);
		}

		::RPG::Client::ChallengeData* GetNextChallengeData(::System::UInt32 challengeID)
		{
			return ((::RPG::Client::ChallengeData*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEGROUPDATA_GETNEXTCHALLENGEDATA_OFFSET))(this, challengeID);
		}

		::System::Boolean HasChallengeRewardNotTaken()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEGROUPDATA_HASCHALLENGEREWARDNOTTAKEN_OFFSET))(this);
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

		::System::Collections::Generic::List_1<::RPG::GameCore::ChallengeMazeRewardLineRow*>* GetCumulativeRewardInfos()
		{
			return ((::System::Collections::Generic::List_1<::RPG::GameCore::ChallengeMazeRewardLineRow*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEGROUPDATA_GETCUMULATIVEREWARDINFOS_OFFSET))(this);
		}

		::System::Void SetTakenRewardFlags(::System::UInt64 takenRewardBit)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt64))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEGROUPDATA_SETTAKENREWARDFLAGS_OFFSET))(this, takenRewardBit);
		}

		::System::Void SetTakenRewardFlag(::System::Int32 starCount)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEGROUPDATA_SETTAKENREWARDFLAG_OFFSET))(this, starCount);
		}

		::System::Boolean IsCumulativeRewardReached(::System::Int32 targetStarCount)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEGROUPDATA_ISCUMULATIVEREWARDREACHED_OFFSET))(this, targetStarCount);
		}

		::System::Boolean IsCumulativeRewardTaken(::System::Int32 starCount)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEGROUPDATA_ISCUMULATIVEREWARDTAKEN_OFFSET))(this, starCount);
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

		::System::Boolean _HasOpenedChallengeData()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEGROUPDATA__HASOPENEDCHALLENGEDATA_OFFSET))(this);
		}

		::System::Void _CheckChallengeDatas()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEGROUPDATA__CHECKCHALLENGEDATAS_OFFSET))(this);
		}

		::System::Boolean _IsFinishPreMission()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEGROUPDATA__ISFINISHPREMISSION_OFFSET))(this);
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

		::System::UInt32 get_LastAutoUnlockProgress()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEGROUPDATA_GET_LASTAUTOUNLOCKPROGRESS_OFFSET))(this);
		}

		::System::Void set_LastAutoUnlockProgress(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEGROUPDATA_SET_LASTAUTOUNLOCKPROGRESS_OFFSET))(this, value);
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
	};
}

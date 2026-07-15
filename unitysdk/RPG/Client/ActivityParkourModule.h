#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/BaseModule.h"

class Class_1_3CB66EAA8C4DE7F9;
class Class_1_B5F49ECDEF00FE15;
class Class_1_FDFA365FE186E8F2_25;
namespace RPG::Client { class ParkourBall; }
namespace RPG::Client { class ParkourLevel; }
namespace RPG::Client { class ParkourLevelGroup; }
namespace RPG::Client { class ParkourRank; }
namespace RPG::Client { class ScheduleData; }
namespace RPG::Client { class ScheduleTask; }
namespace RPG::Client::Promises { class IPromise; }
namespace RPG::Client::Promises { template <typename T> class IPromise_1; }
namespace RPG::Client::Promises { template <typename T> class Promise_1; }
namespace System { class Object; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class SortedList_2; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_ACTIVITYPARKOURMODULE_ASYNCGETRANKINGWITHPROMISE_OFFSET UNITYSDK_OFFSET(0x19321E90)
#define RPG_CLIENT_ACTIVITYPARKOURMODULE_CHECKHASREWARDCANTAKE_OFFSET UNITYSDK_OFFSET(0x193228E0)
#define RPG_CLIENT_ACTIVITYPARKOURMODULE_CHECKHASUNFINISHEDLEVEL_OFFSET UNITYSDK_OFFSET(0x193225A0)
#define RPG_CLIENT_ACTIVITYPARKOURMODULE_CHECKISPARKOURFLOOR_OFFSET UNITYSDK_OFFSET(0x19321F10)
#define RPG_CLIENT_ACTIVITYPARKOURMODULE_CHECKRANKHASSEEN_OFFSET UNITYSDK_OFFSET(0x193227F0)
#define RPG_CLIENT_ACTIVITYPARKOURMODULE_CHECKREWARDHASSEEN_OFFSET UNITYSDK_OFFSET(0x19322700)
#define RPG_CLIENT_ACTIVITYPARKOURMODULE_ENDLEVEL_OFFSET UNITYSDK_OFFSET(0x19321E30)
#define RPG_CLIENT_ACTIVITYPARKOURMODULE_GETBALLBYID_OFFSET UNITYSDK_OFFSET(0x19321BD0)
#define RPG_CLIENT_ACTIVITYPARKOURMODULE_GETBALLIDS_OFFSET UNITYSDK_OFFSET(0x193215A0)
#define RPG_CLIENT_ACTIVITYPARKOURMODULE_GETLEVELBYID_OFFSET UNITYSDK_OFFSET(0x19321400)
#define RPG_CLIENT_ACTIVITYPARKOURMODULE_GETLEVELGROUPBYID_OFFSET UNITYSDK_OFFSET(0x193211A0)
#define RPG_CLIENT_ACTIVITYPARKOURMODULE_GETLEVELGROUPBYINDEX_OFFSET UNITYSDK_OFFSET(0x19321110)
#define RPG_CLIENT_ACTIVITYPARKOURMODULE_GETLEVELGROUPBYLEVELID_OFFSET UNITYSDK_OFFSET(0x193212A0)
#define RPG_CLIENT_ACTIVITYPARKOURMODULE_GETPARKOURRANK_OFFSET UNITYSDK_OFFSET(0x19321D10)
#define RPG_CLIENT_ACTIVITYPARKOURMODULE_GET_ACTIVITYREWARDID_OFFSET UNITYSDK_OFFSET(0x1931FE50)
#define RPG_CLIENT_ACTIVITYPARKOURMODULE_GET_COUNTOFLEVELGROUP_OFFSET UNITYSDK_OFFSET(0x1931FEA0)
#define RPG_CLIENT_ACTIVITYPARKOURMODULE_GET_FLOORID_OFFSET UNITYSDK_OFFSET(0x19320030)
#define RPG_CLIENT_ACTIVITYPARKOURMODULE_GET_FRIENDRANKLEVELS_OFFSET UNITYSDK_OFFSET(0x1931FFF0)
#define RPG_CLIENT_ACTIVITYPARKOURMODULE_GET_MISSIONENTRANCEID_OFFSET UNITYSDK_OFFSET(0x1931FEF0)
#define RPG_CLIENT_ACTIVITYPARKOURMODULE_INIT_OFFSET UNITYSDK_OFFSET(0x193200F0)
#define RPG_CLIENT_ACTIVITYPARKOURMODULE_ISFINALGROUPLEVEL_OFFSET UNITYSDK_OFFSET(0x193213A0)
#define RPG_CLIENT_ACTIVITYPARKOURMODULE_ISFINISHEDALLLEVEL_OFFSET UNITYSDK_OFFSET(0x19321490)
#define RPG_CLIENT_ACTIVITYPARKOURMODULE_MARKRANKHASSEEN_OFFSET UNITYSDK_OFFSET(0x19322850)
#define RPG_CLIENT_ACTIVITYPARKOURMODULE_MARKREWARDHASSEEN_OFFSET UNITYSDK_OFFSET(0x19322760)
#define RPG_CLIENT_ACTIVITYPARKOURMODULE_PREPARESUBMISSION_OFFSET UNITYSDK_OFFSET(0x19321F70)
#define RPG_CLIENT_ACTIVITYPARKOURMODULE_STARTLEVEL_OFFSET UNITYSDK_OFFSET(0x19321DC0)
#define RPG_CLIENT_ACTIVITYPARKOURMODULE__ADDNOTIFYHANDLERS_OFFSET UNITYSDK_OFFSET(0x19320CE0)
#define RPG_CLIENT_ACTIVITYPARKOURMODULE__ADDPACKETHANDLERS_OFFSET UNITYSDK_OFFSET(0x19320A20)
#define RPG_CLIENT_ACTIVITYPARKOURMODULE__CREATEPARKOURRANKS_OFFSET UNITYSDK_OFFSET(0x19323280)
#define RPG_CLIENT_ACTIVITYPARKOURMODULE__CTOR_OFFSET UNITYSDK_OFFSET(0x19323820)
#define RPG_CLIENT_ACTIVITYPARKOURMODULE__GETLEVELS_OFFSET UNITYSDK_OFFSET(0x19323610)
#define RPG_CLIENT_ACTIVITYPARKOURMODULE__INITBALLS_OFFSET UNITYSDK_OFFSET(0x193201E0)
#define RPG_CLIENT_ACTIVITYPARKOURMODULE__INITLEVELGROUPS_OFFSET UNITYSDK_OFFSET(0x19320780)
#define RPG_CLIENT_ACTIVITYPARKOURMODULE__INITLEVELS_OFFSET UNITYSDK_OFFSET(0x19320490)
#define RPG_CLIENT_ACTIVITYPARKOURMODULE__ONPARKOURENDLEVELSCRSP_OFFSET UNITYSDK_OFFSET(0x19322CE0)
#define RPG_CLIENT_ACTIVITYPARKOURMODULE__ONPARKOURGETDATASCRSP_OFFSET UNITYSDK_OFFSET(0x19322A30)
#define RPG_CLIENT_ACTIVITYPARKOURMODULE__ONPARKOURGETRANKINGINFOSCRSP_OFFSET UNITYSDK_OFFSET(0x19322E50)
#define RPG_CLIENT_ACTIVITYPARKOURMODULE__ONPARKOURSTARTLEVELSCRSP_OFFSET UNITYSDK_OFFSET(0x19322B90)
#define RPG_CLIENT_ACTIVITYPARKOURMODULE__ONSCHEDULECLOSE_OFFSET UNITYSDK_OFFSET(0x193210B0)
#define RPG_CLIENT_ACTIVITYPARKOURMODULE__ONSCHEDULEOPEN_OFFSET UNITYSDK_OFFSET(0x19321060)
#define RPG_CLIENT_ACTIVITYPARKOURMODULE__SENDINITREQUEST_OFFSET UNITYSDK_OFFSET(0x19320D20)

namespace RPG::Client
{
	inline static constexpr unsigned int ActivityParkourModule_TypeDefinitionIndex = 59083;

	class ActivityParkourModule : public ::RPG::Client::BaseModule
	{
	public:
		::Class_1_B5F49ECDEF00FE15* _ServerAgent; // 0x10
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::Client::ParkourLevel*>* _Levels; // 0x18
		::System::Collections::Generic::SortedList_2<::System::UInt32, ::RPG::Client::ParkourBall*>* _Balls; // 0x20
		::System::Collections::Generic::List_1<::RPG::Client::ParkourLevelGroup*>* _LevelGroups; // 0x28
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::Collections::Generic::List_1<::RPG::Client::ParkourRank*>*>* _Ranks; // 0x30
		::RPG::Client::ScheduleTask* _WaitOpenScheduleTask; // 0x38
		::RPG::Client::Promises::Promise_1<::System::Boolean>* _GetRankingPromise; // 0x40
		::System::Collections::Generic::HashSet_1<::System::UInt32>* _UpgradeBallIDs; // 0x48
		::System::Collections::Generic::List_1<::System::UInt32>* _FriendRankLevels; // 0x50
		::RPG::Client::ScheduleTask* _WaitCloseScheduleTask; // 0x58

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYPARKOURMODULE__CTOR_OFFSET))(this);
		}

		::System::UInt32 get_ActivityRewardID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYPARKOURMODULE_GET_ACTIVITYREWARDID_OFFSET))(this);
		}

		::System::Int32 get_CountOfLevelGroup()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYPARKOURMODULE_GET_COUNTOFLEVELGROUP_OFFSET))(this);
		}

		::System::UInt32 get_MissionEntranceID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYPARKOURMODULE_GET_MISSIONENTRANCEID_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::System::UInt32>* get_FriendRankLevels()
		{
			return ((::System::Collections::Generic::List_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYPARKOURMODULE_GET_FRIENDRANKLEVELS_OFFSET))(this);
		}

		::System::UInt32 get_FloorID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYPARKOURMODULE_GET_FLOORID_OFFSET))(this);
		}

		::System::Void Init()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYPARKOURMODULE_INIT_OFFSET))(this);
		}

		::System::Void _AddPacketHandlers()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYPARKOURMODULE__ADDPACKETHANDLERS_OFFSET))(this);
		}

		::System::Void _AddNotifyHandlers()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYPARKOURMODULE__ADDNOTIFYHANDLERS_OFFSET))(this);
		}

		::System::Void _SendInitRequest()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYPARKOURMODULE__SENDINITREQUEST_OFFSET))(this);
		}

		::System::Void _OnScheduleOpen(::RPG::Client::ScheduleData* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::ScheduleData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYPARKOURMODULE__ONSCHEDULEOPEN_OFFSET))(this, a1);
		}

		::System::Void _OnScheduleClose(::RPG::Client::ScheduleData* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::ScheduleData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYPARKOURMODULE__ONSCHEDULECLOSE_OFFSET))(this, a1);
		}

		::RPG::Client::ParkourLevelGroup* GetLevelGroupByIndex(::System::Int32 a1)
		{
			return ((::RPG::Client::ParkourLevelGroup*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYPARKOURMODULE_GETLEVELGROUPBYINDEX_OFFSET))(this, a1);
		}

		::RPG::Client::ParkourLevelGroup* GetLevelGroupByID(::System::UInt32 a1)
		{
			return ((::RPG::Client::ParkourLevelGroup*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYPARKOURMODULE_GETLEVELGROUPBYID_OFFSET))(this, a1);
		}

		::RPG::Client::ParkourLevelGroup* GetLevelGroupByLevelID(::System::UInt32 a1)
		{
			return ((::RPG::Client::ParkourLevelGroup*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYPARKOURMODULE_GETLEVELGROUPBYLEVELID_OFFSET))(this, a1);
		}

		::System::Boolean IsFinalGroupLevel(::System::UInt32 a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYPARKOURMODULE_ISFINALGROUPLEVEL_OFFSET))(this, a1);
		}

		::RPG::Client::ParkourLevel* GetLevelByID(::System::UInt32 a1)
		{
			return ((::RPG::Client::ParkourLevel*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYPARKOURMODULE_GETLEVELBYID_OFFSET))(this, a1);
		}

		::System::Boolean IsFinishedAllLevel()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYPARKOURMODULE_ISFINISHEDALLLEVEL_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::System::UInt32>* GetBallIDs()
		{
			return ((::System::Collections::Generic::List_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYPARKOURMODULE_GETBALLIDS_OFFSET))(this);
		}

		::RPG::Client::ParkourBall* GetBallByID(::System::UInt32 a1)
		{
			return ((::RPG::Client::ParkourBall*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYPARKOURMODULE_GETBALLBYID_OFFSET))(this, a1);
		}

		::System::Collections::Generic::List_1<::RPG::Client::ParkourRank*>* GetParkourRank(::System::UInt32 a1)
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::ParkourRank*>*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYPARKOURMODULE_GETPARKOURRANK_OFFSET))(this, a1);
		}

		::System::Void StartLevel(::System::UInt32 a1, ::System::UInt32 a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYPARKOURMODULE_STARTLEVEL_OFFSET))(this, a1, a2);
		}

		::System::Void EndLevel(::Class_1_3CB66EAA8C4DE7F9* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_3CB66EAA8C4DE7F9*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYPARKOURMODULE_ENDLEVEL_OFFSET))(this, a1);
		}

		::RPG::Client::Promises::IPromise_1<::System::Boolean>* AsyncGetRankingWithPromise()
		{
			return ((::RPG::Client::Promises::IPromise_1<::System::Boolean>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYPARKOURMODULE_ASYNCGETRANKINGWITHPROMISE_OFFSET))(this);
		}

		::System::Boolean CheckIsParkourFloor(::System::UInt32 a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYPARKOURMODULE_CHECKISPARKOURFLOOR_OFFSET))(this, a1);
		}

		::RPG::Client::Promises::IPromise* PrepareSubmission()
		{
			return ((::RPG::Client::Promises::IPromise*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYPARKOURMODULE_PREPARESUBMISSION_OFFSET))(this);
		}

		::System::Boolean CheckHasUnfinishedLevel()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYPARKOURMODULE_CHECKHASUNFINISHEDLEVEL_OFFSET))(this);
		}

		::System::Boolean CheckRewardHasSeen()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYPARKOURMODULE_CHECKREWARDHASSEEN_OFFSET))(this);
		}

		::System::Void MarkRewardHasSeen()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYPARKOURMODULE_MARKREWARDHASSEEN_OFFSET))(this);
		}

		::System::Boolean CheckRankHasSeen()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYPARKOURMODULE_CHECKRANKHASSEEN_OFFSET))(this);
		}

		::System::Void MarkRankHasSeen()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYPARKOURMODULE_MARKRANKHASSEEN_OFFSET))(this);
		}

		::System::Boolean CheckHasRewardCanTake()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYPARKOURMODULE_CHECKHASREWARDCANTAKE_OFFSET))(this);
		}

		::System::Void _OnParkourGetDataScRsp(::System::UInt16 a1, ::System::Object* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYPARKOURMODULE__ONPARKOURGETDATASCRSP_OFFSET))(this, a1, a2);
		}

		::System::Void _OnParkourStartLevelScRsp(::System::UInt16 a1, ::System::Object* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYPARKOURMODULE__ONPARKOURSTARTLEVELSCRSP_OFFSET))(this, a1, a2);
		}

		::System::Void _OnParkourEndLevelScRsp(::System::UInt16 a1, ::System::Object* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYPARKOURMODULE__ONPARKOURENDLEVELSCRSP_OFFSET))(this, a1, a2);
		}

		::System::Void _OnParkourGetRankingInfoScRsp(::System::UInt16 a1, ::System::Object* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYPARKOURMODULE__ONPARKOURGETRANKINGINFOSCRSP_OFFSET))(this, a1, a2);
		}

		::System::Void _InitLevels()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYPARKOURMODULE__INITLEVELS_OFFSET))(this);
		}

		::System::Void _InitLevelGroups()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYPARKOURMODULE__INITLEVELGROUPS_OFFSET))(this);
		}

		::System::Void _InitBalls()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYPARKOURMODULE__INITBALLS_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::RPG::Client::ParkourLevel*>* _GetLevels(::Il2CppArray<::System::UInt32>* a1)
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::ParkourLevel*>*(*)(::PVOID, ::Il2CppArray<::System::UInt32>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYPARKOURMODULE__GETLEVELS_OFFSET))(this, a1);
		}

		::System::Collections::Generic::List_1<::RPG::Client::ParkourRank*>* _CreateParkourRanks(::Class_1_FDFA365FE186E8F2_25* a1)
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::ParkourRank*>*(*)(::PVOID, ::Class_1_FDFA365FE186E8F2_25*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYPARKOURMODULE__CREATEPARKOURRANKS_OFFSET))(this, a1);
		}
	};
}

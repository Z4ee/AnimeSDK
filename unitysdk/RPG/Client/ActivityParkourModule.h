#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/BaseModule.h"

class Class_1_3CB66EAA8C4DE7F9;
class Class_1_7FF19F6206AF6DD7_34;
class Class_1_B5F49ECDEF00FE15;
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

#define RPG_CLIENT_ACTIVITYPARKOURMODULE_ASYNCGETRANKINGWITHPROMISE_OFFSET UNITYSDK_OFFSET(0x9C3A620)
#define RPG_CLIENT_ACTIVITYPARKOURMODULE_CHECKHASREWARDCANTAKE_OFFSET UNITYSDK_OFFSET(0x9C3AF90)
#define RPG_CLIENT_ACTIVITYPARKOURMODULE_CHECKHASUNFINISHEDLEVEL_OFFSET UNITYSDK_OFFSET(0x9C3AC50)
#define RPG_CLIENT_ACTIVITYPARKOURMODULE_CHECKISPARKOURFLOOR_OFFSET UNITYSDK_OFFSET(0x9C3A6A0)
#define RPG_CLIENT_ACTIVITYPARKOURMODULE_CHECKRANKHASSEEN_OFFSET UNITYSDK_OFFSET(0x9C3AEA0)
#define RPG_CLIENT_ACTIVITYPARKOURMODULE_CHECKREWARDHASSEEN_OFFSET UNITYSDK_OFFSET(0x9C3ADB0)
#define RPG_CLIENT_ACTIVITYPARKOURMODULE_ENDLEVEL_OFFSET UNITYSDK_OFFSET(0x9C3A5C0)
#define RPG_CLIENT_ACTIVITYPARKOURMODULE_GETBALLBYID_OFFSET UNITYSDK_OFFSET(0x9C3A320)
#define RPG_CLIENT_ACTIVITYPARKOURMODULE_GETBALLIDS_OFFSET UNITYSDK_OFFSET(0x9C39ED0)
#define RPG_CLIENT_ACTIVITYPARKOURMODULE_GETLEVELBYID_OFFSET UNITYSDK_OFFSET(0x9C39CF0)
#define RPG_CLIENT_ACTIVITYPARKOURMODULE_GETLEVELGROUPBYID_OFFSET UNITYSDK_OFFSET(0x9C39AC0)
#define RPG_CLIENT_ACTIVITYPARKOURMODULE_GETLEVELGROUPBYINDEX_OFFSET UNITYSDK_OFFSET(0x9C39A20)
#define RPG_CLIENT_ACTIVITYPARKOURMODULE_GETLEVELGROUPBYLEVELID_OFFSET UNITYSDK_OFFSET(0x9C39BA0)
#define RPG_CLIENT_ACTIVITYPARKOURMODULE_GETPARKOURRANK_OFFSET UNITYSDK_OFFSET(0x9C3A470)
#define RPG_CLIENT_ACTIVITYPARKOURMODULE_GET_ACTIVITYREWARDID_OFFSET UNITYSDK_OFFSET(0x9C38BD0)
#define RPG_CLIENT_ACTIVITYPARKOURMODULE_GET_COUNTOFLEVELGROUP_OFFSET UNITYSDK_OFFSET(0x9C38BE0)
#define RPG_CLIENT_ACTIVITYPARKOURMODULE_GET_FLOORID_OFFSET UNITYSDK_OFFSET(0x9C38D30)
#define RPG_CLIENT_ACTIVITYPARKOURMODULE_GET_FRIENDRANKLEVELS_OFFSET UNITYSDK_OFFSET(0x9C38D20)
#define RPG_CLIENT_ACTIVITYPARKOURMODULE_GET_MISSIONENTRANCEID_OFFSET UNITYSDK_OFFSET(0x9C38C30)
#define RPG_CLIENT_ACTIVITYPARKOURMODULE_INIT_OFFSET UNITYSDK_OFFSET(0x9C38DE0)
#define RPG_CLIENT_ACTIVITYPARKOURMODULE_ISFINALGROUPLEVEL_OFFSET UNITYSDK_OFFSET(0x9C39C80)
#define RPG_CLIENT_ACTIVITYPARKOURMODULE_ISFINISHEDALLLEVEL_OFFSET UNITYSDK_OFFSET(0x9C39DB0)
#define RPG_CLIENT_ACTIVITYPARKOURMODULE_MARKRANKHASSEEN_OFFSET UNITYSDK_OFFSET(0x9C3AF00)
#define RPG_CLIENT_ACTIVITYPARKOURMODULE_MARKREWARDHASSEEN_OFFSET UNITYSDK_OFFSET(0x9C3AE10)
#define RPG_CLIENT_ACTIVITYPARKOURMODULE_PREPARESUBMISSION_OFFSET UNITYSDK_OFFSET(0x9C3A700)
#define RPG_CLIENT_ACTIVITYPARKOURMODULE_STARTLEVEL_OFFSET UNITYSDK_OFFSET(0x9C3A550)
#define RPG_CLIENT_ACTIVITYPARKOURMODULE__ADDNOTIFYHANDLERS_OFFSET UNITYSDK_OFFSET(0x9C39650)
#define RPG_CLIENT_ACTIVITYPARKOURMODULE__ADDPACKETHANDLERS_OFFSET UNITYSDK_OFFSET(0x9C39530)
#define RPG_CLIENT_ACTIVITYPARKOURMODULE__CREATEPARKOURRANKS_OFFSET UNITYSDK_OFFSET(0x9C3B890)
#define RPG_CLIENT_ACTIVITYPARKOURMODULE__CTOR_OFFSET UNITYSDK_OFFSET(0x9C3BCB0)
#define RPG_CLIENT_ACTIVITYPARKOURMODULE__GETLEVELS_OFFSET UNITYSDK_OFFSET(0x9C3BAE0)
#define RPG_CLIENT_ACTIVITYPARKOURMODULE__INITBALLS_OFFSET UNITYSDK_OFFSET(0x9C38EF0)
#define RPG_CLIENT_ACTIVITYPARKOURMODULE__INITLEVELGROUPS_OFFSET UNITYSDK_OFFSET(0x9C39340)
#define RPG_CLIENT_ACTIVITYPARKOURMODULE__INITLEVELS_OFFSET UNITYSDK_OFFSET(0x9C390E0)
#define RPG_CLIENT_ACTIVITYPARKOURMODULE__ONPARKOURENDLEVELSCRSP_OFFSET UNITYSDK_OFFSET(0x9C3B390)
#define RPG_CLIENT_ACTIVITYPARKOURMODULE__ONPARKOURGETDATASCRSP_OFFSET UNITYSDK_OFFSET(0x9C3B0E0)
#define RPG_CLIENT_ACTIVITYPARKOURMODULE__ONPARKOURGETRANKINGINFOSCRSP_OFFSET UNITYSDK_OFFSET(0x9C3B500)
#define RPG_CLIENT_ACTIVITYPARKOURMODULE__ONPARKOURSTARTLEVELSCRSP_OFFSET UNITYSDK_OFFSET(0x9C3B240)
#define RPG_CLIENT_ACTIVITYPARKOURMODULE__ONSCHEDULECLOSE_OFFSET UNITYSDK_OFFSET(0x9C399C0)
#define RPG_CLIENT_ACTIVITYPARKOURMODULE__ONSCHEDULEOPEN_OFFSET UNITYSDK_OFFSET(0x9C39970)
#define RPG_CLIENT_ACTIVITYPARKOURMODULE__SENDINITREQUEST_OFFSET UNITYSDK_OFFSET(0x9C39690)
#define RPG_CLIENT_ACTIVITYPARKOURMODULE___IFIXBASEPROXY_INIT_OFFSET UNITYSDK_OFFSET(0x9C3BF00)
#define RPG_CLIENT_ACTIVITYPARKOURMODULE___IFIXBASEPROXY__ADDNOTIFYHANDLERS_OFFSET UNITYSDK_OFFSET(0x9C3BFF0)
#define RPG_CLIENT_ACTIVITYPARKOURMODULE___IFIXBASEPROXY__ADDPACKETHANDLERS_OFFSET UNITYSDK_OFFSET(0x9C3BF90)

namespace RPG::Client
{
	inline static constexpr unsigned int ActivityParkourModule_TypeDefinitionIndex = 57030;

	class ActivityParkourModule : public ::RPG::Client::BaseModule
	{
	public:
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::Collections::Generic::List_1<::RPG::Client::ParkourRank*>*>* _Ranks; // 0x10
		::RPG::Client::ScheduleTask* _WaitOpenScheduleTask; // 0x18
		::System::Collections::Generic::SortedList_2<::System::UInt32, ::RPG::Client::ParkourBall*>* _Balls; // 0x20
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::Client::ParkourLevel*>* _Levels; // 0x28
		::System::Collections::Generic::List_1<::RPG::Client::ParkourLevelGroup*>* _LevelGroups; // 0x30
		::System::Collections::Generic::HashSet_1<::System::UInt32>* _UpgradeBallIDs; // 0x38
		::Class_1_B5F49ECDEF00FE15* _ServerAgent; // 0x40
		::RPG::Client::Promises::Promise_1<::System::Boolean>* _GetRankingPromise; // 0x48
		::RPG::Client::ScheduleTask* _WaitCloseScheduleTask; // 0x50
		::System::Collections::Generic::List_1<::System::UInt32>* _FriendRankLevels; // 0x58

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

		::System::Void _OnScheduleOpen(::RPG::Client::ScheduleData* scheduleData)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::ScheduleData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYPARKOURMODULE__ONSCHEDULEOPEN_OFFSET))(this, scheduleData);
		}

		::System::Void _OnScheduleClose(::RPG::Client::ScheduleData* scheduleData)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::ScheduleData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYPARKOURMODULE__ONSCHEDULECLOSE_OFFSET))(this, scheduleData);
		}

		::RPG::Client::ParkourLevelGroup* GetLevelGroupByIndex(::System::Int32 index)
		{
			return ((::RPG::Client::ParkourLevelGroup*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYPARKOURMODULE_GETLEVELGROUPBYINDEX_OFFSET))(this, index);
		}

		::RPG::Client::ParkourLevelGroup* GetLevelGroupByID(::System::UInt32 ID)
		{
			return ((::RPG::Client::ParkourLevelGroup*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYPARKOURMODULE_GETLEVELGROUPBYID_OFFSET))(this, ID);
		}

		::RPG::Client::ParkourLevelGroup* GetLevelGroupByLevelID(::System::UInt32 levelID)
		{
			return ((::RPG::Client::ParkourLevelGroup*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYPARKOURMODULE_GETLEVELGROUPBYLEVELID_OFFSET))(this, levelID);
		}

		::System::Boolean IsFinalGroupLevel(::System::UInt32 levelID)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYPARKOURMODULE_ISFINALGROUPLEVEL_OFFSET))(this, levelID);
		}

		::RPG::Client::ParkourLevel* GetLevelByID(::System::UInt32 levelID)
		{
			return ((::RPG::Client::ParkourLevel*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYPARKOURMODULE_GETLEVELBYID_OFFSET))(this, levelID);
		}

		::System::Boolean IsFinishedAllLevel()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYPARKOURMODULE_ISFINISHEDALLLEVEL_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::System::UInt32>* GetBallIDs()
		{
			return ((::System::Collections::Generic::List_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYPARKOURMODULE_GETBALLIDS_OFFSET))(this);
		}

		::RPG::Client::ParkourBall* GetBallByID(::System::UInt32 id)
		{
			return ((::RPG::Client::ParkourBall*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYPARKOURMODULE_GETBALLBYID_OFFSET))(this, id);
		}

		::System::Collections::Generic::List_1<::RPG::Client::ParkourRank*>* GetParkourRank(::System::UInt32 levelID)
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::ParkourRank*>*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYPARKOURMODULE_GETPARKOURRANK_OFFSET))(this, levelID);
		}

		::System::Void StartLevel(::System::UInt32 levelID, ::System::UInt32 ballID)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYPARKOURMODULE_STARTLEVEL_OFFSET))(this, levelID, ballID);
		}

		::System::Void EndLevel(::Class_1_3CB66EAA8C4DE7F9* result)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_3CB66EAA8C4DE7F9*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYPARKOURMODULE_ENDLEVEL_OFFSET))(this, result);
		}

		::RPG::Client::Promises::IPromise_1<::System::Boolean>* AsyncGetRankingWithPromise()
		{
			return ((::RPG::Client::Promises::IPromise_1<::System::Boolean>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYPARKOURMODULE_ASYNCGETRANKINGWITHPROMISE_OFFSET))(this);
		}

		::System::Boolean CheckIsParkourFloor(::System::UInt32 floorID)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYPARKOURMODULE_CHECKISPARKOURFLOOR_OFFSET))(this, floorID);
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

		::System::Void _OnParkourGetDataScRsp(::System::UInt16 cmd, ::System::Object* rspObject)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYPARKOURMODULE__ONPARKOURGETDATASCRSP_OFFSET))(this, cmd, rspObject);
		}

		::System::Void _OnParkourStartLevelScRsp(::System::UInt16 cmd, ::System::Object* rspObject)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYPARKOURMODULE__ONPARKOURSTARTLEVELSCRSP_OFFSET))(this, cmd, rspObject);
		}

		::System::Void _OnParkourEndLevelScRsp(::System::UInt16 cmd, ::System::Object* rspObject)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYPARKOURMODULE__ONPARKOURENDLEVELSCRSP_OFFSET))(this, cmd, rspObject);
		}

		::System::Void _OnParkourGetRankingInfoScRsp(::System::UInt16 cmd, ::System::Object* rspObject)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYPARKOURMODULE__ONPARKOURGETRANKINGINFOSCRSP_OFFSET))(this, cmd, rspObject);
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

		::System::Collections::Generic::List_1<::RPG::Client::ParkourLevel*>* _GetLevels(::Il2CppArray<::System::UInt32>* levelIDs)
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::ParkourLevel*>*(*)(::PVOID, ::Il2CppArray<::System::UInt32>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYPARKOURMODULE__GETLEVELS_OFFSET))(this, levelIDs);
		}

		::System::Collections::Generic::List_1<::RPG::Client::ParkourRank*>* _CreateParkourRanks(::Class_1_7FF19F6206AF6DD7_34* rankingInfo)
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::ParkourRank*>*(*)(::PVOID, ::Class_1_7FF19F6206AF6DD7_34*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYPARKOURMODULE__CREATEPARKOURRANKS_OFFSET))(this, rankingInfo);
		}

		::System::Void __iFixBaseProxy_Init()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYPARKOURMODULE___IFIXBASEPROXY_INIT_OFFSET))(this);
		}

		::System::Void __iFixBaseProxy__AddPacketHandlers()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYPARKOURMODULE___IFIXBASEPROXY__ADDPACKETHANDLERS_OFFSET))(this);
		}

		::System::Void __iFixBaseProxy__AddNotifyHandlers()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYPARKOURMODULE___IFIXBASEPROXY__ADDNOTIFYHANDLERS_OFFSET))(this);
		}
	};
}

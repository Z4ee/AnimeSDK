#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/BaseModule.h"

class Class_1_3CB66EAA8C4DE7F9;
class Class_1_7FF19F6206AF6DD7_36;
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

#define RPG_CLIENT_ACTIVITYPARKOURMODULE_ASYNCGETRANKINGWITHPROMISE_OFFSET UNITYSDK_OFFSET(0xB1D9D30)
#define RPG_CLIENT_ACTIVITYPARKOURMODULE_CHECKHASREWARDCANTAKE_OFFSET UNITYSDK_OFFSET(0xB1DA650)
#define RPG_CLIENT_ACTIVITYPARKOURMODULE_CHECKHASUNFINISHEDLEVEL_OFFSET UNITYSDK_OFFSET(0xB1DA310)
#define RPG_CLIENT_ACTIVITYPARKOURMODULE_CHECKISPARKOURFLOOR_OFFSET UNITYSDK_OFFSET(0xB1D9DB0)
#define RPG_CLIENT_ACTIVITYPARKOURMODULE_CHECKRANKHASSEEN_OFFSET UNITYSDK_OFFSET(0xB1DA560)
#define RPG_CLIENT_ACTIVITYPARKOURMODULE_CHECKREWARDHASSEEN_OFFSET UNITYSDK_OFFSET(0xB1DA470)
#define RPG_CLIENT_ACTIVITYPARKOURMODULE_ENDLEVEL_OFFSET UNITYSDK_OFFSET(0xB1D9CD0)
#define RPG_CLIENT_ACTIVITYPARKOURMODULE_GETBALLBYID_OFFSET UNITYSDK_OFFSET(0xB1D9AC0)
#define RPG_CLIENT_ACTIVITYPARKOURMODULE_GETBALLIDS_OFFSET UNITYSDK_OFFSET(0xB1D9640)
#define RPG_CLIENT_ACTIVITYPARKOURMODULE_GETLEVELBYID_OFFSET UNITYSDK_OFFSET(0xB1D94A0)
#define RPG_CLIENT_ACTIVITYPARKOURMODULE_GETLEVELGROUPBYID_OFFSET UNITYSDK_OFFSET(0xB1D9230)
#define RPG_CLIENT_ACTIVITYPARKOURMODULE_GETLEVELGROUPBYINDEX_OFFSET UNITYSDK_OFFSET(0xB1D91A0)
#define RPG_CLIENT_ACTIVITYPARKOURMODULE_GETLEVELGROUPBYLEVELID_OFFSET UNITYSDK_OFFSET(0xB1D9330)
#define RPG_CLIENT_ACTIVITYPARKOURMODULE_GETPARKOURRANK_OFFSET UNITYSDK_OFFSET(0xB1D9BB0)
#define RPG_CLIENT_ACTIVITYPARKOURMODULE_GET_ACTIVITYREWARDID_OFFSET UNITYSDK_OFFSET(0xB1D7FF0)
#define RPG_CLIENT_ACTIVITYPARKOURMODULE_GET_COUNTOFLEVELGROUP_OFFSET UNITYSDK_OFFSET(0xB1D8000)
#define RPG_CLIENT_ACTIVITYPARKOURMODULE_GET_FLOORID_OFFSET UNITYSDK_OFFSET(0xB1D8160)
#define RPG_CLIENT_ACTIVITYPARKOURMODULE_GET_FRIENDRANKLEVELS_OFFSET UNITYSDK_OFFSET(0xB1D8150)
#define RPG_CLIENT_ACTIVITYPARKOURMODULE_GET_MISSIONENTRANCEID_OFFSET UNITYSDK_OFFSET(0xB1D8050)
#define RPG_CLIENT_ACTIVITYPARKOURMODULE_INIT_OFFSET UNITYSDK_OFFSET(0xB1D8220)
#define RPG_CLIENT_ACTIVITYPARKOURMODULE_ISFINALGROUPLEVEL_OFFSET UNITYSDK_OFFSET(0xB1D9430)
#define RPG_CLIENT_ACTIVITYPARKOURMODULE_ISFINISHEDALLLEVEL_OFFSET UNITYSDK_OFFSET(0xB1D9530)
#define RPG_CLIENT_ACTIVITYPARKOURMODULE_MARKRANKHASSEEN_OFFSET UNITYSDK_OFFSET(0xB1DA5C0)
#define RPG_CLIENT_ACTIVITYPARKOURMODULE_MARKREWARDHASSEEN_OFFSET UNITYSDK_OFFSET(0xB1DA4D0)
#define RPG_CLIENT_ACTIVITYPARKOURMODULE_PREPARESUBMISSION_OFFSET UNITYSDK_OFFSET(0xB1D9E10)
#define RPG_CLIENT_ACTIVITYPARKOURMODULE_STARTLEVEL_OFFSET UNITYSDK_OFFSET(0xB1D9C60)
#define RPG_CLIENT_ACTIVITYPARKOURMODULE__ADDNOTIFYHANDLERS_OFFSET UNITYSDK_OFFSET(0xB1D8DB0)
#define RPG_CLIENT_ACTIVITYPARKOURMODULE__ADDPACKETHANDLERS_OFFSET UNITYSDK_OFFSET(0xB1D8AF0)
#define RPG_CLIENT_ACTIVITYPARKOURMODULE__CREATEPARKOURRANKS_OFFSET UNITYSDK_OFFSET(0xB1DAFF0)
#define RPG_CLIENT_ACTIVITYPARKOURMODULE__CTOR_OFFSET UNITYSDK_OFFSET(0xB1DB590)
#define RPG_CLIENT_ACTIVITYPARKOURMODULE__GETLEVELS_OFFSET UNITYSDK_OFFSET(0xB1DB380)
#define RPG_CLIENT_ACTIVITYPARKOURMODULE__INITBALLS_OFFSET UNITYSDK_OFFSET(0xB1D8360)
#define RPG_CLIENT_ACTIVITYPARKOURMODULE__INITLEVELGROUPS_OFFSET UNITYSDK_OFFSET(0xB1D8850)
#define RPG_CLIENT_ACTIVITYPARKOURMODULE__INITLEVELS_OFFSET UNITYSDK_OFFSET(0xB1D85B0)
#define RPG_CLIENT_ACTIVITYPARKOURMODULE__ONPARKOURENDLEVELSCRSP_OFFSET UNITYSDK_OFFSET(0xB1DAA50)
#define RPG_CLIENT_ACTIVITYPARKOURMODULE__ONPARKOURGETDATASCRSP_OFFSET UNITYSDK_OFFSET(0xB1DA7A0)
#define RPG_CLIENT_ACTIVITYPARKOURMODULE__ONPARKOURGETRANKINGINFOSCRSP_OFFSET UNITYSDK_OFFSET(0xB1DABC0)
#define RPG_CLIENT_ACTIVITYPARKOURMODULE__ONPARKOURSTARTLEVELSCRSP_OFFSET UNITYSDK_OFFSET(0xB1DA900)
#define RPG_CLIENT_ACTIVITYPARKOURMODULE__ONSCHEDULECLOSE_OFFSET UNITYSDK_OFFSET(0xB1D9140)
#define RPG_CLIENT_ACTIVITYPARKOURMODULE__ONSCHEDULEOPEN_OFFSET UNITYSDK_OFFSET(0xB1D90F0)
#define RPG_CLIENT_ACTIVITYPARKOURMODULE__SENDINITREQUEST_OFFSET UNITYSDK_OFFSET(0xB1D8DF0)
#define RPG_CLIENT_ACTIVITYPARKOURMODULE___IFIXBASEPROXY_INIT_OFFSET UNITYSDK_OFFSET(0xB1DB770)
#define RPG_CLIENT_ACTIVITYPARKOURMODULE___IFIXBASEPROXY__ADDNOTIFYHANDLERS_OFFSET UNITYSDK_OFFSET(0xB1DB850)
#define RPG_CLIENT_ACTIVITYPARKOURMODULE___IFIXBASEPROXY__ADDPACKETHANDLERS_OFFSET UNITYSDK_OFFSET(0xB1DB7F0)

namespace RPG::Client
{
	inline static constexpr unsigned int ActivityParkourModule_TypeDefinitionIndex = 57817;

	class ActivityParkourModule : public ::RPG::Client::BaseModule
	{
	public:
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::Client::ParkourLevel*>* _Levels; // 0x10
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::Collections::Generic::List_1<::RPG::Client::ParkourRank*>*>* _Ranks; // 0x18
		::System::Collections::Generic::List_1<::RPG::Client::ParkourLevelGroup*>* _LevelGroups; // 0x20
		::Class_1_B5F49ECDEF00FE15* _ServerAgent; // 0x28
		::RPG::Client::ScheduleTask* _WaitCloseScheduleTask; // 0x30
		::RPG::Client::ScheduleTask* _WaitOpenScheduleTask; // 0x38
		::RPG::Client::Promises::Promise_1<::System::Boolean>* _GetRankingPromise; // 0x40
		::System::Collections::Generic::SortedList_2<::System::UInt32, ::RPG::Client::ParkourBall*>* _Balls; // 0x48
		::System::Collections::Generic::List_1<::System::UInt32>* _FriendRankLevels; // 0x50
		::System::Collections::Generic::HashSet_1<::System::UInt32>* _UpgradeBallIDs; // 0x58

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

		::System::Collections::Generic::List_1<::RPG::Client::ParkourRank*>* _CreateParkourRanks(::Class_1_7FF19F6206AF6DD7_36* a1)
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::ParkourRank*>*(*)(::PVOID, ::Class_1_7FF19F6206AF6DD7_36*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYPARKOURMODULE__CREATEPARKOURRANKS_OFFSET))(this, a1);
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

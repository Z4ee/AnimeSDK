#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/ExpeditionBattleMapState.h"
#include "unitysdk/RPG/Client/ExpeditionBattleRank.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"

class Class_1_28D410CCE235575F_5;
namespace RPG::Client { class ExpeditionBattleRoute; }
namespace RPG::Client { class ScheduleData; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_EXPEDITIONBATTLEMAP_GETBEGINTIMESTAMP_OFFSET UNITYSDK_OFFSET(0x1B88F490)
#define RPG_CLIENT_EXPEDITIONBATTLEMAP_GETRANK_OFFSET UNITYSDK_OFFSET(0x1B88F510)
#define RPG_CLIENT_EXPEDITIONBATTLEMAP_GETSPECIALAVATARDICT_OFFSET UNITYSDK_OFFSET(0x1B88F680)
#define RPG_CLIENT_EXPEDITIONBATTLEMAP_GETSTARS_OFFSET UNITYSDK_OFFSET(0x1B88E490)
#define RPG_CLIENT_EXPEDITIONBATTLEMAP_GETSTATE_OFFSET UNITYSDK_OFFSET(0x1B88F180)
#define RPG_CLIENT_EXPEDITIONBATTLEMAP_GETUNLOCKTIMESTAMP_OFFSET UNITYSDK_OFFSET(0x1B88F410)
#define RPG_CLIENT_EXPEDITIONBATTLEMAP_GET_ACTIVITYMODULEID_OFFSET UNITYSDK_OFFSET(0x1B88EF90)
#define RPG_CLIENT_EXPEDITIONBATTLEMAP_GET_BGMSTATE_OFFSET UNITYSDK_OFFSET(0x1B88F010)
#define RPG_CLIENT_EXPEDITIONBATTLEMAP_GET_EXPEDITIONBACKGROUNDPREFABPATH_OFFSET UNITYSDK_OFFSET(0x1B88EFF0)
#define RPG_CLIENT_EXPEDITIONBATTLEMAP_GET_ID_OFFSET UNITYSDK_OFFSET(0x1B88EF70)
#define RPG_CLIENT_EXPEDITIONBATTLEMAP_GET_MAPICONPATH_OFFSET UNITYSDK_OFFSET(0x1B88EFD0)
#define RPG_CLIENT_EXPEDITIONBATTLEMAP_GET_MAPNAME_OFFSET UNITYSDK_OFFSET(0x1B88EFB0)
#define RPG_CLIENT_EXPEDITIONBATTLEMAP_GET_MAXDAILYCHALLENGECOUNT_OFFSET UNITYSDK_OFFSET(0x1B88F050)
#define RPG_CLIENT_EXPEDITIONBATTLEMAP_GET_REMAININGCHALLENGECOUNT_OFFSET UNITYSDK_OFFSET(0x1B88F070)
#define RPG_CLIENT_EXPEDITIONBATTLEMAP_GET_ROUTEIDS_OFFSET UNITYSDK_OFFSET(0x1B88F030)
#define RPG_CLIENT_EXPEDITIONBATTLEMAP_GET_ROUTES_OFFSET UNITYSDK_OFFSET(0x1B88F090)
#define RPG_CLIENT_EXPEDITIONBATTLEMAP_SET_ACTIVITYMODULEID_OFFSET UNITYSDK_OFFSET(0x1B88EFA0)
#define RPG_CLIENT_EXPEDITIONBATTLEMAP_SET_BGMSTATE_OFFSET UNITYSDK_OFFSET(0x1B88F020)
#define RPG_CLIENT_EXPEDITIONBATTLEMAP_SET_EXPEDITIONBACKGROUNDPREFABPATH_OFFSET UNITYSDK_OFFSET(0x1B88F000)
#define RPG_CLIENT_EXPEDITIONBATTLEMAP_SET_ID_OFFSET UNITYSDK_OFFSET(0x1B88EF80)
#define RPG_CLIENT_EXPEDITIONBATTLEMAP_SET_MAPICONPATH_OFFSET UNITYSDK_OFFSET(0x1B88EFE0)
#define RPG_CLIENT_EXPEDITIONBATTLEMAP_SET_MAPNAME_OFFSET UNITYSDK_OFFSET(0x1B88EFC0)
#define RPG_CLIENT_EXPEDITIONBATTLEMAP_SET_MAXDAILYCHALLENGECOUNT_OFFSET UNITYSDK_OFFSET(0x1B88F060)
#define RPG_CLIENT_EXPEDITIONBATTLEMAP_SET_REMAININGCHALLENGECOUNT_OFFSET UNITYSDK_OFFSET(0x1B88F080)
#define RPG_CLIENT_EXPEDITIONBATTLEMAP_SET_ROUTEIDS_OFFSET UNITYSDK_OFFSET(0x1B88F040)
#define RPG_CLIENT_EXPEDITIONBATTLEMAP_SYNCBYSERVER_OFFSET UNITYSDK_OFFSET(0x1B88F0A0)
#define RPG_CLIENT_EXPEDITIONBATTLEMAP__CTOR_OFFSET UNITYSDK_OFFSET(0x1B88F960)
#define RPG_CLIENT_EXPEDITIONBATTLEMAP__GETSCHEDULEDATA_OFFSET UNITYSDK_OFFSET(0x1B88F1F0)
#define RPG_CLIENT_EXPEDITIONBATTLEMAP__HASCHALLENGED_OFFSET UNITYSDK_OFFSET(0x1B88F2C0)
#define RPG_CLIENT_EXPEDITIONBATTLEMAP__SYNCREMAININGCHALLENGECOUNT_OFFSET UNITYSDK_OFFSET(0x1B88F130)

namespace RPG::Client
{
	inline static constexpr unsigned int ExpeditionBattleMap_TypeDefinitionIndex = 63907;

	class ExpeditionBattleMap : public ::System::Object
	{
	public:
		// static const ::System::UInt32 MAX_TEAM_COUNT = 0x4; // 0x0
		::System::String* _BGMState_k__BackingField; // 0x10
		::System::Collections::Generic::List_1<::RPG::Client::ExpeditionBattleRoute*>* _Routes_k__BackingField; // 0x18
		::System::String* _MapIconPath_k__BackingField; // 0x20
		::System::String* _ExpeditionBackgroundPrefabPath_k__BackingField; // 0x28
		::Il2CppArray<::System::UInt32>* _RouteIDs_k__BackingField; // 0x30
		::System::UInt32 _ID_k__BackingField; // 0x38
		::System::UInt32 _ActivityModuleID_k__BackingField; // 0x3C
		::System::UInt32 _RemainingChallengeCount_k__BackingField; // 0x40
		::System::UInt32 _MaxDailyChallengeCount_k__BackingField; // 0x44
		::RPG::Client::TextID _MapName_k__BackingField; // 0x48

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EXPEDITIONBATTLEMAP__CTOR_OFFSET))(this);
		}

		::System::UInt32 get_ID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EXPEDITIONBATTLEMAP_GET_ID_OFFSET))(this);
		}

		::System::Void set_ID(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_EXPEDITIONBATTLEMAP_SET_ID_OFFSET))(this, a1);
		}

		::System::UInt32 get_ActivityModuleID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EXPEDITIONBATTLEMAP_GET_ACTIVITYMODULEID_OFFSET))(this);
		}

		::System::Void set_ActivityModuleID(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_EXPEDITIONBATTLEMAP_SET_ACTIVITYMODULEID_OFFSET))(this, a1);
		}

		::RPG::Client::TextID get_MapName()
		{
			return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EXPEDITIONBATTLEMAP_GET_MAPNAME_OFFSET))(this);
		}

		::System::Void set_MapName(::RPG::Client::TextID a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::TextID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EXPEDITIONBATTLEMAP_SET_MAPNAME_OFFSET))(this, a1);
		}

		::System::String* get_MapIconPath()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EXPEDITIONBATTLEMAP_GET_MAPICONPATH_OFFSET))(this);
		}

		::System::Void set_MapIconPath(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_EXPEDITIONBATTLEMAP_SET_MAPICONPATH_OFFSET))(this, a1);
		}

		::System::String* get_ExpeditionBackgroundPrefabPath()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EXPEDITIONBATTLEMAP_GET_EXPEDITIONBACKGROUNDPREFABPATH_OFFSET))(this);
		}

		::System::Void set_ExpeditionBackgroundPrefabPath(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_EXPEDITIONBATTLEMAP_SET_EXPEDITIONBACKGROUNDPREFABPATH_OFFSET))(this, a1);
		}

		::System::String* get_BGMState()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EXPEDITIONBATTLEMAP_GET_BGMSTATE_OFFSET))(this);
		}

		::System::Void set_BGMState(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_EXPEDITIONBATTLEMAP_SET_BGMSTATE_OFFSET))(this, a1);
		}

		::Il2CppArray<::System::UInt32>* get_RouteIDs()
		{
			return ((::Il2CppArray<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EXPEDITIONBATTLEMAP_GET_ROUTEIDS_OFFSET))(this);
		}

		::System::Void set_RouteIDs(::Il2CppArray<::System::UInt32>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::UInt32>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_EXPEDITIONBATTLEMAP_SET_ROUTEIDS_OFFSET))(this, a1);
		}

		::System::UInt32 get_MaxDailyChallengeCount()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EXPEDITIONBATTLEMAP_GET_MAXDAILYCHALLENGECOUNT_OFFSET))(this);
		}

		::System::Void set_MaxDailyChallengeCount(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_EXPEDITIONBATTLEMAP_SET_MAXDAILYCHALLENGECOUNT_OFFSET))(this, a1);
		}

		::System::UInt32 get_RemainingChallengeCount()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EXPEDITIONBATTLEMAP_GET_REMAININGCHALLENGECOUNT_OFFSET))(this);
		}

		::System::Void set_RemainingChallengeCount(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_EXPEDITIONBATTLEMAP_SET_REMAININGCHALLENGECOUNT_OFFSET))(this, a1);
		}

		::System::Collections::Generic::List_1<::RPG::Client::ExpeditionBattleRoute*>* get_Routes()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::ExpeditionBattleRoute*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EXPEDITIONBATTLEMAP_GET_ROUTES_OFFSET))(this);
		}

		::System::Void SyncByServer(::Class_1_28D410CCE235575F_5* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_28D410CCE235575F_5*))((::PBYTE)hIl2Cpp + RPG_CLIENT_EXPEDITIONBATTLEMAP_SYNCBYSERVER_OFFSET))(this, a1);
		}

		::System::Void _SyncRemainingChallengeCount(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_EXPEDITIONBATTLEMAP__SYNCREMAININGCHALLENGECOUNT_OFFSET))(this, a1);
		}

		::RPG::Client::ExpeditionBattleMapState GetState()
		{
			return ((::RPG::Client::ExpeditionBattleMapState(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EXPEDITIONBATTLEMAP_GETSTATE_OFFSET))(this);
		}

		::System::Boolean _HasChallenged()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EXPEDITIONBATTLEMAP__HASCHALLENGED_OFFSET))(this);
		}

		::RPG::Client::ScheduleData* _GetScheduleData()
		{
			return ((::RPG::Client::ScheduleData*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EXPEDITIONBATTLEMAP__GETSCHEDULEDATA_OFFSET))(this);
		}

		::System::UInt32 GetUnlockTimeStamp()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EXPEDITIONBATTLEMAP_GETUNLOCKTIMESTAMP_OFFSET))(this);
		}

		::System::UInt32 GetBeginTimeStamp()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EXPEDITIONBATTLEMAP_GETBEGINTIMESTAMP_OFFSET))(this);
		}

		::RPG::Client::ExpeditionBattleRank GetRank()
		{
			return ((::RPG::Client::ExpeditionBattleRank(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EXPEDITIONBATTLEMAP_GETRANK_OFFSET))(this);
		}

		::System::UInt32 GetStars()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EXPEDITIONBATTLEMAP_GETSTARS_OFFSET))(this);
		}

		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::Collections::Generic::HashSet_1<::System::UInt32>*>* GetSpecialAvatarDict()
		{
			return ((::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::Collections::Generic::HashSet_1<::System::UInt32>*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EXPEDITIONBATTLEMAP_GETSPECIALAVATARDICT_OFFSET))(this);
		}
	};
}

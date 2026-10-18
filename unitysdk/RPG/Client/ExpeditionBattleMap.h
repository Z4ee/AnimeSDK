#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/ExpeditionBattleMapState.h"
#include "unitysdk/RPG/Client/ExpeditionBattleRank.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"

class Class_1_28D410CCE235575F_8;
namespace RPG::AvatarSystem { class IAvatar; }
namespace RPG::Client { class ExpeditionBattleRoute; }
namespace RPG::Client { class ScheduleData; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_EXPEDITIONBATTLEMAP_GETBEGINTIMESTAMP_OFFSET UNITYSDK_OFFSET(0xCE420F0)
#define RPG_CLIENT_EXPEDITIONBATTLEMAP_GETRANK_OFFSET UNITYSDK_OFFSET(0xCE42170)
#define RPG_CLIENT_EXPEDITIONBATTLEMAP_GETROUTETRIALAVATAR_OFFSET UNITYSDK_OFFSET(0xCE425C0)
#define RPG_CLIENT_EXPEDITIONBATTLEMAP_GETSPECIALAVATARDICT_OFFSET UNITYSDK_OFFSET(0xCE422E0)
#define RPG_CLIENT_EXPEDITIONBATTLEMAP_GETSTARS_OFFSET UNITYSDK_OFFSET(0xCE410D0)
#define RPG_CLIENT_EXPEDITIONBATTLEMAP_GETSTATE_OFFSET UNITYSDK_OFFSET(0xCE41DE0)
#define RPG_CLIENT_EXPEDITIONBATTLEMAP_GETUNLOCKTIMESTAMP_OFFSET UNITYSDK_OFFSET(0xCE42070)
#define RPG_CLIENT_EXPEDITIONBATTLEMAP_GET_ACTIVITYMODULEID_OFFSET UNITYSDK_OFFSET(0xCE41BF0)
#define RPG_CLIENT_EXPEDITIONBATTLEMAP_GET_BGMSTATE_OFFSET UNITYSDK_OFFSET(0xCE41C70)
#define RPG_CLIENT_EXPEDITIONBATTLEMAP_GET_EXPEDITIONBACKGROUNDPREFABPATH_OFFSET UNITYSDK_OFFSET(0xCE41C50)
#define RPG_CLIENT_EXPEDITIONBATTLEMAP_GET_ID_OFFSET UNITYSDK_OFFSET(0xCE41BD0)
#define RPG_CLIENT_EXPEDITIONBATTLEMAP_GET_MAPICONPATH_OFFSET UNITYSDK_OFFSET(0xCE41C30)
#define RPG_CLIENT_EXPEDITIONBATTLEMAP_GET_MAPNAME_OFFSET UNITYSDK_OFFSET(0xCE41C10)
#define RPG_CLIENT_EXPEDITIONBATTLEMAP_GET_MAXDAILYCHALLENGECOUNT_OFFSET UNITYSDK_OFFSET(0xCE41CB0)
#define RPG_CLIENT_EXPEDITIONBATTLEMAP_GET_REMAININGCHALLENGECOUNT_OFFSET UNITYSDK_OFFSET(0xCE41CD0)
#define RPG_CLIENT_EXPEDITIONBATTLEMAP_GET_ROUTEIDS_OFFSET UNITYSDK_OFFSET(0xCE41C90)
#define RPG_CLIENT_EXPEDITIONBATTLEMAP_GET_ROUTES_OFFSET UNITYSDK_OFFSET(0xCE41CF0)
#define RPG_CLIENT_EXPEDITIONBATTLEMAP_SET_ACTIVITYMODULEID_OFFSET UNITYSDK_OFFSET(0xCE41C00)
#define RPG_CLIENT_EXPEDITIONBATTLEMAP_SET_BGMSTATE_OFFSET UNITYSDK_OFFSET(0xCE41C80)
#define RPG_CLIENT_EXPEDITIONBATTLEMAP_SET_EXPEDITIONBACKGROUNDPREFABPATH_OFFSET UNITYSDK_OFFSET(0xCE41C60)
#define RPG_CLIENT_EXPEDITIONBATTLEMAP_SET_ID_OFFSET UNITYSDK_OFFSET(0xCE41BE0)
#define RPG_CLIENT_EXPEDITIONBATTLEMAP_SET_MAPICONPATH_OFFSET UNITYSDK_OFFSET(0xCE41C40)
#define RPG_CLIENT_EXPEDITIONBATTLEMAP_SET_MAPNAME_OFFSET UNITYSDK_OFFSET(0xCE41C20)
#define RPG_CLIENT_EXPEDITIONBATTLEMAP_SET_MAXDAILYCHALLENGECOUNT_OFFSET UNITYSDK_OFFSET(0xCE41CC0)
#define RPG_CLIENT_EXPEDITIONBATTLEMAP_SET_REMAININGCHALLENGECOUNT_OFFSET UNITYSDK_OFFSET(0xCE41CE0)
#define RPG_CLIENT_EXPEDITIONBATTLEMAP_SET_ROUTEIDS_OFFSET UNITYSDK_OFFSET(0xCE41CA0)
#define RPG_CLIENT_EXPEDITIONBATTLEMAP_SYNCBYSERVER_OFFSET UNITYSDK_OFFSET(0xCE41D00)
#define RPG_CLIENT_EXPEDITIONBATTLEMAP__CTOR_OFFSET UNITYSDK_OFFSET(0xCE42750)
#define RPG_CLIENT_EXPEDITIONBATTLEMAP__GETSCHEDULEDATA_OFFSET UNITYSDK_OFFSET(0xCE41E50)
#define RPG_CLIENT_EXPEDITIONBATTLEMAP__HASCHALLENGED_OFFSET UNITYSDK_OFFSET(0xCE41F20)
#define RPG_CLIENT_EXPEDITIONBATTLEMAP__SYNCREMAININGCHALLENGECOUNT_OFFSET UNITYSDK_OFFSET(0xCE41D90)

namespace RPG::Client
{
	inline static constexpr unsigned int ExpeditionBattleMap_TypeDefinitionIndex = 63845;

	class ExpeditionBattleMap : public ::System::Object
	{
	public:
		// static const ::System::UInt32 MAX_TEAM_COUNT = 0x4; // 0x0
		::System::String* _ExpeditionBackgroundPrefabPath_k__BackingField; // 0x10
		::System::Collections::Generic::List_1<::RPG::Client::ExpeditionBattleRoute*>* _Routes_k__BackingField; // 0x18
		::Il2CppArray<::System::UInt32>* _RouteIDs_k__BackingField; // 0x20
		::System::String* _MapIconPath_k__BackingField; // 0x28
		::System::String* _BGMState_k__BackingField; // 0x30
		::System::UInt32 _ActivityModuleID_k__BackingField; // 0x38
		::System::UInt32 _RemainingChallengeCount_k__BackingField; // 0x3C
		::RPG::Client::TextID _MapName_k__BackingField; // 0x40
		::System::UInt32 _ID_k__BackingField; // 0x50
		::System::UInt32 _MaxDailyChallengeCount_k__BackingField; // 0x54

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

		::System::Void SyncByServer(::Class_1_28D410CCE235575F_8* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_28D410CCE235575F_8*))((::PBYTE)hIl2Cpp + RPG_CLIENT_EXPEDITIONBATTLEMAP_SYNCBYSERVER_OFFSET))(this, a1);
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

		::RPG::AvatarSystem::IAvatar* GetRouteTrialAvatar(::System::UInt32 a1, ::System::UInt32 a2)
		{
			return ((::RPG::AvatarSystem::IAvatar*(*)(::PVOID, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_EXPEDITIONBATTLEMAP_GETROUTETRIALAVATAR_OFFSET))(this, a1, a2);
		}
	};
}

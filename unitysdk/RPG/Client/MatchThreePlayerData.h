#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_63CAB6C405C6C7B1_1.h"
#include "unitysdk/System/Object.h"

class Class_1_D17272E82AE804C2_551;
class Class_1_E604C57AF8A09FF9;
namespace RPG::Client { class MatchThreeBirdData; }
namespace RPG::Client { class MatchThreeLevelData; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class IReadOnlyDictionary_2; }
namespace System::Collections::Generic { template <typename T> class IReadOnlyList_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_MATCHTHREEPLAYERDATA_GETACHIEVEMENTCOUNT_OFFSET UNITYSDK_OFFSET(0xA844FE0)
#define RPG_CLIENT_MATCHTHREEPLAYERDATA_GETACHIEVEMENTSTAT_OFFSET UNITYSDK_OFFSET(0xA845130)
#define RPG_CLIENT_MATCHTHREEPLAYERDATA_GETALLBIRD_OFFSET UNITYSDK_OFFSET(0xA844DA0)
#define RPG_CLIENT_MATCHTHREEPLAYERDATA_GETBASICSTAT_OFFSET UNITYSDK_OFFSET(0xA844EF0)
#define RPG_CLIENT_MATCHTHREEPLAYERDATA_GETBIRD_OFFSET UNITYSDK_OFFSET(0xA83FB70)
#define RPG_CLIENT_MATCHTHREEPLAYERDATA_GET_ACHIEVEMENTSTATS_OFFSET UNITYSDK_OFFSET(0xA845220)
#define RPG_CLIENT_MATCHTHREEPLAYERDATA_GET_BASICSTATS_OFFSET UNITYSDK_OFFSET(0xA845200)
#define RPG_CLIENT_MATCHTHREEPLAYERDATA_GET_CURSCORE_OFFSET UNITYSDK_OFFSET(0xA8451C0)
#define RPG_CLIENT_MATCHTHREEPLAYERDATA_GET_MAXSCORE_OFFSET UNITYSDK_OFFSET(0xA8451E0)
#define RPG_CLIENT_MATCHTHREEPLAYERDATA_INIT_OFFSET UNITYSDK_OFFSET(0xA83C050)
#define RPG_CLIENT_MATCHTHREEPLAYERDATA_SET_ACHIEVEMENTSTATS_OFFSET UNITYSDK_OFFSET(0xA845230)
#define RPG_CLIENT_MATCHTHREEPLAYERDATA_SET_BASICSTATS_OFFSET UNITYSDK_OFFSET(0xA845210)
#define RPG_CLIENT_MATCHTHREEPLAYERDATA_SET_CURSCORE_OFFSET UNITYSDK_OFFSET(0xA8451D0)
#define RPG_CLIENT_MATCHTHREEPLAYERDATA_SET_MAXSCORE_OFFSET UNITYSDK_OFFSET(0xA8451F0)
#define RPG_CLIENT_MATCHTHREEPLAYERDATA_SYNCDATA_OFFSET UNITYSDK_OFFSET(0xA83EFF0)
#define RPG_CLIENT_MATCHTHREEPLAYERDATA_UPDATEBIRDBYLEVEL_OFFSET UNITYSDK_OFFSET(0xA83D950)
#define RPG_CLIENT_MATCHTHREEPLAYERDATA__CTOR_OFFSET UNITYSDK_OFFSET(0xA83BBD0)
#define RPG_CLIENT_MATCHTHREEPLAYERDATA__INITBIRDDATA_OFFSET UNITYSDK_OFFSET(0xA8441C0)
#define RPG_CLIENT_MATCHTHREEPLAYERDATA__SYNCACHIEVEMENTSTATS_OFFSET UNITYSDK_OFFSET(0xA844A20)
#define RPG_CLIENT_MATCHTHREEPLAYERDATA__SYNCBASICSTATS_OFFSET UNITYSDK_OFFSET(0xA844670)
#define RPG_CLIENT_MATCHTHREEPLAYERDATA__SYNCBIRDRECORD_OFFSET UNITYSDK_OFFSET(0xA8443A0)

namespace RPG::Client
{
	inline static constexpr unsigned int MatchThreePlayerData_TypeDefinitionIndex = 60741;

	class MatchThreePlayerData : public ::System::Object
	{
	public:
		::System::Collections::Generic::Dictionary_2<::Enum_3_63CAB6C405C6C7B1_1, ::System::UInt32>* _BasicStats_k__BackingField; // 0x10
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::Client::MatchThreeBirdData*>* _AllBird; // 0x18
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::UInt32>* _AchievementStats_k__BackingField; // 0x20
		::System::UInt32 _MaxScore_k__BackingField; // 0x28
		::System::UInt32 _CurScore_k__BackingField; // 0x2C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEPLAYERDATA__CTOR_OFFSET))(this);
		}

		::System::Void Init()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEPLAYERDATA_INIT_OFFSET))(this);
		}

		::System::Void SyncData(::Class_1_E604C57AF8A09FF9* info)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_E604C57AF8A09FF9*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEPLAYERDATA_SYNCDATA_OFFSET))(this, info);
		}

		::System::Void UpdateBirdByLevel(::RPG::Client::MatchThreeLevelData* levelData)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::MatchThreeLevelData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEPLAYERDATA_UPDATEBIRDBYLEVEL_OFFSET))(this, levelData);
		}

		::RPG::Client::MatchThreeBirdData* GetBird(::System::UInt32 birdID)
		{
			return ((::RPG::Client::MatchThreeBirdData*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEPLAYERDATA_GETBIRD_OFFSET))(this, birdID);
		}

		::System::Collections::Generic::List_1<::RPG::Client::MatchThreeBirdData*>* GetAllBird()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::MatchThreeBirdData*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEPLAYERDATA_GETALLBIRD_OFFSET))(this);
		}

		::System::UInt32 GetBasicStat(::Enum_3_63CAB6C405C6C7B1_1 type)
		{
			return ((::System::UInt32(*)(::PVOID, ::Enum_3_63CAB6C405C6C7B1_1))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEPLAYERDATA_GETBASICSTAT_OFFSET))(this, type);
		}

		::System::UInt32 GetAchievementCount()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEPLAYERDATA_GETACHIEVEMENTCOUNT_OFFSET))(this);
		}

		::System::UInt32 GetAchievementStat(::System::UInt32 scoreID)
		{
			return ((::System::UInt32(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEPLAYERDATA_GETACHIEVEMENTSTAT_OFFSET))(this, scoreID);
		}

		::System::Void _InitBirdData()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEPLAYERDATA__INITBIRDDATA_OFFSET))(this);
		}

		::System::Void _SyncBirdRecord(::System::Collections::Generic::IReadOnlyList_1<::Class_1_D17272E82AE804C2_551*>* birdRecordInfos)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::IReadOnlyList_1<::Class_1_D17272E82AE804C2_551*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEPLAYERDATA__SYNCBIRDRECORD_OFFSET))(this, birdRecordInfos);
		}

		::System::Void _SyncBasicStats(::System::Collections::Generic::IReadOnlyDictionary_2<::System::UInt32, ::System::UInt32>* basicStatsDict)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::IReadOnlyDictionary_2<::System::UInt32, ::System::UInt32>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEPLAYERDATA__SYNCBASICSTATS_OFFSET))(this, basicStatsDict);
		}

		::System::Void _SyncAchievementStats(::System::Collections::Generic::IReadOnlyDictionary_2<::System::UInt32, ::System::UInt32>* achievementStatsDict)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::IReadOnlyDictionary_2<::System::UInt32, ::System::UInt32>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEPLAYERDATA__SYNCACHIEVEMENTSTATS_OFFSET))(this, achievementStatsDict);
		}

		::System::UInt32 get_CurScore()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEPLAYERDATA_GET_CURSCORE_OFFSET))(this);
		}

		::System::Void set_CurScore(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEPLAYERDATA_SET_CURSCORE_OFFSET))(this, value);
		}

		::System::UInt32 get_MaxScore()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEPLAYERDATA_GET_MAXSCORE_OFFSET))(this);
		}

		::System::Void set_MaxScore(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEPLAYERDATA_SET_MAXSCORE_OFFSET))(this, value);
		}

		::System::Collections::Generic::Dictionary_2<::Enum_3_63CAB6C405C6C7B1_1, ::System::UInt32>* get_BasicStats()
		{
			return ((::System::Collections::Generic::Dictionary_2<::Enum_3_63CAB6C405C6C7B1_1, ::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEPLAYERDATA_GET_BASICSTATS_OFFSET))(this);
		}

		::System::Void set_BasicStats(::System::Collections::Generic::Dictionary_2<::Enum_3_63CAB6C405C6C7B1_1, ::System::UInt32>* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::Dictionary_2<::Enum_3_63CAB6C405C6C7B1_1, ::System::UInt32>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEPLAYERDATA_SET_BASICSTATS_OFFSET))(this, value);
		}

		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::UInt32>* get_AchievementStats()
		{
			return ((::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEPLAYERDATA_GET_ACHIEVEMENTSTATS_OFFSET))(this);
		}

		::System::Void set_AchievementStats(::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::UInt32>* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::UInt32>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEPLAYERDATA_SET_ACHIEVEMENTSTATS_OFFSET))(this, value);
		}
	};
}

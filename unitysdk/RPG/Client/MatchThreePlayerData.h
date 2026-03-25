#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_63CAB6C405C6C7B1_1.h"
#include "unitysdk/System/Object.h"

class Class_1_FA4F4A67B1C04320_518;
class Class_1_FAEB60E7FA15317F_1;
namespace RPG::Client { class MatchThreeBirdData; }
namespace RPG::Client { class MatchThreeLevelData; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class IReadOnlyDictionary_2; }
namespace System::Collections::Generic { template <typename T> class IReadOnlyList_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_MATCHTHREEPLAYERDATA_GETACHIEVEMENTCOUNT_OFFSET UNITYSDK_OFFSET(0x9B4B000)
#define RPG_CLIENT_MATCHTHREEPLAYERDATA_GETACHIEVEMENTSTAT_OFFSET UNITYSDK_OFFSET(0x9B4B120)
#define RPG_CLIENT_MATCHTHREEPLAYERDATA_GETALLBIRD_OFFSET UNITYSDK_OFFSET(0x9B4ADC0)
#define RPG_CLIENT_MATCHTHREEPLAYERDATA_GETBASICSTAT_OFFSET UNITYSDK_OFFSET(0x9B4AF10)
#define RPG_CLIENT_MATCHTHREEPLAYERDATA_GETBIRD_OFFSET UNITYSDK_OFFSET(0x9B4AD00)
#define RPG_CLIENT_MATCHTHREEPLAYERDATA_GET_ACHIEVEMENTSTATS_OFFSET UNITYSDK_OFFSET(0x9B4B210)
#define RPG_CLIENT_MATCHTHREEPLAYERDATA_GET_BASICSTATS_OFFSET UNITYSDK_OFFSET(0x9B4B1F0)
#define RPG_CLIENT_MATCHTHREEPLAYERDATA_GET_CURSCORE_OFFSET UNITYSDK_OFFSET(0x9B4B1B0)
#define RPG_CLIENT_MATCHTHREEPLAYERDATA_GET_MAXSCORE_OFFSET UNITYSDK_OFFSET(0x9B4B1D0)
#define RPG_CLIENT_MATCHTHREEPLAYERDATA_INIT_OFFSET UNITYSDK_OFFSET(0x9B49C40)
#define RPG_CLIENT_MATCHTHREEPLAYERDATA_SET_ACHIEVEMENTSTATS_OFFSET UNITYSDK_OFFSET(0x9B4B220)
#define RPG_CLIENT_MATCHTHREEPLAYERDATA_SET_BASICSTATS_OFFSET UNITYSDK_OFFSET(0x9B4B200)
#define RPG_CLIENT_MATCHTHREEPLAYERDATA_SET_CURSCORE_OFFSET UNITYSDK_OFFSET(0x9B4B1C0)
#define RPG_CLIENT_MATCHTHREEPLAYERDATA_SET_MAXSCORE_OFFSET UNITYSDK_OFFSET(0x9B4B1E0)
#define RPG_CLIENT_MATCHTHREEPLAYERDATA_SYNCDATA_OFFSET UNITYSDK_OFFSET(0x9B49EF0)
#define RPG_CLIENT_MATCHTHREEPLAYERDATA_UPDATEBIRDBYLEVEL_OFFSET UNITYSDK_OFFSET(0x9B4A9B0)
#define RPG_CLIENT_MATCHTHREEPLAYERDATA__CTOR_OFFSET UNITYSDK_OFFSET(0x9B4B230)
#define RPG_CLIENT_MATCHTHREEPLAYERDATA__INITBIRDDATA_OFFSET UNITYSDK_OFFSET(0x9B49D10)
#define RPG_CLIENT_MATCHTHREEPLAYERDATA__SYNCACHIEVEMENTSTATS_OFFSET UNITYSDK_OFFSET(0x9B4A630)
#define RPG_CLIENT_MATCHTHREEPLAYERDATA__SYNCBASICSTATS_OFFSET UNITYSDK_OFFSET(0x9B4A280)
#define RPG_CLIENT_MATCHTHREEPLAYERDATA__SYNCBIRDRECORD_OFFSET UNITYSDK_OFFSET(0x9B49FB0)

namespace RPG::Client
{
	inline static constexpr unsigned int MatchThreePlayerData_TypeDefinitionIndex = 53597;

	class MatchThreePlayerData : public ::System::Object
	{
	public:
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::Client::MatchThreeBirdData*>* _AllBird; // 0x10
		::System::Collections::Generic::Dictionary_2<::Enum_3_63CAB6C405C6C7B1_1, ::System::UInt32>* _BasicStats_k__BackingField; // 0x18
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::UInt32>* _AchievementStats_k__BackingField; // 0x20
		::System::UInt32 _CurScore_k__BackingField; // 0x28
		::System::UInt32 _MaxScore_k__BackingField; // 0x2C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEPLAYERDATA__CTOR_OFFSET))(this);
		}

		::System::Void Init()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEPLAYERDATA_INIT_OFFSET))(this);
		}

		::System::Void SyncData(::Class_1_FAEB60E7FA15317F_1* info)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_FAEB60E7FA15317F_1*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEPLAYERDATA_SYNCDATA_OFFSET))(this, info);
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

		::System::Void _SyncBirdRecord(::System::Collections::Generic::IReadOnlyList_1<::Class_1_FA4F4A67B1C04320_518*>* birdRecordInfos)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::IReadOnlyList_1<::Class_1_FA4F4A67B1C04320_518*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEPLAYERDATA__SYNCBIRDRECORD_OFFSET))(this, birdRecordInfos);
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

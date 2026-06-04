#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_63CAB6C405C6C7B1_2.h"
#include "unitysdk/System/Object.h"

class Class_1_D17272E82AE804C2_564;
class Class_1_E604C57AF8A09FF9;
namespace RPG::Client { class MatchThreeBirdData; }
namespace RPG::Client { class MatchThreeLevelData; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class IReadOnlyDictionary_2; }
namespace System::Collections::Generic { template <typename T> class IReadOnlyList_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_MATCHTHREEPLAYERDATA_GETACHIEVEMENTCOUNT_OFFSET UNITYSDK_OFFSET(0xBF8E930)
#define RPG_CLIENT_MATCHTHREEPLAYERDATA_GETACHIEVEMENTSTAT_OFFSET UNITYSDK_OFFSET(0xBF8EA50)
#define RPG_CLIENT_MATCHTHREEPLAYERDATA_GETALLBIRD_OFFSET UNITYSDK_OFFSET(0xBF8E620)
#define RPG_CLIENT_MATCHTHREEPLAYERDATA_GETBASICSTAT_OFFSET UNITYSDK_OFFSET(0xBF8E850)
#define RPG_CLIENT_MATCHTHREEPLAYERDATA_GETBIRD_OFFSET UNITYSDK_OFFSET(0xBF89D80)
#define RPG_CLIENT_MATCHTHREEPLAYERDATA_GET_ACHIEVEMENTSTATS_OFFSET UNITYSDK_OFFSET(0xBF8EB40)
#define RPG_CLIENT_MATCHTHREEPLAYERDATA_GET_BASICSTATS_OFFSET UNITYSDK_OFFSET(0xBF8EB20)
#define RPG_CLIENT_MATCHTHREEPLAYERDATA_GET_CURSCORE_OFFSET UNITYSDK_OFFSET(0xBF8EAE0)
#define RPG_CLIENT_MATCHTHREEPLAYERDATA_GET_MAXSCORE_OFFSET UNITYSDK_OFFSET(0xBF8EB00)
#define RPG_CLIENT_MATCHTHREEPLAYERDATA_INIT_OFFSET UNITYSDK_OFFSET(0xBF86060)
#define RPG_CLIENT_MATCHTHREEPLAYERDATA_SET_ACHIEVEMENTSTATS_OFFSET UNITYSDK_OFFSET(0xBF8EB50)
#define RPG_CLIENT_MATCHTHREEPLAYERDATA_SET_BASICSTATS_OFFSET UNITYSDK_OFFSET(0xBF8EB30)
#define RPG_CLIENT_MATCHTHREEPLAYERDATA_SET_CURSCORE_OFFSET UNITYSDK_OFFSET(0xBF8EAF0)
#define RPG_CLIENT_MATCHTHREEPLAYERDATA_SET_MAXSCORE_OFFSET UNITYSDK_OFFSET(0xBF8EB10)
#define RPG_CLIENT_MATCHTHREEPLAYERDATA_SYNCDATA_OFFSET UNITYSDK_OFFSET(0xBF89500)
#define RPG_CLIENT_MATCHTHREEPLAYERDATA_UPDATEBIRDBYLEVEL_OFFSET UNITYSDK_OFFSET(0xBF87E40)
#define RPG_CLIENT_MATCHTHREEPLAYERDATA__CTOR_OFFSET UNITYSDK_OFFSET(0xBF85BE0)
#define RPG_CLIENT_MATCHTHREEPLAYERDATA__INITBIRDDATA_OFFSET UNITYSDK_OFFSET(0xBF8DA90)
#define RPG_CLIENT_MATCHTHREEPLAYERDATA__SYNCACHIEVEMENTSTATS_OFFSET UNITYSDK_OFFSET(0xBF8E290)
#define RPG_CLIENT_MATCHTHREEPLAYERDATA__SYNCBASICSTATS_OFFSET UNITYSDK_OFFSET(0xBF8DEF0)
#define RPG_CLIENT_MATCHTHREEPLAYERDATA__SYNCBIRDRECORD_OFFSET UNITYSDK_OFFSET(0xBF8DC50)

namespace RPG::Client
{
	inline static constexpr unsigned int MatchThreePlayerData_TypeDefinitionIndex = 61675;

	class MatchThreePlayerData : public ::System::Object
	{
	public:
		::System::Collections::Generic::Dictionary_2<::Enum_3_63CAB6C405C6C7B1_2, ::System::UInt32>* _BasicStats_k__BackingField; // 0x10
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::UInt32>* _AchievementStats_k__BackingField; // 0x18
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::Client::MatchThreeBirdData*>* _AllBird; // 0x20
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

		::System::Void SyncData(::Class_1_E604C57AF8A09FF9* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_E604C57AF8A09FF9*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEPLAYERDATA_SYNCDATA_OFFSET))(this, a1);
		}

		::System::Void UpdateBirdByLevel(::RPG::Client::MatchThreeLevelData* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::MatchThreeLevelData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEPLAYERDATA_UPDATEBIRDBYLEVEL_OFFSET))(this, a1);
		}

		::RPG::Client::MatchThreeBirdData* GetBird(::System::UInt32 a1)
		{
			return ((::RPG::Client::MatchThreeBirdData*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEPLAYERDATA_GETBIRD_OFFSET))(this, a1);
		}

		::System::Collections::Generic::List_1<::RPG::Client::MatchThreeBirdData*>* GetAllBird()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::MatchThreeBirdData*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEPLAYERDATA_GETALLBIRD_OFFSET))(this);
		}

		::System::UInt32 GetBasicStat(::Enum_3_63CAB6C405C6C7B1_2 a1)
		{
			return ((::System::UInt32(*)(::PVOID, ::Enum_3_63CAB6C405C6C7B1_2))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEPLAYERDATA_GETBASICSTAT_OFFSET))(this, a1);
		}

		::System::UInt32 GetAchievementCount()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEPLAYERDATA_GETACHIEVEMENTCOUNT_OFFSET))(this);
		}

		::System::UInt32 GetAchievementStat(::System::UInt32 a1)
		{
			return ((::System::UInt32(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEPLAYERDATA_GETACHIEVEMENTSTAT_OFFSET))(this, a1);
		}

		::System::Void _InitBirdData()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEPLAYERDATA__INITBIRDDATA_OFFSET))(this);
		}

		::System::Void _SyncBirdRecord(::System::Collections::Generic::IReadOnlyList_1<::Class_1_D17272E82AE804C2_564*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::IReadOnlyList_1<::Class_1_D17272E82AE804C2_564*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEPLAYERDATA__SYNCBIRDRECORD_OFFSET))(this, a1);
		}

		::System::Void _SyncBasicStats(::System::Collections::Generic::IReadOnlyDictionary_2<::System::UInt32, ::System::UInt32>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::IReadOnlyDictionary_2<::System::UInt32, ::System::UInt32>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEPLAYERDATA__SYNCBASICSTATS_OFFSET))(this, a1);
		}

		::System::Void _SyncAchievementStats(::System::Collections::Generic::IReadOnlyDictionary_2<::System::UInt32, ::System::UInt32>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::IReadOnlyDictionary_2<::System::UInt32, ::System::UInt32>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEPLAYERDATA__SYNCACHIEVEMENTSTATS_OFFSET))(this, a1);
		}

		::System::UInt32 get_CurScore()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEPLAYERDATA_GET_CURSCORE_OFFSET))(this);
		}

		::System::Void set_CurScore(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEPLAYERDATA_SET_CURSCORE_OFFSET))(this, a1);
		}

		::System::UInt32 get_MaxScore()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEPLAYERDATA_GET_MAXSCORE_OFFSET))(this);
		}

		::System::Void set_MaxScore(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEPLAYERDATA_SET_MAXSCORE_OFFSET))(this, a1);
		}

		::System::Collections::Generic::Dictionary_2<::Enum_3_63CAB6C405C6C7B1_2, ::System::UInt32>* get_BasicStats()
		{
			return ((::System::Collections::Generic::Dictionary_2<::Enum_3_63CAB6C405C6C7B1_2, ::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEPLAYERDATA_GET_BASICSTATS_OFFSET))(this);
		}

		::System::Void set_BasicStats(::System::Collections::Generic::Dictionary_2<::Enum_3_63CAB6C405C6C7B1_2, ::System::UInt32>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::Dictionary_2<::Enum_3_63CAB6C405C6C7B1_2, ::System::UInt32>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEPLAYERDATA_SET_BASICSTATS_OFFSET))(this, a1);
		}

		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::UInt32>* get_AchievementStats()
		{
			return ((::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEPLAYERDATA_GET_ACHIEVEMENTSTATS_OFFSET))(this);
		}

		::System::Void set_AchievementStats(::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::UInt32>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::UInt32>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEPLAYERDATA_SET_ACHIEVEMENTSTATS_OFFSET))(this, a1);
		}
	};
}

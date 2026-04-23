#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_63CAB6C405C6C7B1_1.h"
#include "unitysdk/RPG/Client/MatchThreeV2PlayerPvpCareer_GameMode.h"
#include "unitysdk/System/Object.h"

class Class_1_D17272E82AE804C2_102;
namespace RPG::Client { class MatchThreeV2RankData; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }

#define RPG_CLIENT_MATCHTHREEV2PLAYERPVPCAREER_CREATE_OFFSET UNITYSDK_OFFSET(0xA85CA60)
#define RPG_CLIENT_MATCHTHREEV2PLAYERPVPCAREER_GETSTATISTIC_OFFSET UNITYSDK_OFFSET(0xA85F210)
#define RPG_CLIENT_MATCHTHREEV2PLAYERPVPCAREER_GET_LASTRANKDATA_OFFSET UNITYSDK_OFFSET(0xA85F130)
#define RPG_CLIENT_MATCHTHREEV2PLAYERPVPCAREER_GET_LASTSCORE_OFFSET UNITYSDK_OFFSET(0xA85F040)
#define RPG_CLIENT_MATCHTHREEV2PLAYERPVPCAREER_GET_RANKDATA_OFFSET UNITYSDK_OFFSET(0xA85F060)
#define RPG_CLIENT_MATCHTHREEV2PLAYERPVPCAREER_GET_SCORE_OFFSET UNITYSDK_OFFSET(0xA85F020)
#define RPG_CLIENT_MATCHTHREEV2PLAYERPVPCAREER_SET_LASTSCORE_OFFSET UNITYSDK_OFFSET(0xA85F050)
#define RPG_CLIENT_MATCHTHREEV2PLAYERPVPCAREER_SET_SCORE_OFFSET UNITYSDK_OFFSET(0xA85F030)
#define RPG_CLIENT_MATCHTHREEV2PLAYERPVPCAREER_SYNCARENASTATISTICS_OFFSET UNITYSDK_OFFSET(0xA85C2F0)
#define RPG_CLIENT_MATCHTHREEV2PLAYERPVPCAREER_SYNCSCORE_OFFSET UNITYSDK_OFFSET(0xA85C060)
#define RPG_CLIENT_MATCHTHREEV2PLAYERPVPCAREER_SYNCSOLOSTATISTICS_OFFSET UNITYSDK_OFFSET(0xA85C0B0)
#define RPG_CLIENT_MATCHTHREEV2PLAYERPVPCAREER__CTOR_OFFSET UNITYSDK_OFFSET(0xA85F200)

namespace RPG::Client
{
	inline static constexpr unsigned int MatchThreeV2PlayerPvpCareer_TypeDefinitionIndex = 60776;

	class MatchThreeV2PlayerPvpCareer : public ::System::Object
	{
	public:
		::System::Collections::Generic::Dictionary_2<::Enum_3_63CAB6C405C6C7B1_1, ::System::UInt32>* _SoloStatistics; // 0x10
		::System::Collections::Generic::Dictionary_2<::Enum_3_63CAB6C405C6C7B1_1, ::System::UInt32>* _ArenaStatistics; // 0x18
		::System::UInt32 _Score_k__BackingField; // 0x20
		::System::UInt32 _LastScore_k__BackingField; // 0x24

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEV2PLAYERPVPCAREER__CTOR_OFFSET))(this);
		}

		::System::UInt32 get_Score()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEV2PLAYERPVPCAREER_GET_SCORE_OFFSET))(this);
		}

		::System::Void set_Score(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEV2PLAYERPVPCAREER_SET_SCORE_OFFSET))(this, value);
		}

		::System::UInt32 get_LastScore()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEV2PLAYERPVPCAREER_GET_LASTSCORE_OFFSET))(this);
		}

		::System::Void set_LastScore(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEV2PLAYERPVPCAREER_SET_LASTSCORE_OFFSET))(this, value);
		}

		::RPG::Client::MatchThreeV2RankData* get_RankData()
		{
			return ((::RPG::Client::MatchThreeV2RankData*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEV2PLAYERPVPCAREER_GET_RANKDATA_OFFSET))(this);
		}

		::RPG::Client::MatchThreeV2RankData* get_LastRankData()
		{
			return ((::RPG::Client::MatchThreeV2RankData*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEV2PLAYERPVPCAREER_GET_LASTRANKDATA_OFFSET))(this);
		}

		static ::RPG::Client::MatchThreeV2PlayerPvpCareer* Create()
		{
			return ((::RPG::Client::MatchThreeV2PlayerPvpCareer*(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEV2PLAYERPVPCAREER_CREATE_OFFSET))();
		}

		::System::Void SyncScore(::System::UInt32 score)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEV2PLAYERPVPCAREER_SYNCSCORE_OFFSET))(this, score);
		}

		::System::Void SyncSoloStatistics(::System::Collections::Generic::IEnumerable_1<::Class_1_D17272E82AE804C2_102*>* statList)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::IEnumerable_1<::Class_1_D17272E82AE804C2_102*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEV2PLAYERPVPCAREER_SYNCSOLOSTATISTICS_OFFSET))(this, statList);
		}

		::System::Void SyncArenaStatistics(::System::Collections::Generic::IEnumerable_1<::Class_1_D17272E82AE804C2_102*>* statList)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::IEnumerable_1<::Class_1_D17272E82AE804C2_102*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEV2PLAYERPVPCAREER_SYNCARENASTATISTICS_OFFSET))(this, statList);
		}

		::System::Int32 GetStatistic(::RPG::Client::MatchThreeV2PlayerPvpCareer_GameMode mode, ::Enum_3_63CAB6C405C6C7B1_1 statType)
		{
			return ((::System::Int32(*)(::PVOID, ::RPG::Client::MatchThreeV2PlayerPvpCareer_GameMode, ::Enum_3_63CAB6C405C6C7B1_1))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEV2PLAYERPVPCAREER_GETSTATISTIC_OFFSET))(this, mode, statType);
		}
	};
}

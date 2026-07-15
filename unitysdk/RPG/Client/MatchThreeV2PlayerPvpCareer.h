#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_63CAB6C405C6C7B1_2.h"
#include "unitysdk/RPG/Client/MatchThreeV2PlayerPvpCareer_GameMode.h"
#include "unitysdk/System/Object.h"

class Class_1_D17272E82AE804C2_113;
namespace RPG::Client { class MatchThreeV2RankData; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }

#define RPG_CLIENT_MATCHTHREEV2PLAYERPVPCAREER_CREATE_OFFSET UNITYSDK_OFFSET(0x1A9EFB30)
#define RPG_CLIENT_MATCHTHREEV2PLAYERPVPCAREER_GETSTATISTIC_OFFSET UNITYSDK_OFFSET(0x1A9F00A0)
#define RPG_CLIENT_MATCHTHREEV2PLAYERPVPCAREER_GET_LASTRANKDATA_OFFSET UNITYSDK_OFFSET(0x1A9EFA50)
#define RPG_CLIENT_MATCHTHREEV2PLAYERPVPCAREER_GET_LASTSCORE_OFFSET UNITYSDK_OFFSET(0x1A9EF7E0)
#define RPG_CLIENT_MATCHTHREEV2PLAYERPVPCAREER_GET_RANKDATA_OFFSET UNITYSDK_OFFSET(0x1A9EF800)
#define RPG_CLIENT_MATCHTHREEV2PLAYERPVPCAREER_GET_SCORE_OFFSET UNITYSDK_OFFSET(0x1A9EF7C0)
#define RPG_CLIENT_MATCHTHREEV2PLAYERPVPCAREER_SET_LASTSCORE_OFFSET UNITYSDK_OFFSET(0x1A9EF7F0)
#define RPG_CLIENT_MATCHTHREEV2PLAYERPVPCAREER_SET_SCORE_OFFSET UNITYSDK_OFFSET(0x1A9EF7D0)
#define RPG_CLIENT_MATCHTHREEV2PLAYERPVPCAREER_SYNCARENASTATISTICS_OFFSET UNITYSDK_OFFSET(0x1A9EFE30)
#define RPG_CLIENT_MATCHTHREEV2PLAYERPVPCAREER_SYNCSCORE_OFFSET UNITYSDK_OFFSET(0x1A9EFB70)
#define RPG_CLIENT_MATCHTHREEV2PLAYERPVPCAREER_SYNCSOLOSTATISTICS_OFFSET UNITYSDK_OFFSET(0x1A9EFBC0)
#define RPG_CLIENT_MATCHTHREEV2PLAYERPVPCAREER__CTOR_OFFSET UNITYSDK_OFFSET(0x1A9EFB20)

namespace RPG::Client
{
	inline static constexpr unsigned int MatchThreeV2PlayerPvpCareer_TypeDefinitionIndex = 63072;

	class MatchThreeV2PlayerPvpCareer : public ::System::Object
	{
	public:
		::System::Collections::Generic::Dictionary_2<::Enum_3_63CAB6C405C6C7B1_2, ::System::UInt32>* _SoloStatistics; // 0x10
		::System::Collections::Generic::Dictionary_2<::Enum_3_63CAB6C405C6C7B1_2, ::System::UInt32>* _ArenaStatistics; // 0x18
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

		::System::Void set_Score(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEV2PLAYERPVPCAREER_SET_SCORE_OFFSET))(this, a1);
		}

		::System::UInt32 get_LastScore()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEV2PLAYERPVPCAREER_GET_LASTSCORE_OFFSET))(this);
		}

		::System::Void set_LastScore(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEV2PLAYERPVPCAREER_SET_LASTSCORE_OFFSET))(this, a1);
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

		::System::Void SyncScore(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEV2PLAYERPVPCAREER_SYNCSCORE_OFFSET))(this, a1);
		}

		::System::Void SyncSoloStatistics(::System::Collections::Generic::IEnumerable_1<::Class_1_D17272E82AE804C2_113*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::IEnumerable_1<::Class_1_D17272E82AE804C2_113*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEV2PLAYERPVPCAREER_SYNCSOLOSTATISTICS_OFFSET))(this, a1);
		}

		::System::Void SyncArenaStatistics(::System::Collections::Generic::IEnumerable_1<::Class_1_D17272E82AE804C2_113*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::IEnumerable_1<::Class_1_D17272E82AE804C2_113*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEV2PLAYERPVPCAREER_SYNCARENASTATISTICS_OFFSET))(this, a1);
		}

		::System::Int32 GetStatistic(::RPG::Client::MatchThreeV2PlayerPvpCareer_GameMode a1, ::Enum_3_63CAB6C405C6C7B1_2 a2)
		{
			return ((::System::Int32(*)(::PVOID, ::RPG::Client::MatchThreeV2PlayerPvpCareer_GameMode, ::Enum_3_63CAB6C405C6C7B1_2))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEV2PLAYERPVPCAREER_GETSTATISTIC_OFFSET))(this, a1, a2);
		}
	};
}

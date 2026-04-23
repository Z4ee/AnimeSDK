#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/MatchThreeRarityType.h"
#include "unitysdk/RPG/GameCore/MatchThreeScoreFinishType.h"
#include "unitysdk/RPG/GameCore/MatchThreeScoreType.h"
#include "unitysdk/System/Object.h"

namespace RPG::GameCore { class MatchThreeV2PVPScoreRow; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define RPG_CLIENT_MATCHTHREEV2PVPSCOREDATA_CREATE_OFFSET UNITYSDK_OFFSET(0xA862280)
#define RPG_CLIENT_MATCHTHREEV2PVPSCOREDATA_GETFIXEDSCOREBYRANK_OFFSET UNITYSDK_OFFSET(0xA861FB0)
#define RPG_CLIENT_MATCHTHREEV2PVPSCOREDATA_GETLIMITEDSCOREBYCOUNTANDRANK_OFFSET UNITYSDK_OFFSET(0xA8620B0)
#define RPG_CLIENT_MATCHTHREEV2PVPSCOREDATA_GETSCORELIMITBYRANK_OFFSET UNITYSDK_OFFSET(0xA862170)
#define RPG_CLIENT_MATCHTHREEV2PVPSCOREDATA_GET_DESC_OFFSET UNITYSDK_OFFSET(0xA861CB0)
#define RPG_CLIENT_MATCHTHREEV2PVPSCOREDATA_GET_FINISHTYPE_OFFSET UNITYSDK_OFFSET(0xA861D30)
#define RPG_CLIENT_MATCHTHREEV2PVPSCOREDATA_GET_FIXEDSCOREMAP_OFFSET UNITYSDK_OFFSET(0xA861E80)
#define RPG_CLIENT_MATCHTHREEV2PVPSCOREDATA_GET_ISHASSCORELIMIT_OFFSET UNITYSDK_OFFSET(0xA861EF0)
#define RPG_CLIENT_MATCHTHREEV2PVPSCOREDATA_GET_PARAM_OFFSET UNITYSDK_OFFSET(0xA861DA0)
#define RPG_CLIENT_MATCHTHREEV2PVPSCOREDATA_GET_RARITY_OFFSET UNITYSDK_OFFSET(0xA861AD0)
#define RPG_CLIENT_MATCHTHREEV2PVPSCOREDATA_GET_ROW_OFFSET UNITYSDK_OFFSET(0xA861A60)
#define RPG_CLIENT_MATCHTHREEV2PVPSCOREDATA_GET_SCOREID_OFFSET UNITYSDK_OFFSET(0xA861AC0)
#define RPG_CLIENT_MATCHTHREEV2PVPSCOREDATA_GET_SCORELIMITMAP_OFFSET UNITYSDK_OFFSET(0xA861E10)
#define RPG_CLIENT_MATCHTHREEV2PVPSCOREDATA_GET_SCORETYPE_OFFSET UNITYSDK_OFFSET(0xA861B40)
#define RPG_CLIENT_MATCHTHREEV2PVPSCOREDATA_GET_TITLE2_OFFSET UNITYSDK_OFFSET(0xA861C30)
#define RPG_CLIENT_MATCHTHREEV2PVPSCOREDATA_GET_TITLE_OFFSET UNITYSDK_OFFSET(0xA861BB0)
#define RPG_CLIENT_MATCHTHREEV2PVPSCOREDATA_INIT_OFFSET UNITYSDK_OFFSET(0xA862310)
#define RPG_CLIENT_MATCHTHREEV2PVPSCOREDATA__CTOR_OFFSET UNITYSDK_OFFSET(0xA862300)

namespace RPG::Client
{
	inline static constexpr unsigned int MatchThreeV2PvpScoreData_TypeDefinitionIndex = 60813;

	class MatchThreeV2PvpScoreData : public ::System::Object
	{
	public:
		::System::UInt32 _ScoreID_k__BackingField; // 0x10

		::System::Void _ctor(::System::UInt32 scoreID)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEV2PVPSCOREDATA__CTOR_OFFSET))(this, scoreID);
		}

		::RPG::GameCore::MatchThreeV2PVPScoreRow* get_Row()
		{
			return ((::RPG::GameCore::MatchThreeV2PVPScoreRow*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEV2PVPSCOREDATA_GET_ROW_OFFSET))(this);
		}

		::System::UInt32 get_ScoreID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEV2PVPSCOREDATA_GET_SCOREID_OFFSET))(this);
		}

		::RPG::GameCore::MatchThreeRarityType get_Rarity()
		{
			return ((::RPG::GameCore::MatchThreeRarityType(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEV2PVPSCOREDATA_GET_RARITY_OFFSET))(this);
		}

		::RPG::GameCore::MatchThreeScoreType get_ScoreType()
		{
			return ((::RPG::GameCore::MatchThreeScoreType(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEV2PVPSCOREDATA_GET_SCORETYPE_OFFSET))(this);
		}

		::RPG::Client::TextID get_Title()
		{
			return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEV2PVPSCOREDATA_GET_TITLE_OFFSET))(this);
		}

		::RPG::Client::TextID get_Title2()
		{
			return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEV2PVPSCOREDATA_GET_TITLE2_OFFSET))(this);
		}

		::RPG::Client::TextID get_Desc()
		{
			return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEV2PVPSCOREDATA_GET_DESC_OFFSET))(this);
		}

		::RPG::GameCore::MatchThreeScoreFinishType get_FinishType()
		{
			return ((::RPG::GameCore::MatchThreeScoreFinishType(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEV2PVPSCOREDATA_GET_FINISHTYPE_OFFSET))(this);
		}

		::System::Int32 get_Param()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEV2PVPSCOREDATA_GET_PARAM_OFFSET))(this);
		}

		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::Int32>* get_ScoreLimitMap()
		{
			return ((::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEV2PVPSCOREDATA_GET_SCORELIMITMAP_OFFSET))(this);
		}

		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::Int32>* get_FixedScoreMap()
		{
			return ((::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEV2PVPSCOREDATA_GET_FIXEDSCOREMAP_OFFSET))(this);
		}

		::System::Boolean get_IsHasScoreLimit()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEV2PVPSCOREDATA_GET_ISHASSCORELIMIT_OFFSET))(this);
		}

		::System::Int32 GetFixedScoreByRank(::System::UInt32 rank)
		{
			return ((::System::Int32(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEV2PVPSCOREDATA_GETFIXEDSCOREBYRANK_OFFSET))(this, rank);
		}

		::System::Int32 GetLimitedScoreByCountAndRank(::System::UInt32 count, ::System::UInt32 rank)
		{
			return ((::System::Int32(*)(::PVOID, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEV2PVPSCOREDATA_GETLIMITEDSCOREBYCOUNTANDRANK_OFFSET))(this, count, rank);
		}

		::System::Int32 GetScoreLimitByRank(::System::UInt32 rank)
		{
			return ((::System::Int32(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEV2PVPSCOREDATA_GETSCORELIMITBYRANK_OFFSET))(this, rank);
		}

		static ::RPG::Client::MatchThreeV2PvpScoreData* Create(::System::UInt32 scoreID)
		{
			return ((::RPG::Client::MatchThreeV2PvpScoreData*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEV2PVPSCOREDATA_CREATE_OFFSET))(scoreID);
		}

		::System::Void Init()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEV2PVPSCOREDATA_INIT_OFFSET))(this);
		}
	};
}

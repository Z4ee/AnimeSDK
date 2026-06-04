#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/MatchThreeRarityType.h"
#include "unitysdk/RPG/GameCore/MatchThreeScoreFinishType.h"
#include "unitysdk/RPG/GameCore/MatchThreeScoreType.h"
#include "unitysdk/System/Object.h"

namespace RPG::GameCore { class MatchThreeV2PVPScoreRow; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define RPG_CLIENT_MATCHTHREEV2PVPSCOREDATA_CREATE_OFFSET UNITYSDK_OFFSET(0xBFAD2F0)
#define RPG_CLIENT_MATCHTHREEV2PVPSCOREDATA_GETFIXEDSCOREBYRANK_OFFSET UNITYSDK_OFFSET(0xBFAD030)
#define RPG_CLIENT_MATCHTHREEV2PVPSCOREDATA_GETLIMITEDSCOREBYCOUNTANDRANK_OFFSET UNITYSDK_OFFSET(0xBFAD130)
#define RPG_CLIENT_MATCHTHREEV2PVPSCOREDATA_GETSCORELIMITBYRANK_OFFSET UNITYSDK_OFFSET(0xBFAD1F0)
#define RPG_CLIENT_MATCHTHREEV2PVPSCOREDATA_GET_DESC_OFFSET UNITYSDK_OFFSET(0xBFACD30)
#define RPG_CLIENT_MATCHTHREEV2PVPSCOREDATA_GET_FINISHTYPE_OFFSET UNITYSDK_OFFSET(0xBFACDB0)
#define RPG_CLIENT_MATCHTHREEV2PVPSCOREDATA_GET_FIXEDSCOREMAP_OFFSET UNITYSDK_OFFSET(0xBFACF00)
#define RPG_CLIENT_MATCHTHREEV2PVPSCOREDATA_GET_ISHASSCORELIMIT_OFFSET UNITYSDK_OFFSET(0xBFACF70)
#define RPG_CLIENT_MATCHTHREEV2PVPSCOREDATA_GET_PARAM_OFFSET UNITYSDK_OFFSET(0xBFACE20)
#define RPG_CLIENT_MATCHTHREEV2PVPSCOREDATA_GET_RARITY_OFFSET UNITYSDK_OFFSET(0xBFACB50)
#define RPG_CLIENT_MATCHTHREEV2PVPSCOREDATA_GET_ROW_OFFSET UNITYSDK_OFFSET(0xBFACAE0)
#define RPG_CLIENT_MATCHTHREEV2PVPSCOREDATA_GET_SCOREID_OFFSET UNITYSDK_OFFSET(0xBFACB40)
#define RPG_CLIENT_MATCHTHREEV2PVPSCOREDATA_GET_SCORELIMITMAP_OFFSET UNITYSDK_OFFSET(0xBFACE90)
#define RPG_CLIENT_MATCHTHREEV2PVPSCOREDATA_GET_SCORETYPE_OFFSET UNITYSDK_OFFSET(0xBFACBC0)
#define RPG_CLIENT_MATCHTHREEV2PVPSCOREDATA_GET_TITLE2_OFFSET UNITYSDK_OFFSET(0xBFACCB0)
#define RPG_CLIENT_MATCHTHREEV2PVPSCOREDATA_GET_TITLE_OFFSET UNITYSDK_OFFSET(0xBFACC30)
#define RPG_CLIENT_MATCHTHREEV2PVPSCOREDATA_INIT_OFFSET UNITYSDK_OFFSET(0xBFAD380)
#define RPG_CLIENT_MATCHTHREEV2PVPSCOREDATA__CTOR_OFFSET UNITYSDK_OFFSET(0xBFAD370)

namespace RPG::Client
{
	inline static constexpr unsigned int MatchThreeV2PvpScoreData_TypeDefinitionIndex = 61747;

	class MatchThreeV2PvpScoreData : public ::System::Object
	{
	public:
		::System::UInt32 _ScoreID_k__BackingField; // 0x10

		::System::Void _ctor(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEV2PVPSCOREDATA__CTOR_OFFSET))(this, a1);
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

		::System::Int32 GetFixedScoreByRank(::System::UInt32 a1)
		{
			return ((::System::Int32(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEV2PVPSCOREDATA_GETFIXEDSCOREBYRANK_OFFSET))(this, a1);
		}

		::System::Int32 GetLimitedScoreByCountAndRank(::System::UInt32 a1, ::System::UInt32 a2)
		{
			return ((::System::Int32(*)(::PVOID, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEV2PVPSCOREDATA_GETLIMITEDSCOREBYCOUNTANDRANK_OFFSET))(this, a1, a2);
		}

		::System::Int32 GetScoreLimitByRank(::System::UInt32 a1)
		{
			return ((::System::Int32(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEV2PVPSCOREDATA_GETSCORELIMITBYRANK_OFFSET))(this, a1);
		}

		static ::RPG::Client::MatchThreeV2PvpScoreData* Create(::System::UInt32 a1)
		{
			return ((::RPG::Client::MatchThreeV2PvpScoreData*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEV2PVPSCOREDATA_CREATE_OFFSET))(a1);
		}

		::System::Void Init()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEV2PVPSCOREDATA_INIT_OFFSET))(this);
		}
	};
}

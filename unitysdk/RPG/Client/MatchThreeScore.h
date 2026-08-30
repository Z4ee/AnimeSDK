#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/MatchThreeRarityType.h"
#include "unitysdk/RPG/GameCore/MatchThreeScoreType.h"
#include "unitysdk/System/Object.h"

namespace RPG::GameCore { class MatchThreePVPScoreRow; }
namespace System { class String; }

#define RPG_CLIENT_MATCHTHREESCORE_CREATE_OFFSET UNITYSDK_OFFSET(0xD655570)
#define RPG_CLIENT_MATCHTHREESCORE_GET_RARITY_OFFSET UNITYSDK_OFFSET(0xD655980)
#define RPG_CLIENT_MATCHTHREESCORE_GET_SCOREID_OFFSET UNITYSDK_OFFSET(0xD655680)
#define RPG_CLIENT_MATCHTHREESCORE_GET_SCORE_OFFSET UNITYSDK_OFFSET(0xD6559D0)
#define RPG_CLIENT_MATCHTHREESCORE_GET_TITLE_OFFSET UNITYSDK_OFFSET(0xD6556D0)
#define RPG_CLIENT_MATCHTHREESCORE_GET_TYPE_OFFSET UNITYSDK_OFFSET(0xD655930)
#define RPG_CLIENT_MATCHTHREESCORE_SETSCORE_OFFSET UNITYSDK_OFFSET(0xD655630)
#define RPG_CLIENT_MATCHTHREESCORE_SET_SCORE_OFFSET UNITYSDK_OFFSET(0xD6559E0)
#define RPG_CLIENT_MATCHTHREESCORE__CTOR_OFFSET UNITYSDK_OFFSET(0xD655620)

namespace RPG::Client
{
	inline static constexpr unsigned int MatchThreeScore_TypeDefinitionIndex = 66009;

	class MatchThreeScore : public ::System::Object
	{
	public:
		::RPG::GameCore::MatchThreePVPScoreRow* _Row; // 0x10
		::System::Int32 _Score_k__BackingField; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREESCORE__CTOR_OFFSET))(this);
		}

		static ::RPG::Client::MatchThreeScore* Create(::System::UInt32 a1)
		{
			return ((::RPG::Client::MatchThreeScore*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREESCORE_CREATE_OFFSET))(a1);
		}

		::System::Void SetScore(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREESCORE_SETSCORE_OFFSET))(this, a1);
		}

		::System::UInt32 get_ScoreID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREESCORE_GET_SCOREID_OFFSET))(this);
		}

		::System::String* get_Title()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREESCORE_GET_TITLE_OFFSET))(this);
		}

		::RPG::GameCore::MatchThreeScoreType get_Type()
		{
			return ((::RPG::GameCore::MatchThreeScoreType(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREESCORE_GET_TYPE_OFFSET))(this);
		}

		::RPG::GameCore::MatchThreeRarityType get_Rarity()
		{
			return ((::RPG::GameCore::MatchThreeRarityType(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREESCORE_GET_RARITY_OFFSET))(this);
		}

		::System::Int32 get_Score()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREESCORE_GET_SCORE_OFFSET))(this);
		}

		::System::Void set_Score(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREESCORE_SET_SCORE_OFFSET))(this, a1);
		}
	};
}

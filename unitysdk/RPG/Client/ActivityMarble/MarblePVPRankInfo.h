#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/MultiPlayerGameMode.h"
#include "unitysdk/System/Object.h"

namespace RPG::GameCore { class MarblePVPRankConfigRow; }
namespace System { class String; }

#define RPG_CLIENT_ACTIVITYMARBLE_MARBLEPVPRANKINFO_CREATE_OFFSET UNITYSDK_OFFSET(0x9C10730)
#define RPG_CLIENT_ACTIVITYMARBLE_MARBLEPVPRANKINFO_GETRANKUPPROGRESS_OFFSET UNITYSDK_OFFSET(0x9C108A0)
#define RPG_CLIENT_ACTIVITYMARBLE_MARBLEPVPRANKINFO_GET_BIGRANKICON_OFFSET UNITYSDK_OFFSET(0x9C109D0)
#define RPG_CLIENT_ACTIVITYMARBLE_MARBLEPVPRANKINFO_GET_CURSCORE_OFFSET UNITYSDK_OFFSET(0x9C10A00)
#define RPG_CLIENT_ACTIVITYMARBLE_MARBLEPVPRANKINFO_GET_ID_OFFSET UNITYSDK_OFFSET(0x9C10920)
#define RPG_CLIENT_ACTIVITYMARBLE_MARBLEPVPRANKINFO_GET_ISRANKMAX_OFFSET UNITYSDK_OFFSET(0x9C109F0)
#define RPG_CLIENT_ACTIVITYMARBLE_MARBLEPVPRANKINFO_GET_MAXSCORE_OFFSET UNITYSDK_OFFSET(0x9C106B0)
#define RPG_CLIENT_ACTIVITYMARBLE_MARBLEPVPRANKINFO_GET_MINSCORE_OFFSET UNITYSDK_OFFSET(0x9C10830)
#define RPG_CLIENT_ACTIVITYMARBLE_MARBLEPVPRANKINFO_GET_NAME_OFFSET UNITYSDK_OFFSET(0x9C10960)
#define RPG_CLIENT_ACTIVITYMARBLE_MARBLEPVPRANKINFO_GET_RANKICON_OFFSET UNITYSDK_OFFSET(0x9C10990)
#define RPG_CLIENT_ACTIVITYMARBLE_MARBLEPVPRANKINFO_GET_RANK_OFFSET UNITYSDK_OFFSET(0x9C10940)
#define RPG_CLIENT_ACTIVITYMARBLE_MARBLEPVPRANKINFO_GET_SMALLRANKICON_OFFSET UNITYSDK_OFFSET(0x9C109B0)
#define RPG_CLIENT_ACTIVITYMARBLE_MARBLEPVPRANKINFO_INIT_OFFSET UNITYSDK_OFFSET(0x9C09F60)
#define RPG_CLIENT_ACTIVITYMARBLE_MARBLEPVPRANKINFO_REFRESHSCORE_OFFSET UNITYSDK_OFFSET(0x9C107A0)
#define RPG_CLIENT_ACTIVITYMARBLE_MARBLEPVPRANKINFO_SET_CURSCORE_OFFSET UNITYSDK_OFFSET(0x9C10A10)
#define RPG_CLIENT_ACTIVITYMARBLE_MARBLEPVPRANKINFO__CTOR_OFFSET UNITYSDK_OFFSET(0x9C09F50)

namespace RPG::Client::ActivityMarble
{
	inline static constexpr unsigned int MarblePVPRankInfo_TypeDefinitionIndex = 68963;

	class MarblePVPRankInfo : public ::System::Object
	{
	public:
		::RPG::GameCore::MarblePVPRankConfigRow* _NextRankConfg; // 0x10
		::RPG::GameCore::MarblePVPRankConfigRow* _CurRankConfig; // 0x18
		::System::UInt32 _CurScore_k__BackingField; // 0x20
		::RPG::GameCore::MultiPlayerGameMode _GameMode; // 0x24

		::System::Void _ctor(::RPG::GameCore::MultiPlayerGameMode gameMode)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::MultiPlayerGameMode))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYMARBLE_MARBLEPVPRANKINFO__CTOR_OFFSET))(this, gameMode);
		}

		::System::Void Init(::System::UInt32 score)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYMARBLE_MARBLEPVPRANKINFO_INIT_OFFSET))(this, score);
		}

		static ::RPG::Client::ActivityMarble::MarblePVPRankInfo* Create(::RPG::GameCore::MultiPlayerGameMode gameMode, ::System::UInt32 score)
		{
			return ((::RPG::Client::ActivityMarble::MarblePVPRankInfo*(*)(::RPG::GameCore::MultiPlayerGameMode, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYMARBLE_MARBLEPVPRANKINFO_CREATE_OFFSET))(gameMode, score);
		}

		::System::Void RefreshScore(::System::UInt32 newScore)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYMARBLE_MARBLEPVPRANKINFO_REFRESHSCORE_OFFSET))(this, newScore);
		}

		::System::Single GetRankUpProgress()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYMARBLE_MARBLEPVPRANKINFO_GETRANKUPPROGRESS_OFFSET))(this);
		}

		::System::UInt32 get_ID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYMARBLE_MARBLEPVPRANKINFO_GET_ID_OFFSET))(this);
		}

		::System::UInt32 get_Rank()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYMARBLE_MARBLEPVPRANKINFO_GET_RANK_OFFSET))(this);
		}

		::RPG::Client::TextID get_Name()
		{
			return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYMARBLE_MARBLEPVPRANKINFO_GET_NAME_OFFSET))(this);
		}

		::System::String* get_RankIcon()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYMARBLE_MARBLEPVPRANKINFO_GET_RANKICON_OFFSET))(this);
		}

		::System::String* get_SmallRankIcon()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYMARBLE_MARBLEPVPRANKINFO_GET_SMALLRANKICON_OFFSET))(this);
		}

		::System::String* get_BigRankIcon()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYMARBLE_MARBLEPVPRANKINFO_GET_BIGRANKICON_OFFSET))(this);
		}

		::System::UInt32 get_MinScore()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYMARBLE_MARBLEPVPRANKINFO_GET_MINSCORE_OFFSET))(this);
		}

		::System::UInt32 get_MaxScore()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYMARBLE_MARBLEPVPRANKINFO_GET_MAXSCORE_OFFSET))(this);
		}

		::System::Boolean get_IsRankMax()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYMARBLE_MARBLEPVPRANKINFO_GET_ISRANKMAX_OFFSET))(this);
		}

		::System::UInt32 get_CurScore()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYMARBLE_MARBLEPVPRANKINFO_GET_CURSCORE_OFFSET))(this);
		}

		::System::Void set_CurScore(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYMARBLE_MARBLEPVPRANKINFO_SET_CURSCORE_OFFSET))(this, value);
		}
	};
}

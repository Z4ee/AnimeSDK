#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/MultiPlayerGameMode.h"
#include "unitysdk/System/Object.h"

namespace RPG::GameCore { class MarblePVPRankConfigRow; }
namespace System { class String; }

#define RPG_CLIENT_ACTIVITYMARBLE_MARBLEPVPRANKINFO_CREATE_OFFSET UNITYSDK_OFFSET(0x1AFA9D70)
#define RPG_CLIENT_ACTIVITYMARBLE_MARBLEPVPRANKINFO_GETRANKUPPROGRESS_OFFSET UNITYSDK_OFFSET(0x1AFAA070)
#define RPG_CLIENT_ACTIVITYMARBLE_MARBLEPVPRANKINFO_GET_BIGRANKICON_OFFSET UNITYSDK_OFFSET(0x1AFAA3C0)
#define RPG_CLIENT_ACTIVITYMARBLE_MARBLEPVPRANKINFO_GET_CURSCORE_OFFSET UNITYSDK_OFFSET(0x1AFAA460)
#define RPG_CLIENT_ACTIVITYMARBLE_MARBLEPVPRANKINFO_GET_ID_OFFSET UNITYSDK_OFFSET(0x1AFAA210)
#define RPG_CLIENT_ACTIVITYMARBLE_MARBLEPVPRANKINFO_GET_ISRANKMAX_OFFSET UNITYSDK_OFFSET(0x1AFAA410)
#define RPG_CLIENT_ACTIVITYMARBLE_MARBLEPVPRANKINFO_GET_MAXSCORE_OFFSET UNITYSDK_OFFSET(0x1AFA9D00)
#define RPG_CLIENT_ACTIVITYMARBLE_MARBLEPVPRANKINFO_GET_MINSCORE_OFFSET UNITYSDK_OFFSET(0x1AFAA000)
#define RPG_CLIENT_ACTIVITYMARBLE_MARBLEPVPRANKINFO_GET_NAME_OFFSET UNITYSDK_OFFSET(0x1AFAA2B0)
#define RPG_CLIENT_ACTIVITYMARBLE_MARBLEPVPRANKINFO_GET_RANKICON_OFFSET UNITYSDK_OFFSET(0x1AFAA320)
#define RPG_CLIENT_ACTIVITYMARBLE_MARBLEPVPRANKINFO_GET_RANK_OFFSET UNITYSDK_OFFSET(0x1AFAA260)
#define RPG_CLIENT_ACTIVITYMARBLE_MARBLEPVPRANKINFO_GET_SMALLRANKICON_OFFSET UNITYSDK_OFFSET(0x1AFAA370)
#define RPG_CLIENT_ACTIVITYMARBLE_MARBLEPVPRANKINFO_INIT_OFFSET UNITYSDK_OFFSET(0x1AFA2D80)
#define RPG_CLIENT_ACTIVITYMARBLE_MARBLEPVPRANKINFO_REFRESHSCORE_OFFSET UNITYSDK_OFFSET(0x1AFA9DE0)
#define RPG_CLIENT_ACTIVITYMARBLE_MARBLEPVPRANKINFO_SET_CURSCORE_OFFSET UNITYSDK_OFFSET(0x1AFAA470)
#define RPG_CLIENT_ACTIVITYMARBLE_MARBLEPVPRANKINFO__CTOR_OFFSET UNITYSDK_OFFSET(0x1AFA2D70)

namespace RPG::Client::ActivityMarble
{
	inline static constexpr unsigned int MarblePVPRankInfo_TypeDefinitionIndex = 74604;

	class MarblePVPRankInfo : public ::System::Object
	{
	public:
		::RPG::GameCore::MarblePVPRankConfigRow* _CurRankConfig; // 0x10
		::RPG::GameCore::MarblePVPRankConfigRow* _NextRankConfg; // 0x18
		::System::UInt32 _CurScore_k__BackingField; // 0x20
		::RPG::GameCore::MultiPlayerGameMode _GameMode; // 0x24

		::System::Void _ctor(::RPG::GameCore::MultiPlayerGameMode a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::MultiPlayerGameMode))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYMARBLE_MARBLEPVPRANKINFO__CTOR_OFFSET))(this, a1);
		}

		::System::Void Init(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYMARBLE_MARBLEPVPRANKINFO_INIT_OFFSET))(this, a1);
		}

		static ::RPG::Client::ActivityMarble::MarblePVPRankInfo* Create(::RPG::GameCore::MultiPlayerGameMode a1, ::System::UInt32 a2)
		{
			return ((::RPG::Client::ActivityMarble::MarblePVPRankInfo*(*)(::RPG::GameCore::MultiPlayerGameMode, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYMARBLE_MARBLEPVPRANKINFO_CREATE_OFFSET))(a1, a2);
		}

		::System::Void RefreshScore(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYMARBLE_MARBLEPVPRANKINFO_REFRESHSCORE_OFFSET))(this, a1);
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

		::System::Void set_CurScore(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYMARBLE_MARBLEPVPRANKINFO_SET_CURSCORE_OFFSET))(this, a1);
		}
	};
}

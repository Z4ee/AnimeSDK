#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"

namespace RPG::GameCore { class MatchThreeV2PVPRankRow; }
namespace System { class String; }

#define RPG_CLIENT_MATCHTHREEV2RANKDATA_COMPARETO_OFFSET UNITYSDK_OFFSET(0x1C9AAAC0)
#define RPG_CLIENT_MATCHTHREEV2RANKDATA_CREATE_OFFSET UNITYSDK_OFFSET(0x1C9AAA10)
#define RPG_CLIENT_MATCHTHREEV2RANKDATA_GET_ID_OFFSET UNITYSDK_OFFSET(0x1C9AA5B0)
#define RPG_CLIENT_MATCHTHREEV2RANKDATA_GET_LARGEICONPATH_OFFSET UNITYSDK_OFFSET(0x1C9AA7C0)
#define RPG_CLIENT_MATCHTHREEV2RANKDATA_GET_MAXSCOREEXCLUSIVE_OFFSET UNITYSDK_OFFSET(0x1C9AA8C0)
#define RPG_CLIENT_MATCHTHREEV2RANKDATA_GET_MAXSCOREINCLUSIVE_OFFSET UNITYSDK_OFFSET(0x1C9AA960)
#define RPG_CLIENT_MATCHTHREEV2RANKDATA_GET_MEDIUMICONPATH_OFFSET UNITYSDK_OFFSET(0x1C9AA720)
#define RPG_CLIENT_MATCHTHREEV2RANKDATA_GET_MINSCORE_OFFSET UNITYSDK_OFFSET(0x1C9AA860)
#define RPG_CLIENT_MATCHTHREEV2RANKDATA_GET_RANK_OFFSET UNITYSDK_OFFSET(0x1C991A20)
#define RPG_CLIENT_MATCHTHREEV2RANKDATA_GET_SMALLICONPATH_OFFSET UNITYSDK_OFFSET(0x1C9AA680)
#define RPG_CLIENT_MATCHTHREEV2RANKDATA_GET_TITLE_OFFSET UNITYSDK_OFFSET(0x1C9AA5C0)
#define RPG_CLIENT_MATCHTHREEV2RANKDATA_GET__ROW_OFFSET UNITYSDK_OFFSET(0x1C9AA550)
#define RPG_CLIENT_MATCHTHREEV2RANKDATA_SETUPNEIGHBORS_OFFSET UNITYSDK_OFFSET(0x1C9AAA70)
#define RPG_CLIENT_MATCHTHREEV2RANKDATA__CTOR_OFFSET UNITYSDK_OFFSET(0x1C9AAA00)

namespace RPG::Client
{
	inline static constexpr unsigned int MatchThreeV2RankData_TypeDefinitionIndex = 66066;

	class MatchThreeV2RankData : public ::System::Object
	{
	public:
		::RPG::Client::MatchThreeV2RankData* _PrevRankData; // 0x10
		::System::UInt32 _ID_k__BackingField; // 0x18

		::System::Void _ctor(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEV2RANKDATA__CTOR_OFFSET))(this, a1);
		}

		::RPG::GameCore::MatchThreeV2PVPRankRow* get__Row()
		{
			return ((::RPG::GameCore::MatchThreeV2PVPRankRow*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEV2RANKDATA_GET__ROW_OFFSET))(this);
		}

		::System::UInt32 get_ID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEV2RANKDATA_GET_ID_OFFSET))(this);
		}

		::System::UInt32 get_Rank()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEV2RANKDATA_GET_RANK_OFFSET))(this);
		}

		::RPG::Client::TextID get_Title()
		{
			return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEV2RANKDATA_GET_TITLE_OFFSET))(this);
		}

		::System::String* get_SmallIconPath()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEV2RANKDATA_GET_SMALLICONPATH_OFFSET))(this);
		}

		::System::String* get_MediumIconPath()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEV2RANKDATA_GET_MEDIUMICONPATH_OFFSET))(this);
		}

		::System::String* get_LargeIconPath()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEV2RANKDATA_GET_LARGEICONPATH_OFFSET))(this);
		}

		::System::UInt32 get_MinScore()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEV2RANKDATA_GET_MINSCORE_OFFSET))(this);
		}

		::System::UInt32 get_MaxScoreInclusive()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEV2RANKDATA_GET_MAXSCOREINCLUSIVE_OFFSET))(this);
		}

		::System::UInt32 get_MaxScoreExclusive()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEV2RANKDATA_GET_MAXSCOREEXCLUSIVE_OFFSET))(this);
		}

		static ::RPG::Client::MatchThreeV2RankData* Create(::RPG::GameCore::MatchThreeV2PVPRankRow* a1)
		{
			return ((::RPG::Client::MatchThreeV2RankData*(*)(::RPG::GameCore::MatchThreeV2PVPRankRow*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEV2RANKDATA_CREATE_OFFSET))(a1);
		}

		::System::Void SetupNeighbors(::RPG::Client::MatchThreeV2RankData* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::MatchThreeV2RankData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEV2RANKDATA_SETUPNEIGHBORS_OFFSET))(this, a1);
		}

		::System::Int32 CompareTo(::RPG::Client::MatchThreeV2RankData* a1)
		{
			return ((::System::Int32(*)(::PVOID, ::RPG::Client::MatchThreeV2RankData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEV2RANKDATA_COMPARETO_OFFSET))(this, a1);
		}
	};
}

#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class MatchThreeV2RankData; }

#define RPG_CLIENT_MATCHTHREEV2RANKINFOS___C__DISPLAYCLASS5_0__CTOR_OFFSET UNITYSDK_OFFSET(0x1C9AB5B0)
#define RPG_CLIENT_MATCHTHREEV2RANKINFOS___C__DISPLAYCLASS5_0__GETRANKDATABYID_B__0_OFFSET UNITYSDK_OFFSET(0x1C9AB6F0)

namespace RPG::Client
{
	inline static constexpr unsigned int MatchThreeV2RankInfos___c__DisplayClass5_0_TypeDefinitionIndex = 66070;

	class MatchThreeV2RankInfos___c__DisplayClass5_0 : public ::System::Object
	{
	public:
		::System::UInt32 id; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEV2RANKINFOS___C__DISPLAYCLASS5_0__CTOR_OFFSET))(this);
		}

		::System::Boolean _GetRankDataByID_b__0(::RPG::Client::MatchThreeV2RankData* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::MatchThreeV2RankData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEV2RANKINFOS___C__DISPLAYCLASS5_0__GETRANKDATABYID_B__0_OFFSET))(this, a1);
		}
	};
}

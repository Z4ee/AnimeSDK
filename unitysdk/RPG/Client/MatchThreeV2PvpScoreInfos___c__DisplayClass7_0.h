#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/MatchThreeScoreType.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class MatchThreeV2PvpScoreData; }

#define RPG_CLIENT_MATCHTHREEV2PVPSCOREINFOS___C__DISPLAYCLASS7_0__CTOR_OFFSET UNITYSDK_OFFSET(0x1C9AA2F0)
#define RPG_CLIENT_MATCHTHREEV2PVPSCOREINFOS___C__DISPLAYCLASS7_0__GETSCOREDATALISTBYSCORETYPE_B__0_OFFSET UNITYSDK_OFFSET(0x1C9AA520)

namespace RPG::Client
{
	inline static constexpr unsigned int MatchThreeV2PvpScoreInfos___c__DisplayClass7_0_TypeDefinitionIndex = 66098;

	class MatchThreeV2PvpScoreInfos___c__DisplayClass7_0 : public ::System::Object
	{
	public:
		::RPG::GameCore::MatchThreeScoreType scoreType; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEV2PVPSCOREINFOS___C__DISPLAYCLASS7_0__CTOR_OFFSET))(this);
		}

		::System::Boolean _GetScoreDataListByScoreType_b__0(::RPG::Client::MatchThreeV2PvpScoreData* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::MatchThreeV2PvpScoreData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEV2PVPSCOREINFOS___C__DISPLAYCLASS7_0__GETSCOREDATALISTBYSCORETYPE_B__0_OFFSET))(this, a1);
		}
	};
}

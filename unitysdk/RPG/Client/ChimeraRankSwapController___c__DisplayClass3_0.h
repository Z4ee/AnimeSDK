#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class ChimeraTeamData; }

#define RPG_CLIENT_CHIMERARANKSWAPCONTROLLER___C__DISPLAYCLASS3_0__CREATEVIRTUALTEAMLIST_B__0_OFFSET UNITYSDK_OFFSET(0x93CA2B0)
#define RPG_CLIENT_CHIMERARANKSWAPCONTROLLER___C__DISPLAYCLASS3_0__CTOR_OFFSET UNITYSDK_OFFSET(0x93C9900)

namespace RPG::Client
{
	inline static constexpr unsigned int ChimeraRankSwapController___c__DisplayClass3_0_TypeDefinitionIndex = 59385;

	class ChimeraRankSwapController___c__DisplayClass3_0 : public ::System::Object
	{
	public:
		::RPG::Client::ChimeraTeamData* teamData; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERARANKSWAPCONTROLLER___C__DISPLAYCLASS3_0__CTOR_OFFSET))(this);
		}

		::System::Boolean _CreateVirtualTeamList_b__0(::RPG::Client::ChimeraTeamData* curTeam)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::ChimeraTeamData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERARANKSWAPCONTROLLER___C__DISPLAYCLASS3_0__CREATEVIRTUALTEAMLIST_B__0_OFFSET))(this, curTeam);
		}
	};
}

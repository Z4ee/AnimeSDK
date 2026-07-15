#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class VirtualRankChimeraTeam; }

#define RPG_CLIENT_CHIMERARANKSWAPCONTROLLER___C__DISPLAYCLASS5_0__CTOR_OFFSET UNITYSDK_OFFSET(0x19B09440)
#define RPG_CLIENT_CHIMERARANKSWAPCONTROLLER___C__DISPLAYCLASS5_0___REFRESHVIRTUALTEAMRANK_B__1_OFFSET UNITYSDK_OFFSET(0x19B09480)

namespace RPG::Client
{
	inline static constexpr unsigned int ChimeraRankSwapController___c__DisplayClass5_0_TypeDefinitionIndex = 69205;

	class ChimeraRankSwapController___c__DisplayClass5_0 : public ::System::Object
	{
	public:
		::System::Int32 itemIndex; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERARANKSWAPCONTROLLER___C__DISPLAYCLASS5_0__CTOR_OFFSET))(this);
		}

		::System::Boolean __RefreshVirtualTeamRank_b__1(::RPG::Client::VirtualRankChimeraTeam* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::VirtualRankChimeraTeam*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERARANKSWAPCONTROLLER___C__DISPLAYCLASS5_0___REFRESHVIRTUALTEAMRANK_B__1_OFFSET))(this, a1);
		}
	};
}

#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class ChimeraRankSwapController; }
namespace System { class Action; }

#define RPG_CLIENT_CHIMERARANKSWAPCONTROLLER___C__DISPLAYCLASS6_0__CTOR_OFFSET UNITYSDK_OFFSET(0x93C9D50)
#define RPG_CLIENT_CHIMERARANKSWAPCONTROLLER___C__DISPLAYCLASS6_0___INITVIRTUALTEAMRANK_B__0_OFFSET UNITYSDK_OFFSET(0x93CA300)

namespace RPG::Client
{
	inline static constexpr unsigned int ChimeraRankSwapController___c__DisplayClass6_0_TypeDefinitionIndex = 59387;

	class ChimeraRankSwapController___c__DisplayClass6_0 : public ::System::Object
	{
	public:
		::RPG::Client::ChimeraRankSwapController* __4__this; // 0x10
		::System::Action* __9__0; // 0x18
		::System::Int32 i; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERARANKSWAPCONTROLLER___C__DISPLAYCLASS6_0__CTOR_OFFSET))(this);
		}

		::System::Void __InitVirtualTeamRank_b__0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERARANKSWAPCONTROLLER___C__DISPLAYCLASS6_0___INITVIRTUALTEAMRANK_B__0_OFFSET))(this);
		}
	};
}

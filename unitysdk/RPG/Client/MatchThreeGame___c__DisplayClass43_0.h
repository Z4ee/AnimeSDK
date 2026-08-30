#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_1CBA230307F9C289_36;
namespace RPG::Client { class MatchThreeGameOpponent; }

#define RPG_CLIENT_MATCHTHREEGAME___C__DISPLAYCLASS43_0__CTOR_OFFSET UNITYSDK_OFFSET(0x1C26EBE0)
#define RPG_CLIENT_MATCHTHREEGAME___C__DISPLAYCLASS43_0___UPDATEROYALEPLAYER_B__0_OFFSET UNITYSDK_OFFSET(0x1C2761E0)

namespace RPG::Client
{
	inline static constexpr unsigned int MatchThreeGame___c__DisplayClass43_0_TypeDefinitionIndex = 65986;

	class MatchThreeGame___c__DisplayClass43_0 : public ::System::Object
	{
	public:
		::Class_1_1CBA230307F9C289_36* playerData; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEGAME___C__DISPLAYCLASS43_0__CTOR_OFFSET))(this);
		}

		::System::Boolean __UpdateRoyalePlayer_b__0(::RPG::Client::MatchThreeGameOpponent* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::MatchThreeGameOpponent*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEGAME___C__DISPLAYCLASS43_0___UPDATEROYALEPLAYER_B__0_OFFSET))(this, a1);
		}
	};
}

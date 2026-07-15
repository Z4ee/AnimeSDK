#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_1CBA230307F9C289_35;
namespace RPG::Client { class MatchThreeGameOpponent; }

#define RPG_CLIENT_MATCHTHREEGAME___C__DISPLAYCLASS41_0__CTOR_OFFSET UNITYSDK_OFFSET(0x1AB5D6D0)
#define RPG_CLIENT_MATCHTHREEGAME___C__DISPLAYCLASS41_0___UPDATEROYALEPLAYERREALTIMEDATA_B__0_OFFSET UNITYSDK_OFFSET(0x1AB655E0)

namespace RPG::Client
{
	inline static constexpr unsigned int MatchThreeGame___c__DisplayClass41_0_TypeDefinitionIndex = 63000;

	class MatchThreeGame___c__DisplayClass41_0 : public ::System::Object
	{
	public:
		::Class_1_1CBA230307F9C289_35* playerData; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEGAME___C__DISPLAYCLASS41_0__CTOR_OFFSET))(this);
		}

		::System::Boolean __UpdateRoyalePlayerRealTimeData_b__0(::RPG::Client::MatchThreeGameOpponent* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::MatchThreeGameOpponent*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEGAME___C__DISPLAYCLASS41_0___UPDATEROYALEPLAYERREALTIMEDATA_B__0_OFFSET))(this, a1);
		}
	};
}

#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_1CBA230307F9C289_26;
namespace RPG::Client { class MatchThreeGameOpponent; }

#define RPG_CLIENT_MATCHTHREEGAME___C__DISPLAYCLASS41_0__CTOR_OFFSET UNITYSDK_OFFSET(0xA836D90)
#define RPG_CLIENT_MATCHTHREEGAME___C__DISPLAYCLASS41_0___UPDATEROYALEPLAYERREALTIMEDATA_B__0_OFFSET UNITYSDK_OFFSET(0xA836DA0)

namespace RPG::Client
{
	inline static constexpr unsigned int MatchThreeGame___c__DisplayClass41_0_TypeDefinitionIndex = 60704;

	class MatchThreeGame___c__DisplayClass41_0 : public ::System::Object
	{
	public:
		::Class_1_1CBA230307F9C289_26* playerData; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEGAME___C__DISPLAYCLASS41_0__CTOR_OFFSET))(this);
		}

		::System::Boolean __UpdateRoyalePlayerRealTimeData_b__0(::RPG::Client::MatchThreeGameOpponent* x)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::MatchThreeGameOpponent*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEGAME___C__DISPLAYCLASS41_0___UPDATEROYALEPLAYERREALTIMEDATA_B__0_OFFSET))(this, x);
		}
	};
}

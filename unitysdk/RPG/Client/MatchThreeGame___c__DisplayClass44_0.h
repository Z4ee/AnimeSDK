#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class MatchThreeGameOpponent; }
namespace System { template <typename T1, typename T2> class Func_2; }

#define RPG_CLIENT_MATCHTHREEGAME___C__DISPLAYCLASS44_0__CTOR_OFFSET UNITYSDK_OFFSET(0x9B39B10)
#define RPG_CLIENT_MATCHTHREEGAME___C__DISPLAYCLASS44_0___REFRESHLOCALRANKDATA_B__3_OFFSET UNITYSDK_OFFSET(0x9B3FCA0)

namespace RPG::Client
{
	inline static constexpr unsigned int MatchThreeGame___c__DisplayClass44_0_TypeDefinitionIndex = 53562;

	class MatchThreeGame___c__DisplayClass44_0 : public ::System::Object
	{
	public:
		::System::Func_2<::RPG::Client::MatchThreeGameOpponent*, ::System::Boolean>* isAlive; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEGAME___C__DISPLAYCLASS44_0__CTOR_OFFSET))(this);
		}

		::System::Int32 __RefreshLocalRankData_b__3(::RPG::Client::MatchThreeGameOpponent* lhs, ::RPG::Client::MatchThreeGameOpponent* rhs)
		{
			return ((::System::Int32(*)(::PVOID, ::RPG::Client::MatchThreeGameOpponent*, ::RPG::Client::MatchThreeGameOpponent*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEGAME___C__DISPLAYCLASS44_0___REFRESHLOCALRANKDATA_B__3_OFFSET))(this, lhs, rhs);
		}
	};
}

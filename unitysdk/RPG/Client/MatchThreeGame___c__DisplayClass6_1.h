#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_D17272E82AE804C2_312;
namespace RPG::Client { class MatchThreeGameProp; }

#define RPG_CLIENT_MATCHTHREEGAME___C__DISPLAYCLASS6_1__CTOR_OFFSET UNITYSDK_OFFSET(0xA8371E0)
#define RPG_CLIENT_MATCHTHREEGAME___C__DISPLAYCLASS6_1___UPDATEPLAYER_B__1_OFFSET UNITYSDK_OFFSET(0xA8371F0)

namespace RPG::Client
{
	inline static constexpr unsigned int MatchThreeGame___c__DisplayClass6_1_TypeDefinitionIndex = 60711;

	class MatchThreeGame___c__DisplayClass6_1 : public ::System::Object
	{
	public:
		::Class_1_D17272E82AE804C2_312* itemInfo; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEGAME___C__DISPLAYCLASS6_1__CTOR_OFFSET))(this);
		}

		::System::Boolean __UpdatePlayer_b__1(::RPG::Client::MatchThreeGameProp* x)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::MatchThreeGameProp*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEGAME___C__DISPLAYCLASS6_1___UPDATEPLAYER_B__1_OFFSET))(this, x);
		}
	};
}

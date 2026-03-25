#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_FA4F4A67B1C04320_303;
namespace RPG::Client { class MatchThreeGameProp; }

#define RPG_CLIENT_MATCHTHREEGAME___C__DISPLAYCLASS73_1__CTOR_OFFSET UNITYSDK_OFFSET(0x9B3C8C0)
#define RPG_CLIENT_MATCHTHREEGAME___C__DISPLAYCLASS73_1___UPDATEPLAYER_B__1_OFFSET UNITYSDK_OFFSET(0x9B40160)

namespace RPG::Client
{
	inline static constexpr unsigned int MatchThreeGame___c__DisplayClass73_1_TypeDefinitionIndex = 53570;

	class MatchThreeGame___c__DisplayClass73_1 : public ::System::Object
	{
	public:
		::Class_1_FA4F4A67B1C04320_303* itemInfo; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEGAME___C__DISPLAYCLASS73_1__CTOR_OFFSET))(this);
		}

		::System::Boolean __UpdatePlayer_b__1(::RPG::Client::MatchThreeGameProp* x)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::MatchThreeGameProp*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEGAME___C__DISPLAYCLASS73_1___UPDATEPLAYER_B__1_OFFSET))(this, x);
		}
	};
}

#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class MatchThreeBoard; }
namespace RPG::Client { class MatchThreePowerCounter; }

#define RPG_CLIENT_MATCHTHREEBOARD___C__DISPLAYCLASS40_0__CTOR_OFFSET UNITYSDK_OFFSET(0x1C262EB0)
#define RPG_CLIENT_MATCHTHREEBOARD___C__DISPLAYCLASS40_0__DOPLAYPOWERCOUNTER_B__0_OFFSET UNITYSDK_OFFSET(0x1C268650)

namespace RPG::Client
{
	inline static constexpr unsigned int MatchThreeBoard___c__DisplayClass40_0_TypeDefinitionIndex = 65965;

	class MatchThreeBoard___c__DisplayClass40_0 : public ::System::Object
	{
	public:
		::RPG::Client::MatchThreeBoard* __4__this; // 0x10
		::RPG::Client::MatchThreePowerCounter* powerCounter; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEBOARD___C__DISPLAYCLASS40_0__CTOR_OFFSET))(this);
		}

		::System::Void _DoPlayPowerCounter_b__0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEBOARD___C__DISPLAYCLASS40_0__DOPLAYPOWERCOUNTER_B__0_OFFSET))(this);
		}
	};
}

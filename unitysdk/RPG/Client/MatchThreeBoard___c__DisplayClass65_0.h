#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class MatchThreeBoard; }
namespace RPG::Client { class MatchThreeTimedEffect; }

#define RPG_CLIENT_MATCHTHREEBOARD___C__DISPLAYCLASS65_0__CTOR_OFFSET UNITYSDK_OFFSET(0x1A8933E0)
#define RPG_CLIENT_MATCHTHREEBOARD___C__DISPLAYCLASS65_0___PLAYBOMBMATCHEDEFFECT_B__0_OFFSET UNITYSDK_OFFSET(0x1A897570)

namespace RPG::Client
{
	inline static constexpr unsigned int MatchThreeBoard___c__DisplayClass65_0_TypeDefinitionIndex = 62986;

	class MatchThreeBoard___c__DisplayClass65_0 : public ::System::Object
	{
	public:
		::RPG::Client::MatchThreeBoard* __4__this; // 0x10
		::RPG::Client::MatchThreeTimedEffect* bombEffect; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEBOARD___C__DISPLAYCLASS65_0__CTOR_OFFSET))(this);
		}

		::System::Void __PlayBombMatchedEffect_b__0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEBOARD___C__DISPLAYCLASS65_0___PLAYBOMBMATCHEDEFFECT_B__0_OFFSET))(this);
		}
	};
}

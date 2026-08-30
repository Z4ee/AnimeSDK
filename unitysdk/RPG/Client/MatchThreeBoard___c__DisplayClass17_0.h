#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class MatchThreeBoard; }
namespace RPG::Client { class MatchThreeTimedEffect; }

#define RPG_CLIENT_MATCHTHREEBOARD___C__DISPLAYCLASS17_0__CTOR_OFFSET UNITYSDK_OFFSET(0x1C25ED20)
#define RPG_CLIENT_MATCHTHREEBOARD___C__DISPLAYCLASS17_0__DOPLAYREFRESHEFFECT_B__0_OFFSET UNITYSDK_OFFSET(0x1C2680A0)

namespace RPG::Client
{
	inline static constexpr unsigned int MatchThreeBoard___c__DisplayClass17_0_TypeDefinitionIndex = 65950;

	class MatchThreeBoard___c__DisplayClass17_0 : public ::System::Object
	{
	public:
		::RPG::Client::MatchThreeTimedEffect* effect; // 0x10
		::RPG::Client::MatchThreeBoard* __4__this; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEBOARD___C__DISPLAYCLASS17_0__CTOR_OFFSET))(this);
		}

		::System::Void _DoPlayRefreshEffect_b__0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEBOARD___C__DISPLAYCLASS17_0__DOPLAYREFRESHEFFECT_B__0_OFFSET))(this);
		}
	};
}

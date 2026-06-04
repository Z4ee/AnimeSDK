#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class MatchThreeBoard; }
namespace RPG::Client { class MatchThreeFlashEffect; }
namespace System { class Action; }

#define RPG_CLIENT_MATCHTHREEBOARD___C__DISPLAYCLASS38_0__CTOR_OFFSET UNITYSDK_OFFSET(0xBF727E0)
#define RPG_CLIENT_MATCHTHREEBOARD___C__DISPLAYCLASS38_0__DOPLAYMULTISTYLEBOMBEFFECT_B__0_OFFSET UNITYSDK_OFFSET(0xBF727F0)
#define RPG_CLIENT_MATCHTHREEBOARD___C__DISPLAYCLASS38_0__DOPLAYMULTISTYLEBOMBEFFECT_B__1_OFFSET UNITYSDK_OFFSET(0xBF72810)

namespace RPG::Client
{
	inline static constexpr unsigned int MatchThreeBoard___c__DisplayClass38_0_TypeDefinitionIndex = 61616;

	class MatchThreeBoard___c__DisplayClass38_0 : public ::System::Object
	{
	public:
		::System::Action* onFinish; // 0x10
		::RPG::Client::MatchThreeBoard* __4__this; // 0x18
		::RPG::Client::MatchThreeFlashEffect* flash; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEBOARD___C__DISPLAYCLASS38_0__CTOR_OFFSET))(this);
		}

		::System::Void _DoPlayMultiStyleBombEffect_b__0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEBOARD___C__DISPLAYCLASS38_0__DOPLAYMULTISTYLEBOMBEFFECT_B__0_OFFSET))(this);
		}

		::System::Void _DoPlayMultiStyleBombEffect_b__1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEBOARD___C__DISPLAYCLASS38_0__DOPLAYMULTISTYLEBOMBEFFECT_B__1_OFFSET))(this);
		}
	};
}

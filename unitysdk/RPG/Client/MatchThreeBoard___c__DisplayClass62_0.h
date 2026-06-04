#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class MatchThreeBoard; }
namespace RPG::Client { class MatchThreeTimedEffect; }
namespace System { class Action; }

#define RPG_CLIENT_MATCHTHREEBOARD___C__DISPLAYCLASS62_0__CTOR_OFFSET UNITYSDK_OFFSET(0xBF729C0)
#define RPG_CLIENT_MATCHTHREEBOARD___C__DISPLAYCLASS62_0___PLAYMATCHEDEFFECT_B__0_OFFSET UNITYSDK_OFFSET(0xBF729D0)

namespace RPG::Client
{
	inline static constexpr unsigned int MatchThreeBoard___c__DisplayClass62_0_TypeDefinitionIndex = 61622;

	class MatchThreeBoard___c__DisplayClass62_0 : public ::System::Object
	{
	public:
		::RPG::Client::MatchThreeBoard* __4__this; // 0x10
		::RPG::Client::MatchThreeTimedEffect* matchEffect; // 0x18
		::System::Action* onFinish; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEBOARD___C__DISPLAYCLASS62_0__CTOR_OFFSET))(this);
		}

		::System::Void __PlayMatchedEffect_b__0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEBOARD___C__DISPLAYCLASS62_0___PLAYMATCHEDEFFECT_B__0_OFFSET))(this);
		}
	};
}

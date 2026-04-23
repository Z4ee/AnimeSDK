#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class MatchThreeBoard; }
namespace RPG::Client { class MatchThreeTimedEffect; }

#define RPG_CLIENT_MATCHTHREEBOARD___C__DISPLAYCLASS67_0__CTOR_OFFSET UNITYSDK_OFFSET(0xA827AC0)
#define RPG_CLIENT_MATCHTHREEBOARD___C__DISPLAYCLASS67_0___PLAYBOMBCREATEEFFECT_B__0_OFFSET UNITYSDK_OFFSET(0xA82B8B0)

namespace RPG::Client
{
	inline static constexpr unsigned int MatchThreeBoard___c__DisplayClass67_0_TypeDefinitionIndex = 60691;

	class MatchThreeBoard___c__DisplayClass67_0 : public ::System::Object
	{
	public:
		::RPG::Client::MatchThreeBoard* __4__this; // 0x10
		::RPG::Client::MatchThreeTimedEffect* matchEffect; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEBOARD___C__DISPLAYCLASS67_0__CTOR_OFFSET))(this);
		}

		::System::Void __PlayBombCreateEffect_b__0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEBOARD___C__DISPLAYCLASS67_0___PLAYBOMBCREATEEFFECT_B__0_OFFSET))(this);
		}
	};
}

#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class MatchThreeBoard; }
namespace RPG::Client { class MatchThreeTimedEffect; }
namespace System { class Action; }

#define RPG_CLIENT_MATCHTHREEBOARD___C__DISPLAYCLASS64_0__CTOR_OFFSET UNITYSDK_OFFSET(0xD5806E0)
#define RPG_CLIENT_MATCHTHREEBOARD___C__DISPLAYCLASS64_0___PLAYGRIDBREAKEFFECT_B__0_OFFSET UNITYSDK_OFFSET(0xD584790)

namespace RPG::Client
{
	inline static constexpr unsigned int MatchThreeBoard___c__DisplayClass64_0_TypeDefinitionIndex = 65924;

	class MatchThreeBoard___c__DisplayClass64_0 : public ::System::Object
	{
	public:
		::System::Action* onFinish; // 0x10
		::RPG::Client::MatchThreeBoard* __4__this; // 0x18
		::RPG::Client::MatchThreeTimedEffect* gridBreakEffect; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEBOARD___C__DISPLAYCLASS64_0__CTOR_OFFSET))(this);
		}

		::System::Void __PlayGridBreakEffect_b__0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEBOARD___C__DISPLAYCLASS64_0___PLAYGRIDBREAKEFFECT_B__0_OFFSET))(this);
		}
	};
}

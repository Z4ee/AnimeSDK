#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class MatchThreeBoard; }
namespace RPG::Client { class MatchThreeFlashEffect; }
namespace System { class Action; }

#define RPG_CLIENT_MATCHTHREEBOARD___C__DISPLAYCLASS31_0__CTOR_OFFSET UNITYSDK_OFFSET(0x1A8908F0)
#define RPG_CLIENT_MATCHTHREEBOARD___C__DISPLAYCLASS31_0__DOFLYEFFECTTOSKILL_B__0_OFFSET UNITYSDK_OFFSET(0x1A897120)
#define RPG_CLIENT_MATCHTHREEBOARD___C__DISPLAYCLASS31_0__DOFLYEFFECTTOSKILL_B__1_OFFSET UNITYSDK_OFFSET(0x1A897140)

namespace RPG::Client
{
	inline static constexpr unsigned int MatchThreeBoard___c__DisplayClass31_0_TypeDefinitionIndex = 62974;

	class MatchThreeBoard___c__DisplayClass31_0 : public ::System::Object
	{
	public:
		::RPG::Client::MatchThreeBoard* __4__this; // 0x10
		::System::Action* onFinish; // 0x18
		::RPG::Client::MatchThreeFlashEffect* flash; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEBOARD___C__DISPLAYCLASS31_0__CTOR_OFFSET))(this);
		}

		::System::Void _DoFlyEffectToSkill_b__0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEBOARD___C__DISPLAYCLASS31_0__DOFLYEFFECTTOSKILL_B__0_OFFSET))(this);
		}

		::System::Void _DoFlyEffectToSkill_b__1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEBOARD___C__DISPLAYCLASS31_0__DOFLYEFFECTTOSKILL_B__1_OFFSET))(this);
		}
	};
}

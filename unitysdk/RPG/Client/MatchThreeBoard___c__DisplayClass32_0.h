#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class MatchThreeBoard; }
namespace RPG::Client { class MatchThreeFlashEffect; }
namespace System { class Action; }

#define RPG_CLIENT_MATCHTHREEBOARD___C__DISPLAYCLASS32_0__CTOR_OFFSET UNITYSDK_OFFSET(0xA8252D0)
#define RPG_CLIENT_MATCHTHREEBOARD___C__DISPLAYCLASS32_0__DOFLYEFFECTTOSTEP_B__0_OFFSET UNITYSDK_OFFSET(0xA82B4F0)
#define RPG_CLIENT_MATCHTHREEBOARD___C__DISPLAYCLASS32_0__DOFLYEFFECTTOSTEP_B__1_OFFSET UNITYSDK_OFFSET(0xA82B500)

namespace RPG::Client
{
	inline static constexpr unsigned int MatchThreeBoard___c__DisplayClass32_0_TypeDefinitionIndex = 60679;

	class MatchThreeBoard___c__DisplayClass32_0 : public ::System::Object
	{
	public:
		::System::Action* onFinish; // 0x10
		::RPG::Client::MatchThreeBoard* __4__this; // 0x18
		::RPG::Client::MatchThreeFlashEffect* flash; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEBOARD___C__DISPLAYCLASS32_0__CTOR_OFFSET))(this);
		}

		::System::Void _DoFlyEffectToStep_b__0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEBOARD___C__DISPLAYCLASS32_0__DOFLYEFFECTTOSTEP_B__0_OFFSET))(this);
		}

		::System::Void _DoFlyEffectToStep_b__1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEBOARD___C__DISPLAYCLASS32_0__DOFLYEFFECTTOSTEP_B__1_OFFSET))(this);
		}
	};
}

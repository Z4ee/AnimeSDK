#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class MatchThreeBoard; }
namespace RPG::Client { class MatchThreeFlashEffect; }
namespace System { class Action; }

#define RPG_CLIENT_MATCHTHREEBOARD___C__DISPLAYCLASS26_0__CTOR_OFFSET UNITYSDK_OFFSET(0xD585690)
#define RPG_CLIENT_MATCHTHREEBOARD___C__DISPLAYCLASS26_0__DOFLYEFFECT_B__0_OFFSET UNITYSDK_OFFSET(0xD58D190)
#define RPG_CLIENT_MATCHTHREEBOARD___C__DISPLAYCLASS26_0__DOFLYEFFECT_B__1_OFFSET UNITYSDK_OFFSET(0xD58D1B0)

namespace RPG::Client
{
	inline static constexpr unsigned int MatchThreeBoard___c__DisplayClass26_0_TypeDefinitionIndex = 65908;

	class MatchThreeBoard___c__DisplayClass26_0 : public ::System::Object
	{
	public:
		::RPG::Client::MatchThreeBoard* __4__this; // 0x10
		::System::Action* onFinish; // 0x18
		::RPG::Client::MatchThreeFlashEffect* effect; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEBOARD___C__DISPLAYCLASS26_0__CTOR_OFFSET))(this);
		}

		::System::Void _DoFlyEffect_b__0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEBOARD___C__DISPLAYCLASS26_0__DOFLYEFFECT_B__0_OFFSET))(this);
		}

		::System::Void _DoFlyEffect_b__1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEBOARD___C__DISPLAYCLASS26_0__DOFLYEFFECT_B__1_OFFSET))(this);
		}
	};
}

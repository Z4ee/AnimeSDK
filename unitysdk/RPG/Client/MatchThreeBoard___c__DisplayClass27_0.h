#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class MatchThreeBoard; }
namespace RPG::Client { class MatchThreeFlashEffect; }
namespace System { class Action; }

#define RPG_CLIENT_MATCHTHREEBOARD___C__DISPLAYCLASS27_0__CTOR_OFFSET UNITYSDK_OFFSET(0x1C260B40)
#define RPG_CLIENT_MATCHTHREEBOARD___C__DISPLAYCLASS27_0__DOFLYEFFECTFROMSKILL_B__0_OFFSET UNITYSDK_OFFSET(0x1C268220)
#define RPG_CLIENT_MATCHTHREEBOARD___C__DISPLAYCLASS27_0__DOFLYEFFECTFROMSKILL_B__1_OFFSET UNITYSDK_OFFSET(0x1C268240)

namespace RPG::Client
{
	inline static constexpr unsigned int MatchThreeBoard___c__DisplayClass27_0_TypeDefinitionIndex = 65955;

	class MatchThreeBoard___c__DisplayClass27_0 : public ::System::Object
	{
	public:
		::RPG::Client::MatchThreeFlashEffect* effect; // 0x10
		::RPG::Client::MatchThreeBoard* __4__this; // 0x18
		::System::Action* onFinish; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEBOARD___C__DISPLAYCLASS27_0__CTOR_OFFSET))(this);
		}

		::System::Void _DoFlyEffectFromSkill_b__0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEBOARD___C__DISPLAYCLASS27_0__DOFLYEFFECTFROMSKILL_B__0_OFFSET))(this);
		}

		::System::Void _DoFlyEffectFromSkill_b__1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEBOARD___C__DISPLAYCLASS27_0__DOFLYEFFECTFROMSKILL_B__1_OFFSET))(this);
		}
	};
}

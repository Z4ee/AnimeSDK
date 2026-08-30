#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class MatchThreeBoard; }
namespace RPG::Client { class MatchThreeSkillTriggerEffect; }

#define RPG_CLIENT_MATCHTHREEBOARD___C__DISPLAYCLASS42_0__CTOR_OFFSET UNITYSDK_OFFSET(0xD62ED60)
#define RPG_CLIENT_MATCHTHREEBOARD___C__DISPLAYCLASS42_0__DOSKILLTRIGGEREFFECT_B__0_OFFSET UNITYSDK_OFFSET(0xD633F90)

namespace RPG::Client
{
	inline static constexpr unsigned int MatchThreeBoard___c__DisplayClass42_0_TypeDefinitionIndex = 65967;

	class MatchThreeBoard___c__DisplayClass42_0 : public ::System::Object
	{
	public:
		::RPG::Client::MatchThreeSkillTriggerEffect* effect; // 0x10
		::RPG::Client::MatchThreeBoard* __4__this; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEBOARD___C__DISPLAYCLASS42_0__CTOR_OFFSET))(this);
		}

		::System::Void _DoSkillTriggerEffect_b__0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEBOARD___C__DISPLAYCLASS42_0__DOSKILLTRIGGEREFFECT_B__0_OFFSET))(this);
		}
	};
}

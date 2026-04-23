#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class Action; }

#define RPG_CLIENT_LITTLEGAME_CHIMERATEAMMEMBERDEATHCOMMAND___C__DISPLAYCLASS3_0__CTOR_OFFSET UNITYSDK_OFFSET(0xA692390)
#define RPG_CLIENT_LITTLEGAME_CHIMERATEAMMEMBERDEATHCOMMAND___C__DISPLAYCLASS3_0___STARTTRANSITION_B__0_OFFSET UNITYSDK_OFFSET(0xA692690)

namespace RPG::Client::LittleGame
{
	inline static constexpr unsigned int ChimeraTeamMemberDeathCommand___c__DisplayClass3_0_TypeDefinitionIndex = 70401;

	class ChimeraTeamMemberDeathCommand___c__DisplayClass3_0 : public ::System::Object
	{
	public:
		::System::Action* finishCallback; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_CHIMERATEAMMEMBERDEATHCOMMAND___C__DISPLAYCLASS3_0__CTOR_OFFSET))(this);
		}

		::System::Void __StartTransition_b__0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_CHIMERATEAMMEMBERDEATHCOMMAND___C__DISPLAYCLASS3_0___STARTTRANSITION_B__0_OFFSET))(this);
		}
	};
}

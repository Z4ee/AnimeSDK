#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace RPG::Client::Prop { class CommandRobotPuzzleBoard; }

#define RPG_CLIENT_PROP_COMMANDROBOTPUZZLEBOARD___C__DISPLAYCLASS20_0__CTOR_OFFSET UNITYSDK_OFFSET(0xC535880)
#define RPG_CLIENT_PROP_COMMANDROBOTPUZZLEBOARD___C__DISPLAYCLASS20_0___NAVIGATETONEXTPOSITION_B__0_OFFSET UNITYSDK_OFFSET(0xC5368F0)

namespace RPG::Client::Prop
{
	inline static constexpr unsigned int CommandRobotPuzzleBoard___c__DisplayClass20_0_TypeDefinitionIndex = 73031;

	class CommandRobotPuzzleBoard___c__DisplayClass20_0 : public ::System::Object
	{
	public:
		::RPG::Client::Prop::CommandRobotPuzzleBoard* __4__this; // 0x10
		::UnityEngine::Vector3 moveTargetPosition; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_COMMANDROBOTPUZZLEBOARD___C__DISPLAYCLASS20_0__CTOR_OFFSET))(this);
		}

		::System::Void __NavigateToNextPosition_b__0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_COMMANDROBOTPUZZLEBOARD___C__DISPLAYCLASS20_0___NAVIGATETONEXTPOSITION_B__0_OFFSET))(this);
		}
	};
}

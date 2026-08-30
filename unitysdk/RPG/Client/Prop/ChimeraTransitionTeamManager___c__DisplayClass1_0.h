#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class Action; }

#define RPG_CLIENT_PROP_CHIMERATRANSITIONTEAMMANAGER___C__DISPLAYCLASS1_0__CTOR_OFFSET UNITYSDK_OFFSET(0xDC36F30)
#define RPG_CLIENT_PROP_CHIMERATRANSITIONTEAMMANAGER___C__DISPLAYCLASS1_0__TRANSITIONBETWEENAREAS_B__0_OFFSET UNITYSDK_OFFSET(0xDC38280)

namespace RPG::Client::Prop
{
	inline static constexpr unsigned int ChimeraTransitionTeamManager___c__DisplayClass1_0_TypeDefinitionIndex = 77962;

	class ChimeraTransitionTeamManager___c__DisplayClass1_0 : public ::System::Object
	{
	public:
		::System::Action* callback; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_CHIMERATRANSITIONTEAMMANAGER___C__DISPLAYCLASS1_0__CTOR_OFFSET))(this);
		}

		::System::Void _TransitionBetweenAreas_b__0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_CHIMERATRANSITIONTEAMMANAGER___C__DISPLAYCLASS1_0__TRANSITIONBETWEENAREAS_B__0_OFFSET))(this);
		}
	};
}

#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class Action; }

#define RPG_CLIENT_PROP_CHIMERATRANSITIONTEAMMANAGER___C__DISPLAYCLASS5_0__CTOR_OFFSET UNITYSDK_OFFSET(0xADE85D0)
#define RPG_CLIENT_PROP_CHIMERATRANSITIONTEAMMANAGER___C__DISPLAYCLASS5_0__RUN_B__0_OFFSET UNITYSDK_OFFSET(0xADE9230)

namespace RPG::Client::Prop
{
	inline static constexpr unsigned int ChimeraTransitionTeamManager___c__DisplayClass5_0_TypeDefinitionIndex = 71933;

	class ChimeraTransitionTeamManager___c__DisplayClass5_0 : public ::System::Object
	{
	public:
		::System::Action* finishCallback; // 0x10
		::System::UInt32 id; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_CHIMERATRANSITIONTEAMMANAGER___C__DISPLAYCLASS5_0__CTOR_OFFSET))(this);
		}

		::System::Void _Run_b__0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_CHIMERATRANSITIONTEAMMANAGER___C__DISPLAYCLASS5_0__RUN_B__0_OFFSET))(this);
		}
	};
}

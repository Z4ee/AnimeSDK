#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class Action; }

#define RPG_CLIENT_CHALLENGEPEAKUTILS___C__DISPLAYCLASS6_0__CTOR_OFFSET UNITYSDK_OFFSET(0xCAB9BB0)
#define RPG_CLIENT_CHALLENGEPEAKUTILS___C__DISPLAYCLASS6_0__TRANSFERTOLAUNCHER_B__0_OFFSET UNITYSDK_OFFSET(0xCABA290)

namespace RPG::Client
{
	inline static constexpr unsigned int ChallengePeakUtils___c__DisplayClass6_0_TypeDefinitionIndex = 63266;

	class ChallengePeakUtils___c__DisplayClass6_0 : public ::System::Object
	{
	public:
		::System::Action* afterTeleportCallback; // 0x10
		::System::Action* preTeleportCallback; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEPEAKUTILS___C__DISPLAYCLASS6_0__CTOR_OFFSET))(this);
		}

		::System::Void _TransferToLauncher_b__0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEPEAKUTILS___C__DISPLAYCLASS6_0__TRANSFERTOLAUNCHER_B__0_OFFSET))(this);
		}
	};
}

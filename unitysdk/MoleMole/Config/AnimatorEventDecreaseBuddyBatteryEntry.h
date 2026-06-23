#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Config/AnimatorEventEntry.h"

namespace MoleMole::Config { class AnimatorEvent; }

#define MOLEMOLE_CONFIG_ANIMATOREVENTDECREASEBUDDYBATTERYENTRY_CREATEANIMATIONEVENT_OFFSET UNITYSDK_OFFSET(0x12B22E20)
#define MOLEMOLE_CONFIG_ANIMATOREVENTDECREASEBUDDYBATTERYENTRY__CTOR_OFFSET UNITYSDK_OFFSET(0x12B22EA0)

namespace MoleMole::Config
{
	inline static constexpr unsigned int AnimatorEventDecreaseBuddyBatteryEntry_TypeDefinitionIndex = 49649;

	class AnimatorEventDecreaseBuddyBatteryEntry : public ::MoleMole::Config::AnimatorEventEntry
	{
	public:
		::System::Single Percentage; // 0x58
		::System::Single Amount; // 0x5C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATOREVENTDECREASEBUDDYBATTERYENTRY__CTOR_OFFSET))(this);
		}

		::MoleMole::Config::AnimatorEvent* CreateAnimationEvent()
		{
			return ((::MoleMole::Config::AnimatorEvent*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATOREVENTDECREASEBUDDYBATTERYENTRY_CREATEANIMATIONEVENT_OFFSET))(this);
		}
	};
}

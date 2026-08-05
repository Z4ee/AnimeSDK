#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Config/AnimatorEventEntry.h"

namespace MoleMole::Config { class AnimatorEvent; }

#define MOLEMOLE_CONFIG_ANIMATOREVENTRECOVERSPENTRY_CREATEANIMATIONEVENT_OFFSET UNITYSDK_OFFSET(0x1A49BD80)
#define MOLEMOLE_CONFIG_ANIMATOREVENTRECOVERSPENTRY__CTOR_OFFSET UNITYSDK_OFFSET(0x1A49BE00)

namespace MoleMole::Config
{
	inline static constexpr unsigned int AnimatorEventRecoverSPEntry_TypeDefinitionIndex = 79826;

	class AnimatorEventRecoverSPEntry : public ::MoleMole::Config::AnimatorEventEntry
	{
	public:
		::System::Single Percentage; // 0x58
		::System::Single Amount; // 0x5C
		::System::Boolean IgnoreRatio; // 0x60

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATOREVENTRECOVERSPENTRY__CTOR_OFFSET))(this);
		}

		::MoleMole::Config::AnimatorEvent* CreateAnimationEvent()
		{
			return ((::MoleMole::Config::AnimatorEvent*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATOREVENTRECOVERSPENTRY_CREATEANIMATIONEVENT_OFFSET))(this);
		}
	};
}

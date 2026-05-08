#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Config/AnimatorEventEntry.h"

namespace MoleMole::Config { class AnimatorEvent; }

#define MOLEMOLE_CONFIG_ANIMATOREVENTRECOVERINDIVIDUALFEVERENTRY_CREATEANIMATIONEVENT_OFFSET UNITYSDK_OFFSET(0xFAF4B50)
#define MOLEMOLE_CONFIG_ANIMATOREVENTRECOVERINDIVIDUALFEVERENTRY__CTOR_OFFSET UNITYSDK_OFFSET(0xFAF4BD0)

namespace MoleMole::Config
{
	inline static constexpr unsigned int AnimatorEventRecoverIndividualFeverEntry_TypeDefinitionIndex = 82882;

	class AnimatorEventRecoverIndividualFeverEntry : public ::MoleMole::Config::AnimatorEventEntry
	{
	public:
		::System::Boolean IgnoreRatio; // 0x58
		::System::Single Amount; // 0x5C
		::System::Single Percentage; // 0x60

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATOREVENTRECOVERINDIVIDUALFEVERENTRY__CTOR_OFFSET))(this);
		}

		::MoleMole::Config::AnimatorEvent* CreateAnimationEvent()
		{
			return ((::MoleMole::Config::AnimatorEvent*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATOREVENTRECOVERINDIVIDUALFEVERENTRY_CREATEANIMATIONEVENT_OFFSET))(this);
		}
	};
}

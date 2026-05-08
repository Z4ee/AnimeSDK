#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Config/AnimatorEventEntry.h"

namespace MoleMole::Config { class AnimatorEvent; }

#define MOLEMOLE_CONFIG_ANIMATOREVENTRECOVERRPENTRY_CREATEANIMATIONEVENT_OFFSET UNITYSDK_OFFSET(0x17435AD0)
#define MOLEMOLE_CONFIG_ANIMATOREVENTRECOVERRPENTRY__CTOR_OFFSET UNITYSDK_OFFSET(0x17435B50)

namespace MoleMole::Config
{
	inline static constexpr unsigned int AnimatorEventRecoverRpEntry_TypeDefinitionIndex = 77155;

	class AnimatorEventRecoverRpEntry : public ::MoleMole::Config::AnimatorEventEntry
	{
	public:
		::System::Single Amount; // 0x58
		::System::Boolean IgnoreRatio; // 0x5C
		::System::Single Percentage; // 0x60

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATOREVENTRECOVERRPENTRY__CTOR_OFFSET))(this);
		}

		::MoleMole::Config::AnimatorEvent* CreateAnimationEvent()
		{
			return ((::MoleMole::Config::AnimatorEvent*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATOREVENTRECOVERRPENTRY_CREATEANIMATIONEVENT_OFFSET))(this);
		}
	};
}

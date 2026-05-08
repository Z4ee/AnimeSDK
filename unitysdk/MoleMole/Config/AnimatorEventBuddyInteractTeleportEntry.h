#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Config/AnimatorEventEntry.h"

namespace MoleMole::Config { class AnimatorEvent; }

#define MOLEMOLE_CONFIG_ANIMATOREVENTBUDDYINTERACTTELEPORTENTRY_CREATEANIMATIONEVENT_OFFSET UNITYSDK_OFFSET(0xECFB790)
#define MOLEMOLE_CONFIG_ANIMATOREVENTBUDDYINTERACTTELEPORTENTRY__CTOR_OFFSET UNITYSDK_OFFSET(0xECFB810)

namespace MoleMole::Config
{
	inline static constexpr unsigned int AnimatorEventBuddyInteractTeleportEntry_TypeDefinitionIndex = 75228;

	class AnimatorEventBuddyInteractTeleportEntry : public ::MoleMole::Config::AnimatorEventEntry
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATOREVENTBUDDYINTERACTTELEPORTENTRY__CTOR_OFFSET))(this);
		}

		::MoleMole::Config::AnimatorEvent* CreateAnimationEvent()
		{
			return ((::MoleMole::Config::AnimatorEvent*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATOREVENTBUDDYINTERACTTELEPORTENTRY_CREATEANIMATIONEVENT_OFFSET))(this);
		}
	};
}

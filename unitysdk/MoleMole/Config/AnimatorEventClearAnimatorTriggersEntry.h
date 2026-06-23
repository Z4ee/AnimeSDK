#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Config/AnimatorEventEntry.h"

namespace MoleMole::Config { class AnimatorEvent; }

#define MOLEMOLE_CONFIG_ANIMATOREVENTCLEARANIMATORTRIGGERSENTRY_CREATEANIMATIONEVENT_OFFSET UNITYSDK_OFFSET(0x12B99700)
#define MOLEMOLE_CONFIG_ANIMATOREVENTCLEARANIMATORTRIGGERSENTRY__CTOR_OFFSET UNITYSDK_OFFSET(0x12B99780)

namespace MoleMole::Config
{
	inline static constexpr unsigned int AnimatorEventClearAnimatorTriggersEntry_TypeDefinitionIndex = 56097;

	class AnimatorEventClearAnimatorTriggersEntry : public ::MoleMole::Config::AnimatorEventEntry
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATOREVENTCLEARANIMATORTRIGGERSENTRY__CTOR_OFFSET))(this);
		}

		::MoleMole::Config::AnimatorEvent* CreateAnimationEvent()
		{
			return ((::MoleMole::Config::AnimatorEvent*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATOREVENTCLEARANIMATORTRIGGERSENTRY_CREATEANIMATIONEVENT_OFFSET))(this);
		}
	};
}

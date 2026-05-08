#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Config/AnimatorEventEntry.h"

namespace MoleMole::Config { class AnimatorEvent; }

#define MOLEMOLE_CONFIG_ANIMATOREVENTTRIGGERSWITCHAVATARENTRY_CREATEANIMATIONEVENT_OFFSET UNITYSDK_OFFSET(0x1869E720)
#define MOLEMOLE_CONFIG_ANIMATOREVENTTRIGGERSWITCHAVATARENTRY__CTOR_OFFSET UNITYSDK_OFFSET(0x1869E7A0)

namespace MoleMole::Config
{
	inline static constexpr unsigned int AnimatorEventTriggerSwitchAvatarEntry_TypeDefinitionIndex = 41841;

	class AnimatorEventTriggerSwitchAvatarEntry : public ::MoleMole::Config::AnimatorEventEntry
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATOREVENTTRIGGERSWITCHAVATARENTRY__CTOR_OFFSET))(this);
		}

		::MoleMole::Config::AnimatorEvent* CreateAnimationEvent()
		{
			return ((::MoleMole::Config::AnimatorEvent*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATOREVENTTRIGGERSWITCHAVATARENTRY_CREATEANIMATIONEVENT_OFFSET))(this);
		}
	};
}

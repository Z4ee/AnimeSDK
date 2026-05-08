#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Config/AnimatorEventEntry.h"

namespace MoleMole::Config { class AnimatorEvent; }

#define MOLEMOLE_CONFIG_ANIMATOREVENTLOCKBACKSTAGEENDSWITCHENTRY_CREATEANIMATIONEVENT_OFFSET UNITYSDK_OFFSET(0xF969D10)
#define MOLEMOLE_CONFIG_ANIMATOREVENTLOCKBACKSTAGEENDSWITCHENTRY__CTOR_OFFSET UNITYSDK_OFFSET(0xF969D90)

namespace MoleMole::Config
{
	inline static constexpr unsigned int AnimatorEventLockBackStageEndSwitchEntry_TypeDefinitionIndex = 78217;

	class AnimatorEventLockBackStageEndSwitchEntry : public ::MoleMole::Config::AnimatorEventEntry
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATOREVENTLOCKBACKSTAGEENDSWITCHENTRY__CTOR_OFFSET))(this);
		}

		::MoleMole::Config::AnimatorEvent* CreateAnimationEvent()
		{
			return ((::MoleMole::Config::AnimatorEvent*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATOREVENTLOCKBACKSTAGEENDSWITCHENTRY_CREATEANIMATIONEVENT_OFFSET))(this);
		}
	};
}

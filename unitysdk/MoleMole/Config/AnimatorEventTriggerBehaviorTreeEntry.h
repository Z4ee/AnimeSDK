#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Config/AnimatorEventEntry.h"

namespace MoleMole::Config { class AnimatorEvent; }

#define MOLEMOLE_CONFIG_ANIMATOREVENTTRIGGERBEHAVIORTREEENTRY_CREATEANIMATIONEVENT_OFFSET UNITYSDK_OFFSET(0x12D25450)
#define MOLEMOLE_CONFIG_ANIMATOREVENTTRIGGERBEHAVIORTREEENTRY__CTOR_OFFSET UNITYSDK_OFFSET(0x12D254D0)

namespace MoleMole::Config
{
	inline static constexpr unsigned int AnimatorEventTriggerBehaviorTreeEntry_TypeDefinitionIndex = 63205;

	class AnimatorEventTriggerBehaviorTreeEntry : public ::MoleMole::Config::AnimatorEventEntry
	{
	public:
		::System::Boolean Enable; // 0x58

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATOREVENTTRIGGERBEHAVIORTREEENTRY__CTOR_OFFSET))(this);
		}

		::MoleMole::Config::AnimatorEvent* CreateAnimationEvent()
		{
			return ((::MoleMole::Config::AnimatorEvent*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATOREVENTTRIGGERBEHAVIORTREEENTRY_CREATEANIMATIONEVENT_OFFSET))(this);
		}
	};
}

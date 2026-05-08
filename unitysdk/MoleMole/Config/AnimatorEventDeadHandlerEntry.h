#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Config/AnimatorEventEntry.h"

namespace MoleMole::Config { class AnimatorEvent; }

#define MOLEMOLE_CONFIG_ANIMATOREVENTDEADHANDLERENTRY_CREATEANIMATIONEVENT_OFFSET UNITYSDK_OFFSET(0xFAF4620)
#define MOLEMOLE_CONFIG_ANIMATOREVENTDEADHANDLERENTRY__CTOR_OFFSET UNITYSDK_OFFSET(0xFAF46A0)

namespace MoleMole::Config
{
	inline static constexpr unsigned int AnimatorEventDeadHandlerEntry_TypeDefinitionIndex = 44293;

	class AnimatorEventDeadHandlerEntry : public ::MoleMole::Config::AnimatorEventEntry
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATOREVENTDEADHANDLERENTRY__CTOR_OFFSET))(this);
		}

		::MoleMole::Config::AnimatorEvent* CreateAnimationEvent()
		{
			return ((::MoleMole::Config::AnimatorEvent*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATOREVENTDEADHANDLERENTRY_CREATEANIMATIONEVENT_OFFSET))(this);
		}
	};
}

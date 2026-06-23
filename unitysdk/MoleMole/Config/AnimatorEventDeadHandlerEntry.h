#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Config/AnimatorEventEntry.h"

namespace MoleMole::Config { class AnimatorEvent; }

#define MOLEMOLE_CONFIG_ANIMATOREVENTDEADHANDLERENTRY_CREATEANIMATIONEVENT_OFFSET UNITYSDK_OFFSET(0xE959640)
#define MOLEMOLE_CONFIG_ANIMATOREVENTDEADHANDLERENTRY__CTOR_OFFSET UNITYSDK_OFFSET(0xE9596C0)

namespace MoleMole::Config
{
	inline static constexpr unsigned int AnimatorEventDeadHandlerEntry_TypeDefinitionIndex = 53781;

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

#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Config/AnimatorEventEntry.h"

namespace MoleMole::Config { class AnimatorEvent; }
namespace System { class String; }

#define MOLEMOLE_CONFIG_ANIMATOREVENTTRIGGERABILITYCUSTOMEVENTENTRY_CREATEANIMATIONEVENT_OFFSET UNITYSDK_OFFSET(0x1A0564D0)
#define MOLEMOLE_CONFIG_ANIMATOREVENTTRIGGERABILITYCUSTOMEVENTENTRY__CTOR_OFFSET UNITYSDK_OFFSET(0x1A056550)

namespace MoleMole::Config
{
	inline static constexpr unsigned int AnimatorEventTriggerAbilityCustomEventEntry_TypeDefinitionIndex = 43530;

	class AnimatorEventTriggerAbilityCustomEventEntry : public ::MoleMole::Config::AnimatorEventEntry
	{
	public:
		::System::String* EventKey; // 0x58
		::System::Boolean IsGlobal; // 0x60

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATOREVENTTRIGGERABILITYCUSTOMEVENTENTRY__CTOR_OFFSET))(this);
		}

		::MoleMole::Config::AnimatorEvent* CreateAnimationEvent()
		{
			return ((::MoleMole::Config::AnimatorEvent*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATOREVENTTRIGGERABILITYCUSTOMEVENTENTRY_CREATEANIMATIONEVENT_OFFSET))(this);
		}
	};
}

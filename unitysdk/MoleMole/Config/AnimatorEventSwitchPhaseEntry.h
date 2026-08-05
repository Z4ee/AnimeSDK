#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Config/AnimatorEventEntry.h"

namespace MoleMole::Config { class AnimatorEvent; }
namespace System { class String; }

#define MOLEMOLE_CONFIG_ANIMATOREVENTSWITCHPHASEENTRY_CREATEANIMATIONEVENT_OFFSET UNITYSDK_OFFSET(0x12EEF6C0)
#define MOLEMOLE_CONFIG_ANIMATOREVENTSWITCHPHASEENTRY__CTOR_OFFSET UNITYSDK_OFFSET(0x12EEF740)

namespace MoleMole::Config
{
	inline static constexpr unsigned int AnimatorEventSwitchPhaseEntry_TypeDefinitionIndex = 45518;

	class AnimatorEventSwitchPhaseEntry : public ::MoleMole::Config::AnimatorEventEntry
	{
	public:
		::System::String* MixinTag; // 0x58

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATOREVENTSWITCHPHASEENTRY__CTOR_OFFSET))(this);
		}

		::MoleMole::Config::AnimatorEvent* CreateAnimationEvent()
		{
			return ((::MoleMole::Config::AnimatorEvent*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATOREVENTSWITCHPHASEENTRY_CREATEANIMATIONEVENT_OFFSET))(this);
		}
	};
}

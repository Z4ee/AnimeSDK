#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Config/AnimatorEventEntry.h"

namespace MoleMole::Config { class AnimatorEvent; }
namespace System { class String; }

#define MOLEMOLE_CONFIG_ANIMATOREVENTSWITCHPHASEENDENTRY_CREATEANIMATIONEVENT_OFFSET UNITYSDK_OFFSET(0x144CA8B0)
#define MOLEMOLE_CONFIG_ANIMATOREVENTSWITCHPHASEENDENTRY__CTOR_OFFSET UNITYSDK_OFFSET(0x144CA930)

namespace MoleMole::Config
{
	inline static constexpr unsigned int AnimatorEventSwitchPhaseEndEntry_TypeDefinitionIndex = 86192;

	class AnimatorEventSwitchPhaseEndEntry : public ::MoleMole::Config::AnimatorEventEntry
	{
	public:
		::System::String* MixinTag; // 0x58

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATOREVENTSWITCHPHASEENDENTRY__CTOR_OFFSET))(this);
		}

		::MoleMole::Config::AnimatorEvent* CreateAnimationEvent()
		{
			return ((::MoleMole::Config::AnimatorEvent*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATOREVENTSWITCHPHASEENDENTRY_CREATEANIMATIONEVENT_OFFSET))(this);
		}
	};
}

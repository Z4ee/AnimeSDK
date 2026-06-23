#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Config/AnimatorEventEntry.h"

namespace MoleMole::Config { class AnimatorEvent; }
namespace System { class String; }

#define MOLEMOLE_CONFIG_ANIMATOREVENTENABLEANIMATORTRIGGERENTRY_CREATEANIMATIONEVENT_OFFSET UNITYSDK_OFFSET(0x13FF84B0)
#define MOLEMOLE_CONFIG_ANIMATOREVENTENABLEANIMATORTRIGGERENTRY__CTOR_OFFSET UNITYSDK_OFFSET(0x13FF8530)

namespace MoleMole::Config
{
	inline static constexpr unsigned int AnimatorEventEnableAnimatorTriggerEntry_TypeDefinitionIndex = 60913;

	class AnimatorEventEnableAnimatorTriggerEntry : public ::MoleMole::Config::AnimatorEventEntry
	{
	public:
		::System::String* TriggerID; // 0x58
		::System::Boolean Enable; // 0x60

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATOREVENTENABLEANIMATORTRIGGERENTRY__CTOR_OFFSET))(this);
		}

		::MoleMole::Config::AnimatorEvent* CreateAnimationEvent()
		{
			return ((::MoleMole::Config::AnimatorEvent*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATOREVENTENABLEANIMATORTRIGGERENTRY_CREATEANIMATIONEVENT_OFFSET))(this);
		}
	};
}

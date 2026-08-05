#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Config/AnimatorEventEntry.h"

namespace MoleMole::Config { class AnimatorEvent; }

#define MOLEMOLE_CONFIG_ANIMATOREVENTNOOPENTRY_CREATEANIMATIONEVENT_OFFSET UNITYSDK_OFFSET(0x1BD44780)
#define MOLEMOLE_CONFIG_ANIMATOREVENTNOOPENTRY__CTOR_OFFSET UNITYSDK_OFFSET(0x1BD44800)

namespace MoleMole::Config
{
	inline static constexpr unsigned int AnimatorEventNoOpEntry_TypeDefinitionIndex = 61614;

	class AnimatorEventNoOpEntry : public ::MoleMole::Config::AnimatorEventEntry
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATOREVENTNOOPENTRY__CTOR_OFFSET))(this);
		}

		::MoleMole::Config::AnimatorEvent* CreateAnimationEvent()
		{
			return ((::MoleMole::Config::AnimatorEvent*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATOREVENTNOOPENTRY_CREATEANIMATIONEVENT_OFFSET))(this);
		}
	};
}

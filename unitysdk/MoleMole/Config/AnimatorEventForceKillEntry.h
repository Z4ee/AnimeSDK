#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Config/AnimatorEventEntry.h"

namespace MoleMole::Config { class AnimatorEvent; }

#define MOLEMOLE_CONFIG_ANIMATOREVENTFORCEKILLENTRY_CREATEANIMATIONEVENT_OFFSET UNITYSDK_OFFSET(0x116E2710)
#define MOLEMOLE_CONFIG_ANIMATOREVENTFORCEKILLENTRY__CTOR_OFFSET UNITYSDK_OFFSET(0x116E2790)

namespace MoleMole::Config
{
	inline static constexpr unsigned int AnimatorEventForceKillEntry_TypeDefinitionIndex = 65679;

	class AnimatorEventForceKillEntry : public ::MoleMole::Config::AnimatorEventEntry
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATOREVENTFORCEKILLENTRY__CTOR_OFFSET))(this);
		}

		::MoleMole::Config::AnimatorEvent* CreateAnimationEvent()
		{
			return ((::MoleMole::Config::AnimatorEvent*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATOREVENTFORCEKILLENTRY_CREATEANIMATIONEVENT_OFFSET))(this);
		}
	};
}

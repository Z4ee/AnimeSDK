#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Config/AnimatorEventEntry.h"

namespace MoleMole::Config { class AnimatorEvent; }

#define MOLEMOLE_CONFIG_ANIMATOREVENTFORCEKILLENTRY_CREATEANIMATIONEVENT_OFFSET UNITYSDK_OFFSET(0xECFBA30)
#define MOLEMOLE_CONFIG_ANIMATOREVENTFORCEKILLENTRY__CTOR_OFFSET UNITYSDK_OFFSET(0xECFBAB0)

namespace MoleMole::Config
{
	inline static constexpr unsigned int AnimatorEventForceKillEntry_TypeDefinitionIndex = 79319;

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

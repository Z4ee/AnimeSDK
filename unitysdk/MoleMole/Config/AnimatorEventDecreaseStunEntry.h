#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Config/AnimatorEventEntry.h"

namespace MoleMole::Config { class AnimatorEvent; }

#define MOLEMOLE_CONFIG_ANIMATOREVENTDECREASESTUNENTRY_CREATEANIMATIONEVENT_OFFSET UNITYSDK_OFFSET(0x13ECD820)
#define MOLEMOLE_CONFIG_ANIMATOREVENTDECREASESTUNENTRY__CTOR_OFFSET UNITYSDK_OFFSET(0x13ECD8A0)

namespace MoleMole::Config
{
	inline static constexpr unsigned int AnimatorEventDecreaseStunEntry_TypeDefinitionIndex = 83979;

	class AnimatorEventDecreaseStunEntry : public ::MoleMole::Config::AnimatorEventEntry
	{
	public:
		::System::Single Amount; // 0x58
		::System::Single Percentage; // 0x5C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATOREVENTDECREASESTUNENTRY__CTOR_OFFSET))(this);
		}

		::MoleMole::Config::AnimatorEvent* CreateAnimationEvent()
		{
			return ((::MoleMole::Config::AnimatorEvent*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATOREVENTDECREASESTUNENTRY_CREATEANIMATIONEVENT_OFFSET))(this);
		}
	};
}

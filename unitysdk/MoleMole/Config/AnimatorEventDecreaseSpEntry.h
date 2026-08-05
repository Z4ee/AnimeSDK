#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Config/AnimatorEventEntry.h"

namespace MoleMole::Config { class AnimatorEvent; }

#define MOLEMOLE_CONFIG_ANIMATOREVENTDECREASESPENTRY_CREATEANIMATIONEVENT_OFFSET UNITYSDK_OFFSET(0x177C39F0)
#define MOLEMOLE_CONFIG_ANIMATOREVENTDECREASESPENTRY__CTOR_OFFSET UNITYSDK_OFFSET(0x177C3A70)

namespace MoleMole::Config
{
	inline static constexpr unsigned int AnimatorEventDecreaseSpEntry_TypeDefinitionIndex = 85252;

	class AnimatorEventDecreaseSpEntry : public ::MoleMole::Config::AnimatorEventEntry
	{
	public:
		::System::Single Percentage; // 0x58
		::System::Single Amount; // 0x5C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATOREVENTDECREASESPENTRY__CTOR_OFFSET))(this);
		}

		::MoleMole::Config::AnimatorEvent* CreateAnimationEvent()
		{
			return ((::MoleMole::Config::AnimatorEvent*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATOREVENTDECREASESPENTRY_CREATEANIMATIONEVENT_OFFSET))(this);
		}
	};
}

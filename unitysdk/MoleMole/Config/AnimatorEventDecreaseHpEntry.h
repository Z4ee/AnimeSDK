#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Config/AnimatorEventEntry.h"

namespace MoleMole::Config { class AnimatorEvent; }

#define MOLEMOLE_CONFIG_ANIMATOREVENTDECREASEHPENTRY_CREATEANIMATIONEVENT_OFFSET UNITYSDK_OFFSET(0x1A056070)
#define MOLEMOLE_CONFIG_ANIMATOREVENTDECREASEHPENTRY__CTOR_OFFSET UNITYSDK_OFFSET(0x1A0560F0)

namespace MoleMole::Config
{
	inline static constexpr unsigned int AnimatorEventDecreaseHpEntry_TypeDefinitionIndex = 77740;

	class AnimatorEventDecreaseHpEntry : public ::MoleMole::Config::AnimatorEventEntry
	{
	public:
		::System::Single Amount; // 0x58
		::System::Single Percentage; // 0x5C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATOREVENTDECREASEHPENTRY__CTOR_OFFSET))(this);
		}

		::MoleMole::Config::AnimatorEvent* CreateAnimationEvent()
		{
			return ((::MoleMole::Config::AnimatorEvent*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATOREVENTDECREASEHPENTRY_CREATEANIMATIONEVENT_OFFSET))(this);
		}
	};
}

#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Config/AnimatorEventEntry.h"

namespace MoleMole::Config { class AnimatorEvent; }

#define MOLEMOLE_CONFIG_ANIMATOREVENTDECREASERPENTRY_CREATEANIMATIONEVENT_OFFSET UNITYSDK_OFFSET(0x1A056150)
#define MOLEMOLE_CONFIG_ANIMATOREVENTDECREASERPENTRY__CTOR_OFFSET UNITYSDK_OFFSET(0x1A0561D0)

namespace MoleMole::Config
{
	inline static constexpr unsigned int AnimatorEventDecreaseRpEntry_TypeDefinitionIndex = 45691;

	class AnimatorEventDecreaseRpEntry : public ::MoleMole::Config::AnimatorEventEntry
	{
	public:
		::System::Single Percentage; // 0x58
		::System::Single Amount; // 0x5C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATOREVENTDECREASERPENTRY__CTOR_OFFSET))(this);
		}

		::MoleMole::Config::AnimatorEvent* CreateAnimationEvent()
		{
			return ((::MoleMole::Config::AnimatorEvent*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATOREVENTDECREASERPENTRY_CREATEANIMATIONEVENT_OFFSET))(this);
		}
	};
}

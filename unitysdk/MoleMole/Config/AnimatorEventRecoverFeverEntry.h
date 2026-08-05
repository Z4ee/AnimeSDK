#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Config/AnimatorEventEntry.h"

namespace MoleMole::Config { class AnimatorEvent; }

#define MOLEMOLE_CONFIG_ANIMATOREVENTRECOVERFEVERENTRY_CREATEANIMATIONEVENT_OFFSET UNITYSDK_OFFSET(0x177C3BB0)
#define MOLEMOLE_CONFIG_ANIMATOREVENTRECOVERFEVERENTRY__CTOR_OFFSET UNITYSDK_OFFSET(0x177C3C30)

namespace MoleMole::Config
{
	inline static constexpr unsigned int AnimatorEventRecoverFeverEntry_TypeDefinitionIndex = 60418;

	class AnimatorEventRecoverFeverEntry : public ::MoleMole::Config::AnimatorEventEntry
	{
	public:
		::System::Boolean IgnoreRatio; // 0x58
		::System::Single Percentage; // 0x5C
		::System::Single Amount; // 0x60

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATOREVENTRECOVERFEVERENTRY__CTOR_OFFSET))(this);
		}

		::MoleMole::Config::AnimatorEvent* CreateAnimationEvent()
		{
			return ((::MoleMole::Config::AnimatorEvent*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATOREVENTRECOVERFEVERENTRY_CREATEANIMATIONEVENT_OFFSET))(this);
		}
	};
}

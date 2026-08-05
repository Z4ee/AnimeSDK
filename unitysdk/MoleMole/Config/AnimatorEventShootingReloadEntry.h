#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Config/AnimatorEventEntry.h"

namespace MoleMole::Config { class AnimatorEvent; }

#define MOLEMOLE_CONFIG_ANIMATOREVENTSHOOTINGRELOADENTRY_CREATEANIMATIONEVENT_OFFSET UNITYSDK_OFFSET(0x134EA120)
#define MOLEMOLE_CONFIG_ANIMATOREVENTSHOOTINGRELOADENTRY__CTOR_OFFSET UNITYSDK_OFFSET(0x134EA1A0)

namespace MoleMole::Config
{
	inline static constexpr unsigned int AnimatorEventShootingReloadEntry_TypeDefinitionIndex = 60879;

	class AnimatorEventShootingReloadEntry : public ::MoleMole::Config::AnimatorEventEntry
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATOREVENTSHOOTINGRELOADENTRY__CTOR_OFFSET))(this);
		}

		::MoleMole::Config::AnimatorEvent* CreateAnimationEvent()
		{
			return ((::MoleMole::Config::AnimatorEvent*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATOREVENTSHOOTINGRELOADENTRY_CREATEANIMATIONEVENT_OFFSET))(this);
		}
	};
}

#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Config/AnimatorEventEntry.h"

namespace MoleMole::Config { class AnimatorEvent; }

#define MOLEMOLE_CONFIG_ANIMATOREVENTCOMMONSHOOTINGRELOADENTRY_CREATEANIMATIONEVENT_OFFSET UNITYSDK_OFFSET(0x12A419B0)
#define MOLEMOLE_CONFIG_ANIMATOREVENTCOMMONSHOOTINGRELOADENTRY__CTOR_OFFSET UNITYSDK_OFFSET(0x12A41A30)

namespace MoleMole::Config
{
	inline static constexpr unsigned int AnimatorEventCommonShootingReloadEntry_TypeDefinitionIndex = 58645;

	class AnimatorEventCommonShootingReloadEntry : public ::MoleMole::Config::AnimatorEventEntry
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATOREVENTCOMMONSHOOTINGRELOADENTRY__CTOR_OFFSET))(this);
		}

		::MoleMole::Config::AnimatorEvent* CreateAnimationEvent()
		{
			return ((::MoleMole::Config::AnimatorEvent*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATOREVENTCOMMONSHOOTINGRELOADENTRY_CREATEANIMATIONEVENT_OFFSET))(this);
		}
	};
}

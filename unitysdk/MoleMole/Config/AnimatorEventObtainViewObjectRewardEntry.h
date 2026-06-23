#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Config/AnimatorEventEntry.h"

namespace MoleMole::Config { class AnimatorEvent; }

#define MOLEMOLE_CONFIG_ANIMATOREVENTOBTAINVIEWOBJECTREWARDENTRY_CREATEANIMATIONEVENT_OFFSET UNITYSDK_OFFSET(0x16297EE0)
#define MOLEMOLE_CONFIG_ANIMATOREVENTOBTAINVIEWOBJECTREWARDENTRY__CTOR_OFFSET UNITYSDK_OFFSET(0x16297F60)

namespace MoleMole::Config
{
	inline static constexpr unsigned int AnimatorEventObtainViewObjectRewardEntry_TypeDefinitionIndex = 47264;

	class AnimatorEventObtainViewObjectRewardEntry : public ::MoleMole::Config::AnimatorEventEntry
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATOREVENTOBTAINVIEWOBJECTREWARDENTRY__CTOR_OFFSET))(this);
		}

		::MoleMole::Config::AnimatorEvent* CreateAnimationEvent()
		{
			return ((::MoleMole::Config::AnimatorEvent*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATOREVENTOBTAINVIEWOBJECTREWARDENTRY_CREATEANIMATIONEVENT_OFFSET))(this);
		}
	};
}

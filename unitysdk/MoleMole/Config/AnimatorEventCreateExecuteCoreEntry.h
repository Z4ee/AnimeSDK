#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Config/AnimatorEventEntry.h"

namespace MoleMole::Config { class AnimatorEvent; }

#define MOLEMOLE_CONFIG_ANIMATOREVENTCREATEEXECUTECOREENTRY_CREATEANIMATIONEVENT_OFFSET UNITYSDK_OFFSET(0xFE9B6C0)
#define MOLEMOLE_CONFIG_ANIMATOREVENTCREATEEXECUTECOREENTRY__CTOR_OFFSET UNITYSDK_OFFSET(0xFE9B740)

namespace MoleMole::Config
{
	inline static constexpr unsigned int AnimatorEventCreateExecuteCoreEntry_TypeDefinitionIndex = 55461;

	class AnimatorEventCreateExecuteCoreEntry : public ::MoleMole::Config::AnimatorEventEntry
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATOREVENTCREATEEXECUTECOREENTRY__CTOR_OFFSET))(this);
		}

		::MoleMole::Config::AnimatorEvent* CreateAnimationEvent()
		{
			return ((::MoleMole::Config::AnimatorEvent*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATOREVENTCREATEEXECUTECOREENTRY_CREATEANIMATIONEVENT_OFFSET))(this);
		}
	};
}

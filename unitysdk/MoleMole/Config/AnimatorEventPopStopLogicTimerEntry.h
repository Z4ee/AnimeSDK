#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Config/AnimatorEventEntry.h"

namespace MoleMole::Config { class AnimatorEvent; }
namespace System { class String; }

#define MOLEMOLE_CONFIG_ANIMATOREVENTPOPSTOPLOGICTIMERENTRY_CREATEANIMATIONEVENT_OFFSET UNITYSDK_OFFSET(0x11C8EB10)
#define MOLEMOLE_CONFIG_ANIMATOREVENTPOPSTOPLOGICTIMERENTRY__CTOR_OFFSET UNITYSDK_OFFSET(0x11C8EB90)

namespace MoleMole::Config
{
	inline static constexpr unsigned int AnimatorEventPopStopLogicTimerEntry_TypeDefinitionIndex = 41030;

	class AnimatorEventPopStopLogicTimerEntry : public ::MoleMole::Config::AnimatorEventEntry
	{
	public:
		::System::String* Tag; // 0x58

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATOREVENTPOPSTOPLOGICTIMERENTRY__CTOR_OFFSET))(this);
		}

		::MoleMole::Config::AnimatorEvent* CreateAnimationEvent()
		{
			return ((::MoleMole::Config::AnimatorEvent*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATOREVENTPOPSTOPLOGICTIMERENTRY_CREATEANIMATIONEVENT_OFFSET))(this);
		}
	};
}

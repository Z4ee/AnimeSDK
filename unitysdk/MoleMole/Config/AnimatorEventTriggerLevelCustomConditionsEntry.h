#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Config/AnimatorEventEntry.h"

namespace MoleMole::Config { class AnimatorEvent; }

#define MOLEMOLE_CONFIG_ANIMATOREVENTTRIGGERLEVELCUSTOMCONDITIONSENTRY_CREATEANIMATIONEVENT_OFFSET UNITYSDK_OFFSET(0x177C3E50)
#define MOLEMOLE_CONFIG_ANIMATOREVENTTRIGGERLEVELCUSTOMCONDITIONSENTRY__CTOR_OFFSET UNITYSDK_OFFSET(0x177C3ED0)

namespace MoleMole::Config
{
	inline static constexpr unsigned int AnimatorEventTriggerLevelCustomConditionsEntry_TypeDefinitionIndex = 71832;

	class AnimatorEventTriggerLevelCustomConditionsEntry : public ::MoleMole::Config::AnimatorEventEntry
	{
	public:
		::System::Int32 LevelConditionsID; // 0x58

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATOREVENTTRIGGERLEVELCUSTOMCONDITIONSENTRY__CTOR_OFFSET))(this);
		}

		::MoleMole::Config::AnimatorEvent* CreateAnimationEvent()
		{
			return ((::MoleMole::Config::AnimatorEvent*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATOREVENTTRIGGERLEVELCUSTOMCONDITIONSENTRY_CREATEANIMATIONEVENT_OFFSET))(this);
		}
	};
}

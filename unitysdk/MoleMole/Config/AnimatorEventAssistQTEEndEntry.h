#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Config/AnimatorEventEntry.h"

namespace MoleMole::Config { class AnimatorEvent; }

#define MOLEMOLE_CONFIG_ANIMATOREVENTASSISTQTEENDENTRY_CREATEANIMATIONEVENT_OFFSET UNITYSDK_OFFSET(0x13FF82F0)
#define MOLEMOLE_CONFIG_ANIMATOREVENTASSISTQTEENDENTRY__CTOR_OFFSET UNITYSDK_OFFSET(0x13FF8370)

namespace MoleMole::Config
{
	inline static constexpr unsigned int AnimatorEventAssistQTEEndEntry_TypeDefinitionIndex = 70780;

	class AnimatorEventAssistQTEEndEntry : public ::MoleMole::Config::AnimatorEventEntry
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATOREVENTASSISTQTEENDENTRY__CTOR_OFFSET))(this);
		}

		::MoleMole::Config::AnimatorEvent* CreateAnimationEvent()
		{
			return ((::MoleMole::Config::AnimatorEvent*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATOREVENTASSISTQTEENDENTRY_CREATEANIMATIONEVENT_OFFSET))(this);
		}
	};
}

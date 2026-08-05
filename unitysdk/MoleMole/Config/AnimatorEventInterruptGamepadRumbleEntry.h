#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Config/AnimatorEventEntry.h"

namespace MoleMole::Config { class AnimatorEvent; }
namespace System { class String; }

#define MOLEMOLE_CONFIG_ANIMATOREVENTINTERRUPTGAMEPADRUMBLEENTRY_CREATEANIMATIONEVENT_OFFSET UNITYSDK_OFFSET(0xF12DD00)
#define MOLEMOLE_CONFIG_ANIMATOREVENTINTERRUPTGAMEPADRUMBLEENTRY__CTOR_OFFSET UNITYSDK_OFFSET(0xF12DD80)

namespace MoleMole::Config
{
	inline static constexpr unsigned int AnimatorEventInterruptGamepadRumbleEntry_TypeDefinitionIndex = 80831;

	class AnimatorEventInterruptGamepadRumbleEntry : public ::MoleMole::Config::AnimatorEventEntry
	{
	public:
		::System::String* GamepadRumbleKey; // 0x58

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATOREVENTINTERRUPTGAMEPADRUMBLEENTRY__CTOR_OFFSET))(this);
		}

		::MoleMole::Config::AnimatorEvent* CreateAnimationEvent()
		{
			return ((::MoleMole::Config::AnimatorEvent*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATOREVENTINTERRUPTGAMEPADRUMBLEENTRY_CREATEANIMATIONEVENT_OFFSET))(this);
		}
	};
}

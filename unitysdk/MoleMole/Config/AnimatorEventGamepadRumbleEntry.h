#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Config/AnimatorEventEntry.h"

namespace MoleMole::Config { class AnimatorEvent; }
namespace System { class String; }

#define MOLEMOLE_CONFIG_ANIMATOREVENTGAMEPADRUMBLEENTRY_CREATEANIMATIONEVENT_OFFSET UNITYSDK_OFFSET(0x10CE6AE0)
#define MOLEMOLE_CONFIG_ANIMATOREVENTGAMEPADRUMBLEENTRY__CTOR_OFFSET UNITYSDK_OFFSET(0x10CE6B60)

namespace MoleMole::Config
{
	inline static constexpr unsigned int AnimatorEventGamepadRumbleEntry_TypeDefinitionIndex = 72299;

	class AnimatorEventGamepadRumbleEntry : public ::MoleMole::Config::AnimatorEventEntry
	{
	public:
		::System::String* GamepadRumbleKey; // 0x58

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATOREVENTGAMEPADRUMBLEENTRY__CTOR_OFFSET))(this);
		}

		::MoleMole::Config::AnimatorEvent* CreateAnimationEvent()
		{
			return ((::MoleMole::Config::AnimatorEvent*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATOREVENTGAMEPADRUMBLEENTRY_CREATEANIMATIONEVENT_OFFSET))(this);
		}
	};
}

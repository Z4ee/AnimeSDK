#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Config/AnimatorEventEntry.h"

namespace MoleMole::Config { class AnimatorEvent; }
namespace System { class String; }

#define MOLEMOLE_CONFIG_ANIMATOREVENTARATRAILENTRY_CREATEANIMATIONEVENT_OFFSET UNITYSDK_OFFSET(0x1108D6B0)
#define MOLEMOLE_CONFIG_ANIMATOREVENTARATRAILENTRY__CTOR_OFFSET UNITYSDK_OFFSET(0x1108D730)

namespace MoleMole::Config
{
	inline static constexpr unsigned int AnimatorEventAraTrailEntry_TypeDefinitionIndex = 83145;

	class AnimatorEventAraTrailEntry : public ::MoleMole::Config::AnimatorEventEntry
	{
	public:
		::System::String* AttachPoint; // 0x58
		::System::String* ConfigKey; // 0x60
		::System::String* Tag; // 0x68

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATOREVENTARATRAILENTRY__CTOR_OFFSET))(this);
		}

		::MoleMole::Config::AnimatorEvent* CreateAnimationEvent()
		{
			return ((::MoleMole::Config::AnimatorEvent*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATOREVENTARATRAILENTRY_CREATEANIMATIONEVENT_OFFSET))(this);
		}
	};
}

#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Config/AnimatorEventEntry.h"

namespace MoleMole::Config { class AnimatorEvent; }

#define MOLEMOLE_CONFIG_ANIMATOREVENTCAMERAOVERRIDESCREENDAMPINGENDENTRY_CREATEANIMATIONEVENT_OFFSET UNITYSDK_OFFSET(0x17D39A70)
#define MOLEMOLE_CONFIG_ANIMATOREVENTCAMERAOVERRIDESCREENDAMPINGENDENTRY__CTOR_OFFSET UNITYSDK_OFFSET(0x17D39AF0)

namespace MoleMole::Config
{
	inline static constexpr unsigned int AnimatorEventCameraOverrideScreenDampingEndEntry_TypeDefinitionIndex = 60828;

	class AnimatorEventCameraOverrideScreenDampingEndEntry : public ::MoleMole::Config::AnimatorEventEntry
	{
	public:
		::System::Boolean DisableVerticalDamping; // 0x58
		::System::Boolean DisableHorizontalDamping; // 0x59

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATOREVENTCAMERAOVERRIDESCREENDAMPINGENDENTRY__CTOR_OFFSET))(this);
		}

		::MoleMole::Config::AnimatorEvent* CreateAnimationEvent()
		{
			return ((::MoleMole::Config::AnimatorEvent*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATOREVENTCAMERAOVERRIDESCREENDAMPINGENDENTRY_CREATEANIMATIONEVENT_OFFSET))(this);
		}
	};
}

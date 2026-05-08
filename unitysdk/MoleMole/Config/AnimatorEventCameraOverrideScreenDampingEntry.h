#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Config/AnimatorEventEntry.h"

namespace MoleMole::Config { class AnimatorEvent; }

#define MOLEMOLE_CONFIG_ANIMATOREVENTCAMERAOVERRIDESCREENDAMPINGENTRY_CREATEANIMATIONEVENT_OFFSET UNITYSDK_OFFSET(0x13990330)
#define MOLEMOLE_CONFIG_ANIMATOREVENTCAMERAOVERRIDESCREENDAMPINGENTRY__CTOR_OFFSET UNITYSDK_OFFSET(0x139903B0)

namespace MoleMole::Config
{
	inline static constexpr unsigned int AnimatorEventCameraOverrideScreenDampingEntry_TypeDefinitionIndex = 44245;

	class AnimatorEventCameraOverrideScreenDampingEntry : public ::MoleMole::Config::AnimatorEventEntry
	{
	public:
		::System::Single VerticalDampingValue; // 0x58
		::System::Boolean EnableHorizontalDamping; // 0x5C
		::System::Boolean EnableVerticalDamping; // 0x5D
		::System::Single HorizontalDampingValue; // 0x60

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATOREVENTCAMERAOVERRIDESCREENDAMPINGENTRY__CTOR_OFFSET))(this);
		}

		::MoleMole::Config::AnimatorEvent* CreateAnimationEvent()
		{
			return ((::MoleMole::Config::AnimatorEvent*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATOREVENTCAMERAOVERRIDESCREENDAMPINGENTRY_CREATEANIMATIONEVENT_OFFSET))(this);
		}
	};
}

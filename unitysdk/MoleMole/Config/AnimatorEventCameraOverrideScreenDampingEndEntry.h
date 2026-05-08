#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Config/AnimatorEventEntry.h"

namespace MoleMole::Config { class AnimatorEvent; }

#define MOLEMOLE_CONFIG_ANIMATOREVENTCAMERAOVERRIDESCREENDAMPINGENDENTRY_CREATEANIMATIONEVENT_OFFSET UNITYSDK_OFFSET(0x122EFA40)
#define MOLEMOLE_CONFIG_ANIMATOREVENTCAMERAOVERRIDESCREENDAMPINGENDENTRY__CTOR_OFFSET UNITYSDK_OFFSET(0x122EFAC0)

namespace MoleMole::Config
{
	inline static constexpr unsigned int AnimatorEventCameraOverrideScreenDampingEndEntry_TypeDefinitionIndex = 67041;

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

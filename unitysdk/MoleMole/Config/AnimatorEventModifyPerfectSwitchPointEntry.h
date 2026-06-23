#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Config/AnimatorEventEntry.h"
#include "unitysdk/MoleMole/Config/PropertyModifyFunction.h"

namespace MoleMole::Config { class AnimatorEvent; }

#define MOLEMOLE_CONFIG_ANIMATOREVENTMODIFYPERFECTSWITCHPOINTENTRY_CREATEANIMATIONEVENT_OFFSET UNITYSDK_OFFSET(0x10CE6BC0)
#define MOLEMOLE_CONFIG_ANIMATOREVENTMODIFYPERFECTSWITCHPOINTENTRY__CTOR_OFFSET UNITYSDK_OFFSET(0x10CE6C40)

namespace MoleMole::Config
{
	inline static constexpr unsigned int AnimatorEventModifyPerfectSwitchPointEntry_TypeDefinitionIndex = 86740;

	class AnimatorEventModifyPerfectSwitchPointEntry : public ::MoleMole::Config::AnimatorEventEntry
	{
	public:
		::MoleMole::Config::PropertyModifyFunction ModifyFunction; // 0x58
		::System::Int32 Amount; // 0x5C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATOREVENTMODIFYPERFECTSWITCHPOINTENTRY__CTOR_OFFSET))(this);
		}

		::MoleMole::Config::AnimatorEvent* CreateAnimationEvent()
		{
			return ((::MoleMole::Config::AnimatorEvent*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATOREVENTMODIFYPERFECTSWITCHPOINTENTRY_CREATEANIMATIONEVENT_OFFSET))(this);
		}
	};
}

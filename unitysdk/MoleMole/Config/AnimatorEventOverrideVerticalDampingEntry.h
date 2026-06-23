#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Config/AnimatorEventEntry.h"

namespace MoleMole::Config { class AnimatorEvent; }

#define MOLEMOLE_CONFIG_ANIMATOREVENTOVERRIDEVERTICALDAMPINGENTRY_CREATEANIMATIONEVENT_OFFSET UNITYSDK_OFFSET(0x1108DCE0)
#define MOLEMOLE_CONFIG_ANIMATOREVENTOVERRIDEVERTICALDAMPINGENTRY__CTOR_OFFSET UNITYSDK_OFFSET(0x1108DD60)

namespace MoleMole::Config
{
	inline static constexpr unsigned int AnimatorEventOverrideVerticalDampingEntry_TypeDefinitionIndex = 50953;

	class AnimatorEventOverrideVerticalDampingEntry : public ::MoleMole::Config::AnimatorEventEntry
	{
	public:
		::System::Single OverriddenValue; // 0x58

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATOREVENTOVERRIDEVERTICALDAMPINGENTRY__CTOR_OFFSET))(this);
		}

		::MoleMole::Config::AnimatorEvent* CreateAnimationEvent()
		{
			return ((::MoleMole::Config::AnimatorEvent*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATOREVENTOVERRIDEVERTICALDAMPINGENTRY_CREATEANIMATIONEVENT_OFFSET))(this);
		}
	};
}

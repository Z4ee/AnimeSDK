#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Config/AnimatorEventEntry.h"

namespace MoleMole::Config { class AnimatorEvent; }

#define MOLEMOLE_CONFIG_ACTIVEDODGEDUMMYENTRY_CREATEANIMATIONEVENT_OFFSET UNITYSDK_OFFSET(0x16297700)
#define MOLEMOLE_CONFIG_ACTIVEDODGEDUMMYENTRY__CTOR_OFFSET UNITYSDK_OFFSET(0x16297780)

namespace MoleMole::Config
{
	inline static constexpr unsigned int ActiveDodgeDummyEntry_TypeDefinitionIndex = 86044;

	class ActiveDodgeDummyEntry : public ::MoleMole::Config::AnimatorEventEntry
	{
	public:
		::System::Boolean EnableDodge; // 0x58
		::System::Boolean IsOverrideDuration; // 0x59
		::System::Single OverrideDuration; // 0x5C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ACTIVEDODGEDUMMYENTRY__CTOR_OFFSET))(this);
		}

		::MoleMole::Config::AnimatorEvent* CreateAnimationEvent()
		{
			return ((::MoleMole::Config::AnimatorEvent*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ACTIVEDODGEDUMMYENTRY_CREATEANIMATIONEVENT_OFFSET))(this);
		}
	};
}

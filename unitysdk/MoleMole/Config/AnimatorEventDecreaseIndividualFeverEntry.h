#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Config/AnimatorEventEntry.h"

namespace MoleMole::Config { class AnimatorEvent; }

#define MOLEMOLE_CONFIG_ANIMATOREVENTDECREASEINDIVIDUALFEVERENTRY_CREATEANIMATIONEVENT_OFFSET UNITYSDK_OFFSET(0x1A49B140)
#define MOLEMOLE_CONFIG_ANIMATOREVENTDECREASEINDIVIDUALFEVERENTRY__CTOR_OFFSET UNITYSDK_OFFSET(0x1A49B1C0)

namespace MoleMole::Config
{
	inline static constexpr unsigned int AnimatorEventDecreaseIndividualFeverEntry_TypeDefinitionIndex = 61198;

	class AnimatorEventDecreaseIndividualFeverEntry : public ::MoleMole::Config::AnimatorEventEntry
	{
	public:
		::System::Single Amount; // 0x58
		::System::Single Percentage; // 0x5C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATOREVENTDECREASEINDIVIDUALFEVERENTRY__CTOR_OFFSET))(this);
		}

		::MoleMole::Config::AnimatorEvent* CreateAnimationEvent()
		{
			return ((::MoleMole::Config::AnimatorEvent*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATOREVENTDECREASEINDIVIDUALFEVERENTRY_CREATEANIMATIONEVENT_OFFSET))(this);
		}
	};
}

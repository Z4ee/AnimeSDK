#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Config/AnimatorEventEntry.h"

namespace MoleMole::Config { class AnimatorEvent; }

#define MOLEMOLE_CONFIG_ANIMATOREVENTOVERRIDEVERTICALDAMPINGENDENTRY_CREATEANIMATIONEVENT_OFFSET UNITYSDK_OFFSET(0x16C2BCB0)
#define MOLEMOLE_CONFIG_ANIMATOREVENTOVERRIDEVERTICALDAMPINGENDENTRY__CTOR_OFFSET UNITYSDK_OFFSET(0x16C2BD30)

namespace MoleMole::Config
{
	inline static constexpr unsigned int AnimatorEventOverrideVerticalDampingEndEntry_TypeDefinitionIndex = 73857;

	class AnimatorEventOverrideVerticalDampingEndEntry : public ::MoleMole::Config::AnimatorEventEntry
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATOREVENTOVERRIDEVERTICALDAMPINGENDENTRY__CTOR_OFFSET))(this);
		}

		::MoleMole::Config::AnimatorEvent* CreateAnimationEvent()
		{
			return ((::MoleMole::Config::AnimatorEvent*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATOREVENTOVERRIDEVERTICALDAMPINGENDENTRY_CREATEANIMATIONEVENT_OFFSET))(this);
		}
	};
}

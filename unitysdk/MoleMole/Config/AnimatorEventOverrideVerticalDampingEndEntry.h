#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Config/AnimatorEventEntry.h"

namespace MoleMole::Config { class AnimatorEvent; }

#define MOLEMOLE_CONFIG_ANIMATOREVENTOVERRIDEVERTICALDAMPINGENDENTRY_CREATEANIMATIONEVENT_OFFSET UNITYSDK_OFFSET(0x13990B10)
#define MOLEMOLE_CONFIG_ANIMATOREVENTOVERRIDEVERTICALDAMPINGENDENTRY__CTOR_OFFSET UNITYSDK_OFFSET(0x13990B90)

namespace MoleMole::Config
{
	inline static constexpr unsigned int AnimatorEventOverrideVerticalDampingEndEntry_TypeDefinitionIndex = 72714;

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

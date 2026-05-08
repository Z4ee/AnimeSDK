#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Config/AnimatorEventEntry.h"

namespace MoleMole::Config { class AnimatorEvent; }

#define MOLEMOLE_CONFIG_ANIMATOREVENTDISAPREARENTRY_CREATEANIMATIONEVENT_OFFSET UNITYSDK_OFFSET(0xECFB950)
#define MOLEMOLE_CONFIG_ANIMATOREVENTDISAPREARENTRY__CTOR_OFFSET UNITYSDK_OFFSET(0xECFB9D0)

namespace MoleMole::Config
{
	inline static constexpr unsigned int AnimatorEventDisAprearEntry_TypeDefinitionIndex = 65758;

	class AnimatorEventDisAprearEntry : public ::MoleMole::Config::AnimatorEventEntry
	{
	public:
		::System::Int32 disAprearType; // 0x58

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATOREVENTDISAPREARENTRY__CTOR_OFFSET))(this);
		}

		::MoleMole::Config::AnimatorEvent* CreateAnimationEvent()
		{
			return ((::MoleMole::Config::AnimatorEvent*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATOREVENTDISAPREARENTRY_CREATEANIMATIONEVENT_OFFSET))(this);
		}
	};
}

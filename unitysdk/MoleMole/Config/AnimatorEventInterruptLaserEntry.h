#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Config/AnimatorEventEntry.h"

namespace MoleMole::Config { class AnimatorEvent; }
namespace System { class String; }

#define MOLEMOLE_CONFIG_ANIMATOREVENTINTERRUPTLASERENTRY_CREATEANIMATIONEVENT_OFFSET UNITYSDK_OFFSET(0xE959A90)
#define MOLEMOLE_CONFIG_ANIMATOREVENTINTERRUPTLASERENTRY__CTOR_OFFSET UNITYSDK_OFFSET(0xE959B10)

namespace MoleMole::Config
{
	inline static constexpr unsigned int AnimatorEventInterruptLaserEntry_TypeDefinitionIndex = 73262;

	class AnimatorEventInterruptLaserEntry : public ::MoleMole::Config::AnimatorEventEntry
	{
	public:
		::System::String* Tag; // 0x58

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATOREVENTINTERRUPTLASERENTRY__CTOR_OFFSET))(this);
		}

		::MoleMole::Config::AnimatorEvent* CreateAnimationEvent()
		{
			return ((::MoleMole::Config::AnimatorEvent*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATOREVENTINTERRUPTLASERENTRY_CREATEANIMATIONEVENT_OFFSET))(this);
		}
	};
}

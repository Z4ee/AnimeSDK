#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Config/AnimatorEventEntry.h"

namespace MoleMole::Config { class AnimatorEvent; }
namespace System { class String; }

#define MOLEMOLE_CONFIG_ANIMATOREVENTINTERRUPTARATRAILENTRY_CREATEANIMATIONEVENT_OFFSET UNITYSDK_OFFSET(0x1624A790)
#define MOLEMOLE_CONFIG_ANIMATOREVENTINTERRUPTARATRAILENTRY__CTOR_OFFSET UNITYSDK_OFFSET(0x1624A810)

namespace MoleMole::Config
{
	inline static constexpr unsigned int AnimatorEventInterruptAraTrailEntry_TypeDefinitionIndex = 60301;

	class AnimatorEventInterruptAraTrailEntry : public ::MoleMole::Config::AnimatorEventEntry
	{
	public:
		::System::String* Tag; // 0x58

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATOREVENTINTERRUPTARATRAILENTRY__CTOR_OFFSET))(this);
		}

		::MoleMole::Config::AnimatorEvent* CreateAnimationEvent()
		{
			return ((::MoleMole::Config::AnimatorEvent*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATOREVENTINTERRUPTARATRAILENTRY_CREATEANIMATIONEVENT_OFFSET))(this);
		}
	};
}

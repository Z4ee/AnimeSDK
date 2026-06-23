#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Config/AnimatorEventEntry.h"
#include "unitysdk/MoleMole/Config/ScreenEffectType.h"

namespace MoleMole::Config { class AnimatorEvent; }
namespace System { class String; }

#define MOLEMOLE_CONFIG_ANIMATOREVENTINTERRUPTSCREENEFFECTENTRY_CREATEANIMATIONEVENT_OFFSET UNITYSDK_OFFSET(0x16297C40)
#define MOLEMOLE_CONFIG_ANIMATOREVENTINTERRUPTSCREENEFFECTENTRY__CTOR_OFFSET UNITYSDK_OFFSET(0x16297CC0)

namespace MoleMole::Config
{
	inline static constexpr unsigned int AnimatorEventInterruptScreenEffectEntry_TypeDefinitionIndex = 45765;

	class AnimatorEventInterruptScreenEffectEntry : public ::MoleMole::Config::AnimatorEventEntry
	{
	public:
		::System::String* TargetKey; // 0x58
		::MoleMole::Config::ScreenEffectType EffectType; // 0x60

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATOREVENTINTERRUPTSCREENEFFECTENTRY__CTOR_OFFSET))(this);
		}

		::MoleMole::Config::AnimatorEvent* CreateAnimationEvent()
		{
			return ((::MoleMole::Config::AnimatorEvent*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATOREVENTINTERRUPTSCREENEFFECTENTRY_CREATEANIMATIONEVENT_OFFSET))(this);
		}
	};
}

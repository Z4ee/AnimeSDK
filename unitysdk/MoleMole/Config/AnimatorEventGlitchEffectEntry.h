#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Config/AnimatorEventEntry.h"

namespace MoleMole::Config { class AnimatorEvent; }
namespace System { class String; }

#define MOLEMOLE_CONFIG_ANIMATOREVENTGLITCHEFFECTENTRY_CREATEANIMATIONEVENT_OFFSET UNITYSDK_OFFSET(0x13FF8670)
#define MOLEMOLE_CONFIG_ANIMATOREVENTGLITCHEFFECTENTRY__CTOR_OFFSET UNITYSDK_OFFSET(0x13FF86F0)

namespace MoleMole::Config
{
	inline static constexpr unsigned int AnimatorEventGlitchEffectEntry_TypeDefinitionIndex = 73225;

	class AnimatorEventGlitchEffectEntry : public ::MoleMole::Config::AnimatorEventEntry
	{
	public:
		::System::String* GlitchEffectKey; // 0x58

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATOREVENTGLITCHEFFECTENTRY__CTOR_OFFSET))(this);
		}

		::MoleMole::Config::AnimatorEvent* CreateAnimationEvent()
		{
			return ((::MoleMole::Config::AnimatorEvent*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATOREVENTGLITCHEFFECTENTRY_CREATEANIMATIONEVENT_OFFSET))(this);
		}
	};
}

#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Config/AnimatorEventEntry.h"

namespace MoleMole::Config { class AnimatorEvent; }
namespace System { class String; }

#define MOLEMOLE_CONFIG_ANIMATOREVENTINTERRUPTBLACKSCREENENTRY_CREATEANIMATIONEVENT_OFFSET UNITYSDK_OFFSET(0x12C5BB50)
#define MOLEMOLE_CONFIG_ANIMATOREVENTINTERRUPTBLACKSCREENENTRY__CTOR_OFFSET UNITYSDK_OFFSET(0x12C5BBE0)

namespace MoleMole::Config
{
	inline static constexpr unsigned int AnimatorEventInterruptBlackScreenEntry_TypeDefinitionIndex = 73059;

	class AnimatorEventInterruptBlackScreenEntry : public ::MoleMole::Config::AnimatorEventEntry
	{
	public:
		::System::String* Curve; // 0x58
		::System::String* Tag; // 0x60
		::System::Single Duration; // 0x68

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATOREVENTINTERRUPTBLACKSCREENENTRY__CTOR_OFFSET))(this);
		}

		::MoleMole::Config::AnimatorEvent* CreateAnimationEvent()
		{
			return ((::MoleMole::Config::AnimatorEvent*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATOREVENTINTERRUPTBLACKSCREENENTRY_CREATEANIMATIONEVENT_OFFSET))(this);
		}
	};
}

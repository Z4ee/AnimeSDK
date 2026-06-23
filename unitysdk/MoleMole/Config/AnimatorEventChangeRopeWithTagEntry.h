#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Config/AnimatorEventEntry.h"

namespace MoleMole::Config { class AnimatorEvent; }
namespace System { class String; }

#define MOLEMOLE_CONFIG_ANIMATOREVENTCHANGEROPEWITHTAGENTRY_CREATEANIMATIONEVENT_OFFSET UNITYSDK_OFFSET(0xE959560)
#define MOLEMOLE_CONFIG_ANIMATOREVENTCHANGEROPEWITHTAGENTRY__CTOR_OFFSET UNITYSDK_OFFSET(0xE9595E0)

namespace MoleMole::Config
{
	inline static constexpr unsigned int AnimatorEventChangeRopeWithTagEntry_TypeDefinitionIndex = 44897;

	class AnimatorEventChangeRopeWithTagEntry : public ::MoleMole::Config::AnimatorEventEntry
	{
	public:
		::System::String* Tag; // 0x58
		::System::Boolean Enable; // 0x60

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATOREVENTCHANGEROPEWITHTAGENTRY__CTOR_OFFSET))(this);
		}

		::MoleMole::Config::AnimatorEvent* CreateAnimationEvent()
		{
			return ((::MoleMole::Config::AnimatorEvent*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATOREVENTCHANGEROPEWITHTAGENTRY_CREATEANIMATIONEVENT_OFFSET))(this);
		}
	};
}

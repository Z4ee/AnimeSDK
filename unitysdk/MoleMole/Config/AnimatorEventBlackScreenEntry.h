#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Config/AnimatorEventEntry.h"

namespace MoleMole::Config { class AnimatorEvent; }
namespace System { class String; }

#define MOLEMOLE_CONFIG_ANIMATOREVENTBLACKSCREENENTRY_CREATEANIMATIONEVENT_OFFSET UNITYSDK_OFFSET(0x12409130)
#define MOLEMOLE_CONFIG_ANIMATOREVENTBLACKSCREENENTRY__CTOR_OFFSET UNITYSDK_OFFSET(0x124091C0)

namespace MoleMole::Config
{
	inline static constexpr unsigned int AnimatorEventBlackScreenEntry_TypeDefinitionIndex = 39016;

	class AnimatorEventBlackScreenEntry : public ::MoleMole::Config::AnimatorEventEntry
	{
	public:
		::System::String* Curve; // 0x58
		::System::String* Tag; // 0x60
		::System::Single Duration; // 0x68

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATOREVENTBLACKSCREENENTRY__CTOR_OFFSET))(this);
		}

		::MoleMole::Config::AnimatorEvent* CreateAnimationEvent()
		{
			return ((::MoleMole::Config::AnimatorEvent*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATOREVENTBLACKSCREENENTRY_CREATEANIMATIONEVENT_OFFSET))(this);
		}
	};
}

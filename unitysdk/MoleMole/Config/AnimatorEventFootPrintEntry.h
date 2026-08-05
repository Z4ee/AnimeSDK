#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Config/AnimatorEventEntry.h"

namespace MoleMole::Config { class AnimatorEvent; }
namespace System { class String; }

#define MOLEMOLE_CONFIG_ANIMATOREVENTFOOTPRINTENTRY_CREATEANIMATIONEVENT_OFFSET UNITYSDK_OFFSET(0x12EEF170)
#define MOLEMOLE_CONFIG_ANIMATOREVENTFOOTPRINTENTRY__CTOR_OFFSET UNITYSDK_OFFSET(0x12EEF1F0)

namespace MoleMole::Config
{
	inline static constexpr unsigned int AnimatorEventFootPrintEntry_TypeDefinitionIndex = 61765;

	class AnimatorEventFootPrintEntry : public ::MoleMole::Config::AnimatorEventEntry
	{
	public:
		::System::String* MoveType; // 0x58
		::System::String* AudioEventName; // 0x60
		::System::String* FootType; // 0x68
		::System::String* MoveState; // 0x70

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATOREVENTFOOTPRINTENTRY__CTOR_OFFSET))(this);
		}

		::MoleMole::Config::AnimatorEvent* CreateAnimationEvent()
		{
			return ((::MoleMole::Config::AnimatorEvent*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATOREVENTFOOTPRINTENTRY_CREATEANIMATIONEVENT_OFFSET))(this);
		}
	};
}

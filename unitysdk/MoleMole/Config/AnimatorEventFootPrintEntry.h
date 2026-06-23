#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Config/AnimatorEventEntry.h"

namespace MoleMole::Config { class AnimatorEvent; }
namespace System { class String; }

#define MOLEMOLE_CONFIG_ANIMATOREVENTFOOTPRINTENTRY_CREATEANIMATIONEVENT_OFFSET UNITYSDK_OFFSET(0x1108DA30)
#define MOLEMOLE_CONFIG_ANIMATOREVENTFOOTPRINTENTRY__CTOR_OFFSET UNITYSDK_OFFSET(0x1108DAB0)

namespace MoleMole::Config
{
	inline static constexpr unsigned int AnimatorEventFootPrintEntry_TypeDefinitionIndex = 63381;

	class AnimatorEventFootPrintEntry : public ::MoleMole::Config::AnimatorEventEntry
	{
	public:
		::System::String* AudioEventName; // 0x58
		::System::String* MoveType; // 0x60
		::System::String* MoveState; // 0x68
		::System::String* FootType; // 0x70

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

#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Config/AnimatorEventEntry.h"

namespace MoleMole::Config { class AnimatorEvent; }
namespace System { class String; }

#define MOLEMOLE_CONFIG_ANIMATOREVENTSENDEVENTTOVIEWOBJECTENTRY_CREATEANIMATIONEVENT_OFFSET UNITYSDK_OFFSET(0x1BD44B00)
#define MOLEMOLE_CONFIG_ANIMATOREVENTSENDEVENTTOVIEWOBJECTENTRY__CTOR_OFFSET UNITYSDK_OFFSET(0x1BD44B80)

namespace MoleMole::Config
{
	inline static constexpr unsigned int AnimatorEventSendEventToViewObjectEntry_TypeDefinitionIndex = 48462;

	class AnimatorEventSendEventToViewObjectEntry : public ::MoleMole::Config::AnimatorEventEntry
	{
	public:
		::System::String* EventName; // 0x58

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATOREVENTSENDEVENTTOVIEWOBJECTENTRY__CTOR_OFFSET))(this);
		}

		::MoleMole::Config::AnimatorEvent* CreateAnimationEvent()
		{
			return ((::MoleMole::Config::AnimatorEvent*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATOREVENTSENDEVENTTOVIEWOBJECTENTRY_CREATEANIMATIONEVENT_OFFSET))(this);
		}
	};
}

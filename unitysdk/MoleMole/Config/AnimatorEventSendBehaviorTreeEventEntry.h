#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Config/AnimatorEventEntry.h"

namespace MoleMole::Config { class AnimatorEvent; }
namespace System { class String; }

#define MOLEMOLE_CONFIG_ANIMATOREVENTSENDBEHAVIORTREEEVENTENTRY_CREATEANIMATIONEVENT_OFFSET UNITYSDK_OFFSET(0x12B99A80)
#define MOLEMOLE_CONFIG_ANIMATOREVENTSENDBEHAVIORTREEEVENTENTRY__CTOR_OFFSET UNITYSDK_OFFSET(0x12B99B00)

namespace MoleMole::Config
{
	inline static constexpr unsigned int AnimatorEventSendBehaviorTreeEventEntry_TypeDefinitionIndex = 85177;

	class AnimatorEventSendBehaviorTreeEventEntry : public ::MoleMole::Config::AnimatorEventEntry
	{
	public:
		::System::String* EventName; // 0x58

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATOREVENTSENDBEHAVIORTREEEVENTENTRY__CTOR_OFFSET))(this);
		}

		::MoleMole::Config::AnimatorEvent* CreateAnimationEvent()
		{
			return ((::MoleMole::Config::AnimatorEvent*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATOREVENTSENDBEHAVIORTREEEVENTENTRY_CREATEANIMATIONEVENT_OFFSET))(this);
		}
	};
}

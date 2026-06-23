#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Config/AnimatorEventEntry.h"

namespace MoleMole::Config { class AnimatorEvent; }
namespace System { class String; }

#define MOLEMOLE_CONFIG_ANIMATOREVENTDROPITEMBYABILITYENTRY_CREATEANIMATIONEVENT_OFFSET UNITYSDK_OFFSET(0x162979A0)
#define MOLEMOLE_CONFIG_ANIMATOREVENTDROPITEMBYABILITYENTRY__CTOR_OFFSET UNITYSDK_OFFSET(0x16297A20)

namespace MoleMole::Config
{
	inline static constexpr unsigned int AnimatorEventDropItemByAbilityEntry_TypeDefinitionIndex = 73223;

	class AnimatorEventDropItemByAbilityEntry : public ::MoleMole::Config::AnimatorEventEntry
	{
	public:
		::System::String* AbilityName; // 0x58

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATOREVENTDROPITEMBYABILITYENTRY__CTOR_OFFSET))(this);
		}

		::MoleMole::Config::AnimatorEvent* CreateAnimationEvent()
		{
			return ((::MoleMole::Config::AnimatorEvent*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATOREVENTDROPITEMBYABILITYENTRY_CREATEANIMATIONEVENT_OFFSET))(this);
		}
	};
}

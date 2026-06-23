#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Config/AnimatorEventEntry.h"

namespace MoleMole::Config { class AnimatorEvent; }
namespace System { class String; }

#define MOLEMOLE_CONFIG_ANIMATOREVENTLDLISTENENTITYENTRY_CREATEANIMATIONEVENT_OFFSET UNITYSDK_OFFSET(0x106B9660)
#define MOLEMOLE_CONFIG_ANIMATOREVENTLDLISTENENTITYENTRY__CTOR_OFFSET UNITYSDK_OFFSET(0x106B96E0)

namespace MoleMole::Config
{
	inline static constexpr unsigned int AnimatorEventLDListenEntityEntry_TypeDefinitionIndex = 71529;

	class AnimatorEventLDListenEntityEntry : public ::MoleMole::Config::AnimatorEventEntry
	{
	public:
		::System::String* TargetKey; // 0x58

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATOREVENTLDLISTENENTITYENTRY__CTOR_OFFSET))(this);
		}

		::MoleMole::Config::AnimatorEvent* CreateAnimationEvent()
		{
			return ((::MoleMole::Config::AnimatorEvent*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATOREVENTLDLISTENENTITYENTRY_CREATEANIMATIONEVENT_OFFSET))(this);
		}
	};
}

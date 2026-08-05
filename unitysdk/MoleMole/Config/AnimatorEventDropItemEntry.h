#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Config/AnimatorEventEntry.h"

namespace MoleMole::Config { class AnimatorEvent; }
namespace System { class String; }

#define MOLEMOLE_CONFIG_ANIMATOREVENTDROPITEMENTRY_CREATEANIMATIONEVENT_OFFSET UNITYSDK_OFFSET(0x1145B510)
#define MOLEMOLE_CONFIG_ANIMATOREVENTDROPITEMENTRY__CTOR_OFFSET UNITYSDK_OFFSET(0x1145B590)

namespace MoleMole::Config
{
	inline static constexpr unsigned int AnimatorEventDropItemEntry_TypeDefinitionIndex = 55982;

	class AnimatorEventDropItemEntry : public ::MoleMole::Config::AnimatorEventEntry
	{
	public:
		::System::String* dropStr; // 0x58
		::System::Int32 overridePickType; // 0x60

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATOREVENTDROPITEMENTRY__CTOR_OFFSET))(this);
		}

		::MoleMole::Config::AnimatorEvent* CreateAnimationEvent()
		{
			return ((::MoleMole::Config::AnimatorEvent*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATOREVENTDROPITEMENTRY_CREATEANIMATIONEVENT_OFFSET))(this);
		}
	};
}

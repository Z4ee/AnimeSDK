#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Config/AnimatorEventEntry.h"

namespace MoleMole::Config { class AnimatorEvent; }
namespace System { class String; }

#define MOLEMOLE_CONFIG_ANIMATOREVENTINTERRUPTTIMESLOWENTRY_CREATEANIMATIONEVENT_OFFSET UNITYSDK_OFFSET(0x12D24BB0)
#define MOLEMOLE_CONFIG_ANIMATOREVENTINTERRUPTTIMESLOWENTRY__CTOR_OFFSET UNITYSDK_OFFSET(0x12D24C30)

namespace MoleMole::Config
{
	inline static constexpr unsigned int AnimatorEventInterruptTimeSlowEntry_TypeDefinitionIndex = 77118;

	class AnimatorEventInterruptTimeSlowEntry : public ::MoleMole::Config::AnimatorEventEntry
	{
	public:
		::System::String* TargetKey; // 0x58
		::System::Boolean IsGlobal; // 0x60
		::System::Int32 TargetPriority; // 0x64

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATOREVENTINTERRUPTTIMESLOWENTRY__CTOR_OFFSET))(this);
		}

		::MoleMole::Config::AnimatorEvent* CreateAnimationEvent()
		{
			return ((::MoleMole::Config::AnimatorEvent*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATOREVENTINTERRUPTTIMESLOWENTRY_CREATEANIMATIONEVENT_OFFSET))(this);
		}
	};
}

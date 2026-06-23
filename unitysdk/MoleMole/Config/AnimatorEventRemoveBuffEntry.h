#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Config/AnimatorEventEntry.h"
#include "unitysdk/MoleMole/Config/BuffGroupName.h"

namespace MoleMole::Config { class AnimatorEvent; }

#define MOLEMOLE_CONFIG_ANIMATOREVENTREMOVEBUFFENTRY_CREATEANIMATIONEVENT_OFFSET UNITYSDK_OFFSET(0x12703350)
#define MOLEMOLE_CONFIG_ANIMATOREVENTREMOVEBUFFENTRY__CTOR_OFFSET UNITYSDK_OFFSET(0x127033D0)

namespace MoleMole::Config
{
	inline static constexpr unsigned int AnimatorEventRemoveBuffEntry_TypeDefinitionIndex = 69713;

	class AnimatorEventRemoveBuffEntry : public ::MoleMole::Config::AnimatorEventEntry
	{
	public:
		::System::Int32 BuffID; // 0x58
		::System::Int32 StackCount; // 0x5C
		::MoleMole::Config::BuffGroupName BuffGroup; // 0x60

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATOREVENTREMOVEBUFFENTRY__CTOR_OFFSET))(this);
		}

		::MoleMole::Config::AnimatorEvent* CreateAnimationEvent()
		{
			return ((::MoleMole::Config::AnimatorEvent*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATOREVENTREMOVEBUFFENTRY_CREATEANIMATIONEVENT_OFFSET))(this);
		}
	};
}

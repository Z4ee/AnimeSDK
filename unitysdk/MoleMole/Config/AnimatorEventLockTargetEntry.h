#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Config/AnimatorEventEntry.h"

namespace MoleMole::Config { class AnimatorEvent; }
namespace System { class String; }

#define MOLEMOLE_CONFIG_ANIMATOREVENTLOCKTARGETENTRY_CREATEANIMATIONEVENT_OFFSET UNITYSDK_OFFSET(0x16C2BA10)
#define MOLEMOLE_CONFIG_ANIMATOREVENTLOCKTARGETENTRY__CTOR_OFFSET UNITYSDK_OFFSET(0x16C2BA90)

namespace MoleMole::Config
{
	inline static constexpr unsigned int AnimatorEventLockTargetEntry_TypeDefinitionIndex = 59624;

	class AnimatorEventLockTargetEntry : public ::MoleMole::Config::AnimatorEventEntry
	{
	public:
		::System::String* LockTargetID; // 0x58
		::System::Boolean SteerToTarget; // 0x60

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATOREVENTLOCKTARGETENTRY__CTOR_OFFSET))(this);
		}

		::MoleMole::Config::AnimatorEvent* CreateAnimationEvent()
		{
			return ((::MoleMole::Config::AnimatorEvent*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATOREVENTLOCKTARGETENTRY_CREATEANIMATIONEVENT_OFFSET))(this);
		}
	};
}

#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Config/AnimatorEventEntry.h"

namespace MoleMole::Config { class AnimatorEvent; }
namespace System { class String; }

#define MOLEMOLE_CONFIG_ANIMATOREVENTOVERRIDECAMERATRACKENTRY_CREATEANIMATIONEVENT_OFFSET UNITYSDK_OFFSET(0x110172C0)
#define MOLEMOLE_CONFIG_ANIMATOREVENTOVERRIDECAMERATRACKENTRY__CTOR_OFFSET UNITYSDK_OFFSET(0x11017340)

namespace MoleMole::Config
{
	inline static constexpr unsigned int AnimatorEventOverrideCameraTrackEntry_TypeDefinitionIndex = 39636;

	class AnimatorEventOverrideCameraTrackEntry : public ::MoleMole::Config::AnimatorEventEntry
	{
	public:
		::System::String* OverrideBlendCurve; // 0x58
		::System::String* OverrideKey; // 0x60
		::System::Boolean OverrideBlendSetting; // 0x68
		::System::Single OverrideBlendDuration; // 0x6C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATOREVENTOVERRIDECAMERATRACKENTRY__CTOR_OFFSET))(this);
		}

		::MoleMole::Config::AnimatorEvent* CreateAnimationEvent()
		{
			return ((::MoleMole::Config::AnimatorEvent*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATOREVENTOVERRIDECAMERATRACKENTRY_CREATEANIMATIONEVENT_OFFSET))(this);
		}
	};
}

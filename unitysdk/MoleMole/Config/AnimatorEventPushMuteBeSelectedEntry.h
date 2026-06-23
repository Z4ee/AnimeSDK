#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Config/AnimatorEventEntry.h"

namespace MoleMole::Config { class AnimatorEvent; }
namespace System { class String; }

#define MOLEMOLE_CONFIG_ANIMATOREVENTPUSHMUTEBESELECTEDENTRY_CREATEANIMATIONEVENT_OFFSET UNITYSDK_OFFSET(0x10CE6CB0)
#define MOLEMOLE_CONFIG_ANIMATOREVENTPUSHMUTEBESELECTEDENTRY__CTOR_OFFSET UNITYSDK_OFFSET(0x10CE6D30)

namespace MoleMole::Config
{
	inline static constexpr unsigned int AnimatorEventPushMuteBeSelectedEntry_TypeDefinitionIndex = 74194;

	class AnimatorEventPushMuteBeSelectedEntry : public ::MoleMole::Config::AnimatorEventEntry
	{
	public:
		::System::String* Tag; // 0x58
		::System::Boolean MuteValue; // 0x60

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATOREVENTPUSHMUTEBESELECTEDENTRY__CTOR_OFFSET))(this);
		}

		::MoleMole::Config::AnimatorEvent* CreateAnimationEvent()
		{
			return ((::MoleMole::Config::AnimatorEvent*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATOREVENTPUSHMUTEBESELECTEDENTRY_CREATEANIMATIONEVENT_OFFSET))(this);
		}
	};
}

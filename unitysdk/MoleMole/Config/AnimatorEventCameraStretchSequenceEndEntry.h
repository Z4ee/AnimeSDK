#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Config/AnimatorEventEntry.h"

namespace MoleMole::Config { class AnimatorEvent; }
namespace System { class String; }

#define MOLEMOLE_CONFIG_ANIMATOREVENTCAMERASTRETCHSEQUENCEENDENTRY_CREATEANIMATIONEVENT_OFFSET UNITYSDK_OFFSET(0x141DF330)
#define MOLEMOLE_CONFIG_ANIMATOREVENTCAMERASTRETCHSEQUENCEENDENTRY__CTOR_OFFSET UNITYSDK_OFFSET(0x141DF3B0)

namespace MoleMole::Config
{
	inline static constexpr unsigned int AnimatorEventCameraStretchSequenceEndEntry_TypeDefinitionIndex = 42100;

	class AnimatorEventCameraStretchSequenceEndEntry : public ::MoleMole::Config::AnimatorEventEntry
	{
	public:
		::System::String* OverrideBlendCurve; // 0x58
		::System::String* Key; // 0x60
		::System::Boolean OverrideBlendSetting; // 0x68
		::System::Single OverrideBlendDuration; // 0x6C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATOREVENTCAMERASTRETCHSEQUENCEENDENTRY__CTOR_OFFSET))(this);
		}

		::MoleMole::Config::AnimatorEvent* CreateAnimationEvent()
		{
			return ((::MoleMole::Config::AnimatorEvent*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATOREVENTCAMERASTRETCHSEQUENCEENDENTRY_CREATEANIMATIONEVENT_OFFSET))(this);
		}
	};
}

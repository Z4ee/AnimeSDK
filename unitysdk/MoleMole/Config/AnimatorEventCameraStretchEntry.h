#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Config/AnimatorEventEntry.h"

namespace MoleMole::Config { class AnimatorEvent; }
namespace System { class String; }

#define MOLEMOLE_CONFIG_ANIMATOREVENTCAMERASTRETCHENTRY_CREATEANIMATIONEVENT_OFFSET UNITYSDK_OFFSET(0xF969A70)
#define MOLEMOLE_CONFIG_ANIMATOREVENTCAMERASTRETCHENTRY__CTOR_OFFSET UNITYSDK_OFFSET(0xF969AF0)

namespace MoleMole::Config
{
	inline static constexpr unsigned int AnimatorEventCameraStretchEntry_TypeDefinitionIndex = 62403;

	class AnimatorEventCameraStretchEntry : public ::MoleMole::Config::AnimatorEventEntry
	{
	public:
		::System::String* CameraStretchKey; // 0x58

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATOREVENTCAMERASTRETCHENTRY__CTOR_OFFSET))(this);
		}

		::MoleMole::Config::AnimatorEvent* CreateAnimationEvent()
		{
			return ((::MoleMole::Config::AnimatorEvent*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATOREVENTCAMERASTRETCHENTRY_CREATEANIMATIONEVENT_OFFSET))(this);
		}
	};
}

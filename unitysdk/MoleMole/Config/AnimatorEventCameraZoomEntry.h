#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Config/AnimatorEventEntry.h"

namespace MoleMole::Config { class AnimatorEvent; }
namespace System { class String; }

#define MOLEMOLE_CONFIG_ANIMATOREVENTCAMERAZOOMENTRY_CREATEANIMATIONEVENT_OFFSET UNITYSDK_OFFSET(0x16C2B5B0)
#define MOLEMOLE_CONFIG_ANIMATOREVENTCAMERAZOOMENTRY__CTOR_OFFSET UNITYSDK_OFFSET(0x16C2B630)

namespace MoleMole::Config
{
	inline static constexpr unsigned int AnimatorEventCameraZoomEntry_TypeDefinitionIndex = 58403;

	class AnimatorEventCameraZoomEntry : public ::MoleMole::Config::AnimatorEventEntry
	{
	public:
		::System::String* CameraZoomKey; // 0x58

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATOREVENTCAMERAZOOMENTRY__CTOR_OFFSET))(this);
		}

		::MoleMole::Config::AnimatorEvent* CreateAnimationEvent()
		{
			return ((::MoleMole::Config::AnimatorEvent*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATOREVENTCAMERAZOOMENTRY_CREATEANIMATIONEVENT_OFFSET))(this);
		}
	};
}

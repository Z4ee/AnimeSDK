#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Config/AnimatorEventEntry.h"

namespace MoleMole::Config { class AnimatorEvent; }
namespace System { class String; }

#define MOLEMOLE_CONFIG_ANIMATOREVENTCAMERASHOTENDENTRY_CREATEANIMATIONEVENT_OFFSET UNITYSDK_OFFSET(0x1108D790)
#define MOLEMOLE_CONFIG_ANIMATOREVENTCAMERASHOTENDENTRY__CTOR_OFFSET UNITYSDK_OFFSET(0x1108D810)

namespace MoleMole::Config
{
	inline static constexpr unsigned int AnimatorEventCameraShotEndEntry_TypeDefinitionIndex = 75053;

	class AnimatorEventCameraShotEndEntry : public ::MoleMole::Config::AnimatorEventEntry
	{
	public:
		::System::String* CameraShotKey; // 0x58
		::System::Boolean IsGroupShotData; // 0x60

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATOREVENTCAMERASHOTENDENTRY__CTOR_OFFSET))(this);
		}

		::MoleMole::Config::AnimatorEvent* CreateAnimationEvent()
		{
			return ((::MoleMole::Config::AnimatorEvent*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATOREVENTCAMERASHOTENDENTRY_CREATEANIMATIONEVENT_OFFSET))(this);
		}
	};
}

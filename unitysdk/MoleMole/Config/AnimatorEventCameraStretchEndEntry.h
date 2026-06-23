#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Config/AnimatorEventEntry.h"
#include "unitysdk/MoleMole/Config/ConfigDataClearPriority.h"
#include "unitysdk/MoleMole/Config/ConfigDataPriority.h"

namespace MoleMole::Config { class AnimatorEvent; }
namespace System { class String; }

#define MOLEMOLE_CONFIG_ANIMATOREVENTCAMERASTRETCHENDENTRY_CREATEANIMATIONEVENT_OFFSET UNITYSDK_OFFSET(0xE959470)
#define MOLEMOLE_CONFIG_ANIMATOREVENTCAMERASTRETCHENDENTRY__CTOR_OFFSET UNITYSDK_OFFSET(0xE9594F0)

namespace MoleMole::Config
{
	inline static constexpr unsigned int AnimatorEventCameraStretchEndEntry_TypeDefinitionIndex = 63297;

	class AnimatorEventCameraStretchEndEntry : public ::MoleMole::Config::AnimatorEventEntry
	{
	public:
		::System::String* EndCameraStretchKey; // 0x58
		::MoleMole::Config::ConfigDataClearPriority configDataClearPriority; // 0x60
		::MoleMole::Config::ConfigDataPriority configDataPriority; // 0x64

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATOREVENTCAMERASTRETCHENDENTRY__CTOR_OFFSET))(this);
		}

		::MoleMole::Config::AnimatorEvent* CreateAnimationEvent()
		{
			return ((::MoleMole::Config::AnimatorEvent*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATOREVENTCAMERASTRETCHENDENTRY_CREATEANIMATIONEVENT_OFFSET))(this);
		}
	};
}

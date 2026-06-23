#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Config/AnimatorEventEntry.h"

namespace MoleMole::Config { class AnimatorEvent; }

#define MOLEMOLE_CONFIG_ANIMATOREVENTREMOVEINDICATEDLIGHTENTRY_CREATEANIMATIONEVENT_OFFSET UNITYSDK_OFFSET(0x144CA6F0)
#define MOLEMOLE_CONFIG_ANIMATOREVENTREMOVEINDICATEDLIGHTENTRY__CTOR_OFFSET UNITYSDK_OFFSET(0x144CA770)

namespace MoleMole::Config
{
	inline static constexpr unsigned int AnimatorEventRemoveIndicatedLightEntry_TypeDefinitionIndex = 49943;

	class AnimatorEventRemoveIndicatedLightEntry : public ::MoleMole::Config::AnimatorEventEntry
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATOREVENTREMOVEINDICATEDLIGHTENTRY__CTOR_OFFSET))(this);
		}

		::MoleMole::Config::AnimatorEvent* CreateAnimationEvent()
		{
			return ((::MoleMole::Config::AnimatorEvent*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATOREVENTREMOVEINDICATEDLIGHTENTRY_CREATEANIMATIONEVENT_OFFSET))(this);
		}
	};
}

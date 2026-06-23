#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Config/AnimatorEventEntry.h"

namespace MoleMole::Config { class AnimatorEvent; }
namespace System { class String; }

#define MOLEMOLE_CONFIG_ANIMATOREVENTAPPLYINDICATEDLIGHTENTRY_CREATEANIMATIONEVENT_OFFSET UNITYSDK_OFFSET(0x12B99540)
#define MOLEMOLE_CONFIG_ANIMATOREVENTAPPLYINDICATEDLIGHTENTRY__CTOR_OFFSET UNITYSDK_OFFSET(0x12B995C0)

namespace MoleMole::Config
{
	inline static constexpr unsigned int AnimatorEventApplyIndicatedLightEntry_TypeDefinitionIndex = 52368;

	class AnimatorEventApplyIndicatedLightEntry : public ::MoleMole::Config::AnimatorEventEntry
	{
	public:
		::System::String* indicatedLightKey; // 0x58

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATOREVENTAPPLYINDICATEDLIGHTENTRY__CTOR_OFFSET))(this);
		}

		::MoleMole::Config::AnimatorEvent* CreateAnimationEvent()
		{
			return ((::MoleMole::Config::AnimatorEvent*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATOREVENTAPPLYINDICATEDLIGHTENTRY_CREATEANIMATIONEVENT_OFFSET))(this);
		}
	};
}

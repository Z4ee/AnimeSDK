#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Config/AnimatorEventEntry.h"

namespace MoleMole::Config { class AnimatorEvent; }
namespace System { class String; }

#define MOLEMOLE_CONFIG_ANIMATOREVENTSWITCHEFFECTDYNAMICBONEENTRY_CREATEANIMATIONEVENT_OFFSET UNITYSDK_OFFSET(0x1869E640)
#define MOLEMOLE_CONFIG_ANIMATOREVENTSWITCHEFFECTDYNAMICBONEENTRY__CTOR_OFFSET UNITYSDK_OFFSET(0x1869E6C0)

namespace MoleMole::Config
{
	inline static constexpr unsigned int AnimatorEventSwitchEffectDynamicBoneEntry_TypeDefinitionIndex = 71143;

	class AnimatorEventSwitchEffectDynamicBoneEntry : public ::MoleMole::Config::AnimatorEventEntry
	{
	public:
		::System::String* effectCodeName; // 0x58
		::System::String* switchKey; // 0x60
		::System::Boolean IsGlobal; // 0x68

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATOREVENTSWITCHEFFECTDYNAMICBONEENTRY__CTOR_OFFSET))(this);
		}

		::MoleMole::Config::AnimatorEvent* CreateAnimationEvent()
		{
			return ((::MoleMole::Config::AnimatorEvent*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATOREVENTSWITCHEFFECTDYNAMICBONEENTRY_CREATEANIMATIONEVENT_OFFSET))(this);
		}
	};
}

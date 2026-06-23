#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Config/AnimatorEventEntry.h"

namespace MoleMole::Config { class AnimatorEvent; }
namespace MoleMole::Config { class ConfigPosRot; }
namespace MoleMole::Config { class EffectAutoDynamicValue; }
namespace System { class String; }

#define MOLEMOLE_CONFIG_ANIMATOREVENTEFFECTENTRY_CREATEANIMATIONEVENT_OFFSET UNITYSDK_OFFSET(0xE9598C0)
#define MOLEMOLE_CONFIG_ANIMATOREVENTEFFECTENTRY_ONATTACHPOINTNAMECHANGE_OFFSET UNITYSDK_OFFSET(0xE959860)
#define MOLEMOLE_CONFIG_ANIMATOREVENTEFFECTENTRY_ONEFFECTPATTERNNAMECHANGE_OFFSET UNITYSDK_OFFSET(0xE959800)
#define MOLEMOLE_CONFIG_ANIMATOREVENTEFFECTENTRY__CTOR_OFFSET UNITYSDK_OFFSET(0xE959950)

namespace MoleMole::Config
{
	inline static constexpr unsigned int AnimatorEventEffectEntry_TypeDefinitionIndex = 73385;

	class AnimatorEventEffectEntry : public ::MoleMole::Config::AnimatorEventEntry
	{
	public:
		::MoleMole::Config::EffectAutoDynamicValue* EffectAutoDynamic; // 0x58
		::System::String* AttachPointName; // 0x60
		::System::String* EffectPatternName; // 0x68
		::MoleMole::Config::ConfigPosRot* EffectConfigPosRot; // 0x70
		::System::Single OverrideScaleX; // 0x78
		::System::Single OverrideScaleY; // 0x7C
		::System::Single OverrideScaleZ; // 0x80

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATOREVENTEFFECTENTRY__CTOR_OFFSET))(this);
		}

		::System::Void OnEffectPatternNameChange()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATOREVENTEFFECTENTRY_ONEFFECTPATTERNNAMECHANGE_OFFSET))(this);
		}

		::System::Void OnAttachPointNameChange()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATOREVENTEFFECTENTRY_ONATTACHPOINTNAMECHANGE_OFFSET))(this);
		}

		::MoleMole::Config::AnimatorEvent* CreateAnimationEvent()
		{
			return ((::MoleMole::Config::AnimatorEvent*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATOREVENTEFFECTENTRY_CREATEANIMATIONEVENT_OFFSET))(this);
		}
	};
}

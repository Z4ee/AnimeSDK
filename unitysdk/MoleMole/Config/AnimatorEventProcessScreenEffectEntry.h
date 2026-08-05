#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Config/AnimatorEventEntry.h"
#include "unitysdk/MoleMole/Config/ScreenEffectType.h"

namespace MoleMole::Config { class AnimatorEvent; }
namespace MoleMole::Config { class ConfigPosRot; }
namespace System { class String; }

#define MOLEMOLE_CONFIG_ANIMATOREVENTPROCESSSCREENEFFECTENTRY_CREATEANIMATIONEVENT_OFFSET UNITYSDK_OFFSET(0x150E7FC0)
#define MOLEMOLE_CONFIG_ANIMATOREVENTPROCESSSCREENEFFECTENTRY__CTOR_OFFSET UNITYSDK_OFFSET(0x150E8040)

namespace MoleMole::Config
{
	inline static constexpr unsigned int AnimatorEventProcessScreenEffectEntry_TypeDefinitionIndex = 89762;

	class AnimatorEventProcessScreenEffectEntry : public ::MoleMole::Config::AnimatorEventEntry
	{
	public:
		::MoleMole::Config::ConfigPosRot* FollowConfigPosRot; // 0x58
		::System::String* FollowAttachPointName; // 0x60
		::System::String* ScreenEffectKey; // 0x68
		::System::Boolean AlwaysFollow; // 0x70
		::System::Boolean Follow; // 0x71
		::MoleMole::Config::ScreenEffectType EffectType; // 0x74

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATOREVENTPROCESSSCREENEFFECTENTRY__CTOR_OFFSET))(this);
		}

		::MoleMole::Config::AnimatorEvent* CreateAnimationEvent()
		{
			return ((::MoleMole::Config::AnimatorEvent*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATOREVENTPROCESSSCREENEFFECTENTRY_CREATEANIMATIONEVENT_OFFSET))(this);
		}
	};
}

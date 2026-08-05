#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Config/AnimatorEventEntry.h"

namespace MoleMole::Config { class AnimatorEvent; }
namespace System { class String; }

#define MOLEMOLE_CONFIG_ANIMATOREVENTCOMMONSHOOTINGENTRY_CREATEANIMATIONEVENT_OFFSET UNITYSDK_OFFSET(0x1A49B060)
#define MOLEMOLE_CONFIG_ANIMATOREVENTCOMMONSHOOTINGENTRY__CTOR_OFFSET UNITYSDK_OFFSET(0x1A49B0E0)

namespace MoleMole::Config
{
	inline static constexpr unsigned int AnimatorEventCommonShootingEntry_TypeDefinitionIndex = 85390;

	class AnimatorEventCommonShootingEntry : public ::MoleMole::Config::AnimatorEventEntry
	{
	public:
		::System::String* BulletConfigKey; // 0x58

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATOREVENTCOMMONSHOOTINGENTRY__CTOR_OFFSET))(this);
		}

		::MoleMole::Config::AnimatorEvent* CreateAnimationEvent()
		{
			return ((::MoleMole::Config::AnimatorEvent*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATOREVENTCOMMONSHOOTINGENTRY_CREATEANIMATIONEVENT_OFFSET))(this);
		}
	};
}

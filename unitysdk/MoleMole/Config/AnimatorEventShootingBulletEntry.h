#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Config/AnimatorEventEntry.h"
#include "unitysdk/MoleMole/Config/AnimatorEventShootingBulletEntry_ShootBulletType.h"

namespace MoleMole::Config { class AnimatorEvent; }

#define MOLEMOLE_CONFIG_ANIMATOREVENTSHOOTINGBULLETENTRY_CREATEANIMATIONEVENT_OFFSET UNITYSDK_OFFSET(0xECFC6C0)
#define MOLEMOLE_CONFIG_ANIMATOREVENTSHOOTINGBULLETENTRY__CTOR_OFFSET UNITYSDK_OFFSET(0xECFC740)

namespace MoleMole::Config
{
	inline static constexpr unsigned int AnimatorEventShootingBulletEntry_TypeDefinitionIndex = 57273;

	class AnimatorEventShootingBulletEntry : public ::MoleMole::Config::AnimatorEventEntry
	{
	public:
		::MoleMole::Config::AnimatorEventShootingBulletEntry_ShootBulletType BulletType; // 0x58

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATOREVENTSHOOTINGBULLETENTRY__CTOR_OFFSET))(this);
		}

		::MoleMole::Config::AnimatorEvent* CreateAnimationEvent()
		{
			return ((::MoleMole::Config::AnimatorEvent*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATOREVENTSHOOTINGBULLETENTRY_CREATEANIMATIONEVENT_OFFSET))(this);
		}
	};
}

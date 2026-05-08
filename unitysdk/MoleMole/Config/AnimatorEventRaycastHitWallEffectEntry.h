#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Config/AnimatorEventEntry.h"

namespace MoleMole::Config { class AnimatorEvent; }
namespace MoleMole::Config { class HitWallCameraShakeConfig; }
namespace MoleMole::Config { class RaycastHitWallEffectConfig; }

#define MOLEMOLE_CONFIG_ANIMATOREVENTRAYCASTHITWALLEFFECTENTRY_CREATEANIMATIONEVENT_OFFSET UNITYSDK_OFFSET(0xF969FC0)
#define MOLEMOLE_CONFIG_ANIMATOREVENTRAYCASTHITWALLEFFECTENTRY__CTOR_OFFSET UNITYSDK_OFFSET(0xF96A040)

namespace MoleMole::Config
{
	inline static constexpr unsigned int AnimatorEventRaycastHitWallEffectEntry_TypeDefinitionIndex = 45134;

	class AnimatorEventRaycastHitWallEffectEntry : public ::MoleMole::Config::AnimatorEventEntry
	{
	public:
		::MoleMole::Config::HitWallCameraShakeConfig* ShakeConfig; // 0x58
		::MoleMole::Config::RaycastHitWallEffectConfig* EffectConfig; // 0x60

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATOREVENTRAYCASTHITWALLEFFECTENTRY__CTOR_OFFSET))(this);
		}

		::MoleMole::Config::AnimatorEvent* CreateAnimationEvent()
		{
			return ((::MoleMole::Config::AnimatorEvent*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATOREVENTRAYCASTHITWALLEFFECTENTRY_CREATEANIMATIONEVENT_OFFSET))(this);
		}
	};
}

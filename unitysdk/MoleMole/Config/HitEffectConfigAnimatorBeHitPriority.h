#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Config/AnimatorAirHitType.h"
#include "unitysdk/MoleMole/Config/AnimatorGroundHitType.h"
#include "unitysdk/MoleMole/Config/AnimatorHitEffect.h"
#include "unitysdk/MoleMole/Config/BaseConfigAnimatorBeHitPriority.h"

#define MOLEMOLE_CONFIG_HITEFFECTCONFIGANIMATORBEHITPRIORITY__CTOR_OFFSET UNITYSDK_OFFSET(0x183D0920)

namespace MoleMole::Config
{
	inline static constexpr unsigned int HitEffectConfigAnimatorBeHitPriority_TypeDefinitionIndex = 80981;

	class HitEffectConfigAnimatorBeHitPriority : public ::MoleMole::Config::BaseConfigAnimatorBeHitPriority
	{
	public:
		::MoleMole::Config::AnimatorAirHitType attackFrameAirHitType; // 0x18
		::MoleMole::Config::AnimatorGroundHitType attackFrameGroundHitType; // 0x1C
		::MoleMole::Config::AnimatorHitEffect attackFrameHitEffect; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_HITEFFECTCONFIGANIMATORBEHITPRIORITY__CTOR_OFFSET))(this);
		}
	};
}

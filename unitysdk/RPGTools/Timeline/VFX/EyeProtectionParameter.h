#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

#define RPGTOOLS_TIMELINE_VFX_EYEPROTECTIONPARAMETER__CTOR_OFFSET UNITYSDK_OFFSET(0xE50A0)

namespace RPGTools::Timeline::VFX
{
	inline static constexpr unsigned int EyeProtectionParameter_TypeDefinitionIndex = 45384;

	struct alignas(4) EyeProtectionParameter
	{
		::System::Single EffectParticleTopBrightness; // 0x10
		::System::Single EffectParticleBottomBrightness; // 0x14
		::System::Single EffectParticle; // 0x18
		::System::Single EffectPointLightScale; // 0x1C
		::System::Single LevelForceDisable; // 0x20
		::System::Single ColorGradientForceDisable; // 0x24

		::System::Void _ctor(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_VFX_EYEPROTECTIONPARAMETER__CTOR_OFFSET))(this, a1);
		}
	};
}

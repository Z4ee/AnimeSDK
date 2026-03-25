#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/Vector2.h"

#define RPG_CUSTOMRP_PPFILTERSTACK_LENSGLITCH2PARAMETER__CTOR_1_OFFSET UNITYSDK_OFFSET(0x877D0)
#define RPG_CUSTOMRP_PPFILTERSTACK_LENSGLITCH2PARAMETER__CTOR_OFFSET UNITYSDK_OFFSET(0x87790)

namespace RPG::CustomRP
{
	inline static constexpr unsigned int PPFilterStack_LensGlitch2Parameter_TypeDefinitionIndex = 41894;

	struct alignas(4) PPFilterStack_LensGlitch2Parameter
	{
		::System::Boolean LensGlitch2OverrideState; // 0x10
		::UnityEngine::Vector2 _NoiseTiling; // 0x14
		::UnityEngine::Vector2 _NoiseFlow; // 0x1C
		::System::Single _DistortIntensity; // 0x24
		::System::Single _NoiseAnimSpeed; // 0x28
		::System::Single _CenterX; // 0x2C
		::System::Single _CenterY; // 0x30
		::System::Single _StartRadius; // 0x34
		::System::Single _BlendRadius; // 0x38
		::System::Boolean _UsePolarCoord; // 0x3C
		::System::Boolean _UseBlockGlitch; // 0x3D
		::System::Boolean _NoiseTilingOverrideState; // 0x3E
		::System::Boolean _NoiseFlowOverrideState; // 0x3F
		::System::Boolean _DistortIntensityOverrideState; // 0x40
		::System::Boolean _NoiseAnimSpeedOverrideState; // 0x41
		::System::Boolean _CenterXOverrideState; // 0x42
		::System::Boolean _CenterYOverrideState; // 0x43
		::System::Boolean _StartRadiusOverrideState; // 0x44
		::System::Boolean _BlendRadiusOverrideState; // 0x45
		::System::Boolean _UsePolarCoordOverrideState; // 0x46
		::System::Boolean _UseBlockGlitchOverrideState; // 0x47

		::System::Void _ctor(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_PPFILTERSTACK_LENSGLITCH2PARAMETER__CTOR_OFFSET))(this, a1);
		}

		::System::Void _ctor_1(::RPG::CustomRP::PPFilterStack_LensGlitch2Parameter a1, ::System::Single a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::CustomRP::PPFilterStack_LensGlitch2Parameter, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_PPFILTERSTACK_LENSGLITCH2PARAMETER__CTOR_1_OFFSET))(this, a1, a2);
		}
	};
}

#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/CustomRP/CustomVolumeComponent.h"

namespace RPG::CustomRP { class AmibentOcclusioMethodParameter; }
namespace UnityEngine::Rendering { class FloatParameter; }
namespace UnityEngine::Rendering { class MinFloatParameter; }

#define RPG_CUSTOMRP_RPGAMBIENTOCCLUSION__CTOR_OFFSET UNITYSDK_OFFSET(0x18585BF0)

namespace RPG::CustomRP
{
	inline static constexpr unsigned int RPGAmbientOcclusion_TypeDefinitionIndex = 37100;

	class RPGAmbientOcclusion : public ::RPG::CustomRP::CustomVolumeComponent
	{
	public:
		::RPG::CustomRP::AmibentOcclusioMethodParameter* AmbientOcclusioMethod; // 0x38
		::UnityEngine::Rendering::MinFloatParameter* StartFadeDistance; // 0x40
		::UnityEngine::Rendering::MinFloatParameter* FadeOutDistance; // 0x48
		::UnityEngine::Rendering::FloatParameter* LerpAmbient; // 0x50
		::UnityEngine::Rendering::FloatParameter* SSAORadius; // 0x58
		::UnityEngine::Rendering::FloatParameter* SSAOAmount; // 0x60
		::UnityEngine::Rendering::FloatParameter* SSAOThreadhold; // 0x68
		::UnityEngine::Rendering::FloatParameter* HBAORadiusInMeters; // 0x70
		::UnityEngine::Rendering::FloatParameter* HBAOBias; // 0x78
		::UnityEngine::Rendering::FloatParameter* HBAOStrength; // 0x80
		::UnityEngine::Rendering::FloatParameter* HBAOFilterWeightInMeters; // 0x88
		::UnityEngine::Rendering::FloatParameter* HBAOFalloffRatio; // 0x90
		::UnityEngine::Rendering::FloatParameter* GTAOFalloffEnd; // 0x98
		::UnityEngine::Rendering::FloatParameter* GTAOFalloffStartRatio; // 0xA0
		::UnityEngine::Rendering::FloatParameter* GTAONumAngles; // 0xA8
		::UnityEngine::Rendering::FloatParameter* GTAOThicknessBlend; // 0xB0
		::UnityEngine::Rendering::FloatParameter* GTAOIntensity; // 0xB8
		::UnityEngine::Rendering::FloatParameter* GTAOPower; // 0xC0

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_RPGAMBIENTOCCLUSION__CTOR_OFFSET))(this);
		}
	};
}
